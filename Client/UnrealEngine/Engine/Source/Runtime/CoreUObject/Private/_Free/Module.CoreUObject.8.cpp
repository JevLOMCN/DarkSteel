// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 190

// NAME_LoadErrors'' @ 140f23080

void __cdecl `dynamic_initializer_for_'FLinkerLoad::NAME_LoadErrors__(void)

{
  ::FName::FName(&FLinkerLoad::NAME_LoadErrors,"LoadErrors");
  return;
}

// `dynamic_initializer_for_'CEnforcePackageCompatibleVersionCheck'' @ 140f230a0

void __cdecl _dynamic_initializer_for__CEnforcePackageCompatibleVersionCheck__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CEnforcePackageCompatibleVersionCheck,L"s.EnforcePackageCompatibleVersionCheck",
             &GEnforcePackageCompatibleVersionCheck,
             L"If true, package loading will fail if the version stored in the package header is newer than the current engine version"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CEnforcePackageCompatibleVersionCheck__);
  return;
}

// `dynamic_initializer_for_'CVarAllowCookedDataInEditorBuilds'' @ 140f230f0

void __cdecl _dynamic_initializer_for__CVarAllowCookedDataInEditorBuilds__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowCookedDataInEditorBuilds,L"cook.AllowCookedDataInEditorBuilds",
             &GAllowCookedDataInEditorBuilds,
             L"If true, allows cooked assets to be loaded in the editor.",0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowCookedDataInEditorBuilds__);
  return;
}

// `dynamic_initializer_for_'CVarApplyBulkDataFix'' @ 140f23140

void __cdecl _dynamic_initializer_for__CVarApplyBulkDataFix__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarApplyBulkDataFix,L"Serialization.ApplyBulkDataOffsetFix",local_res8,
             L"When true, we will try to fix potentially bad bulkdata offsets",0);
  atexit(_dynamic_atexit_destructor_for__CVarApplyBulkDataFix__);
  return;
}

// `dynamic_initializer_for_'CVarSkipAsyncLoaderForCookedData'' @ 140f23190

void __cdecl _dynamic_initializer_for__CVarSkipAsyncLoaderForCookedData__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipAsyncLoaderForCookedData,L"cook.SkipAsyncLoaderForCookedData",
             &GSkipAsyncLoaderForCookedData,
             L"If true, skip the async loader and load package header synchronously to reduce ping/pong between threads."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarSkipAsyncLoaderForCookedData__);
  return;
}

// `dynamic_initializer_for_'FLinkerInstancingContextTestsAutomationTestInstance'' @ 140f231e0

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FLinkerInstancingContextTestsAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FLinkerInstancingContextTests");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FLinkerInstancingContextTestsAutomationTestInstance,&local_18,
             false);
  FLinkerInstancingContextTestsAutomationTestInstance._0_8_ =
       &___7FLinkerInstancingContextTests__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FLinkerInstancingContextTestsAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'GuidAnnotation'' @ 140f23240

void __cdecl _dynamic_initializer_for__GuidAnnotation__(void)

{
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&GuidAnnotation.InverseAnnotationMapCritical,4000);
  atexit(_dynamic_atexit_destructor_for__GuidAnnotation__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_Loading_LinkerInstancingContext'' @ 140f23270

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_Loading_LinkerInstancingContext__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_Loading_LinkerInstancingContext,L"Loading_LinkerInstancingContext",
             (FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UObject_FLinkerLoad'' @ 140f232c0

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UObject_FLinkerLoad__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UObject_FLinkerLoad,L"UObject_FLinkerLoad",(FName)0x0,(FName)0x0,
             (FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UObject_Linker'' @ 140f23310

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UObject_Linker__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UObject_Linker,L"UObject_Linker",(FName)0x0,(FName)0x0,(FName)0x0,
             (FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogLinker'' @ 140f23360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogLinker__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogLinker,L"LogLinker",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogLinker__);
  return;
}

// `dynamic_initializer_for_'PIEGuidMap'' @ 140f233a0

void __cdecl _dynamic_initializer_for__PIEGuidMap__(void)

{
  atexit(_dynamic_atexit_destructor_for__PIEGuidMap__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AsyncLoadingTime'' @ 140f233c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AsyncLoadingTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AsyncLoadingTime == (FThreadSafeStaticStat<FStat_STAT_AsyncLoadingTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AsyncLoadingTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AsyncLoadingTime,*pFVar1,
               L"Async Loading Time","STATGROUP_AsyncLoad","STATCAT_Advanced",L"Async Load",false,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_EditorOnlyFixupTime'' @ 140f23450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_EditorOnlyFixupTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_EditorOnlyFixupTime == (FThreadSafeStaticStat<FStat_STAT_EditorOnlyFixupTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_EditorOnlyFixupTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_EditorOnlyFixupTime,*pFVar1,
               L"Fixup editor-only flags time","STATGROUP_LinkerCount","STATCAT_Advanced",
               L"Linker Count",true,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_CreateClustersGameThread'' @ 140f234e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_CreateClustersGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_CreateClustersGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_CreateClustersGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_CreateClustersGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_CreateClustersGameThread,
               *pFVar1,L"CreateClusters GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread'' @ 140f23570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_FAsyncPackage_FlushAllAsyncLoadingGameThread,*pFVar1,
               L"Flush All Async Loads GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread'' @ 140f23600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_FlushAsyncLoadingGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_FlushAsyncLoadingGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_FlushAsyncLoadingGameThread,
               *pFVar1,L"Flush Async Loading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread'' @ 140f23690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadInstancesGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_PostLoadInstancesGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_PostLoadInstancesGameThread,
               *pFVar1,L"PostLoadInstances GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread'' @ 140f23720

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_PostLoadObjectsGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_PostLoadObjectsGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_PostLoadObjectsGameThread,
               *pFVar1,L"PostLoadObjects GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread'' @ 140f237b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread ==
      (FThreadSafeStaticStat<FStat_STAT_FAsyncPackage_TickAsyncLoadingGameThread>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_FAsyncPackage_TickAsyncLoadingGameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FAsyncPackage_TickAsyncLoadingGameThread,
               *pFVar1,L"TickAsyncLoading GT","STATGROUP_AsyncLoadGameThread","STATCAT_Advanced",
               L"Async Load Game Thread",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LinkerCount'' @ 140f23840

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LinkerCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LinkerCount == (FThreadSafeStaticStat<FStat_STAT_LinkerCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LinkerCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerCount,*pFVar1,L"Linker Count",
               "STATGROUP_LinkerCount","STATCAT_Advanced",L"Linker Count",true,false,ST_int64,false,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LinkerLoadDeferred'' @ 140f238c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LinkerLoadDeferred__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LinkerLoadDeferred == (FThreadSafeStaticStat<FStat_STAT_LinkerLoadDeferred>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_LinkerLoadDeferred");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerLoadDeferred,*pFVar1,
               L"Linker Load Deferred","STATGROUP_LinkerLoad","STATCAT_Advanced",L"Linker Load",
               false,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LinkerPrecache'' @ 140f23950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LinkerPrecache__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LinkerPrecache == (FThreadSafeStaticStat<FStat_STAT_LinkerPrecache>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LinkerPrecache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerPrecache,*pFVar1,L"Linker Precache",
               "STATGROUP_LinkerLoad","STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LinkerPreload'' @ 140f239e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LinkerPreload__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LinkerPreload == (FThreadSafeStaticStat<FStat_STAT_LinkerPreload>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LinkerPreload");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerPreload,*pFVar1,L"Linker Preload",
               "STATGROUP_LinkerLoad","STATCAT_Advanced",L"Linker Load",false,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LinkerSerialize'' @ 140f23a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LinkerSerialize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LinkerSerialize == (FThreadSafeStaticStat<FStat_STAT_LinkerSerialize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LinkerSerialize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LinkerSerialize,*pFVar1,
               L"Linker Serialize","STATGROUP_LinkerLoad","STATCAT_Advanced",L"Linker Load",false,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_LiveLinkerCount'' @ 140f23b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_LiveLinkerCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_LiveLinkerCount == (FThreadSafeStaticStat<FStat_STAT_LiveLinkerCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_LiveLinkerCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_LiveLinkerCount,*pFVar1,
               L"Live Linker Count","STATGROUP_LinkerCount","STATCAT_Advanced",L"Linker Count",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_TextAssetLinkerCount'' @ 140f23b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_TextAssetLinkerCount__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_TextAssetLinkerCount ==
      (FThreadSafeStaticStat<FStat_STAT_TextAssetLinkerCount>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_TextAssetLinkerCount");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TextAssetLinkerCount,*pFVar1,
               L"Linker Count (Text Assets)","STATGROUP_LinkerCount","STATCAT_Advanced",
               L"Linker Count",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h__Script_CoreUObject_693384387'' @ 140f23c20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h__Script_CoreUObject_693384387__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_Interface_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UInterface @ 142093c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UInterface(void)

{
  if (Z_Registration_Info_UClass_UInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UInterface.OuterSingleton,
               &Z_Construct_UClass_UInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UInterface.OuterSingleton;
}

// `scalar_deleting_destructor' @ 142093d30

void * __thiscall
FUObjectAnnotationSparse<FUniqueObjectGuid,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FUniqueObjectGuid,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FUniqueObjectGuid,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142094ed0

void * __thiscall
FLinkerInstancingContextTests::_scalar_deleting_destructor_
          (FLinkerInstancingContextTests *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142094f20

void * __thiscall
FUObjectArray::FUObjectDeleteListener::_scalar_deleting_destructor_
          (FUObjectDeleteListener *this,uint param_1)

{
  *this = (FUObjectDeleteListener)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142094f60

void * __thiscall
FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// operator<<<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 142095040

FArchive * __cdecl
operator<<<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_14209fffe;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_14209fffe:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1420a00db;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_1420a00db:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[7] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[6] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 142095050

void __cdecl
operator<<<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (FStructuredArchiveSlot *param_1,
          TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          *param_2)

{
  TSetPrivateFriend::
  SerializeStructured<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            (*param_1,param_2);
  return;
}

// FImportTypeHierarchy,0>,FDefaultSetAllocator> @ 142095060

FArchive * __cdecl
operator<<<TTuple<FPackageIndex,UE::Serialization::Private::
FImportTypeHierarchy>,TDefaultMapHashableKeyFuncs<FPackageIndex,UE::Serialization::Private::
FImportTypeHierarchy_0>_FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>,TDefaultMapHashableKeyFuncs<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FPackageIndex,UE::Serialization::Private::
  FImportTypeHierarchy>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar9 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar12 < 1) {
    return param_1;
  }
  *piVar1 = uVar12;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1420a029e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_1420a029e:
  uVar10 = (ulonglong)uVar12;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar12 - 1U;
    uVar7 = uVar7 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar6 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar6 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar7 = uVar9;
      while (uVar12 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1420a037b;
        uVar12 = puVar11[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_1420a037b:
        uVar9 = (ulonglong)uVar6;
        uStack_64 = uVar6;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar9 < (int)uVar6) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[7] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[6] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FGatherableTextData,TSizedDefaultAllocator<32>_> @ 142095070

FArchive * __cdecl
operator<<<FGatherableTextData,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FGatherableTextData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FGatherableTextData *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
  iVar10 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FGatherableTextData,int>
                ((FGatherableTextData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x20001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              FGatherableTextData::StreamArchive
                        ((FGatherableTextData *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x80),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FGatherableTextData,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x880,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FGatherableTextData *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x80);
              DefaultConstructItems<FGatherableTextData,int>(this,1);
              FGatherableTextData::StreamArchive(this,param_1);
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)auStackX_8[0]);
            return param_1;
          }
        }
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

// operator<<<FObjectExport,TSizedDefaultAllocator<32>_> @ 142095080

FArchive * __cdecl
operator<<<FObjectExport,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FObjectExport,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FObjectExport *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x68);
  iVar11 = 0;
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
                (0x68,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x27628)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              operator<<(param_1,(FObjectExport *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x68));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FObjectExport,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x868,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FObjectExport *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x68);
              DefaultConstructItems<FObjectExport,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
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

// operator<<<FObjectImport,TSizedDefaultAllocator<32>_> @ 142095090

FArchive * __cdecl
operator<<<FObjectImport,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FObjectImport,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FObjectImport *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x38);
  iVar11 = 0;
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
                (0x38,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x4924a)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              operator<<(param_1,(FObjectImport *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x38));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<FObjectImport,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x838,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FObjectImport *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
              DefaultConstructItems<FObjectImport,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
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

// operator<<<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 1420950a0

FArchive * __cdecl
operator<<<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  uint uVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar10 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)
                 (param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar11 = 0;
          uVar8 = auStackX_8[0];
          if ((int)auStackX_8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar11 < (int)uVar8) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            TArrayPrivateFriend::Serialize<FPackageIndex,TSizedDefaultAllocator<32>_>
                      (param_1,(TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
            uVar11 = uVar11 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,auStackX_8[0]);
        if ((int)auStackX_8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          pTVar9 = (TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
          TArrayPrivateFriend::Serialize<FPackageIndex,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)auStackX_8[0]);
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

// operator<<<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1420950b0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  FPackageIndex *pFVar10;
  FPackageIndex *pFVar11;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_68;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0xc;
  puVar3 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar3 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar3 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TIterator::TIterator((TIterator *)&local_58,param_2);
    if (local_50.CurrentBitIndex < (local_50.Array)->NumBits) {
      do {
        pFVar11 = (FPackageIndex *)((longlong)local_50.CurrentBitIndex * 0x20 + *local_58);
        operator<<(param_1,pFVar11);
        TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar11 + 2));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar3);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar3 = 0;
    if (*(uint *)puVar2 != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar8,(ForAnyElementType *)param_2,0,(int *)puVar2);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar6 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar11 = (FPackageIndex *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar3,(int *)puVar2);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar7 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)((longlong)iVar7 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar4 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_68,iVar7);
        pFVar10 = (FPackageIndex *)0x0;
        if (local_68.Pointer != (FPackageIndex *)0x0) {
          *(int *)local_68.Pointer = 0;
          *(undefined8 *)((longlong)local_68.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_68.Pointer + 0x10) = 0;
          ((FPackageIndex *)((longlong)local_68.Pointer + 0x18))->Index = -1;
          pFVar10 = local_68.Pointer;
        }
        operator<<(param_1,pFVar10);
        TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar10 + 2));
        uVar8 = (int)pFVar11 + 1;
        pFVar11 = (FPackageIndex *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1420953c0

void __cdecl
operator<<<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FStructuredArchiveSlot param_1,
          TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  FSlotBase FVar4;
  int iVar5;
  FArchive *pFVar6;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
  *pTVar7;
  uint uVar8;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  FSlotBase local_res8;
  uint local_res10 [2];
  FSparseArrayAllocationInfo local_68;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  local_res10[0] = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  pFVar6 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (uint *)**(undefined8 **)&pFVar6->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&pFVar6->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar3;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  FVar4.StructuredArchive = local_res8.StructuredArchive;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((pFVar6->field_0x28 & 1) == 0) {
    TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TIterator::TIterator((TIterator *)&local_58,param_2);
    if (local_50.CurrentBitIndex < (local_50.Array)->NumBits) {
      do {
        UE::Core::Private::Tuple::
        TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
        ::SerializeStructured
                  ((FStructuredArchiveSlot)FVar4.StructuredArchive,
                   (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
                    *)((longlong)local_50.CurrentBitIndex * 0x20 + *local_58));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
      return;
    }
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(param_2,local_res10[0]);
    pTVar9 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
              *)0x0;
    if (0 < (int)local_res10[0]) {
      do {
        pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
        if ((pFVar6->field_0x29 & 4) != 0) {
          return;
        }
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)&param_2->field_0x8,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar5 = *(int *)&param_2->field_0x30;
          iVar2 = *(int *)((longlong)iVar5 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar2;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_68,iVar5);
        pTVar7 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
                  *)0x0;
        if (local_68.Pointer !=
            (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          *(undefined4 *)local_68.Pointer = 0;
          *(undefined8 *)((longlong)local_68.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_68.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_68.Pointer + 0x18) = 0xffffffff;
          pTVar7 = local_68.Pointer;
        }
        UE::Core::Private::Tuple::
        TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
        ::SerializeStructured((FStructuredArchiveSlot)FVar4.StructuredArchive,pTVar7);
        uVar8 = (int)pTVar9 + 1;
        pTVar9 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
                  *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res10[0]);
    }
  }
  return;
}

// FImportTypeHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1420955f0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FPackageIndex,UE::Serialization::Private::
FImportTypeHierarchy>_>_TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FPackageIndex *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FPackageIndex *pFVar11;
  uint *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar4 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar9 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1420958fc;
        uVar9 = puVar12[lVar7 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_1420958fc:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        pFVar8 = (FPackageIndex *)
                 ((longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58);
        ::operator<<(param_1,pFVar8);
        UE::Serialization::Private::operator<<(param_1,(FImportTypeHierarchy *)(pFVar8 + 2));
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  else {
    local_res8[0] = 0;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    uVar9 = local_res8[0];
    uVar10 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FPackageIndex,UE::Serialization::Private::FImportTypeHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar5 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pFVar8 = (FPackageIndex *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar3 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pFVar11 = (FPackageIndex *)0x0;
        if (local_78.Pointer != (FPackageIndex *)0x0) {
          *(int *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          ((FPackageIndex *)((longlong)local_78.Pointer + 0x18))->Index = -1;
          pFVar11 = local_78.Pointer;
        }
        ::operator<<(param_1,pFVar11);
        UE::Serialization::Private::operator<<(param_1,(FImportTypeHierarchy *)(pFVar11 + 2));
        uVar9 = (int)pFVar8 + 1;
        pFVar8 = (FPackageIndex *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FName> @ 142095980

void __cdecl
operator<<<FName>(FStructuredArchiveSlot param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FArchive *pFVar2;
  uint *puVar3;
  code *pcVar4;
  FSlotBase FVar5;
  bool bVar6;
  int iVar7;
  FArchiveState *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  FSlotBase local_res8;
  uint local_res10 [2];
  
  local_res10[0] = param_2->ArrayNum;
  piVar1 = &param_2->ArrayNum;
  pFVar2 = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar3 = (uint *)**(undefined8 **)&pFVar2->field_0x8;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  if ((uint *)(*(undefined8 **)&pFVar2->field_0x8)[1] < puVar3 + 1) {
    if ((pFVar2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar2,local_res10);
    }
  }
  else {
    local_res10[0] = *puVar3;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 4;
  }
  FVar5.StructuredArchive = local_res8.StructuredArchive;
  pFVar8 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  uVar11 = local_res10[0];
  if (pFVar8->ArIsLoading != 0) {
    lVar12 = (longlong)(int)local_res10[0];
    iVar10 = *piVar1;
    if (iVar10 < (int)local_res10[0]) {
      iVar10 = local_res10[0] - iVar10;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,iVar10,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
      memset((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8,0,(longlong)iVar10 << 3);
    }
    else {
      if ((int)local_res10[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res10[0]);
      }
      if ((int)local_res10[0] < iVar10) {
        uVar9 = iVar10 - local_res10[0];
        if (((int)(local_res10[0] | uVar9) < 0) &&
           (bVar6 = FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar9 != 0) {
          _Dst = (param_2->AllocatorInstance).Data + lVar12 * 8;
          iVar10 = (*piVar1 - uVar9) - uVar11;
          if (iVar10 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar9 * 8,(longlong)iVar10 << 3);
          }
          *piVar1 = *piVar1 - uVar9;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
  }
  uVar11 = 0;
  if (0 < (int)local_res10[0]) {
    do {
      uVar9 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (FVar5.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar2 + 0x178))
                (pFVar2,(param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_res10[0]);
  }
  return;
}

// operator<<<FPackageIndex,TSizedDefaultAllocator<32>_> @ 142095ba0

FArchive * __cdecl
operator<<<FPackageIndex,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (auStackX_8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar10 = 0;
          uVar9 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              operator<<(param_1,(FPackageIndex *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FPackageIndex,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 4;
              DefaultConstructItems<FPackageIndex,int>(pFVar2,1);
              operator<<(param_1,(FPackageIndex *)pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_> @ 1420960f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l5::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1e8 [32];
  TPromise<void> local_1a8;
  undefined4 local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FConstructor local_140;
  FString local_138;
  FString local_128;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  undefined1 local_108 [16];
  undefined **local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int iStack_e4;
  undefined ***local_e0;
  TFutureState<void> *local_d8;
  undefined **local_c8;
  FScriptContainerElement *pFStack_c0;
  code *local_b8;
  undefined ***local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_190 = 0;
  local_f8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`5'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_f0 = (param_2->DebugName).Data.AllocatorInstance.Data;
  (param_2->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8 = (param_2->DebugName).Data.ArrayNum;
  iStack_e4 = (param_2->DebugName).Data.ArrayMax;
  local_108._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>,void>
       ::Call;
  local_e0 = (undefined ***)0x0;
  (param_2->DebugName).Data.ArrayNum = 0;
  (param_2->DebugName).Data.ArrayMax = 0;
  TPromise<void>::TPromise<void>(&local_1a8,param_3);
  if ((local_1a8.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_1a8.bFutureRetrieved = true;
  if ((local_1a8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_1a8.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_1a8.State.Object;
  if (local_1a8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_140.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_190 = 1;
    if (param_1 == TaskGraph) {
      local_190 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_140,(TUniqueFunction<void___cdecl(void)> *)&local_188,
               (TPromise<void> *)local_108,(Type *)&local_1a8);
    if (local_188 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_188->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_188)(local_188,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(iStack_e4,local_e8);
    local_d8 = (TFutureState<void> *)local_108._0_8_;
    local_b0 = local_e0;
    local_a8 = local_1a8.State.Object;
    local_a0 = local_1a8.State.SharedReferenceCount.ReferenceController;
    local_c8 = local_f8;
    pFStack_c0 = uStack_f0;
    local_108._0_8_ = (TFutureState<void> *)0x0;
    local_1a8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.State.Object = (TFutureState<void> *)0x0;
    local_98 = local_1a8.bFutureRetrieved;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`5'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar16 = local_60 + 2;
    *ppcVar16 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (undefined ***)0x0;
    local_60[4] = (code *)local_c8;
    local_60[5] = (code *)pFStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar16 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar16 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_118,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_118.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar16 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar16 = local_60;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar17 = local_b0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_138,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar19.Data = local_138.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_158.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_178 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_108._0_8_;
        puVar14[7] = local_e0;
        *(undefined4 *)(puVar14 + 4) = local_f8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_f8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_f0._4_4_;
        puVar14[6] = CONCAT44(iStack_e4,local_e8);
        if (puVar14[2] != 0) {
          local_108._0_8_ = pTVar20;
        }
        puVar14[8] = local_1a8.State.Object;
        puVar14[9] = local_1a8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_1a8.bFutureRetrieved;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1a8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_108._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_f8;
    if (local_e0 != (undefined ***)0x0) {
      pppuVar17 = local_e0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_> @ 142096ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FLinkerLoad::UpdateFromPackageFileSummary_::__l23::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1e8 [32];
  TPromise<void> local_1a8;
  undefined4 local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FConstructor local_140;
  FString local_138;
  FString local_128;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  undefined1 local_108 [16];
  undefined **local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int iStack_e4;
  undefined ***local_e0;
  TFutureState<void> *local_d8;
  undefined **local_c8;
  FScriptContainerElement *pFStack_c0;
  code *local_b8;
  undefined ***local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_190 = 0;
  local_f8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::`23'::<lambda_1>,1,0>
              ::_vftable_;
  uStack_f0 = (param_2->DebugName).Data.AllocatorInstance.Data;
  (param_2->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8 = (param_2->DebugName).Data.ArrayNum;
  iStack_e4 = (param_2->DebugName).Data.ArrayMax;
  local_108._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>,void>::Call
  ;
  local_e0 = (undefined ***)0x0;
  (param_2->DebugName).Data.ArrayNum = 0;
  (param_2->DebugName).Data.ArrayMax = 0;
  TPromise<void>::TPromise<void>(&local_1a8,param_3);
  if ((local_1a8.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_1a8.bFutureRetrieved = true;
  if ((local_1a8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_1a8.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_1a8.State.Object;
  if (local_1a8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_140.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_190 = 1;
    if (param_1 == TaskGraph) {
      local_190 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_140,(TUniqueFunction<void___cdecl(void)> *)&local_188,
               (TPromise<void> *)local_108,(Type *)&local_1a8);
    if (local_188 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_188->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_188)(local_188,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(iStack_e4,local_e8);
    local_d8 = (TFutureState<void> *)local_108._0_8_;
    local_b0 = local_e0;
    local_a8 = local_1a8.State.Object;
    local_a0 = local_1a8.State.SharedReferenceCount.ReferenceController;
    local_c8 = local_f8;
    pFStack_c0 = uStack_f0;
    local_108._0_8_ = (TFutureState<void> *)0x0;
    local_1a8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.State.Object = (TFutureState<void> *)0x0;
    local_98 = local_1a8.bFutureRetrieved;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::`23'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar16 = local_60 + 2;
    *ppcVar16 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (undefined ***)0x0;
    local_60[4] = (code *)local_c8;
    local_60[5] = (code *)pFStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar16 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar16 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_118,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_118.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar16 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar16 = local_60;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar17 = local_b0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_138,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar19.Data = local_138.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_158.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_178 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_108._0_8_;
        puVar14[7] = local_e0;
        *(undefined4 *)(puVar14 + 4) = local_f8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_f8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_f0._4_4_;
        puVar14[6] = CONCAT44(iStack_e4,local_e8);
        if (puVar14[2] != 0) {
          local_108._0_8_ = pTVar20;
        }
        puVar14[8] = local_1a8.State.Object;
        puVar14[9] = local_1a8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_1a8.bFutureRetrieved;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1a8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_108._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_f8;
    if (local_e0 != (undefined ***)0x0) {
      pppuVar17 = local_e0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_> @ 1420978d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FLinkerLoad::SerializePackageTrailer_::__l24::<lambda_1>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_1> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1e8 [32];
  TPromise<void> local_1a8;
  undefined4 local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FConstructor local_140;
  FString local_138;
  FString local_128;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  undefined1 local_108 [16];
  undefined **local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int iStack_e4;
  undefined ***local_e0;
  TFutureState<void> *local_d8;
  undefined **local_c8;
  FScriptContainerElement *pFStack_c0;
  code *local_b8;
  undefined ***local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_190 = 0;
  local_f8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLinkerLoad::SerializePackageTrailer'::`24'::<lambda_1>,1,0>::
              _vftable_;
  uStack_f0 = (param_2->DebugName).Data.AllocatorInstance.Data;
  (param_2->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8 = (param_2->DebugName).Data.ArrayNum;
  iStack_e4 = (param_2->DebugName).Data.ArrayMax;
  local_108._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>,void>::Call;
  local_e0 = (undefined ***)0x0;
  (param_2->DebugName).Data.ArrayNum = 0;
  (param_2->DebugName).Data.ArrayMax = 0;
  TPromise<void>::TPromise<void>(&local_1a8,param_3);
  if ((local_1a8.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_1a8.bFutureRetrieved = true;
  if ((local_1a8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_1a8.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_1a8.State.Object;
  if (local_1a8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_140.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_190 = 1;
    if (param_1 == TaskGraph) {
      local_190 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_140,(TUniqueFunction<void___cdecl(void)> *)&local_188,
               (TPromise<void> *)local_108,(Type *)&local_1a8);
    if (local_188 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_188->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_188)(local_188,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(iStack_e4,local_e8);
    local_d8 = (TFutureState<void> *)local_108._0_8_;
    local_b0 = local_e0;
    local_a8 = local_1a8.State.Object;
    local_a0 = local_1a8.State.SharedReferenceCount.ReferenceController;
    local_c8 = local_f8;
    pFStack_c0 = uStack_f0;
    local_108._0_8_ = (TFutureState<void> *)0x0;
    local_1a8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.State.Object = (TFutureState<void> *)0x0;
    local_98 = local_1a8.bFutureRetrieved;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageTrailer'::`24'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar16 = local_60 + 2;
    *ppcVar16 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (undefined ***)0x0;
    local_60[4] = (code *)local_c8;
    local_60[5] = (code *)pFStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar16 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar16 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_118,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_118.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar16 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar16 = local_60;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar17 = local_b0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_138,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar19.Data = local_138.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_158.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_178 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_108._0_8_;
        puVar14[7] = local_e0;
        *(undefined4 *)(puVar14 + 4) = local_f8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_f8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_f0._4_4_;
        puVar14[6] = CONCAT44(iStack_e4,local_e8);
        if (puVar14[2] != 0) {
          local_108._0_8_ = pTVar20;
        }
        puVar14[8] = local_1a8.State.Object;
        puVar14[9] = local_1a8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_1a8.bFutureRetrieved;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1a8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_108._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_f8;
    if (local_e0 != (undefined ***)0x0) {
      pppuVar17 = local_e0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_> @ 1420984c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l8::<lambda_2>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_2> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  bool bVar8;
  int iVar9;
  TFuture<void> *pTVar10;
  FTSTicker *this;
  TFutureState<void> *pTVar11;
  FRunnableThread *pFVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  code **ppcVar15;
  bool *pbVar16;
  longlong *plVar17;
  ForAnyElementType FVar18;
  TFutureState<void> *pTVar19;
  TFutureState<void> *pTVar20;
  undefined1 auStackY_1e8 [32];
  TPromise<void> local_1a8;
  undefined4 local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FConstructor local_140;
  FString local_138;
  FString local_128;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  TPromise<void> local_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  bool *local_e0;
  TFutureState<void> *local_d8;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  bool *local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar19 = (TFutureState<void> *)0x0;
  local_190 = 0;
  local_108.State.Object = (TFutureState<void> *)0x0;
  local_e0 = FMemory::Malloc(0x20,8);
  *(longlong *)(local_e0 + 8) = 0;
  *(undefined ***)local_e0 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`8'::<lambda_2>,1,1>
        ::_vftable_;
  *(FScriptContainerElement **)(local_e0 + 8) = (param_2->DebugName).Data.AllocatorInstance.Data;
  (param_2->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_e0 + 0x10) = (param_2->DebugName).Data.ArrayNum;
  *(int *)(local_e0 + 0x14) = (param_2->DebugName).Data.ArrayMax;
  (param_2->DebugName).Data.ArrayNum = 0;
  (param_2->DebugName).Data.ArrayMax = 0;
  *(FPackageFileVersion *)(local_e0 + 0x18) = param_2->FileVersion;
  if ((code *)(local_e0 + 8) != (code *)0x0) {
    local_108.State.Object =
         (TFutureState<void> *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>,void>
         ::Call;
  }
  TPromise<void>::TPromise<void>(&local_1a8,param_3);
  if ((local_1a8.bFutureRetrieved != false) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  local_1a8.bFutureRetrieved = true;
  if ((local_1a8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  FVar6.ReferenceController = local_1a8.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_1a8.State.Object;
  if (local_1a8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_140.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_190 = 1;
    if (param_1 == TaskGraph) {
      local_190 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_140,(TUniqueFunction<void___cdecl(void)> *)&local_188,&local_108,
               (Type *)&local_1a8);
    if (local_188 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_188->field_0x30;
      iVar9 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (*(code *)**(undefined8 **)local_188)(local_188,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (code *)CONCAT44(local_108._20_4_,local_108._16_4_);
    pcStack_c0 = (code *)CONCAT44(uStack_ec,uStack_f0);
    local_d8 = local_108.State.Object;
    local_b0 = local_e0;
    local_a8 = local_1a8.State.Object;
    local_a0 = local_1a8.State.SharedReferenceCount.ReferenceController;
    local_98 = local_1a8.bFutureRetrieved;
    local_e0 = (bool *)0x0;
    local_b8 = local_e8;
    local_108.State.Object = (TFutureState<void> *)0x0;
    local_1a8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.State.Object = (TFutureState<void> *)0x0;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`8'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar15 = local_60 + 2;
    *ppcVar15 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (bool *)0x0;
    local_60[4] = local_c8;
    local_60[5] = pcStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar15 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar15 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_118,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_118.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar15 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar15 = local_60;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar8 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar4)();
      return pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      ppcVar15 = &local_c8;
      if ((code **)local_b0 != (code **)0x0) {
        ppcVar15 = (code **)local_b0;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    break;
  case Thread:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar11 = operator_new(0x70);
      pTVar20 = pTVar19;
      if (pTVar11 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar7 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar11 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar11->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar11->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar11->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar11->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar11->field_0x30 = local_e8;
        if (*(longlong *)&pTVar11->field_0x10 != 0) {
          local_108.State.Object = pTVar19;
        }
        *(TFutureState<void> **)&pTVar11->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar11->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar11->field_0x58 = pTVar7;
        local_188 = pTVar19;
        pTVar19 = pTVar11;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_138,L"TAsync %d");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar18.Data = local_138.Data.AllocatorInstance.Data;
      }
      pFVar12 = FRunnableThread::Create
                          ((FRunnable *)pTVar19,(wchar_t *)FVar18.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar12;
      if ((pFVar12 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      iVar9 = (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  case ThreadIfForkSafe:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar8) || (bVar8 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar8)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pTVar11 = operator_new(0x70);
      pTVar20 = pTVar19;
      if (pTVar11 != (TFutureState<void> *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar7 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar11 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar11->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar11->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar11->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar11->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar11->field_0x30 = local_e8;
        if (*(longlong *)&pTVar11->field_0x10 != 0) {
          local_108.State.Object = pTVar19;
        }
        *(TFutureState<void> **)&pTVar11->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x60 =
             local_158.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar11->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar11->field_0x58 = pTVar7;
        local_188 = pTVar19;
        pTVar19 = pTVar11;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar18.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar12 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar19,(wchar_t *)FVar18.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_178 = pFVar12;
      if ((pFVar12 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      iVar9 = (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  case ThreadPool:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar13 = operator_new(0x60);
      if (puVar13 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar13[1] = 0;
        *puVar13 = &___7__TAsyncQueuedWork_X__6B_;
        puVar13[2] = local_108.State.Object;
        puVar13[7] = local_e0;
        local_e0 = (bool *)0x0;
        *(undefined4 *)(puVar13 + 4) = local_108._16_4_;
        *(undefined4 *)((longlong)puVar13 + 0x24) = local_108._20_4_;
        *(undefined4 *)(puVar13 + 5) = uStack_f0;
        *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_ec;
        puVar13[6] = local_e8;
        if (puVar13[2] != 0) {
          local_108.State.Object = pTVar19;
        }
        puVar13[8] = local_1a8.State.Object;
        puVar13[9] = local_1a8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar13 + 10) = local_1a8.bFutureRetrieved;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar13,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  default:
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar4)();
      return pTVar10;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1a8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.State.SharedReferenceCount.ReferenceController);
  if (local_108.State.Object != (TFutureState<void> *)0x0) {
    pbVar16 = &local_108.bFutureRetrieved;
    if (local_e0 != (bool *)0x0) {
      pbVar16 = local_e0;
    }
    (**(code **)(*(longlong *)pbVar16 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar17 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar17 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_> @ 1420990c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FLinkerLoad::UpdateFromPackageFileSummary_::__l34::<lambda_2>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_2> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1e8 [32];
  TPromise<void> local_1a8;
  undefined4 local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FConstructor local_140;
  FString local_138;
  FString local_128;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  undefined1 local_108 [16];
  undefined **local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int iStack_e4;
  undefined ***local_e0;
  TFutureState<void> *local_d8;
  undefined **local_c8;
  FScriptContainerElement *pFStack_c0;
  code *local_b8;
  undefined ***local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_190 = 0;
  local_f8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::`34'::<lambda_2>,1,0>
              ::_vftable_;
  uStack_f0 = (param_2->DebugName).Data.AllocatorInstance.Data;
  (param_2->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8 = (param_2->DebugName).Data.ArrayNum;
  iStack_e4 = (param_2->DebugName).Data.ArrayMax;
  local_108._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>,void>::Call
  ;
  local_e0 = (undefined ***)0x0;
  (param_2->DebugName).Data.ArrayNum = 0;
  (param_2->DebugName).Data.ArrayMax = 0;
  TPromise<void>::TPromise<void>(&local_1a8,param_3);
  if ((local_1a8.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_1a8.bFutureRetrieved = true;
  if ((local_1a8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_1a8.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_1a8.State.Object;
  if (local_1a8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_140.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_190 = 1;
    if (param_1 == TaskGraph) {
      local_190 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_140,(TUniqueFunction<void___cdecl(void)> *)&local_188,
               (TPromise<void> *)local_108,(Type *)&local_1a8);
    if (local_188 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_188->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_188)(local_188,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(iStack_e4,local_e8);
    local_d8 = (TFutureState<void> *)local_108._0_8_;
    local_b0 = local_e0;
    local_a8 = local_1a8.State.Object;
    local_a0 = local_1a8.State.SharedReferenceCount.ReferenceController;
    local_c8 = local_f8;
    pFStack_c0 = uStack_f0;
    local_108._0_8_ = (TFutureState<void> *)0x0;
    local_1a8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.State.Object = (TFutureState<void> *)0x0;
    local_98 = local_1a8.bFutureRetrieved;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::`34'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar16 = local_60 + 2;
    *ppcVar16 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (undefined ***)0x0;
    local_60[4] = (code *)local_c8;
    local_60[5] = (code *)pFStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar16 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar16 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_118,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_118.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar16 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar16 = local_60;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar17 = local_b0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_138,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar19.Data = local_138.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_158.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_178 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_108._0_8_;
        puVar14[7] = local_e0;
        *(undefined4 *)(puVar14 + 4) = local_f8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_f8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_f0._4_4_;
        puVar14[6] = CONCAT44(iStack_e4,local_e8);
        if (puVar14[2] != 0) {
          local_108._0_8_ = pTVar20;
        }
        puVar14[8] = local_1a8.State.Object;
        puVar14[9] = local_1a8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_1a8.bFutureRetrieved;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1a8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_108._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_f8;
    if (local_e0 != (undefined ***)0x0) {
      pppuVar17 = local_e0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_> @ 142099cb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l27::<lambda_3>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_3> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  bool bVar8;
  int iVar9;
  TFuture<void> *pTVar10;
  FTSTicker *this;
  TFutureState<void> *pTVar11;
  FRunnableThread *pFVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  code **ppcVar15;
  bool *pbVar16;
  longlong *plVar17;
  ForAnyElementType FVar18;
  TFutureState<void> *pTVar19;
  TFutureState<void> *pTVar20;
  undefined1 auStackY_1e8 [32];
  TPromise<void> local_1a8;
  undefined4 local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FConstructor local_140;
  FString local_138;
  FString local_128;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  TPromise<void> local_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  bool *local_e0;
  TFutureState<void> *local_d8;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  bool *local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar19 = (TFutureState<void> *)0x0;
  local_190 = 0;
  local_108.State.Object = (TFutureState<void> *)0x0;
  local_e0 = FMemory::Malloc(0x38,8);
  *(longlong *)(local_e0 + 8) = 0;
  *(undefined ***)local_e0 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`27'::<lambda_3>,1,1>
        ::_vftable_;
  *(FScriptContainerElement **)(local_e0 + 8) = (param_2->DebugName).Data.AllocatorInstance.Data;
  (param_2->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_e0 + 0x10) = (param_2->DebugName).Data.ArrayNum;
  *(int *)(local_e0 + 0x14) = (param_2->DebugName).Data.ArrayMax;
  (param_2->DebugName).Data.ArrayNum = 0;
  (param_2->DebugName).Data.ArrayMax = 0;
  *(longlong *)(local_e0 + 0x18) = (param_2->CompatibleWith)._padding_;
  *(int *)(local_e0 + 0x20) = (int)(param_2->CompatibleWith)._padding_;
  *(longlong *)(local_e0 + 0x28) = 0;
  *(FScriptContainerElement **)(local_e0 + 0x28) =
       (param_2->CompatibleWith).Branch.Data.AllocatorInstance.Data;
  (param_2->CompatibleWith).Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_e0 + 0x30) = (param_2->CompatibleWith).Branch.Data.ArrayNum;
  *(int *)(local_e0 + 0x34) = (param_2->CompatibleWith).Branch.Data.ArrayMax;
  if ((code *)(local_e0 + 8) != (code *)0x0) {
    local_108.State.Object =
         (TFutureState<void> *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>,void>
         ::Call;
  }
  (param_2->CompatibleWith).Branch.Data.ArrayNum = 0;
  (param_2->CompatibleWith).Branch.Data.ArrayMax = 0;
  TPromise<void>::TPromise<void>(&local_1a8,param_3);
  if ((local_1a8.bFutureRetrieved != false) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  local_1a8.bFutureRetrieved = true;
  if ((local_1a8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  FVar6.ReferenceController = local_1a8.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_1a8.State.Object;
  if (local_1a8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_140.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_190 = 1;
    if (param_1 == TaskGraph) {
      local_190 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_140,(TUniqueFunction<void___cdecl(void)> *)&local_188,&local_108,
               (Type *)&local_1a8);
    if (local_188 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_188->field_0x30;
      iVar9 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (*(code *)**(undefined8 **)local_188)(local_188,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (code *)CONCAT44(local_108._20_4_,local_108._16_4_);
    pcStack_c0 = (code *)CONCAT44(uStack_ec,uStack_f0);
    local_d8 = local_108.State.Object;
    local_b0 = local_e0;
    local_a8 = local_1a8.State.Object;
    local_a0 = local_1a8.State.SharedReferenceCount.ReferenceController;
    local_98 = local_1a8.bFutureRetrieved;
    local_e0 = (bool *)0x0;
    local_b8 = local_e8;
    local_108.State.Object = (TFutureState<void> *)0x0;
    local_1a8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.State.Object = (TFutureState<void> *)0x0;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`27'::<lambda_3>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar15 = local_60 + 2;
    *ppcVar15 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (bool *)0x0;
    local_60[4] = local_c8;
    local_60[5] = pcStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar15 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar15 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_118,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_118.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar15 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar15 = local_60;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar8 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar4)();
      return pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      ppcVar15 = &local_c8;
      if ((code **)local_b0 != (code **)0x0) {
        ppcVar15 = (code **)local_b0;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    break;
  case Thread:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar11 = operator_new(0x70);
      pTVar20 = pTVar19;
      if (pTVar11 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar7 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar11 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar11->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar11->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar11->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar11->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar11->field_0x30 = local_e8;
        if (*(longlong *)&pTVar11->field_0x10 != 0) {
          local_108.State.Object = pTVar19;
        }
        *(TFutureState<void> **)&pTVar11->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar11->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar11->field_0x58 = pTVar7;
        local_188 = pTVar19;
        pTVar19 = pTVar11;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_138,L"TAsync %d");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar18.Data = local_138.Data.AllocatorInstance.Data;
      }
      pFVar12 = FRunnableThread::Create
                          ((FRunnable *)pTVar19,(wchar_t *)FVar18.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar12;
      if ((pFVar12 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      iVar9 = (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  case ThreadIfForkSafe:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar8) || (bVar8 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar8)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pTVar11 = operator_new(0x70);
      pTVar20 = pTVar19;
      if (pTVar11 != (TFutureState<void> *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar7 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar11 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar11->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar11->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar11->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar11->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar11->field_0x30 = local_e8;
        if (*(longlong *)&pTVar11->field_0x10 != 0) {
          local_108.State.Object = pTVar19;
        }
        *(TFutureState<void> **)&pTVar11->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x60 =
             local_158.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar11->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar11->field_0x58 = pTVar7;
        local_188 = pTVar19;
        pTVar19 = pTVar11;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar18.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar12 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar19,(wchar_t *)FVar18.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_178 = pFVar12;
      if ((pFVar12 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      iVar9 = (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  case ThreadPool:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar13 = operator_new(0x60);
      if (puVar13 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar13[1] = 0;
        *puVar13 = &___7__TAsyncQueuedWork_X__6B_;
        puVar13[2] = local_108.State.Object;
        puVar13[7] = local_e0;
        local_e0 = (bool *)0x0;
        *(undefined4 *)(puVar13 + 4) = local_108._16_4_;
        *(undefined4 *)((longlong)puVar13 + 0x24) = local_108._20_4_;
        *(undefined4 *)(puVar13 + 5) = uStack_f0;
        *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_ec;
        puVar13[6] = local_e8;
        if (puVar13[2] != 0) {
          local_108.State.Object = pTVar19;
        }
        puVar13[8] = local_1a8.State.Object;
        puVar13[9] = local_1a8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar13 + 10) = local_1a8.bFutureRetrieved;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar13,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  default:
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar4)();
      return pTVar10;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1a8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.State.SharedReferenceCount.ReferenceController);
  if (local_108.State.Object != (TFutureState<void> *)0x0) {
    pbVar16 = &local_108.bFutureRetrieved;
    if (local_e0 != (bool *)0x0) {
      pbVar16 = local_e0;
    }
    (**(code **)(*(longlong *)pbVar16 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar17 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar17 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_> @ 14209a8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l43::<lambda_4>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_4> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  bool bVar8;
  int iVar9;
  TFuture<void> *pTVar10;
  FTSTicker *this;
  TFutureState<void> *pTVar11;
  FRunnableThread *pFVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  code **ppcVar15;
  bool *pbVar16;
  longlong *plVar17;
  ForAnyElementType FVar18;
  TFutureState<void> *pTVar19;
  TFutureState<void> *pTVar20;
  undefined1 auStackY_1e8 [32];
  TPromise<void> local_1a8;
  undefined4 local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FConstructor local_140;
  FString local_138;
  FString local_128;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  TPromise<void> local_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *local_e8;
  bool *local_e0;
  TFutureState<void> *local_d8;
  code *local_c8;
  code *pcStack_c0;
  code *local_b8;
  bool *local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar19 = (TFutureState<void> *)0x0;
  local_190 = 0;
  local_108.State.Object = (TFutureState<void> *)0x0;
  local_e0 = FMemory::Malloc(0x30,8);
  *(longlong *)(local_e0 + 8) = 0;
  *(undefined ***)local_e0 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`43'::<lambda_4>,1,1>
        ::_vftable_;
  *(FScriptContainerElement **)(local_e0 + 8) = (param_2->DebugName).Data.AllocatorInstance.Data;
  (param_2->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_e0 + 0x10) = (param_2->DebugName).Data.ArrayNum;
  *(int *)(local_e0 + 0x14) = (param_2->DebugName).Data.ArrayMax;
  (param_2->DebugName).Data.ArrayNum = 0;
  (param_2->DebugName).Data.ArrayMax = 0;
  *(FPackageFileVersion *)(local_e0 + 0x18) = param_2->FileVersion;
  *(int *)(local_e0 + 0x20) = param_2->FileVersionLicensee;
  *(FPackageFileVersion *)(local_e0 + 0x24) = param_2->PackageFileUEVersion;
  *(int *)(local_e0 + 0x2c) = param_2->PackageFileLicenseeUEVersion;
  if ((code *)(local_e0 + 8) != (code *)0x0) {
    local_108.State.Object =
         (TFutureState<void> *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>,void>
         ::Call;
  }
  TPromise<void>::TPromise<void>(&local_1a8,param_3);
  if ((local_1a8.bFutureRetrieved != false) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  local_1a8.bFutureRetrieved = true;
  if ((local_1a8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  FVar6.ReferenceController = local_1a8.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_1a8.State.Object;
  if (local_1a8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_140.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_190 = 1;
    if (param_1 == TaskGraph) {
      local_190 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_140,(TUniqueFunction<void___cdecl(void)> *)&local_188,&local_108,
               (Type *)&local_1a8);
    if (local_188 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_188->field_0x30;
      iVar9 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (*(code *)**(undefined8 **)local_188)(local_188,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_c8 = (code *)CONCAT44(local_108._20_4_,local_108._16_4_);
    pcStack_c0 = (code *)CONCAT44(uStack_ec,uStack_f0);
    local_d8 = local_108.State.Object;
    local_b0 = local_e0;
    local_a8 = local_1a8.State.Object;
    local_a0 = local_1a8.State.SharedReferenceCount.ReferenceController;
    local_98 = local_1a8.bFutureRetrieved;
    local_e0 = (bool *)0x0;
    local_b8 = local_e8;
    local_108.State.Object = (TFutureState<void> *)0x0;
    local_1a8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.State.Object = (TFutureState<void> *)0x0;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`43'::<lambda_4>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar15 = local_60 + 2;
    *ppcVar15 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (bool *)0x0;
    local_60[4] = local_c8;
    local_60[5] = pcStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar15 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar15 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_118,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_118.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar15 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar15 = local_60;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar8 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar4)();
      return pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      ppcVar15 = &local_c8;
      if ((code **)local_b0 != (code **)0x0) {
        ppcVar15 = (code **)local_b0;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    break;
  case Thread:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar11 = operator_new(0x70);
      pTVar20 = pTVar19;
      if (pTVar11 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar7 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar11 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar11->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar11->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar11->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar11->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar11->field_0x30 = local_e8;
        if (*(longlong *)&pTVar11->field_0x10 != 0) {
          local_108.State.Object = pTVar19;
        }
        *(TFutureState<void> **)&pTVar11->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar11->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar11->field_0x58 = pTVar7;
        local_188 = pTVar19;
        pTVar19 = pTVar11;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_138,L"TAsync %d");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar18.Data = local_138.Data.AllocatorInstance.Data;
      }
      pFVar12 = FRunnableThread::Create
                          ((FRunnable *)pTVar19,(wchar_t *)FVar18.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar12;
      if ((pFVar12 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      iVar9 = (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  case ThreadIfForkSafe:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar8) || (bVar8 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar8)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pTVar11 = operator_new(0x70);
      pTVar20 = pTVar19;
      if (pTVar11 != (TFutureState<void> *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        pTVar7 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar11 = &___7__TAsyncRunnable_X__6B_;
        *(TFutureState<void> **)&pTVar11->field_0x10 = local_108.State.Object;
        *(bool **)&pTVar11->field_0x38 = local_e0;
        local_e0 = (bool *)0x0;
        *(ulonglong *)&pTVar11->field_0x20 = CONCAT44(local_108._20_4_,local_108._16_4_);
        *(ulonglong *)&pTVar11->field_0x28 = CONCAT44(uStack_ec,uStack_f0);
        *(code **)&pTVar11->field_0x30 = local_e8;
        if (*(longlong *)&pTVar11->field_0x10 != 0) {
          local_108.State.Object = pTVar19;
        }
        *(TFutureState<void> **)&pTVar11->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar11->field_0x60 =
             local_158.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar11->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar11->field_0x58 = pTVar7;
        local_188 = pTVar19;
        pTVar19 = pTVar11;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar18.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar12 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar19,(wchar_t *)FVar18.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_178 = pFVar12;
      if ((pFVar12 == (FRunnableThread *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      iVar9 = (**(code **)(pFVar12->_padding_ + 0x28))(pFVar12);
      if ((iVar9 != 0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  case ThreadPool:
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar13 = operator_new(0x60);
      if (puVar13 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar13[1] = 0;
        *puVar13 = &___7__TAsyncQueuedWork_X__6B_;
        puVar13[2] = local_108.State.Object;
        puVar13[7] = local_e0;
        local_e0 = (bool *)0x0;
        *(undefined4 *)(puVar13 + 4) = local_108._16_4_;
        *(undefined4 *)((longlong)puVar13 + 0x24) = local_108._20_4_;
        *(undefined4 *)(puVar13 + 5) = uStack_f0;
        *(undefined4 *)((longlong)puVar13 + 0x2c) = uStack_ec;
        puVar13[6] = local_e8;
        if (puVar13[2] != 0) {
          local_108.State.Object = pTVar19;
        }
        puVar13[8] = local_1a8.State.Object;
        puVar13[9] = local_1a8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar13 + 10) = local_1a8.bFutureRetrieved;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar13,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(local_108.State.Object);
      pTVar19 = local_108.State.Object;
      pbVar16 = &local_108.bFutureRetrieved;
      if (local_e0 != (bool *)0x0) {
        pbVar16 = local_e0;
      }
      uVar14 = (**(code **)(*(longlong *)pbVar16 + 8))();
      (*(code *)pTVar19)(uVar14);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
        bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TFuture<void> *)(*pcVar4)();
          return pTVar10;
        }
      }
      pTVar19 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar8 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TFuture<void> *)(*pcVar4)();
        return pTVar10;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar19);
    }
    break;
  default:
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pTVar10 = (TFuture<void> *)(*pcVar4)();
      return pTVar10;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1a8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TFuture<void> *)(*pcVar4)();
    return pTVar10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.State.SharedReferenceCount.ReferenceController);
  if (local_108.State.Object != (TFutureState<void> *)0x0) {
    pbVar16 = &local_108.bFutureRetrieved;
    if (local_e0 != (bool *)0x0) {
      pbVar16 = local_e0;
    }
    (**(code **)(*(longlong *)pbVar16 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar17 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar17 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_> @ 14209b4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TFuture<void> * __cdecl
Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l46::<lambda_5>_>
          (TFuture<void> *__return_storage_ptr__,EAsyncExecution param_1,<lambda_5> *param_2,
          TUniqueFunction<void___cdecl(void)> *param_3)

{
  undefined1 *puVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  code *pcVar4;
  TFutureState<void> *pTVar5;
  FSharedReferencer<1> FVar6;
  TFutureState<FRunnableThread_*> *pTVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  TFuture<void> *pTVar11;
  FTSTicker *this;
  TFutureState<void> *pTVar12;
  FRunnableThread *pFVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  code **ppcVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  ForAnyElementType FVar19;
  TFutureState<void> *pTVar20;
  TFutureState<void> *pTVar21;
  undefined1 auStackY_1e8 [32];
  TPromise<void> local_1a8;
  undefined4 local_190;
  TFutureState<void> *local_188;
  FRunnableThread *local_180;
  FRunnableThread *local_178;
  TPromise<FRunnableThread_*> local_170;
  TPromise<FRunnableThread_*> local_158;
  FConstructor local_140;
  FString local_138;
  FString local_128;
  TWeakPtr<FTSTicker::FElement,1> local_118;
  undefined1 local_108 [16];
  undefined **local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int iStack_e4;
  undefined ***local_e0;
  TFutureState<void> *local_d8;
  undefined **local_c8;
  FScriptContainerElement *pFStack_c0;
  code *local_b8;
  undefined ***local_b0;
  TFutureState<void> *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pTVar20 = (TFutureState<void> *)0x0;
  local_190 = 0;
  local_f8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`46'::<lambda_5>,1,0>
              ::_vftable_;
  uStack_f0 = (param_2->DebugName).Data.AllocatorInstance.Data;
  (param_2->DebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8 = (param_2->DebugName).Data.ArrayNum;
  iStack_e4 = (param_2->DebugName).Data.ArrayMax;
  local_108._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>,void>
       ::Call;
  local_e0 = (undefined ***)0x0;
  (param_2->DebugName).Data.ArrayNum = 0;
  (param_2->DebugName).Data.ArrayMax = 0;
  TPromise<void>::TPromise<void>(&local_1a8,param_3);
  if ((local_1a8.bFutureRetrieved != false) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("!bFutureRetrieved",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x24d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  local_1a8.bFutureRetrieved = true;
  if ((local_1a8.State.Object == (TFutureState<void> *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x283,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  FVar6.ReferenceController = local_1a8.State.SharedReferenceCount.ReferenceController;
  pTVar5 = local_1a8.State.Object;
  if (local_1a8.State.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
    ;
    UNLOCK();
  }
  switch(param_1) {
  case TaskGraph:
  case TaskGraphMainThread:
    local_140.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    local_190 = 1;
    if (param_1 == TaskGraph) {
      local_190 = 0xff;
    }
    TGraphTask<TAsyncGraphTask<void>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TPromise<void>,enum_ENamedThreads::Type>
              (&local_140,(TUniqueFunction<void___cdecl(void)> *)&local_188,
               (TPromise<void> *)local_108,(Type *)&local_1a8);
    if (local_188 != (TFutureState<void> *)0x0) {
      LOCK();
      puVar1 = &local_188->field_0x30;
      iVar10 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)local_188)(local_188,1);
      }
    }
    break;
  case TaskGraphMainTick:
    this = FTSTicker::GetCoreTicker();
    local_b8 = (code *)CONCAT44(iStack_e4,local_e8);
    local_d8 = (TFutureState<void> *)local_108._0_8_;
    local_b0 = local_e0;
    local_a8 = local_1a8.State.Object;
    local_a0 = local_1a8.State.SharedReferenceCount.ReferenceController;
    local_c8 = local_f8;
    pFStack_c0 = uStack_f0;
    local_108._0_8_ = (TFutureState<void> *)0x0;
    local_1a8.State.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1a8.State.Object = (TFutureState<void> *)0x0;
    local_98 = local_1a8.bFutureRetrieved;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x60,0x10);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`46'::<lambda_5>_>'::`4'::<lambda_1>,1,1>
                         ::_vftable_;
    ppcVar16 = local_60 + 2;
    *ppcVar16 = (code *)local_d8;
    local_60[7] = (code *)local_b0;
    local_b0 = (undefined ***)0x0;
    local_60[4] = (code *)local_c8;
    local_60[5] = (code *)pFStack_c0;
    local_60[6] = local_b8;
    if (*ppcVar16 != (code *)0x0) {
      local_d8 = (TFutureState<void> *)0x0;
    }
    local_60[8] = (code *)local_a8;
    local_60[9] = (code *)local_a0;
    local_a0 = (TReferenceControllerBase<1> *)0x0;
    local_a8 = (TFutureState<void> *)0x0;
    *(undefined1 *)(local_60 + 10) = local_98;
    if (ppcVar16 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>,bool,float>
                    ::Call;
    }
    FTSTicker::AddTicker
              (this,&local_118,L"Async_TaskGraphMainTick",0.0,
               (TUniqueFunction<bool___cdecl(float)> *)local_88);
    if (local_118.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &(local_118.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar3 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((local_118.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_118.WeakReferenceCount.ReferenceController,1);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar16 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar16 = local_60;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (((local_a8 != (TFutureState<void> *)0x0) && (*(char *)((longlong)local_a8 + 0x68) == '\0'))
       && (bVar9 = FDebug::CheckVerifyFailedImpl2
                             ("State->IsComplete()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                              ,0x242,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a0);
    if (local_d8 != (TFutureState<void> *)0x0) {
      pppuVar17 = &local_c8;
      if (local_b0 != (undefined ***)0x0) {
        pppuVar17 = local_b0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    break;
  case Thread:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_170);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_170.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_170.State.Object;
        local_170.bFutureRetrieved = true;
        if ((local_170.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_170.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_170.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_170.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_170.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000001;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_138,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_138.Data.ArrayNum != 0) {
        FVar19.Data = local_138.Data.AllocatorInstance.Data;
      }
      pFVar13 = FRunnableThread::Create
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None);
      local_180 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14d,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x14e,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_170,&local_180);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (((local_170.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_170.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_170.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadIfForkSafe:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if ((bVar9) || (bVar9 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar9)) {
      TPromise<FRunnableThread_*>::TPromise<FRunnableThread_*>(&local_158);
      pTVar12 = operator_new(0x70);
      pTVar21 = pTVar20;
      if (pTVar12 != (TFutureState<void> *)0x0) {
        if ((local_158.bFutureRetrieved != false) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("!bFutureRetrieved",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x24d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        pTVar7 = local_158.State.Object;
        local_158.bFutureRetrieved = true;
        if ((local_158.State.Object == (TFutureState<FRunnableThread_*> *)0x0) &&
           (bVar9 = FDebug::CheckVerifyFailedImpl2
                              ("State.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                               ,0x283,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        if (local_158.State.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_158.State.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.State.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(undefined ***)pTVar12 = &___7__TAsyncRunnable_X__6B_;
        *(undefined8 *)&pTVar12->field_0x10 = local_108._0_8_;
        *(undefined ****)&pTVar12->field_0x38 = local_e0;
        *(undefined ***)&pTVar12->field_0x20 = local_f8;
        *(FScriptContainerElement **)&pTVar12->field_0x28 = uStack_f0;
        *(ulonglong *)&pTVar12->field_0x30 = CONCAT44(iStack_e4,local_e8);
        if (*(longlong *)&pTVar12->field_0x10 != 0) {
          local_108._0_8_ = pTVar20;
        }
        *(TFutureState<void> **)&pTVar12->field_0x40 = local_1a8.State.Object;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x48 =
             local_1a8.State.SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)&pTVar12->field_0x60 =
             local_158.State.SharedReferenceCount.ReferenceController;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        pTVar12->field_0x50 = local_1a8.bFutureRetrieved;
        *(TFutureState<FRunnableThread_*> **)&pTVar12->field_0x58 = pTVar7;
        local_188 = pTVar20;
        pTVar20 = (TFutureState<void> *)&DAT_00000002;
        pTVar21 = pTVar12;
      }
      if (pTVar20 != (TFutureState<void> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_188);
      }
      FAsyncThreadIndex::GetNext();
      FString::PrintfImpl(&local_128,L"TAsync %d");
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_128.Data.ArrayNum != 0) {
        FVar19.Data = local_128.Data.AllocatorInstance.Data;
      }
      pFVar13 = FForkProcessHelper::CreateForkableThread
                          ((FRunnable *)pTVar21,(wchar_t *)FVar19.Data,0,TPri_Normal,
                           0xffffffffffffffff,None,false);
      local_178 = pFVar13;
      if ((pFVar13 == (FRunnableThread *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x161,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      iVar10 = (**(code **)(pFVar13->_padding_ + 0x28))(pFVar13);
      if ((iVar10 != 0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("RunnableThread->GetThreadType() == FRunnableThread::ThreadType::Real",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x162,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      TPromise<FRunnableThread_*>::SetValue(&local_158,&local_178);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (((local_158.State.Object != (TFutureState<FRunnableThread_*> *)0x0) &&
          ((local_158.State.Object)->field_0x68 == '\0')) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("State->IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0x242,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.State.SharedReferenceCount.ReferenceController);
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  case ThreadPool:
    bVar9 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar9) {
      if ((GThreadPool == (FQueuedThreadPool *)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("GThreadPool != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                             ,0x16f,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      pcVar4 = *(code **)((longlong)*GThreadPool + 0x18);
      puVar14 = operator_new(0x60);
      if (puVar14 == (undefined8 *)0x0) {
        (*pcVar4)(GThreadPool,0,3);
      }
      else {
        puVar14[1] = 0;
        *puVar14 = &___7__TAsyncQueuedWork_X__6B_;
        puVar14[2] = local_108._0_8_;
        puVar14[7] = local_e0;
        *(undefined4 *)(puVar14 + 4) = local_f8._0_4_;
        *(undefined4 *)((longlong)puVar14 + 0x24) = local_f8._4_4_;
        *(undefined4 *)(puVar14 + 5) = (undefined4)uStack_f0;
        *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_f0._4_4_;
        puVar14[6] = CONCAT44(iStack_e4,local_e8);
        if (puVar14[2] != 0) {
          local_108._0_8_ = pTVar20;
        }
        puVar14[8] = local_1a8.State.Object;
        puVar14[9] = local_1a8.State.SharedReferenceCount.ReferenceController;
        *(bool *)(puVar14 + 10) = local_1a8.bFutureRetrieved;
        local_1a8.State.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_1a8.State.Object = (TFutureState<void> *)0x0;
        (*pcVar4)(GThreadPool,puVar14,3);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable((void *)local_108._0_8_);
      uVar8 = local_108._0_8_;
      pppuVar17 = &local_f8;
      if (local_e0 != (undefined ***)0x0) {
        pppuVar17 = local_e0;
      }
      uVar15 = (*(code *)(*pppuVar17)[1])();
      (*(code *)uVar8)(uVar15);
      if (local_1a8.State.Object == (TFutureState<void> *)0x0) {
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("State.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                           ,0x283,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
        bVar9 = FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<void> *)(*pcVar4)();
          return pTVar11;
        }
      }
      pTVar20 = local_1a8.State.Object;
      if ((*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 != (TAtomic<bool>)0x0) &&
         (bVar9 = FDebug::CheckVerifyFailedImpl2
                            ("!IsComplete()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                             ,0xcd,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        pTVar11 = (TFuture<void> *)(*pcVar4)();
        return pTVar11;
      }
      FFutureState::MarkComplete((FFutureState *)pTVar20);
    }
    break;
  default:
    bVar9 = FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Async.h"
                       ,0x187,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TFuture<void> *)(*pcVar4)();
      return pTVar11;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = pTVar5;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = FVar6.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (((local_1a8.State.Object != (TFutureState<void> *)0x0) &&
      (*(TAtomic<bool> *)&(local_1a8.State.Object)->field_0x68 == (TAtomic<bool>)0x0)) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<void> *)(*pcVar4)();
    return pTVar11;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.State.SharedReferenceCount.ReferenceController);
  if ((TFutureState<void> *)local_108._0_8_ != (TFutureState<void> *)0x0) {
    pppuVar17 = &local_f8;
    if (local_e0 != (undefined ***)0x0) {
      pppuVar17 = local_e0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  if (*(longlong *)param_3 != 0) {
    plVar18 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar18 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return __return_storage_ptr__;
}

// Cast<UClass,UObject> @ 14209c0e0

UClass * __cdecl Cast<UClass,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return (UClass *)param_1;
    }
  }
  return (UClass *)0x0;
}

// CastChecked<UFunction,UObject> @ 14209c130

UFunction * __cdecl CastChecked<UFunction,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UFunction>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UFunction_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UFunction *)param_1;
  }
  pFVar3 = GetTypeName<UFunction>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<ULinkerPlaceholderExportObject,UObject> @ 14209c1f0

ULinkerPlaceholderExportObject * __cdecl
CastChecked<ULinkerPlaceholderExportObject,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<ULinkerPlaceholderExportObject>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (ULinkerPlaceholderExportObject *)param_1;
  }
  pFVar3 = GetTypeName<ULinkerPlaceholderExportObject>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<FTextSourceSiteContext,FTextSourceSiteContext,int> @ 14209c2b0

void __cdecl
ConstructItems<FTextSourceSiteContext,FTextSourceSiteContext,int>
          (void *param_1,FTextSourceSiteContext *param_2,int param_3)

{
  undefined1 *puVar1;
  bool *pbVar2;
  
  if (param_3 != 0) {
    pbVar2 = &param_2->IsEditorOnly;
    puVar1 = (undefined1 *)((longlong)param_1 + 0x20);
    do {
      FString::FString((FString *)(puVar1 + -0x20),
                       (FString *)(puVar1 + (longlong)param_2 + (-0x20 - (longlong)param_1)));
      FString::FString((FString *)(puVar1 + -0x10),(FString *)(pbVar2 + -0x10));
      *puVar1 = *pbVar2;
      puVar1[1] = pbVar2[1];
      FLocMetadataObject::FLocMetadataObject
                ((FLocMetadataObject *)(puVar1 + 8),(FLocMetadataObject *)(pbVar2 + 8));
      FLocMetadataObject::FLocMetadataObject
                ((FLocMetadataObject *)(puVar1 + 0x58),(FLocMetadataObject *)(pbVar2 + 0x58));
      pbVar2 = pbVar2 + 200;
      puVar1 = puVar1 + 200;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FFieldVariant,FFieldVariant,int> @ 14209c350

void __cdecl
ConstructItems<FFieldVariant,FFieldVariant,int>(void *param_1,FFieldVariant *param_2,int param_3)

{
  FFieldVariant FVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      FVar1.Container = (FFieldObjectUnion)param_2->Container;
      ((FFieldObjectUnion *)(lVar2 + (longlong)param_2))->Unknown = (ulong64)FVar1.Container;
      if (((((ulonglong)FVar1.Container & 1) != 0) &&
          ((UObject *)((ulonglong)FVar1.Container & 0xfffffffffffffffe) != (UObject *)0x0)) &&
         (UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable((UObject *)((ulonglong)FVar1.Container & 0xfffffffffffffffe));
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FObjectExport,int> @ 14209c3b0

void __cdecl DefaultConstructItems<FObjectExport,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FObjectExport::FObjectExport(param_1);
    param_1 = (void *)((longlong)param_1 + 0x68);
  }
  return;
}

// DefaultConstructItems<FObjectImport,int> @ 14209c3f0

void __cdecl DefaultConstructItems<FObjectImport,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FObjectImport::FObjectImport(param_1);
    param_1 = (void *)((longlong)param_1 + 0x38);
  }
  return;
}

// DefaultConstructItems<FSoftObjectPath,int> @ 14209c430

void __cdecl DefaultConstructItems<FSoftObjectPath,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      puVar1[-1] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FPackageIndex,int> @ 14209c460

void __cdecl DefaultConstructItems<FPackageIndex,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2 << 2);
    return;
  }
  return;
}

// DestructItems<FCellExport,int> @ 14209c480

void __cdecl DestructItems<FCellExport,int>(FCellExport *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((void *)param_1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)param_1->_padding_);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FCellImport,int> @ 14209c4c0

void __cdecl DestructItems<FCellImport,int>(FCellImport *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((void *)param_1->_padding_ != (void *)0x0) {
      FMemory::Free((void *)param_1->_padding_);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FGatherableTextData,int> @ 14209c500

void __cdecl DestructItems<FGatherableTextData,int>(FGatherableTextData *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SourceData).SourceStringMetaData.Values.field_0x40;
    do {
      DestructItems<FTextSourceSiteContext,int>
                ((FTextSourceSiteContext *)puVar1[2],*(int *)(puVar1 + 3));
      if ((void *)puVar1[2] != (void *)0x0) {
        FMemory::Free((void *)puVar1[2]);
      }
      *(undefined4 *)(puVar1 + 1) = 0;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(puVar1 + -8));
      if ((void *)puVar1[-10] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-10]);
      }
      if ((void *)puVar1[-0xc] != (void *)0x0) {
        FMemory::Free((void *)puVar1[-0xc]);
      }
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int> @ 14209c590

void __cdecl
DestructItems<TArray<FPackageIndex,TSizedDefaultAllocator<32>_>,int>
          (TArray<FPackageIndex,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TFunction<bool___cdecl(double)>,int> @ 14209c5d0

void __cdecl
DestructItems<TFunction<bool___cdecl(double)>,int>
          (TFunction<bool___cdecl(double)> *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    do {
      if (plVar2[-2] != 0) {
        plVar1 = (longlong *)plVar2[3];
        if ((longlong *)plVar2[3] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindObjectFast<UClass> @ 14209e810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UClass * __cdecl
FindObjectFast<UClass>(UObject *param_1,FName param_2,EFindObjectFlags param_3,EObjectFlags param_4)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UClass_NoRegister();
  pUVar1 = (UClass *)StaticFindObjectFast(pUVar1,param_1,param_2,param_3,param_4,Borrowed);
  return pUVar1;
}

// FindObjectFast<UObject> @ 14209e870

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
FindObjectFast<UObject>
          (UObject *param_1,FName param_2,EFindObjectFlags param_3,EObjectFlags param_4)

{
  UClass *pUVar1;
  UObject *pUVar2;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  pUVar2 = StaticFindObjectFast(pUVar1,param_1,param_2,param_3,param_4,Borrowed);
  return pUVar2;
}

// GetTypeName<UFunction> @ 14209ef80

FString * __cdecl GetTypeName<UFunction>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_UFunction_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<ULinkerPlaceholderExportObject> @ 14209efc0

FString * __cdecl GetTypeName<ULinkerPlaceholderExportObject>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_> @ 14209f000

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  int iVar14;
  int iVar15;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar16;
  
  if (param_2 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar8 = (param_2 + -2) / 2;
  iVar9 = iVar8 * 2 + 1;
  iVar14 = iVar9;
  iVar15 = iVar8;
  do {
    while (param_2 <= iVar9) {
LAB_14209f106:
      if (iVar15 == 0) {
        iVar9 = param_2 + -1;
        lVar11 = (longlong)iVar9;
        if (0 < iVar9) {
          pTVar16 = param_1 + lVar11;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8);
            iVar14 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            uVar5 = *(undefined8 *)((param_1->ElementData).Pad + 0x10);
            uVar6 = *(undefined8 *)((param_1->ElementData).Pad + 0x18);
            param_1->_s_1 = pTVar16->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            uVar2 = *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18);
            *(undefined8 *)((param_1->ElementData).Pad + 0x10) =
                 *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10);
            *(undefined8 *)((param_1->ElementData).Pad + 0x18) = uVar2;
            pTVar16->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 8) = uVar4;
            *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x10) = uVar5;
            *(undefined8 *)((longlong)(pTVar16->ElementData).Pad + 0x18) = uVar6;
            if (1 < iVar9) {
              do {
                iVar15 = iVar14 * 2;
                iVar8 = iVar15 + 1;
                if (iVar15 + 2 < iVar9) {
                  if (param_1[(longlong)iVar15 + 2]._s_1.PrevFreeIndex <
                      param_1[iVar8]._s_1.PrevFreeIndex) {
                    iVar8 = iVar15;
                  }
                  iVar8 = iVar8 + 1;
                }
                pTVar12 = param_1 + iVar8;
                pTVar13 = param_1 + iVar14;
                if ((pTVar12->_s_1).PrevFreeIndex <= (pTVar13->_s_1).PrevFreeIndex) break;
                uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
                TVar3 = pTVar13->_s_1;
                uVar4 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8);
                uVar5 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10);
                uVar6 = *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18);
                pTVar13->_s_1 = pTVar12->_s_1;
                *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 8) = uVar2;
                uVar2 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
                *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x10) =
                     *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
                *(undefined8 *)((longlong)(pTVar13->ElementData).Pad + 0x18) = uVar2;
                pTVar12->_s_1 = TVar3;
                *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar4;
                *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar5;
                *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar6;
                iVar14 = iVar8;
              } while (iVar8 * 2 + 1 < iVar9);
            }
            iVar9 = iVar9 + -1;
            lVar11 = lVar11 + -1;
            pTVar16 = pTVar16 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar8 = iVar15 + -1;
      iVar9 = iVar14 + -2;
      iVar14 = iVar9;
      iVar15 = iVar8;
    }
    iVar9 = iVar8 * 2;
    iVar10 = iVar9 + 1;
    if (iVar9 + 2 < param_2) {
      if (param_1[(longlong)iVar9 + 2]._s_1.PrevFreeIndex < param_1[iVar10]._s_1.PrevFreeIndex) {
        iVar10 = iVar9;
      }
      iVar10 = iVar10 + 1;
    }
    pTVar16 = param_1 + iVar10;
    pTVar12 = param_1 + iVar8;
    if ((pTVar16->_s_1).PrevFreeIndex <= (pTVar12->_s_1).PrevFreeIndex) goto LAB_14209f106;
    uVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 8);
    iVar9 = iVar10 * 2 + 1;
    TVar3 = pTVar12->_s_1;
    uVar4 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8);
    uVar5 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10);
    uVar6 = *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18);
    pTVar12->_s_1 = pTVar16->_s_1;
    *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 8) = uVar2;
    uVar2 = *(undefined8 *)((pTVar16->ElementData).Pad + 0x18);
    *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x10) =
         *(undefined8 *)((pTVar16->ElementData).Pad + 0x10);
    *(undefined8 *)((longlong)(pTVar12->ElementData).Pad + 0x18) = uVar2;
    pTVar16->_s_1 = TVar3;
    *(undefined8 *)((pTVar16->ElementData).Pad + 8) = uVar4;
    *(undefined8 *)((pTVar16->ElementData).Pad + 0x10) = uVar5;
    *(undefined8 *)((pTVar16->ElementData).Pad + 0x18) = uVar6;
    iVar8 = iVar10;
  } while( true );
}

// InternalConstructor<UInterface> @ 14209f200

void __cdecl InternalConstructor<UInterface>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UInterface__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UInterface> @ 14209f230

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_> @ 14209f2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>_s_1 TVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> **ppTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *pTVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_338;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_328;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar15 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar15;
    memset(local_310,0,0x2e8);
    ppTVar9 = &local_328;
    do {
      pTVar12 = ppTVar9[1];
      pTVar14 = *ppTVar9;
      pTVar1 = ppTVar9[2];
      iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 5) + 1;
      local_338._0_4_ = (int)pTVar1;
      pTVar13 = pTVar14;
      if ((int)local_338 != 0) {
LAB_14209f390:
        if (8 < iVar7) {
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
          pTVar10 = pTVar12 + 1;
          pTVar14 = pTVar13 + iVar7 / 2;
          TVar3 = pTVar14->_s_1;
          uVar4 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
          uVar5 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10);
          uVar6 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18);
          pTVar14->_s_1 = pTVar13->_s_1;
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar2;
          uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
          *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 0x18) = uVar2;
          pTVar13->_s_1 = TVar3;
          *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar4;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = uVar5;
          *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar6;
          pTVar14 = pTVar13;
LAB_14209f3d0:
          pTVar8 = pTVar14;
          pTVar14 = pTVar8 + 1;
          if (pTVar14 <= pTVar12) goto code_r0x00014209f3d9;
          goto LAB_14209f3e0;
        }
        for (; pTVar14 = pTVar13, pTVar1 = pTVar13, pTVar13 < pTVar12; pTVar12 = pTVar12 + -1) {
          while (pTVar1 = pTVar1 + 1, pTVar1 <= pTVar12) {
            if ((pTVar14->_s_1).PrevFreeIndex < (pTVar1->_s_1).PrevFreeIndex) {
              pTVar14 = pTVar1;
            }
          }
          TVar3 = pTVar14->_s_1;
          uVar2 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
          uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x10);
          uVar5 = *(undefined8 *)((pTVar14->ElementData).Pad + 0x18);
          uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 8);
          pTVar14->_s_1 = pTVar12->_s_1;
          *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar6;
          uVar6 = *(undefined8 *)((pTVar12->ElementData).Pad + 0x18);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x10) =
               *(undefined8 *)((pTVar12->ElementData).Pad + 0x10);
          *(undefined8 *)((pTVar14->ElementData).Pad + 0x18) = uVar6;
          pTVar12->_s_1 = TVar3;
          *(undefined8 *)((pTVar12->ElementData).Pad + 8) = uVar2;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x10) = uVar4;
          *(undefined8 *)((pTVar12->ElementData).Pad + 0x18) = uVar5;
        }
        goto LAB_14209f4c5;
      }
LAB_14209f4b4:
      local_338 = pTVar1;
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>::FKeyComparisonClass<TLess<FPackageIndex>_>_>_>_>
                (pTVar14,iVar7,param_3,param_4);
LAB_14209f4c5:
      ppTVar9 = ppTVar9 + -3;
    } while (&local_328 <= ppTVar9);
  }
  return;
code_r0x00014209f3d9:
  if ((pTVar14->_s_1).PrevFreeIndex <= (pTVar13->_s_1).PrevFreeIndex) goto LAB_14209f3d0;
LAB_14209f3e0:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar13) break;
  } while ((pTVar13->_s_1).PrevFreeIndex <= (pTVar10->_s_1).PrevFreeIndex);
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -0x18);
  if (pTVar14 <= pTVar10) {
    TVar3 = pTVar14->_s_1;
    uVar4 = *(undefined8 *)((longlong)pTVar8 + 0x28);
    uVar5 = *(undefined8 *)((longlong)pTVar8 + 0x30);
    uVar6 = *(undefined8 *)((longlong)pTVar8 + 0x38);
    pTVar14->_s_1 = pTVar10->_s_1;
    *(undefined8 *)((longlong)pTVar8 + 0x28) = uVar2;
    uVar2 = *(undefined8 *)((longlong)pTVar11 + -8);
    *(undefined8 *)((longlong)pTVar8 + 0x30) = *(undefined8 *)((longlong)pTVar11 + -0x10);
    *(undefined8 *)((longlong)pTVar8 + 0x38) = uVar2;
    pTVar10->_s_1 = TVar3;
    *(undefined8 *)((longlong)pTVar11 + -0x18) = uVar4;
    *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
    *(undefined8 *)((longlong)pTVar11 + -8) = uVar6;
    goto LAB_14209f3d0;
  }
  TVar3 = pTVar13->_s_1;
  uVar4 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
  uVar5 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x10);
  uVar6 = *(undefined8 *)((pTVar13->ElementData).Pad + 0x18);
  pTVar13->_s_1 = pTVar10->_s_1;
  *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar2;
  local_338._0_4_ = (int)local_338 + -1;
  uVar2 = *(undefined8 *)((longlong)pTVar11 + -8);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x10) = *(undefined8 *)((longlong)pTVar11 + -0x10);
  *(undefined8 *)((pTVar13->ElementData).Pad + 0x18) = uVar2;
  pTVar10->_s_1 = TVar3;
  *(undefined8 *)((longlong)pTVar11 + -0x18) = uVar4;
  *(undefined8 *)((longlong)pTVar11 + -0x10) = uVar5;
  *(undefined8 *)((longlong)pTVar11 + -8) = uVar6;
  if ((longlong)((longlong)pTVar10 + (-0x20 - (longlong)pTVar13) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pTVar12 - (longlong)pTVar14 & 0xffffffffffffffe0U)) {
    if (pTVar14 < pTVar12) {
      *ppTVar9 = pTVar14;
      ppTVar9[1] = pTVar12;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar10 <= pTVar13 + 1) goto LAB_14209f4c5;
    pTVar12 = pTVar11 + -2;
    pTVar14 = pTVar13;
  }
  else {
    if (pTVar13 + 1 < pTVar10) {
      *ppTVar9 = pTVar13;
      ppTVar9[1] = pTVar11 + -2;
      *(int *)(ppTVar9 + 2) = (int)local_338;
      ppTVar9 = ppTVar9 + 3;
    }
    if (pTVar12 <= pTVar14) goto LAB_14209f4c5;
  }
  iVar7 = (int)((longlong)pTVar12 - (longlong)pTVar14 >> 5) + 1;
  pTVar13 = pTVar14;
  if ((int)local_338 == 0) goto LAB_14209f4b4;
  goto LAB_14209f390;
}

// IsObjectPtrEqual<UClass,UClass_*,0> @ 14209f5b0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UClass,UClass_*,0>(TObjectPtr<UClass> *param_1,UClass **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UClass *)0x0) {
    return *param_2 == (UClass *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// IsObjectPtrEqual<UFunction,UFunction_*,0> @ 14209f5d0

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UFunction,UFunction_*,0>
          (TObjectPtr<UFunction> *param_1,UFunction **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UFunction *)0x0) {
    return *param_2 == (UFunction *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// MakeShared<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> @ 14209f5f0

TSharedRef<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1> * __cdecl
MakeShared<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          (TSharedRef<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
           *__return_storage_ptr__,
          TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1)

{
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this;
  TSharedRef<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1> *pTVar5;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_58;
  
  pTVar4 = operator_new(400);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSharedLinkerInstancingContextData *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSharedLinkerInstancingContextData_FLinkerInstancingContext___00_SharedPointerInternals__6B_
    ;
    this = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
           TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&local_58,param_1);
    pTVar4[1]._padding_ = 0;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[4]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar4[4]._padding_ + 4) = 0x80;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[5].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar4[6]._padding_ = 0;
    *(undefined1 *)&pTVar4[6].SharedReferenceCount = 0;
    pTVar4[7]._padding_ = 0;
    pTVar4[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[8]._padding_ = 0;
    pTVar4[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[9]._padding_ = 0;
    pTVar4[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[9].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar4[10]._padding_ = 0x100;
    pTVar4[0xb]._padding_ = 0;
    pTVar4[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0xe]._padding_ = 0;
    pTVar4[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x10]._padding_ = 0;
    pTVar4[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x10].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar4[0x11]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar4[0x11]._padding_ + 4) = 0;
    pTVar4[0x12]._padding_ = 0;
    pTVar4[0x12].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined8 *)
     &((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pTVar4 + 0x13))->Elements = 0;
    pTVar4[0x13].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x13].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[0x15]._padding_ = 0;
    pTVar4[0x15].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[0x15].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar4[0x16]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar4[0x16]._padding_ + 4) = 0;
    pTVar4[0x17]._padding_ = 0;
    pTVar4[0x17].SharedReferenceCount = (atomic<int>)0x0;
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
              ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)(pTVar4 + 0x13),this);
    *(undefined1 *)&pTVar4[0x18]._padding_ = 1;
    this->HashSize = 0;
    FVar1 = (this->Hash).SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&this->Elements);
    __return_storage_ptr__->Object = (FSharedLinkerInstancingContextData *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if ((FSharedLinkerInstancingContextData *)(pTVar4 + 1) ==
        (FSharedLinkerInstancingContextData *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1> *)
                 (*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// NewIntrusiveReferenceController<1,FLinkerInstancingContext::FSharedLinkerInstancingContextData,FLinkerInstancingContext::FSharedLinkerInstancingContextData_&> @ 14209f7c0

TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1> *
__cdecl SharedPointerInternals::
        NewIntrusiveReferenceController<1,FLinkerInstancingContext::FSharedLinkerInstancingContextData,FLinkerInstancingContext::FSharedLinkerInstancingContextData_&>
                  (FSharedLinkerInstancingContextData *param_1)

{
  TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
  *this;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *this_00;
  longlong lVar1;
  undefined8 *puVar2;
  TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
  *pTVar3;
  undefined8 *puVar4;
  
  pTVar3 = ::operator_new(400);
  if (pTVar3 != (TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
                 *)0x0) {
    *(undefined4 *)&pTVar3->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar3->_padding_ + 4) = 1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSharedLinkerInstancingContextData_FLinkerInstancingContext___00_SharedPointerInternals__6B_
    ;
    (pTVar3->ObjectStorage).Pad[0] = '\0';
    (pTVar3->ObjectStorage).Pad[1] = '\0';
    (pTVar3->ObjectStorage).Pad[2] = '\0';
    (pTVar3->ObjectStorage).Pad[3] = '\0';
    (pTVar3->ObjectStorage).Pad[4] = '\0';
    (pTVar3->ObjectStorage).Pad[5] = '\0';
    (pTVar3->ObjectStorage).Pad[6] = '\0';
    (pTVar3->ObjectStorage).Pad[7] = '\0';
    (pTVar3->ObjectStorage).Pad[8] = '\0';
    (pTVar3->ObjectStorage).Pad[9] = '\0';
    (pTVar3->ObjectStorage).Pad[10] = '\0';
    (pTVar3->ObjectStorage).Pad[0xb] = '\0';
    (pTVar3->ObjectStorage).Pad[0xc] = '\0';
    (pTVar3->ObjectStorage).Pad[0xd] = '\0';
    (pTVar3->ObjectStorage).Pad[0xe] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf] = '\0';
    (pTVar3->ObjectStorage).Pad[0x10] = '\0';
    (pTVar3->ObjectStorage).Pad[0x11] = '\0';
    (pTVar3->ObjectStorage).Pad[0x12] = '\0';
    (pTVar3->ObjectStorage).Pad[0x13] = '\0';
    (pTVar3->ObjectStorage).Pad[0x14] = '\0';
    (pTVar3->ObjectStorage).Pad[0x15] = '\0';
    (pTVar3->ObjectStorage).Pad[0x16] = '\0';
    (pTVar3->ObjectStorage).Pad[0x17] = '\0';
    (pTVar3->ObjectStorage).Pad[0x28] = '\0';
    (pTVar3->ObjectStorage).Pad[0x29] = '\0';
    (pTVar3->ObjectStorage).Pad[0x2a] = '\0';
    (pTVar3->ObjectStorage).Pad[0x2b] = '\0';
    (pTVar3->ObjectStorage).Pad[0x2c] = '\0';
    (pTVar3->ObjectStorage).Pad[0x2d] = '\0';
    (pTVar3->ObjectStorage).Pad[0x2e] = '\0';
    (pTVar3->ObjectStorage).Pad[0x2f] = '\0';
    (pTVar3->ObjectStorage).Pad[0x30] = '\0';
    (pTVar3->ObjectStorage).Pad[0x31] = '\0';
    (pTVar3->ObjectStorage).Pad[0x32] = '\0';
    (pTVar3->ObjectStorage).Pad[0x33] = '\0';
    (pTVar3->ObjectStorage).Pad[0x34] = 0x80;
    (pTVar3->ObjectStorage).Pad[0x35] = '\0';
    (pTVar3->ObjectStorage).Pad[0x36] = '\0';
    (pTVar3->ObjectStorage).Pad[0x37] = '\0';
    (pTVar3->ObjectStorage).Pad[0x38] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x39] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x3a] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x3b] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x3c] = '\0';
    (pTVar3->ObjectStorage).Pad[0x3d] = '\0';
    (pTVar3->ObjectStorage).Pad[0x3e] = '\0';
    (pTVar3->ObjectStorage).Pad[0x3f] = '\0';
    (pTVar3->ObjectStorage).Pad[0x48] = '\0';
    (pTVar3->ObjectStorage).Pad[0x49] = '\0';
    (pTVar3->ObjectStorage).Pad[0x4a] = '\0';
    (pTVar3->ObjectStorage).Pad[0x4b] = '\0';
    (pTVar3->ObjectStorage).Pad[0x4c] = '\0';
    (pTVar3->ObjectStorage).Pad[0x4d] = '\0';
    (pTVar3->ObjectStorage).Pad[0x4e] = '\0';
    (pTVar3->ObjectStorage).Pad[0x4f] = '\0';
    (pTVar3->ObjectStorage).Pad[0x50] = '\0';
    (pTVar3->ObjectStorage).Pad[0x51] = '\0';
    (pTVar3->ObjectStorage).Pad[0x52] = '\0';
    (pTVar3->ObjectStorage).Pad[0x53] = '\0';
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    operator=((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)((pTVar3->ObjectStorage).Pad + 8),
              (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)&param_1->InstancedPackageMap);
    (pTVar3->ObjectStorage).Pad[0x58] = (param_1->InstancedPackageMap).InstanceMappingDirection;
    ::FString::FString((FString *)((pTVar3->ObjectStorage).Pad + 0x60),
                       &(param_1->InstancedPackageMap).GeneratedPackagesFolder);
    ::FString::FString((FString *)((pTVar3->ObjectStorage).Pad + 0x70),
                       &(param_1->InstancedPackageMap).InstancedPackagePrefix);
    ::FString::FString((FString *)((pTVar3->ObjectStorage).Pad + 0x80),
                       &(param_1->InstancedPackageMap).InstancedPackageSuffix);
    (pTVar3->ObjectStorage).Pad[0x90] = (param_1->InstancedPackageMap).bIsInstanced;
    (pTVar3->ObjectStorage).Pad[0x91] = (param_1->InstancedPackageMap).bEnableNonEditorPath;
    lVar1 = *(longlong *)&param_1->InstancedPackageMapFunc;
    *(longlong *)((pTVar3->ObjectStorage).Pad + 0xa0) = lVar1;
    (pTVar3->ObjectStorage).Pad[200] = '\0';
    (pTVar3->ObjectStorage).Pad[0xc9] = '\0';
    (pTVar3->ObjectStorage).Pad[0xca] = '\0';
    (pTVar3->ObjectStorage).Pad[0xcb] = '\0';
    (pTVar3->ObjectStorage).Pad[0xcc] = '\0';
    (pTVar3->ObjectStorage).Pad[0xcd] = '\0';
    (pTVar3->ObjectStorage).Pad[0xce] = '\0';
    (pTVar3->ObjectStorage).Pad[0xcf] = '\0';
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)&(param_1->InstancedPackageMapFunc).field_0x28;
      puVar4 = (undefined8 *)&(param_1->InstancedPackageMapFunc).field_0x10;
      if (puVar2 != (undefined8 *)0x0) {
        puVar4 = puVar2;
      }
      (**(code **)*puVar4)();
    }
    this = (TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
            *)((pTVar3->ObjectStorage).Pad + 0xd0);
    *(undefined8 *)&this->Elements = 0;
    (pTVar3->ObjectStorage).Pad[0xd8] = '\0';
    (pTVar3->ObjectStorage).Pad[0xd9] = '\0';
    (pTVar3->ObjectStorage).Pad[0xda] = '\0';
    (pTVar3->ObjectStorage).Pad[0xdb] = '\0';
    (pTVar3->ObjectStorage).Pad[0xdc] = '\0';
    (pTVar3->ObjectStorage).Pad[0xdd] = '\0';
    (pTVar3->ObjectStorage).Pad[0xde] = '\0';
    (pTVar3->ObjectStorage).Pad[0xdf] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf0] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf1] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf2] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf3] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf4] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf5] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf6] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf7] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf8] = '\0';
    (pTVar3->ObjectStorage).Pad[0xf9] = '\0';
    (pTVar3->ObjectStorage).Pad[0xfa] = '\0';
    (pTVar3->ObjectStorage).Pad[0xfb] = '\0';
    (pTVar3->ObjectStorage).Pad[0xfc] = 0x80;
    (pTVar3->ObjectStorage).Pad[0xfd] = '\0';
    (pTVar3->ObjectStorage).Pad[0xfe] = '\0';
    (pTVar3->ObjectStorage).Pad[0xff] = '\0';
    (pTVar3->ObjectStorage).Pad[0x100] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x101] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x102] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x103] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x104] = '\0';
    (pTVar3->ObjectStorage).Pad[0x105] = '\0';
    (pTVar3->ObjectStorage).Pad[0x106] = '\0';
    (pTVar3->ObjectStorage).Pad[0x107] = '\0';
    (pTVar3->ObjectStorage).Pad[0x110] = '\0';
    (pTVar3->ObjectStorage).Pad[0x111] = '\0';
    (pTVar3->ObjectStorage).Pad[0x112] = '\0';
    (pTVar3->ObjectStorage).Pad[0x113] = '\0';
    (pTVar3->ObjectStorage).Pad[0x114] = '\0';
    (pTVar3->ObjectStorage).Pad[0x115] = '\0';
    (pTVar3->ObjectStorage).Pad[0x116] = '\0';
    (pTVar3->ObjectStorage).Pad[0x117] = '\0';
    (pTVar3->ObjectStorage).Pad[0x118] = '\0';
    (pTVar3->ObjectStorage).Pad[0x119] = '\0';
    (pTVar3->ObjectStorage).Pad[0x11a] = '\0';
    (pTVar3->ObjectStorage).Pad[0x11b] = '\0';
    TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
    ::operator=(this,(TSet<TTuple<FTopLevelAssetPath,FTopLevelAssetPath>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,FTopLevelAssetPath,0>,FDefaultSetAllocator>
                      *)&param_1->PathMapping);
    this_00 = (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
              ((pTVar3->ObjectStorage).Pad + 0x120);
    *(undefined8 *)&this_00->Elements = 0;
    (pTVar3->ObjectStorage).Pad[0x128] = '\0';
    (pTVar3->ObjectStorage).Pad[0x129] = '\0';
    (pTVar3->ObjectStorage).Pad[0x12a] = '\0';
    (pTVar3->ObjectStorage).Pad[299] = '\0';
    (pTVar3->ObjectStorage).Pad[300] = '\0';
    (pTVar3->ObjectStorage).Pad[0x12d] = '\0';
    (pTVar3->ObjectStorage).Pad[0x12e] = '\0';
    (pTVar3->ObjectStorage).Pad[0x12f] = '\0';
    (pTVar3->ObjectStorage).Pad[0x140] = '\0';
    (pTVar3->ObjectStorage).Pad[0x141] = '\0';
    (pTVar3->ObjectStorage).Pad[0x142] = '\0';
    (pTVar3->ObjectStorage).Pad[0x143] = '\0';
    (pTVar3->ObjectStorage).Pad[0x144] = '\0';
    (pTVar3->ObjectStorage).Pad[0x145] = '\0';
    (pTVar3->ObjectStorage).Pad[0x146] = '\0';
    (pTVar3->ObjectStorage).Pad[0x147] = '\0';
    (pTVar3->ObjectStorage).Pad[0x148] = '\0';
    (pTVar3->ObjectStorage).Pad[0x149] = '\0';
    (pTVar3->ObjectStorage).Pad[0x14a] = '\0';
    (pTVar3->ObjectStorage).Pad[0x14b] = '\0';
    (pTVar3->ObjectStorage).Pad[0x14c] = 0x80;
    (pTVar3->ObjectStorage).Pad[0x14d] = '\0';
    (pTVar3->ObjectStorage).Pad[0x14e] = '\0';
    (pTVar3->ObjectStorage).Pad[0x14f] = '\0';
    (pTVar3->ObjectStorage).Pad[0x150] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x151] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x152] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x153] = 0xff;
    (pTVar3->ObjectStorage).Pad[0x154] = '\0';
    (pTVar3->ObjectStorage).Pad[0x155] = '\0';
    (pTVar3->ObjectStorage).Pad[0x156] = '\0';
    (pTVar3->ObjectStorage).Pad[0x157] = '\0';
    (pTVar3->ObjectStorage).Pad[0x160] = '\0';
    (pTVar3->ObjectStorage).Pad[0x161] = '\0';
    (pTVar3->ObjectStorage).Pad[0x162] = '\0';
    (pTVar3->ObjectStorage).Pad[0x163] = '\0';
    (pTVar3->ObjectStorage).Pad[0x164] = '\0';
    (pTVar3->ObjectStorage).Pad[0x165] = '\0';
    (pTVar3->ObjectStorage).Pad[0x166] = '\0';
    (pTVar3->ObjectStorage).Pad[0x167] = '\0';
    (pTVar3->ObjectStorage).Pad[0x168] = '\0';
    (pTVar3->ObjectStorage).Pad[0x169] = '\0';
    (pTVar3->ObjectStorage).Pad[0x16a] = '\0';
    (pTVar3->ObjectStorage).Pad[0x16b] = '\0';
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=(this_00,&param_1->Tags);
    *(atomic<bool> *)((pTVar3->ObjectStorage).Pad + 0x170) =
         param_1->bSoftObjectPathRemappingEnabled;
    return pTVar3;
  }
  return (TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
          *)0x0;
}

// NewObject<UObjectRedirector> @ 14209f990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObjectRedirector * __cdecl
NewObject<UObjectRedirector>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UObjectRedirector *pUVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UObjectRedirector::GetPrivateStaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UObjectRedirector *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// WriteToString<256,wchar_t_const_(&)[22],FName> @ 1420a12f0

TStringBuilderWithBuffer<wchar_t,256> * __cdecl
WriteToString<256,wchar_t_const_(&)[22],FName>
          (TStringBuilderWithBuffer<wchar_t,256> *__return_storage_ptr__,wchar_t (*param_1) [22],
          FName *param_2)

{
  int iVar1;
  size_t sVar2;
  TStringBuilderBase<wchar_t> *pTVar3;
  
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  iVar1 = 0;
  if (param_1 != (wchar_t (*) [22])0x0) {
    sVar2 = wcslen(*param_1);
    iVar1 = (int)sVar2;
  }
  pTVar3 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,*param_1,iVar1);
  FName::AppendString(param_2,pTVar3);
  return __return_storage_ptr__;
}

// ~<lambda_1> @ 1420a3250

void __thiscall
`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001420a32b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1420a32d0

void __thiscall
`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001420a3337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1420a3350

void __thiscall
`Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001420a33b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1420a33d0

void __thiscall
`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001420a3437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1420a3450

void __thiscall
`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001420a34b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1420a34d0

void __thiscall
`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001420a3537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1420a3550

void __thiscall
`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001420a35b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1420a35d0

void __thiscall
`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001420a3637. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1420a3650

void __thiscall
`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001420a36b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~<lambda_1> @ 1420a36d0

void __thiscall
`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>_>'::__l4::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
  if ((*(longlong *)((longlong)this + 0x30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x30) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if (*(longlong *)this != 0) {
    plVar3 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x28);
    }
                    /* WARNING: Could not recover jumptable at 0x0001420a3737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1420a38a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l5::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`5'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1420a38c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLinkerLoad::UpdateFromPackageFileSummary_::__l23::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::`23'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1> @ 1420a38e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLinkerLoad::SerializePackageTrailer_::__l24::<lambda_1>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageTrailer'::`24'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>,1,1> @ 1420a3900

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l8::<lambda_2>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`8'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>,1,1> @ 1420a3920

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLinkerLoad::UpdateFromPackageFileSummary_::__l34::<lambda_2>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::`34'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>,1,1> @ 1420a3940

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l27::<lambda_3>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`27'::<lambda_3>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>,1,1> @ 1420a3960

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l43::<lambda_4>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`43'::<lambda_4>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>,1,1> @ 1420a3980

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l46::<lambda_5>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`46'::<lambda_5>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>_>'::__l4::<lambda_1>,1,1> @ 1420a39a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l52::<lambda_6>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`52'::<lambda_6>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>_>'::__l4::<lambda_1>,1,1> @ 1420a39c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>_>'::__l4::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_Async<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l58::<lambda_7>_>_::__l4::<lambda_1>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`58'::<lambda_7>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  return;
}

// ~TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>,1,0> @ 1420a39e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l5::<lambda_1>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>,1,0> @ 1420a3a00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FLinkerLoad::UpdateFromPackageFileSummary_::__l23::<lambda_1>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::`23'::<lambda_1>,1,0>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>,1,0> @ 1420a3a20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FLinkerLoad::SerializePackageTrailer_::__l24::<lambda_1>,1,0>(void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageTrailer'::`24'::<lambda_1>,1,0>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`FLinkerLoad::CreateExport'::__l241::<lambda_1>,0,1> @ 1420a3a40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::CreateExport'::__l241::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FLinkerLoad::CreateExport_::__l241::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::CreateExport'::`241'::<lambda_1>,0,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>,1,1> @ 1420a3a60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l8::<lambda_2>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`8'::<lambda_2>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>,1,0> @ 1420a3a80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FLinkerLoad::UpdateFromPackageFileSummary_::__l34::<lambda_2>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::`34'::<lambda_2>,1,0>::
        _vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>,1,1> @ 1420a3aa0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>,1,1>::
~TFunction_OwnedObject<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l27::<lambda_3>,1,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`27'::<lambda_3>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>,1,1> @ 1420a3ae0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>,1,1>::
~TFunction_OwnedObject<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l43::<lambda_4>,1,1>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`43'::<lambda_4>,1,1>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>,1,0> @ 1420a3b00

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>,1,0>::
~TFunction_OwnedObject<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l46::<lambda_5>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`46'::<lambda_5>,1,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>,1,0> @ 1420a3b20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>,1,0>::
~TFunction_OwnedObject<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l52::<lambda_6>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`52'::<lambda_6>,1,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
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

// ~TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>,1,0> @ 1420a3b40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>,1,0>::
~TFunction_OwnedObject<_FLinkerLoad::SerializePackageFileSummaryInternal_::__l58::<lambda_7>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`58'::<lambda_7>,1,0>
        ::_vftable_;
  pvVar1 = *(void **)((longlong)this + 8);
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

// operator<< @ 1420a53e0

FArchive * __cdecl operator<<(FArchive *param_1,FCompressedChunk *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    param_2->UncompressedOffset = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->UncompressedSize;
  puVar1 = &param_1->field_0x2a;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->CompressedOffset;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar1 & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar2 = &param_2->CompressedSize;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar2 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((*puVar1 & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
  return param_1;
}

// operator<< @ 1420a5540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FPackageIndex *param_2)

{
  FArchive *this;
  int *piVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  this = *(FArchive **)(**(longlong **)FVar2 + 8);
  piVar1 = (int *)**(undefined8 **)&this->field_0x8;
  if ((int *)(*(undefined8 **)&this->field_0x8)[1] < piVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,(uint *)param_2);
    }
  }
  else {
    param_2->Index = *piVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// operator<< @ 1420a5600

void __cdecl operator<<(FStructuredArchiveSlot param_1,FCompressedChunk *param_2)

{
  FArchive *pFVar1;
  int *piVar2;
  int *piVar3;
  
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar2 = (int *)**(undefined8 **)&pFVar1->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar1->field_0x8)[1] < piVar2 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)param_2);
    }
  }
  else {
    param_2->UncompressedOffset = *piVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  piVar2 = &param_2->UncompressedSize;
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar3 = (int *)**(undefined8 **)&pFVar1->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar1->field_0x8)[1] < piVar3 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  piVar2 = &param_2->CompressedOffset;
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar3 = (int *)**(undefined8 **)&pFVar1->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar1->field_0x8)[1] < piVar3 + 1) {
    if ((pFVar1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
  }
  piVar2 = &param_2->CompressedSize;
  pFVar1 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar3 = (int *)**(undefined8 **)&pFVar1->field_0x8;
  if (piVar3 + 1 <= (int *)(*(undefined8 **)&pFVar1->field_0x8)[1]) {
    *piVar2 = *piVar3;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
    return;
  }
  if ((pFVar1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001420a5740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,piVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)piVar2);
  return;
}

// operator== @ 1420a5e90

bool __cdecl operator==(FGatherableTextData *param_1,FGatherableTextData *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (param_1->NamespaceName).Data.ArrayNum;
  iVar1 = (param_2->NamespaceName).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->NamespaceName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->NamespaceName).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
      goto LAB_1420a5ec3;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
LAB_1420a5ec3:
    if (!bVar3) {
      return false;
    }
  }
  iVar2 = (param_1->SourceData).SourceString.Data.ArrayNum;
  iVar1 = (param_2->SourceData).SourceString.Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_1420a5ef6;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->SourceData).SourceString.Data.AllocatorInstance.Data,
                       (wchar_t *)(param_2->SourceData).SourceString.Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_1420a5ef6:
  bVar3 = FLocMetadataObject::IsExactMatch
                    (&(param_1->SourceData).SourceStringMetaData,
                     &(param_2->SourceData).SourceStringMetaData);
  if ((bVar3) && ((param_1->SourceSiteContexts).ArrayNum == (param_2->SourceSiteContexts).ArrayNum))
  {
    return true;
  }
  return false;
}

// operator== @ 1420a5f30

bool __cdecl operator==(FLinkerExportObject *param_1,FLinkerExportObject *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FString *pFVar9;
  FString *pFVar10;
  FName FVar11;
  FName FVar12;
  bool bVar13;
  undefined4 local_res8 [2];
  undefined1 local_res10 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res8[0] = 0;
  if (param_1->Export->_padding_ == param_2->Export->_padding_) {
    pFVar9 = FLinker::GetPathName
                       (param_2->Linker,&local_28,(FPackageIndex)param_2->Export->_padding_);
    pFVar10 = FLinker::GetPathName
                        (param_1->Linker,&local_38,(FPackageIndex)param_1->Export->_padding_);
    iVar8 = (pFVar9->Data).ArrayNum;
    bVar7 = true;
    bVar6 = true;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    iVar1 = (pFVar10->Data).ArrayNum;
    if (iVar1 == iVar8) {
      if (1 < iVar1) {
        iVar8 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
        bVar13 = iVar8 == 0;
        goto LAB_1420a5fba;
      }
    }
    else {
      bVar13 = iVar8 + iVar1 == 1;
LAB_1420a5fba:
      if (!bVar13) goto LAB_1420a60ca;
    }
    FVar11 = FLinkerTables::GetClassName
                       ((FLinkerTables *)&param_2->Linker->_padding_,(FPackageIndex)(int)local_res8)
    ;
    FVar12 = FLinkerTables::GetClassName
                       ((FLinkerTables *)&param_1->Linker->_padding_,(FPackageIndex)(int)local_res10
                       );
    if (*(longlong *)FVar12 == *(longlong *)FVar11) {
      pFVar9 = FLinker::GetPathName
                         (param_2->Linker,&local_48,
                          (FPackageIndex)(param_2->Export->SuperIndex).Index);
      pFVar10 = FLinker::GetPathName
                          (param_1->Linker,&local_58,
                           (FPackageIndex)(param_1->Export->SuperIndex).Index);
      iVar8 = (pFVar9->Data).ArrayNum;
      iVar1 = (pFVar10->Data).ArrayNum;
      if (iVar1 == iVar8) {
        if (1 < iVar1) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                             (wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
          bVar13 = iVar8 == 0;
          goto LAB_1420a605d;
        }
      }
      else {
        bVar13 = iVar8 + iVar1 == 1;
LAB_1420a605d:
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = true;
        bVar3 = false;
        bVar2 = false;
        if (!bVar13) goto LAB_1420a60ca;
      }
      pFVar9 = FLinker::GetPathName
                         (param_2->Linker,&local_68,
                          (FPackageIndex)(param_2->Export->TemplateIndex).Index);
      pFVar10 = FLinker::GetPathName
                          (param_1->Linker,&local_78,
                           (FPackageIndex)(param_1->Export->TemplateIndex).Index);
      iVar8 = (pFVar9->Data).ArrayNum;
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      iVar1 = (pFVar10->Data).ArrayNum;
      if (iVar1 == iVar8) {
        if (1 < iVar1) {
          iVar8 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(pFVar10->Data).AllocatorInstance.Data,
                             (wchar_t *)(pFVar9->Data).AllocatorInstance.Data);
          bVar13 = iVar8 == 0;
          goto LAB_1420a60bf;
        }
      }
      else {
        bVar13 = iVar8 + iVar1 == 1;
LAB_1420a60bf:
        if (!bVar13) goto LAB_1420a60ca;
      }
      bVar13 = true;
      goto LAB_1420a60cc;
    }
  }
LAB_1420a60ca:
  bVar13 = false;
LAB_1420a60cc:
  if (bVar2) {
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  if (bVar3) {
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (bVar4) {
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (bVar5) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if (bVar6) {
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar7) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar13;
}

// operator== @ 1420a6190

bool __cdecl operator==(FLinkerImportObject *param_1,FLinkerImportObject *param_2)

{
  int iVar1;
  FObjectImport *pFVar2;
  FObjectImport *pFVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FString *pFVar8;
  bool bVar9;
  FString local_28;
  FString local_18;
  
  bVar5 = false;
  bVar4 = false;
  if (param_1->Import->_padding_ == param_2->Import->_padding_) {
    pFVar7 = FLinker::GetPathName
                       (param_2->Linker,&local_18,(FPackageIndex)param_2->Import->_padding_);
    pFVar8 = FLinker::GetPathName
                       (param_1->Linker,&local_28,(FPackageIndex)param_1->Import->_padding_);
    iVar6 = (pFVar7->Data).ArrayNum;
    iVar1 = (pFVar8->Data).ArrayNum;
    if (iVar1 == iVar6) {
      if (1 < iVar1) {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
        bVar9 = iVar6 == 0;
        goto LAB_1420a620b;
      }
    }
    else {
      bVar9 = iVar6 + iVar1 == 1;
LAB_1420a620b:
      bVar5 = true;
      bVar4 = true;
      if (!bVar9) goto LAB_1420a6245;
    }
    pFVar2 = param_2->Import;
    bVar5 = true;
    bVar4 = true;
    pFVar3 = param_1->Import;
    if (((pFVar3->ClassPackage == pFVar2->ClassPackage) && (pFVar3->ClassName == pFVar2->ClassName))
       && (pFVar3->XObject == pFVar2->XObject)) {
      bVar9 = true;
      goto LAB_1420a6248;
    }
  }
LAB_1420a6245:
  bVar9 = false;
LAB_1420a6248:
  if (bVar4) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar9;
}

// operator== @ 1420a6290

bool __cdecl
operator==(FPlaceholderValuePropertyPath *param_1,FPlaceholderValuePropertyPath *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = (param_1->PropertyChain).ArrayNum;
  if (iVar8 == (param_2->PropertyChain).ArrayNum) {
    uVar6 = 0;
    if (0 < iVar8) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar8) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar1 = (param_1->PropertyChain).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar6 < (param_2->PropertyChain).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        if (*(longlong *)(pFVar1 + lVar7 * 8) !=
            *(longlong *)((param_2->PropertyChain).AllocatorInstance.Data + lVar7 * 8))
        goto LAB_1420a6382;
        iVar8 = (param_1->PropertyChain).ArrayNum;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while ((int)uVar6 < iVar8);
    }
    bVar3 = true;
  }
  else {
LAB_1420a6382:
    bVar3 = false;
  }
  return bVar3;
}

// operator() @ 1420a64e0

void __thiscall
``FLinkerInstancingContextTests::RunTest'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
operator()(void *this,FSoftObjectPath *param_1,FSoftObjectPath *param_2,FString *param_3)

{
  FScriptContainerElement *_Src;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  size_t _Size;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FSoftObjectPath local_68;
  FStringFormatArg local_48;
  
  local_68.SubPathString.Data.ArrayNum = (param_1->SubPathString).Data.ArrayNum;
  _Size = (size_t)local_68.SubPathString.Data.ArrayNum;
  _Src = (param_1->SubPathString).Data.AllocatorInstance.Data;
  local_68.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.AssetPath.PackageName = (param_1->AssetPath).PackageName;
  local_68.AssetPath.AssetName = (param_1->AssetPath).AssetName;
  if (local_68.SubPathString.Data.ArrayNum == 0) {
    local_68.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_68.SubPathString.Data.ArrayNum,0,
               (ForAnyElementType *)&local_68.SubPathString,local_68.SubPathString.Data.ArrayNum,
               &local_68.SubPathString.Data.ArrayMax);
    memcpy(local_68.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
  }
  FLinkerInstancingContext::FixupSoftObjectPath
            (*(FLinkerInstancingContext **)((longlong)this + 8),&local_68);
  plVar1 = *(longlong **)this;
  pFVar4 = ::FString::FString(&local_78,param_3);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_a8.AllocatorInstance.Data,&local_48,1)
  ;
  ::FString::FormatImpl(&local_98,L"{0} - FixupSoftObjectPath",&local_a8);
  bVar3 = FSoftObjectPath::operator==(&local_68,param_2);
  if (!bVar3) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_88,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  FLinkerInstancingContext::FixupSoftObjectPath
            (*(FLinkerInstancingContext **)((longlong)this + 8),&local_68);
  plVar1 = *(longlong **)this;
  pFVar4 = ::FString::FString(&local_78,param_3);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_a8.AllocatorInstance.Data,&local_48,1)
  ;
  ::FString::FormatImpl(&local_98,L"{0} - FixupSoftObjectPath already fixed up",&local_a8);
  bVar3 = FSoftObjectPath::operator==(&local_68,param_2);
  if (!bVar3) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_88,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  FLinkerInstancedPackageMap::FixupSoftObjectPath
            (*(FLinkerInstancedPackageMap **)((longlong)this + 0x10),&local_68);
  plVar1 = *(longlong **)this;
  pFVar4 = ::FString::FString(&local_78,param_3);
  FStringFormatArg::FStringFormatArg(&local_48,pFVar4);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_a8.AllocatorInstance,1,&local_a8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_a8.AllocatorInstance.Data,&local_48,1)
  ;
  ::FString::FormatImpl(&local_98,L"{0} - Reverse FixupSoftObjectPath",&local_a8);
  bVar3 = FSoftObjectPath::operator==(&local_68,param_1);
  if (!bVar3) {
    pcVar2 = *(code **)(*plVar1 + 0x28);
    ::FString::PrintfImpl(&local_88,L"%s: The two values are not equal.");
    (*pcVar2)(plVar1,&local_88,0);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 1420a6900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
``FLinkerLoad::VerifyImportInner'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::operator()
          (void *this)

{
  bool bVar1;
  size_t sVar2;
  undefined1 auStackY_8b8 [32];
  FCoreRedirectObjectName local_888;
  FCoreRedirectObjectName local_868;
  FAssetLog local_850;
  wchar_t local_838 [1040];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_8b8;
  ::FName::ToStringInternal(*(FName **)this,local_838,0x40b);
  local_888.ObjectName = (FName)local_838;
  sVar2 = wcslen(local_838);
  local_888.OuterName.ComparisonIndex.Value = (uint)sVar2;
  bVar1 = FPackageName::IsScriptPackage((TStringView<wchar_t> *)&local_888);
  if (bVar1) {
    local_868.ObjectName.ComparisonIndex.Value = 0;
    local_868.ObjectName.Number = 0;
    local_868.OuterName.ComparisonIndex.Value = 0;
    local_868.OuterName.Number = 0;
    local_888.ObjectName.ComparisonIndex.Value = 0;
    local_888.ObjectName.Number = 0;
    local_868.PackageName = **(FName **)this;
    bVar1 = FCoreRedirects::IsKnownMissing(Type_Package,&local_868);
    if (!bVar1) {
      local_888.ObjectName.ComparisonIndex.Value = 0;
      local_888.ObjectName.Number = 0;
      local_888.OuterName.ComparisonIndex.Value = 0;
      local_888.OuterName.Number = 0;
      local_868.ObjectName.ComparisonIndex.Value = 0;
      local_868.ObjectName.Number = 0;
      local_888.PackageName = **(FName **)this;
      FCoreRedirects::AddKnownMissing(Type_Package,&local_888,Option_MissingLoad);
      if (2 < (byte)LogLinker._0_1_) {
        FLinkerTables::GetImportFullName
                  ((FLinkerTables *)(*(longlong *)((longlong)this + 0x10) + 8),(FString *)&local_868
                   ,*(int *)((longlong)this + 8));
        ::FString::PrintfImpl
                  ((FString *)&local_888,
                   L"VerifyImport: Failed to find script package for import object \'%s\'");
        local_850.PackagePath = (FPackagePath *)(*(longlong *)((longlong)this + 0x10) + 0x3a0);
        local_850.Path = (wchar_t *)0x0;
        local_850.Object = (UObject *)0x0;
        UE::Core::Private::RecordAssetLog
                  ((FName *)&LogLinker.field_0x4,Warning,&local_850,(FString *)&local_888,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                   ,0xeaf);
        if (local_888.ObjectName != (FName)0x0) {
          FMemory::Free((void *)local_888.ObjectName);
        }
        if (local_868.ObjectName != (FName)0x0) {
          FMemory::Free((void *)local_868.ObjectName);
        }
      }
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// `vector_deleting_destructor'`adjustor{704}' @ 1420a87b0

/* [thunk]:public: virtual void * __ptr64 __cdecl FLinkerLoad::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
FLinkerLoad::_vector_deleting_destructor__adjustor_704__(FLinkerLoad *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FLinkerLoad *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1420a87d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`5'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::`23'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8870

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageTrailer'::`24'::<lambda_1>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>_>'::__l4::<lambda_1>::~<lambda_1>
            ((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a88c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`8'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::UpdateFromPackageFileSummary'::`34'::<lambda_2>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>_>'::__l4::<lambda_1>::
  ~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`27'::<lambda_3>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a89b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`43'::<lambda_4>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8a00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`46'::<lambda_5>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8a50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`52'::<lambda_6>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8aa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>_>'::__l4::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::`58'::<lambda_7>_>'::`4'::<lambda_1>,1,1>
        ::_vftable_;
  `Async<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>_>'::__l4::<lambda_1>
  ::~<lambda_1>((void *)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8af0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`5'::<lambda_1>,1,0>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8b40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l23::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::`23'::<lambda_1>,1,0>::
        _vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageTrailer'::__l24::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageTrailer'::`24'::<lambda_1>,1,0>::
        _vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8be0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::CreateExport'::__l241::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::CreateExport'::`241'::<lambda_1>,0,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8c20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l8::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`8'::<lambda_2>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::__l34::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::UpdateFromPackageFileSummary'::`34'::<lambda_2>,1,0>::
        _vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8cc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l27::<lambda_3>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`27'::<lambda_3>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x28));
  }
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8d20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l43::<lambda_4>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`43'::<lambda_4>,1,1>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8d70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l46::<lambda_5>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`46'::<lambda_5>,1,0>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l52::<lambda_6>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`52'::<lambda_6>,1,0>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8e10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::__l58::<lambda_7>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FLinkerLoad::SerializePackageFileSummaryInternal'::`58'::<lambda_7>,1,0>
        ::_vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8e60

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLinkerInstancingContext::FSharedLinkerInstancingContextData,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8ea0

void * __thiscall
TThreadSingleton<FPlaceholderContainerTracker>::_scalar_deleting_destructor_
          (TThreadSingleton<FPlaceholderContainerTracker> *this,uint param_1)

{
  ~TThreadSingleton<FPlaceholderContainerTracker>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8ee0

void * __thiscall FLinker::_scalar_deleting_destructor_(FLinker *this,uint param_1)

{
  ~FLinker(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8f20

void * __thiscall FLinkerLoad::_scalar_deleting_destructor_(FLinkerLoad *this,uint param_1)

{
  ~FLinkerLoad(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x4f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a8f60

void * __thiscall FLinkerManager::_scalar_deleting_destructor_(FLinkerManager *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  
  this->_padding_ = (longlong)&___7FLinkerManager__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PendingCleanupListCritical);
  (this->PendingCleanupList).HashSize = 0;
  FVar1 = (this->PendingCleanupList).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PendingCleanupList).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LoadersWithForcedExportsCritical);
  (this->LoadersWithForcedExports).HashSize = 0;
  FVar1 = (this->LoadersWithForcedExports).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoadersWithForcedExports).Elements);
  (this->LiveLinkers).HashSize = 0;
  FVar1 = (this->LiveLinkers).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LiveLinkers).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LiveLinkersCritical);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LoadersWithNewImportsCritical);
  (this->LoadersWithNewImports).HashSize = 0;
  FVar1 = (this->LoadersWithNewImports).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LoadersWithNewImports).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->ObjectLoadersCritical);
  (this->ObjectLoaders).HashSize = 0;
  FVar1 = (this->ObjectLoaders).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLinkerLoad_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ObjectLoaders).Elements);
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x268);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a90b0

void * __thiscall
FLinkerPlaceholderBase::_scalar_deleting_destructor_(FLinkerPlaceholderBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FLinkerPlaceholderBase__6B_;
  pFVar1 = (this->PlaceholderSubobjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ReferencingRawContainers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ReferencingRawContainers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReferencingRawContainers);
  *(undefined4 *)&(this->ReferencingContainers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ReferencingContainers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ReferencingContainers);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a9150

void * __thiscall
FPlaceholderContainerTracker::_scalar_deleting_destructor_
          (FPlaceholderContainerTracker *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IntermediatePropertyStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerspectiveRootDataStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerspectiveReferencerStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TThreadSingleton<FPlaceholderContainerTracker>::~TThreadSingleton<FPlaceholderContainerTracker>
            ((TThreadSingleton<FPlaceholderContainerTracker> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420a91c0

void * __thiscall UInterface::_scalar_deleting_destructor_(UInterface *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// ConditionalFlushAsyncLoadingForLinkers @ 1420abb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ConditionalFlushAsyncLoadingForLinkers(TArrayView<FLinkerLoad_*_const,int> *param_1)

{
  FLinkerLoad **ppFVar1;
  int iVar2;
  UObjectBaseUtility *this;
  code *pcVar3;
  bool bVar4;
  ForElementType<int> FVar5;
  longlong lVar6;
  FLinkerLoad **ppFVar7;
  undefined1 auStack_158 [32];
  int *local_138;
  ForElementType<int> local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  int local_108 [2];
  FString local_100;
  ForElementType<int> local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FLoadPackageAsyncOptionalParams local_d8;
  TArrayView<int_const_,int> local_98;
  undefined8 local_88;
  ForElementType<int> local_48;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = param_1->ArrayNum;
  if ((0 < iVar2) && (bVar4 = (*IsAsyncLoading)(), bVar4)) {
    if (4 < (byte)LogLinker._0_1_) {
      this = (UObjectBaseUtility *)(*param_1->DataPtr)->_padding_;
      if (this == (UObjectBaseUtility *)0x0) {
        FString::FString(&local_100,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName(this,&local_100,(UObject *)0x0);
      }
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogLinker);
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    ppFVar7 = param_1->DataPtr;
    local_48.SecondaryData = (ForElementType<int>)0x0;
    local_30 = 0;
    local_2c = 4;
    ppFVar1 = ppFVar7 + iVar2;
    iStack_e0 = local_30;
    for (; local_30 = iStack_e0, ppFVar7 != ppFVar1; ppFVar7 = ppFVar7 + 1) {
      local_88 = 0;
      local_d8.CustomPackageName.ComparisonIndex.Value = 0;
      local_d8.CustomPackageName.Number = 0;
      local_d8.ProgressDelegate.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_d8.CompletionDelegate.Ptr =
           (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
            *)0x0;
      local_d8.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
      local_d8.PackageFlags = PKG_None;
      local_d8.PIEInstanceID = -1;
      local_d8.PackagePriority = 0x7fffffff;
      local_d8.InstancingContext = (FLinkerInstancingContext *)0x0;
      local_d8.LoadFlags = 0;
      local_108[0] = LoadPackageAsync(&(*ppFVar7)->PackagePath,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      FVar5 = (ForElementType<int>)&local_48;
      if (local_48.SecondaryData != (ForElementType<int>)0x0) {
        FVar5 = local_48.SecondaryData;
      }
      if ((ulonglong)FVar5 <= local_108) {
        FVar5 = (ForElementType<int>)&local_48;
        if (local_48.SecondaryData != (ForElementType<int>)0x0) {
          FVar5 = local_48.SecondaryData;
        }
        if (local_108 < (int *)((longlong)FVar5 + (longlong)local_2c * 4)) {
          local_120 = (longlong)local_30;
          local_118 = 4;
          local_138 = local_108;
          local_130 = (ForElementType<int>)&local_48;
          if (local_48.SecondaryData != (ForElementType<int>)0x0) {
            local_130 = local_48.SecondaryData;
          }
          local_128 = (longlong)local_2c;
          bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      if (local_30 == local_2c) {
        local_30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&local_48,&local_2c);
      }
      FVar5 = (ForElementType<int>)&local_48;
      if (local_48.SecondaryData != (ForElementType<int>)0x0) {
        FVar5 = local_48.SecondaryData;
      }
      lVar6 = (longlong)local_30;
      local_30 = local_30 + 1;
      *(int *)((longlong)FVar5 + lVar6 * 4) = local_108[0];
      iStack_e0 = local_30;
    }
    local_e8 = (ForElementType<int>)&local_48;
    if (local_48.SecondaryData != (ForElementType<int>)0x0) {
      local_e8 = local_48.SecondaryData;
    }
    if ((iStack_e0 < 0) &&
       (bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_98._12_4_ = uStack_dc;
    local_98.ArrayNum = iStack_e0;
    local_98.DataPtr = (int *)local_e8;
    FlushAsyncLoading(&local_98);
    if (local_48.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_48.SecondaryData);
    }
  }
  return;
}

// ConditionalFlushAsyncLoadingForSave @ 1420abe30

void __cdecl ConditionalFlushAsyncLoadingForSave(UPackage *param_1)

{
  FAdditionalInfo *pFVar1;
  UPackage *pUVar2;
  FLinkerLoad *local_res10 [3];
  TArrayView<FLinkerLoad_*_const,int> local_18;
  
  pUVar2 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if (((pUVar2 != (UPackage *)0x0) &&
      (pFVar1 = (pUVar2->AdditionalInfo).Ptr, pFVar1 != (FAdditionalInfo *)0x0)) &&
     (local_res10[0] = pFVar1->LinkerLoad, local_res10[0] != (FLinkerLoad *)0x0)) {
    local_18.ArrayNum = 1;
    local_18.DataPtr = local_res10;
    ConditionalFlushAsyncLoadingForLinkers(&local_18);
  }
  return;
}

// DeleteLoader @ 1420b1d10

void __cdecl DeleteLoader(FLinkerLoad *param_1)

{
  FLinkerManager *this;
  
  this = FLinkerManager::Get();
  FLinkerManager::RemoveLinker(this,param_1);
  return;
}

// DeleteLoaders @ 1420b1d40

void __cdecl DeleteLoaders(void)

{
  FLinkerManager *this;
  
  this = FLinkerManager::Get();
  FLinkerManager::DeleteLinkers(this);
  return;
}

// EmptyLinkFunctionForGeneratedCodeInterface @ 1420b4210

void __cdecl EmptyLinkFunctionForGeneratedCodeInterface(void)

{
  return;
}

// EnsureLoadingComplete @ 1420b42b0

void __cdecl EnsureLoadingComplete(UPackage *param_1)

{
  FLinkerManager::Get();
  return;
}

// FindResourcePackageIndex @ 1420b7840

/* WARNING: Removing unreachable block (ram,0x0001420b7bdf) */
/* WARNING: Removing unreachable block (ram,0x0001420b7be8) */
/* WARNING: Removing unreachable block (ram,0x0001420b7962) */
/* WARNING: Removing unreachable block (ram,0x0001420b796e) */
/* WARNING: Removing unreachable block (ram,0x0001420b7c88) */
/* WARNING: Removing unreachable block (ram,0x0001420b7c91) */
/* WARNING: Removing unreachable block (ram,0x0001420b7a0d) */
/* WARNING: Removing unreachable block (ram,0x0001420b7a19) */

FPackageIndex __cdecl
FindResourcePackageIndex(FObjectResource *param_1,bool param_2,FLinker *param_3,FLinker *param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FString *pFVar8;
  undefined7 in_register_00000011;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  longlong in_stack_00000028;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  plVar9 = (longlong *)CONCAT71(in_register_00000011,param_2);
  bVar3 = false;
  bVar4 = false;
  bVar2 = false;
  bVar5 = false;
  uVar10 = 0;
  if ((char)param_3 == '\0') {
    if (0 < *(int *)(in_stack_00000028 + 0x20)) {
      lVar11 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < *(int *)(in_stack_00000028 + 0x20)) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          iVar7 = (*pcVar1)();
          return (FPackageIndex)iVar7;
        }
        if (*plVar9 == *(longlong *)(*(longlong *)(in_stack_00000028 + 0x18) + lVar11)) {
          iVar7 = *(int *)(*(longlong *)(in_stack_00000028 + 0x18) + 8 + lVar11);
          if (iVar7 < 0) {
            FLinkerTables::GetImportPathName
                      ((FLinkerTables *)(in_stack_00000028 + 8),&local_98,-1 - iVar7);
          }
          else if (iVar7 < 1) {
            local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.Data.ArrayNum = 0;
            local_98.Data.ArrayMax = 0;
          }
          else {
            pFVar8 = UObjectBaseUtility::GetPathName
                               (*(UObjectBaseUtility **)(in_stack_00000028 + 0xc0),&local_68,
                                (UObject *)0x0);
            FLinkerTables::GetExportPathName
                      ((FLinkerTables *)(in_stack_00000028 + 8),&local_98,pFVar8,iVar7 + -1,false);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
          iVar7 = (int)plVar9[1];
          if (iVar7 < 0) {
            FLinkerTables::GetImportPathName
                      ((FLinkerTables *)&param_4->_padding_,&local_b8,-1 - iVar7);
            iVar7 = local_b8.Data.ArrayNum;
          }
          else if (iVar7 < 1) {
            iVar7 = 0;
            local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b8.Data.ArrayNum = 0;
            local_b8.Data.ArrayMax = 0;
          }
          else {
            pFVar8 = UObjectBaseUtility::GetPathName
                               ((UObjectBaseUtility *)param_4->LinkerRoot,&local_58,(UObject *)0x0);
            FLinkerTables::GetExportPathName
                      ((FLinkerTables *)&param_4->_padding_,&local_b8,pFVar8,iVar7 + -1,false);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            iVar7 = local_b8.Data.ArrayNum;
          }
          bVar3 = true;
          bVar4 = true;
          if (iVar7 == local_98.Data.ArrayNum) {
            if (1 < iVar7) {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_b8.Data.AllocatorInstance.Data,
                                 (wchar_t *)local_98.Data.AllocatorInstance.Data);
              bVar5 = iVar7 == 0;
              goto LAB_1420b7cd0;
            }
          }
          else {
            bVar5 = iVar7 + local_98.Data.ArrayNum == 1;
LAB_1420b7cd0:
            if (!bVar5) goto LAB_1420b7cdc;
          }
          bVar5 = true;
        }
        else {
LAB_1420b7cdc:
          bVar5 = false;
        }
        if ((bVar4) &&
           (bVar4 = false, local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if ((bVar3) &&
           (bVar3 = false, local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          if (((int)uVar10 < 0) &&
             (bVar5 = FDebug::CheckVerifyFailedImpl2
                                ("ExportIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x6d,L""), bVar5)) {
            pcVar1 = (code *)swi(3);
            iVar7 = (*pcVar1)();
            return (FPackageIndex)iVar7;
          }
          (param_1->ObjectName).ComparisonIndex.Value = uVar10 + 1;
          goto LAB_1420b7ab2;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x68;
      } while ((int)uVar10 < *(int *)(in_stack_00000028 + 0x20));
    }
  }
  else if (0 < *(int *)(in_stack_00000028 + 0x10)) {
    lVar11 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < *(int *)(in_stack_00000028 + 0x10)) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        iVar7 = (*pcVar1)();
        return (FPackageIndex)iVar7;
      }
      if (*plVar9 == *(longlong *)(*(longlong *)(in_stack_00000028 + 8) + lVar11)) {
        iVar7 = *(int *)(*(longlong *)(in_stack_00000028 + 8) + 8 + lVar11);
        if (iVar7 < 0) {
          FLinkerTables::GetImportPathName
                    ((FLinkerTables *)(in_stack_00000028 + 8),&local_a8,-1 - iVar7);
        }
        else if (iVar7 < 1) {
          local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a8.Data.ArrayNum = 0;
          local_a8.Data.ArrayMax = 0;
        }
        else {
          pFVar8 = UObjectBaseUtility::GetPathName
                             (*(UObjectBaseUtility **)(in_stack_00000028 + 0xc0),&local_88,
                              (UObject *)0x0);
          FLinkerTables::GetExportPathName
                    ((FLinkerTables *)(in_stack_00000028 + 8),&local_a8,pFVar8,iVar7 + -1,false);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        iVar7 = (int)plVar9[1];
        if (iVar7 < 0) {
          FLinkerTables::GetImportPathName
                    ((FLinkerTables *)&param_4->_padding_,&local_c8,-1 - iVar7);
          iVar7 = local_c8.Data.ArrayNum;
        }
        else if (iVar7 < 1) {
          iVar7 = 0;
          local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_c8.Data.ArrayNum = 0;
          local_c8.Data.ArrayMax = 0;
        }
        else {
          pFVar8 = UObjectBaseUtility::GetPathName
                             ((UObjectBaseUtility *)param_4->LinkerRoot,&local_78,(UObject *)0x0);
          FLinkerTables::GetExportPathName
                    ((FLinkerTables *)&param_4->_padding_,&local_c8,pFVar8,iVar7 + -1,false);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          iVar7 = local_c8.Data.ArrayNum;
        }
        bVar2 = true;
        bVar5 = true;
        if (iVar7 == local_a8.Data.ArrayNum) {
          if (1 < iVar7) {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_c8.Data.AllocatorInstance.Data,
                               (wchar_t *)local_a8.Data.AllocatorInstance.Data);
            bVar4 = iVar7 == 0;
            goto LAB_1420b7a58;
          }
        }
        else {
          bVar4 = iVar7 + local_a8.Data.ArrayNum == 1;
LAB_1420b7a58:
          if (!bVar4) goto LAB_1420b7a64;
        }
        bVar4 = true;
      }
      else {
LAB_1420b7a64:
        bVar4 = false;
      }
      if ((bVar5) &&
         (bVar5 = false, local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if ((bVar2) &&
         (bVar2 = false, local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        if (((int)uVar10 < 0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("ImportIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                               ,0x67,L""), bVar5)) {
          pcVar1 = (code *)swi(3);
          iVar7 = (*pcVar1)();
          return (FPackageIndex)iVar7;
        }
        (param_1->ObjectName).ComparisonIndex.Value = ~uVar10;
        goto LAB_1420b7ab2;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x38;
    } while ((int)uVar10 < *(int *)(in_stack_00000028 + 0x10));
  }
  (param_1->ObjectName).ComparisonIndex.Value = 0;
LAB_1420b7ab2:
  return (FPackageIndex)(int)param_1;
}

// GetBulkDataPackageSegmentFromFlags @ 1420c6470

/* WARNING: Enum "EBulkDataFlags": Some values do not have unique names */

EPackageSegment __cdecl GetBulkDataPackageSegmentFromFlags(EBulkDataFlags param_1,bool param_2)

{
  bool bVar1;
  EPackageSegment EVar2;
  
  bVar1 = FBulkData::HasFlags(param_1,BULKDATA_PayloadInSeparateFile);
  if (!bVar1) {
    return param_2;
  }
  if ((param_1 >> 0xb & 1) != 0) {
    return BulkDataOptional;
  }
  EVar2 = BulkDataDefault;
  if ((param_1 >> 0xc & 1) != 0) {
    EVar2 = BulkDataMemoryMapped;
  }
  return EVar2;
}

// GetPackageLinker @ 1420c7ac0

/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FLinkerLoad * __cdecl
GetPackageLinker(UPackage *param_1,FPackagePath *param_2,uint param_3,UPackageMap *param_4,
                FArchive *param_5,FUObjectSerializeContext **param_6,FLinkerLoad *param_7,
                FLinkerInstancingContext *param_8)

{
  FAdditionalInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FText *pFVar6;
  FString *pFVar7;
  size_t sVar8;
  UClass *pUVar9;
  FTlsAutoCleanup FVar10;
  FName *pFVar11;
  FName FVar12;
  FTlsAutoCleanup FVar13;
  uint *puVar14;
  FTlsAutoCleanup *pFVar15;
  FLinkerLoad *pFVar16;
  FTlsAutoCleanup FVar17;
  FUObjectItem *pFVar18;
  uint uVar19;
  ForAnyElementType FVar20;
  FTlsAutoCleanup FVar21;
  FTlsAutoCleanup this_00;
  longlong lVar22;
  FScriptContainerElement *local_res8;
  FPackagePath *local_res10;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FName local_1d8;
  FPackagePath local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  code *local_168;
  FScriptContainerElement **local_160;
  code *local_158;
  FUObjectSerializeContext ***local_150;
  FCoreRedirectObjectName local_148;
  FName local_130 [3];
  FText local_118;
  FString local_108;
  TStringView<wchar_t> local_f8;
  FText local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  FText local_98;
  FString local_88;
  FText local_78;
  FText local_68;
  FCoreRedirectObjectName local_58;
  FTlsAutoCleanup this;
  
  this = (FTlsAutoCleanup)0x0;
  FVar21 = (FTlsAutoCleanup)0x0;
  this_00 = this;
  if (param_6 != (FUObjectSerializeContext **)0x0) {
    this_00 = (FTlsAutoCleanup)*param_6;
  }
  if (((param_1 != (UPackage *)0x0) &&
      (pFVar1 = (param_1->AdditionalInfo).Ptr, pFVar1 != (FAdditionalInfo *)0x0)) &&
     (pFVar16 = pFVar1->LinkerLoad, pFVar16 != (FLinkerLoad *)0x0)) {
    return pFVar16;
  }
  local_res10 = param_2;
  FPackagePath::FPackagePath(&local_1d0,param_2);
  FPackagePath::GetPackageName(&local_1d0,&local_208);
  iVar5 = 0;
  FVar20.Data = (FScriptContainerElement *)L"";
  if (local_208.Data.ArrayNum != 0) {
    FVar20.Data = local_208.Data.AllocatorInstance.Data;
  }
  FName::FName(&local_1d8,(wchar_t *)FVar20.Data);
  FVar17 = this;
  if (local_1d8 == (FName)0x0) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_118,L"Linker",L"PackageResolveFailed",L"Can\'t resolve asset name");
    LogGetPackageLinkerError
              ((FUObjectSerializeContext *)this_00,param_2,pFVar6,(UObject *)param_1,param_3);
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    goto LAB_1420c8417;
  }
  local_1b8 = 0;
  local_1c0 = 0;
  local_148.ObjectName.ComparisonIndex.Value = 0;
  local_148.ObjectName.Number = 0;
  local_148.OuterName.ComparisonIndex.Value = 0;
  local_148.OuterName.Number = 0;
  local_148.PackageName = local_1d8;
  FCoreRedirects::GetRedirectedName(&local_58,Type_Package,&local_148,None);
  if (local_58.PackageName != local_1d8) {
    local_1d8 = local_58.PackageName;
    pFVar7 = FName::ToString(&local_1d8,&local_108);
    if (&local_208 != pFVar7) {
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      local_208.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_208.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    local_198 = local_208.Data.AllocatorInstance.Data;
    iStack_190 = local_208.Data.ArrayNum + -1;
    if (local_208.Data.ArrayNum == 0) {
      iStack_190 = iVar5;
    }
    local_f8._12_4_ = uStack_18c;
    local_f8.Size = iStack_190;
    local_f8.DataPtr = (wchar_t *)local_208.Data.AllocatorInstance.Data;
    bVar3 = FPackagePath::TryFromMountedName(&local_f8,&local_1d0);
    if (!bVar3) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_e8,L"Linker",L"InvalidPackageRedirect",
                          L"PackagePath has invalid FCoreRedirects redirector to unmounted contentroot"
                         );
      LogGetPackageLinkerError
                ((FUObjectSerializeContext *)this_00,param_2,pFVar6,(UObject *)param_1,param_3);
      if (local_e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
        FVar17 = FVar21;
      }
      goto LAB_1420c8417;
    }
  }
  FVar10 = (FTlsAutoCleanup)param_1;
  if (param_1 == (UPackage *)0x0) {
    if (local_208.Data.ArrayNum == 0) {
      local_1a8 = (FScriptContainerElement *)0x15060d16c;
LAB_1420c7d2a:
      sVar8 = wcslen((wchar_t *)local_1a8);
      iVar5 = (int)sVar8;
    }
    else {
      local_1a8 = local_208.Data.AllocatorInstance.Data;
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1420c7d2a;
    }
    iStack_1a0 = iVar5;
    pUVar9 = Z_Construct_UClass_UPackage_NoRegister();
    local_d8._12_4_ = uStack_19c;
    local_d8.Size = iStack_1a0;
    local_d8.DataPtr = (wchar_t *)local_1a8;
    FVar10 = (FTlsAutoCleanup)StaticFindObject(pUVar9,(UObject *)0x0,&local_d8,None);
    FVar13 = FVar10;
    if ((FVar10 != (FTlsAutoCleanup)0x0) &&
       (FVar13 = this, *(longlong *)((longlong)FVar10 + 0x20) == 0)) goto LAB_1420c7ccb;
  }
  else {
LAB_1420c7ccb:
    FVar17 = FVar21;
    FVar13 = FVar10;
    if (((uint)*(atomic<unsigned_int> *)((longlong)FVar10 + 0x2c) & 0x11) != 0) goto LAB_1420c8417;
  }
  lVar22 = (longlong)local_208.Data.ArrayNum;
  local_1e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res8 = local_208.Data.AllocatorInstance.Data;
  local_1e8.Data.ArrayNum = local_208.Data.ArrayNum;
  if (local_208.Data.ArrayNum == 0) {
    local_1e8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_208.Data.ArrayNum,0,(ForAnyElementType *)&local_1e8,local_208.Data.ArrayNum
               ,&local_1e8.Data.ArrayMax);
    memcpy(local_1e8.Data.AllocatorInstance.Data,local_res8,lVar22 * 2);
  }
  local_188 = local_208.Data.AllocatorInstance.Data;
  iVar5 = 0;
  iStack_180 = local_208.Data.ArrayNum + -1;
  if (local_208.Data.ArrayNum == 0) {
    iStack_180 = iVar5;
  }
  local_c8._12_4_ = uStack_17c;
  local_c8.Size = iStack_180;
  local_c8.DataPtr = (wchar_t *)local_208.Data.AllocatorInstance.Data;
  bVar3 = FPackageName::IsScriptPackage(&local_c8);
  if (!bVar3) {
    FPackageName::GetDelegateResolvedPackagePath(&local_1f8,&local_208);
    pFVar7 = FPackageName::GetLocalizedPackagePath(&local_b8,&local_1f8);
    if (&local_1f8 != pFVar7) {
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      local_1f8.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Data.ArrayNum = (pFVar7->Data).ArrayNum;
      local_1f8.Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_1f8.Data.ArrayNum == local_208.Data.ArrayNum) {
      if (1 < local_1f8.Data.ArrayNum) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_1f8.Data.AllocatorInstance.Data,
                           (wchar_t *)local_208.Data.AllocatorInstance.Data);
        bVar3 = iVar4 == 0;
        goto LAB_1420c7e8e;
      }
LAB_1420c7f87:
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      goto LAB_1420c7f96;
    }
    bVar3 = local_208.Data.ArrayNum + local_1f8.Data.ArrayNum == 1;
LAB_1420c7e8e:
    if (bVar3) goto LAB_1420c7f87;
    iVar4 = local_1f8.Data.ArrayNum;
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
      iVar4 = local_1f8.Data.ArrayNum;
    }
    local_208.Data.AllocatorInstance.Data = local_1f8.Data.AllocatorInstance.Data;
    FVar20.Data = (FScriptContainerElement *)L"";
    if (iVar4 != 0) {
      FVar20.Data = local_1f8.Data.AllocatorInstance.Data;
    }
    local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayMax = local_1f8.Data.ArrayMax;
    local_1f8.Data.ArrayNum = 0;
    local_1f8.Data.ArrayMax = 0;
    local_208.Data.ArrayNum = iVar4;
    pFVar11 = FName::FName(local_130,(wchar_t *)FVar20.Data);
    local_1d8 = *pFVar11;
    local_178 = local_208.Data.AllocatorInstance.Data;
    iStack_170 = local_208.Data.ArrayNum + -1;
    if (local_208.Data.ArrayNum == 0) {
      iStack_170 = iVar5;
    }
    local_a8._12_4_ = uStack_16c;
    local_a8.Size = iStack_170;
    local_a8.DataPtr = (wchar_t *)local_208.Data.AllocatorInstance.Data;
    bVar3 = FPackagePath::TryFromMountedName(&local_a8,&local_1d0);
    if (bVar3) goto LAB_1420c7f87;
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_98,L"Linker",L"UnmountedContentRoot",
                        L"GetDelegateResolvedPackagePath or GetLocalizedPackagePath returned path to unmounted contentroot"
                       );
    LogGetPackageLinkerError
              ((FUObjectSerializeContext *)this_00,param_2,pFVar6,(UObject *)param_1,param_3);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    FVar17 = this;
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    goto LAB_1420c8400;
  }
LAB_1420c7f96:
  bVar3 = FPackageName::DoesPackageExist(&local_1d0,false,&local_1d0);
  local_res8 = (FScriptContainerElement *)CONCAT71(local_res8._1_7_,bVar3);
  pFVar7 = FPackagePath::GetPackageName(&local_1d0,&local_88);
  if (&local_208 != pFVar7) {
    if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_208.Data.AllocatorInstance.Data);
    }
    local_208.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_208.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if ((char)local_res8 == '\0') {
    FVar17 = this;
    if ((param_3 & 0x2002) == 0) {
      FVar12 = FPackagePath::GetPackageFName(param_2);
      bVar3 = FLinkerLoad::IsKnownMissingPackage(*(FName *)FVar12);
      FVar17 = FVar21;
      if (!bVar3) {
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_78,L"Linker",L"FileNotFoundShort",L"Can\'t find file.");
        LogGetPackageLinkerError
                  ((FUObjectSerializeContext *)this_00,param_2,pFVar6,(UObject *)param_1,param_3);
        goto LAB_1420c813e;
      }
    }
    goto LAB_1420c8400;
  }
  if (FVar13 == (FTlsAutoCleanup)0x0) {
    if (local_1e8.Data.ArrayNum == local_208.Data.ArrayNum) {
      if (1 < local_1e8.Data.ArrayNum) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_1e8.Data.AllocatorInstance.Data,
                           (wchar_t *)local_208.Data.AllocatorInstance.Data);
        bVar3 = iVar4 == 0;
        goto LAB_1420c80bc;
      }
LAB_1420c80c3:
      iVar4 = local_208.Data.ArrayNum + -1;
      if (local_208.Data.ArrayNum == 0) {
        iVar4 = iVar5;
      }
      FString::AssignRange(&local_1e8,(wchar_t *)local_208.Data.AllocatorInstance.Data,iVar4);
    }
    else {
      bVar3 = local_1e8.Data.ArrayNum + local_208.Data.ArrayNum == 1;
LAB_1420c80bc:
      if (bVar3) goto LAB_1420c80c3;
    }
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_1e8.Data.ArrayNum != 0) {
      FVar20.Data = local_1e8.Data.AllocatorInstance.Data;
    }
    FVar13 = (FTlsAutoCleanup)CreatePackage((wchar_t *)FVar20.Data);
    if (FVar13 == (FTlsAutoCleanup)0x0) {
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"Linker",L"FilenameToPackageShort",
                          L"Can\'t convert filename to asset name");
      LogGetPackageLinkerError
                ((FUObjectSerializeContext *)this_00,local_res10,pFVar6,(UObject *)param_1,param_3);
      local_78.TextData.Reference = local_68.TextData.Reference;
LAB_1420c813e:
      FVar17 = FVar21;
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      goto LAB_1420c8400;
    }
    this = FVar13;
    if (((param_3 >> 0x13 & 1) != 0) &&
       ((atomic<unsigned_int>)((uint)*(atomic<unsigned_int> *)((longlong)FVar13 + 0x2c) | 0x100000)
        != *(atomic<unsigned_int> *)((longlong)FVar13 + 0x2c))) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar13 + 0x2c) =
           (atomic<unsigned_int>)
           ((uint)*(atomic<unsigned_int> *)((longlong)FVar13 + 0x2c) | 0x100000);
      UNLOCK();
    }
  }
  if (((((FTlsAutoCleanup)param_1 == FVar13) || (FVar13 == (FTlsAutoCleanup)0x0)) ||
      (*(longlong *)((longlong)FVar13 + 0x48) == 0)) ||
     (FVar17 = *(FTlsAutoCleanup *)(*(longlong *)((longlong)FVar13 + 0x48) + 0x20),
     FVar17 == (FTlsAutoCleanup)0x0)) {
    if (this_00 == (FTlsAutoCleanup)0x0) {
      puVar14 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
      local_150 = &param_6;
      local_158 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
      pFVar15 = FThreadSingletonInitializer::Get
                          ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_158,puVar14);
      this_00 = pFVar15[0x2f];
      FVar21 = this_00;
      if (this_00 != (FTlsAutoCleanup)0x0) goto LAB_1420c82a0;
    }
    else {
LAB_1420c82a0:
      *(int *)this_00 = *(int *)this_00 + 1;
      FVar21 = this_00;
    }
    FVar17 = (FTlsAutoCleanup)
             FLinkerLoad::CreateLinker
                       ((FUObjectSerializeContext *)FVar21,(UPackage *)FVar13,&local_1d0,param_3,
                        param_5,param_8);
    if ((FVar17 == (FTlsAutoCleanup)0x0) && (this != (FTlsAutoCleanup)0x0)) {
      pFVar18 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)this + 0xc));
      if ((((uint)((ulonglong)(pFVar18->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("!IsRooted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                             ,0xb8,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar16 = (FLinkerLoad *)(*pcVar2)();
        return pFVar16;
      }
      UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_MirroredGarbage);
      pFVar18 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)this + 0xc));
      do {
        lVar22 = (pFVar18->field0_0x0).FlagsAndRefCount;
        uVar19 = (uint)((ulonglong)lVar22 >> 0x20);
        if ((uVar19 >> 0x15 & 1) != 0) break;
        if (((ulonglong)pFVar18 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        bVar3 = lVar22 == (pFVar18->field0_0x0).FlagsAndRefCount;
        if (bVar3) {
          (pFVar18->field0_0x0).FlagsAndRefCount =
               (longlong)(int)uVar19 << 0x20 | (longlong)(int)lVar22 | 0x20000000000000;
        }
        UNLOCK();
      } while (!bVar3);
      pFVar18 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)this + 0xc));
      FUObjectItem::ClearRootFlags(pFVar18,Async);
    }
    if (FVar21 != (FTlsAutoCleanup)0x0) {
      iVar5 = *(int *)FVar21 + -1;
      *(int *)FVar21 = iVar5;
      if (iVar5 < 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("CurrentRefCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectThreadContext.h"
                           ,0x130,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar16 = (FLinkerLoad *)(*pcVar2)();
          return pFVar16;
        }
      }
      else if (iVar5 == 0) {
        FUObjectSerializeContext::~FUObjectSerializeContext((FUObjectSerializeContext *)FVar21);
        goto LAB_1420c83f6;
      }
    }
  }
  else if (this_00 != (FTlsAutoCleanup)0x0) {
    puVar14 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_160 = &local_res8;
    local_168 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar15 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_168,puVar14);
    FVar21 = pFVar15[0x2f];
    if (FVar21 != (FTlsAutoCleanup)0x0) {
      *(int *)FVar21 = *(int *)FVar21 + 1;
    }
    if (((0 < *(int *)((longlong)FVar21 + 0xc)) && (*(int *)((longlong)this_00 + 0xc) == 1)) ||
       (bVar3 = (*IsInAsyncLoadingThread)(), bVar3)) {
      *param_6 = (FUObjectSerializeContext *)FVar21;
    }
    else if (FVar21 != this_00) {
      FUObjectSerializeContext::AddUniqueLoadedObjects
                ((FUObjectSerializeContext *)this_00,
                 (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)((longlong)FVar21 + 0x10));
    }
    if (FVar21 != (FTlsAutoCleanup)0x0) {
      iVar5 = *(int *)FVar21 + -1;
      *(int *)FVar21 = iVar5;
      if (iVar5 < 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("CurrentRefCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectThreadContext.h"
                           ,0x130,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pFVar16 = (FLinkerLoad *)(*pcVar2)();
          return pFVar16;
        }
        goto LAB_1420c8400;
      }
      if (iVar5 != 0) goto LAB_1420c8400;
      FUObjectSerializeContext::~FUObjectSerializeContext((FUObjectSerializeContext *)FVar21);
LAB_1420c83f6:
      operator_delete((void *)FVar21,0x60);
    }
  }
LAB_1420c8400:
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
LAB_1420c8417:
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  return (FLinkerLoad *)FVar17;
}

// GetPrestreamPackageLinkerName @ 1420c8540

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPackageLocationFilter": Some values do not have unique names */

FString * __cdecl
GetPrestreamPackageLinkerName(FString *__return_storage_ptr__,wchar_t *param_1,bool param_2)

{
  bool bVar1;
  EPackageLocationFilter EVar2;
  size_t sVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res10;
  FPackagePath local_28;
  TStringView<wchar_t> local_18;
  
  if (param_1 == (wchar_t *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_28.PackageName.ComparisonIndex.Value = 0;
  local_28.PackageName.Number = 0;
  local_28.HeaderExtension = Unspecified;
  local_18.DataPtr = param_1;
  sVar3 = wcslen(param_1);
  local_18.Size = (int)sVar3;
  bVar1 = FPackagePath::TryFromMountedName(&local_18,&local_28);
  if (bVar1) {
    FPackagePath::GetPackageFName(&local_28);
    if (param_2) {
      pUVar4 = Z_Construct_UClass_UPackage_NoRegister();
      pUVar5 = StaticFindObjectFast(pUVar4,(UObject *)0x0,local_res10,None,RF_NoFlags,Borrowed);
      if (pUVar5 != (UObject *)0x0) goto LAB_1420c85b0;
    }
    EVar2 = FPackageName::DoesPackageExistEx(&local_28,FileSystem,false,&local_28);
    if (EVar2 != None) {
      FPackagePath::GetLocalFullPath(&local_28,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
LAB_1420c85b0:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTypeHash @ 1420c88b0

uint __cdecl GetTypeHash(FDependencyRef *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Linker >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Linker >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ param_1->ExportIndex ^ uVar1;
}

// GetTypeHash @ 1420c88f0

uint __cdecl GetTypeHash(FLinkerExportObject *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  FString local_18;
  
  pFVar5 = FLinker::GetPathName(param_1->Linker,&local_18,(FPackageIndex)param_1->Export->_padding_)
  ;
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar8 = L"";
    iVar6 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  lVar2 = param_1->Export->_padding_;
  uVar4 = GetTypeHash((FNameEntryId)(uint)lVar2);
  uVar7 = ((int)((ulonglong)lVar2 >> 0x20) - uVar3) + uVar4 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar7) - uVar3 ^ uVar7 << 8;
  uVar9 = (uVar3 - uVar7) - uVar4 ^ uVar4 >> 0xd;
  uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
  uVar3 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
  uVar9 = (uVar9 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar4 = (uVar7 - uVar9) - uVar3 ^ uVar9 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar9 ^ uVar4 << 10;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (uVar9 - uVar3) - uVar4 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 1420c89e0

uint __cdecl GetTypeHash(FLinkerImportObject *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  FString local_18;
  
  pFVar5 = FLinker::GetPathName(param_1->Linker,&local_18,(FPackageIndex)param_1->Import->_padding_)
  ;
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar8 = L"";
    iVar6 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  lVar2 = param_1->Import->_padding_;
  uVar4 = GetTypeHash((FNameEntryId)(uint)lVar2);
  uVar7 = ((int)((ulonglong)lVar2 >> 0x20) - uVar3) + uVar4 ^ uVar3 >> 0xd;
  uVar4 = (-0x61c88647 - uVar7) - uVar3 ^ uVar7 << 8;
  uVar9 = (uVar3 - uVar7) - uVar4 ^ uVar4 >> 0xd;
  uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
  uVar3 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
  uVar9 = (uVar9 - uVar3) - uVar7 ^ uVar3 >> 5;
  uVar4 = (uVar7 - uVar9) - uVar3 ^ uVar9 >> 3;
  uVar3 = (uVar3 - uVar4) - uVar9 ^ uVar4 << 10;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (uVar9 - uVar3) - uVar4 ^ uVar3 >> 0xf;
}

// GetTypeHash @ 1420c8ad0

uint __cdecl GetTypeHash(FPlaceholderValuePropertyPath *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (param_1->PropertyChain).AllocatorInstance.Data;
  iVar2 = (param_1->PropertyChain).ArrayNum;
  uVar4 = 0;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->PropertyChain).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFieldVariant_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    uVar3 = ((uint)(*(ulonglong *)pFVar5 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)pFVar5 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    uVar4 = uVar4 - uVar3 ^ uVar3 >> 0xd;
    uVar6 = (-0x61c88647 - uVar4) - uVar3 ^ uVar4 << 8;
    uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 0xd;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 0xc;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 3;
    uVar6 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 10;
    uVar4 = (uVar3 - uVar6) - uVar4 ^ uVar6 >> 0xf;
    pFVar5 = pFVar5 + 8;
  }
  return uVar4;
}

// IsEnforcePackageCompatibleVersionCheck @ 1420c9660

bool __cdecl IsEnforcePackageCompatibleVersionCheck(void)

{
  return GEnforcePackageCompatibleVersionCheck != 0;
}

// LoadPackageLinker @ 1420c9f80

FLinkerLoad * __cdecl
LoadPackageLinker(UPackage *param_1,FPackagePath *param_2,uint param_3,UPackageMap *param_4,
                 FArchive *param_5)

{
  FLinkerLoad *pFVar1;
  
  pFVar1 = GetPackageLinker(param_1,param_2,param_3,param_4,param_5,(FUObjectSerializeContext **)0x0
                            ,(FLinkerLoad *)0x0,(FLinkerInstancingContext *)0x0);
  return pFVar1;
}

// LoadPackageLinker @ 1420c9fb0

FLinkerLoad * __cdecl
LoadPackageLinker(UPackage *param_1,FPackagePath *param_2,uint param_3,UPackageMap *param_4,
                 FArchive *param_5,TFunctionRef<void___cdecl(FLinkerLoad_*)> *param_6)

{
  FLinkerLoad *pFVar1;
  FLinkerLoad *local_18 [2];
  
  pFVar1 = GetPackageLinker(param_1,param_2,param_3,param_4,param_5,(FUObjectSerializeContext **)0x0
                            ,(FLinkerLoad *)0x0,(FLinkerInstancingContext *)0x0);
  local_18[0] = pFVar1;
  (**(code **)param_6)(*(undefined8 *)&param_6->field_0x8,local_18);
  return pFVar1;
}

// LogGetPackageLinkerError @ 1420ca010

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LogGetPackageLinkerError
          (FUObjectSerializeContext *param_1,FPackagePath *param_2,FText *param_3,UObject *param_4,
          uint param_5)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  FLinkerLoad *pFVar9;
  UPackage *pUVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  FLinkerLoad *this;
  undefined4 local_res8 [2];
  FName local_res18 [2];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_198
  ;
  FText local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FFormatArgumentValue local_128;
  FFormatArgumentValue local_108;
  FString local_e8;
  FString local_d8;
  FText local_c8;
  FText local_b8;
  FText local_a8;
  FString local_98;
  TSharedRef<FTokenizedMessage,1> local_88;
  FTextFormat local_78;
  FMessageLog local_68;
  
  pFVar9 = (FLinkerLoad *)0x0;
  local_res8[0] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    FName::FName(&NAME_LoadErrors,"LoadErrors");
    _Init_thread_footer(&_TSS0);
  }
  this = pFVar9;
  if (param_1 != (FUObjectSerializeContext *)0x0) {
    pFVar9 = param_1->SerializedPackageLinker;
    this = (FLinkerLoad *)param_1->SerializedObject;
  }
  bVar4 = FPackagePath::IsEmpty(param_2);
  if (bVar4) {
    pFVar6 = FString::FString(&local_e8,L"NULL");
  }
  else {
    pFVar6 = FPackagePath::GetDebugName(param_2,&local_d8);
  }
  local_178.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_178.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  if ((bVar4) && (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if ((!bVar4) && (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  local_198.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Pairs.ArrayNum = 0;
  local_198.Pairs.ArrayMax = 0;
  pFVar7 = FText::FromString(&local_c8,&local_178);
  bVar3 = true;
  bVar4 = false;
  local_108.Type = Text;
  FText::FText((FText *)&local_108.TextValue,pFVar7);
  if ((local_108.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FString::FString(&local_148,L"LoadingFile");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_198,&local_148,&local_108);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if (local_108.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_108.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  local_128.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(param_3->TextData).Reference;
  local_128.Type = Text;
  if (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_128.TextValue.field0_0x0.TypedValue.TextData.Reference + 8))
              (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference,local_res8);
  }
  local_128.TextValue.field0_0x0.TypedValue.Flags = param_3->Flags;
  if ((local_128.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FString::FString(&local_138,L"ErrorMessage");
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
  Emplace<FString,FFormatArgumentValue>(&local_198,&local_138,&local_128);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *(ITextData *)local_128.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))
              ();
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_b8,L"Linker",L"FailedLoad",
                      L"Failed to load \'{LoadingFile}\': {ErrorMessage}");
  pFVar8 = FTextFormat::FTextFormat(&local_78,pFVar7,Default);
  FText::Format(&local_188,pFVar8,&local_198);
  if (local_b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
  }
  if (pFVar9 == (FLinkerLoad *)0x0) {
    if (this != (FLinkerLoad *)0x0) {
      pFVar9 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
      if (pFVar9 != (FLinkerLoad *)0x0) goto LAB_1420ca2e3;
      pUVar10 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this);
      local_res18[0] = (FName)pUVar10->_padding_;
      FName::ToString(local_res18,&local_168);
      pFVar6 = &local_168;
      bVar3 = false;
      bVar4 = true;
      FVar13.Data = local_168.Data.AllocatorInstance.Data;
      goto LAB_1420ca2fe;
    }
  }
  else {
LAB_1420ca2e3:
    FPackagePath::GetDebugName(&pFVar9->PackagePath,&local_158);
    pFVar6 = &local_158;
    FVar13.Data = local_158.Data.AllocatorInstance.Data;
LAB_1420ca2fe:
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    if ((bVar4) && (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    pFVar6 = FText::ToString(&local_188);
    pFVar12 = (FScriptContainerElement *)L"";
    if (iVar1 != 0) {
      pFVar12 = FVar13.Data;
    }
    pFVar6 = FAssetMsg::GetAssetLogString(&local_98,(wchar_t *)pFVar12,pFVar6);
    pFVar7 = FText::FromString(&local_a8,pFVar6);
    FText::operator=(&local_188,pFVar7);
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (FVar13.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar13.Data);
    }
  }
  FMessageLog::FMessageLog(&local_68,&NAME_LoadErrors);
  pwVar11 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar11,L"SavePackagesThatHaveFailedLoads");
  if (bVar4) {
    FMessageLog::Warning(&local_68,&local_88,&local_188);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
  }
  else {
    pFVar6 = FText::ToString(&local_188);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    bVar4 = SafeLoadError(param_4,param_5,pwVar11);
    if (bVar4) goto LAB_1420ca4fa;
  }
  if ((param_5 & 0x2002) == 0) {
    UE::Logging::Private::BasicLog<64>(&LOG_Static,(FLogCategoryBase *)&LogHAL);
    if (2 < (byte)LogLinker._0_1_) {
      FText::ToString(&local_188);
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogLinker);
    }
    UE::Logging::Private::BasicLog<64>(&LOG_Static,(FLogCategoryBase *)&LogHAL);
    `LogGetPackageLinkerError'::__l2::Local::OutputErrorDetail(param_1,&NAME_LoadErrors);
  }
  else {
    UE::Logging::Private::BasicLog<64>(&LOG_Static,(FLogCategoryBase *)&LogHAL);
    if (4 < (byte)LogLinker._0_1_) {
      FText::ToString(&local_188);
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogLinker);
    }
    UE::Logging::Private::BasicLog<64>(&LOG_Static,(FLogCategoryBase *)&LogHAL);
  }
LAB_1420ca4fa:
  FMessageLog::~FMessageLog(&local_68);
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data,
             local_198.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_198.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_198.Pairs.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return;
}

// OutputErrorDetail @ 1420caa20

void __cdecl
`LogGetPackageLinkerError'::__l2::Local::OutputErrorDetail
          (FUObjectSerializeContext *param_1,FName *param_2)

{
  FTokenizedMessage *pFVar1;
  FText *pFVar2;
  TSharedRef<FTextToken,1> *pTVar3;
  FString *pFVar4;
  TSharedRef<FAssetNameToken,1> *pTVar5;
  TSharedRef<FUObjectToken,1> *pTVar6;
  TSharedRef<IMessageToken,1> local_98;
  TSharedRef<FAssetNameToken,1> local_88;
  TSharedRef<FUObjectToken,1> local_78;
  TSharedRef<FTokenizedMessage,1> local_68;
  TSharedRef<FTokenizedMessage,1> local_58;
  TSharedRef<FTokenizedMessage,1> local_48;
  FMessageLog local_38;
  
  if (((param_1 != (FUObjectSerializeContext *)0x0) && (param_1->SerializedObject != (UObject *)0x0)
      ) && (param_1->SerializedImportLinker != (FLinkerLoad *)0x0)) {
    FMessageLog::FMessageLog(&local_38,param_2);
    pFVar2 = FText::FText((FText *)&local_98);
    FMessageLog::Info(&local_38,&local_68,pFVar2);
    if (local_98.Object != (IMessageToken *)0x0) {
      (**(code **)((local_98.Object)->_padding_ + 0x10))();
    }
    pFVar1 = local_68.Object;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_78,L"Linker",L"FailedLoad_Message",L"Failed to load");
    pTVar3 = FTextToken::Create((TSharedRef<FTextToken,1> *)&local_88,pFVar2,true);
    local_98.Object = (IMessageToken *)pTVar3->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(pFVar1,&local_48,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (local_78.Object != (FUObjectToken *)0x0) {
      (**(code **)((local_78.Object)->_padding_ + 0x10))();
    }
    pFVar1 = local_68.Object;
    pFVar2 = FText::FText((FText *)&local_58);
    pFVar4 = FLinkerTables::GetImportPathName
                       ((FLinkerTables *)&param_1->SerializedImportLinker->_padding_,
                        (FString *)&local_48,param_1->SerializedImportIndex);
    pTVar5 = FAssetNameToken::Create(&local_88,pFVar4,pFVar2);
    local_98.Object = (IMessageToken *)pTVar5->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (pTVar5->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(pFVar1,(TSharedRef<FTokenizedMessage,1> *)&local_78,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (local_48.Object != (FTokenizedMessage *)0x0) {
      FMemory::Free(local_48.Object);
    }
    if (local_58.Object != (FTokenizedMessage *)0x0) {
      (**(code **)((local_58.Object)->_padding_ + 0x10))();
    }
    pFVar1 = local_68.Object;
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_88,L"Linker",L"FailedLoad_Referenced",L"Referenced by");
    pTVar3 = FTextToken::Create((TSharedRef<FTextToken,1> *)&local_78,pFVar2,true);
    local_98.Object = (IMessageToken *)pTVar3->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (pTVar3->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(pFVar1,&local_58,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (local_88.Object != (FAssetNameToken *)0x0) {
      (**(code **)((local_88.Object)->_padding_ + 0x10))();
    }
    pFVar2 = FText::FText((FText *)&local_88);
    pTVar6 = FUObjectToken::Create(&local_78,param_1->SerializedObject,pFVar2);
    local_98.Object = (IMessageToken *)pTVar6->Object;
    local_98.SharedReferenceCount.ReferenceController =
         (pTVar6->SharedReferenceCount).ReferenceController;
    if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(local_68.Object,&local_58,&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    if (local_88.Object != (FAssetNameToken *)0x0) {
      (**(code **)((local_88.Object)->_padding_ + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_38);
  }
  return;
}

// RemapGuid @ 1420d0740

FGuid * __cdecl RemapGuid(FGuid *__return_storage_ptr__,FUniqueObjectGuid *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  ulong64 uVar6;
  FGuid *pFVar7;
  FGuid *pFVar8;
  FGuid local_18;
  
  if ((((param_1->Guid).D == 0 && (param_1->Guid).C == 0) && (param_1->Guid).B == 0) &&
      (param_1->Guid).A == 0) {
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    return __return_storage_ptr__;
  }
  if (param_2 == -1) {
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("PIEInstanceID != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LazyObjectPtr.cpp"
                       ,0x1c,L"");
    if (bVar5) {
code_r0x0001420d07d4:
      pcVar1 = (code *)swi(3);
      pFVar7 = (FGuid *)(*pcVar1)();
      return pFVar7;
    }
  }
  else if ((9 < param_2) &&
          (bVar5 = FDebug::CheckVerifyFailedImpl2
                             ("PIEInstanceID < 10",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LazyObjectPtr.cpp"
                              ,0x1d,L""), bVar5)) goto code_r0x0001420d07d4;
  uVar6 = CityHash64((char *)param_1,0x10);
  pFVar7 = TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>::
           FindOrAddImpl<FGuid_const_&>
                     ((TMapBase<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,0>_>
                       *)(PIEGuidMap + param_2),(uint)uVar6,&param_1->Guid);
  if (((pFVar7->D == 0 && pFVar7->C == 0) && pFVar7->B == 0) && pFVar7->A == 0) {
    pFVar8 = FGuid::NewGuid(&local_18);
    uVar2 = pFVar8->B;
    uVar3 = pFVar8->C;
    uVar4 = pFVar8->D;
    pFVar7->A = pFVar8->A;
    pFVar7->B = uVar2;
    pFVar7->C = uVar3;
    pFVar7->D = uVar4;
  }
  uVar2 = pFVar7->B;
  uVar3 = pFVar7->C;
  uVar4 = pFVar7->D;
  __return_storage_ptr__->A = pFVar7->A;
  __return_storage_ptr__->B = uVar2;
  __return_storage_ptr__->C = uVar3;
  __return_storage_ptr__->D = uVar4;
  return __return_storage_ptr__;
}

// ResetLinkerExports @ 1420d1ba0

void __cdecl ResetLinkerExports(UPackage *param_1)

{
  FAdditionalInfo *pFVar1;
  FLinkerLoad *this;
  
  FLinkerManager::Get();
  if (((param_1 != (UPackage *)0x0) &&
      (pFVar1 = (param_1->AdditionalInfo).Ptr, pFVar1 != (FAdditionalInfo *)0x0)) &&
     (this = pFVar1->LinkerLoad, this != (FLinkerLoad *)0x0)) {
    if (this->OwnerThread != GGameThreadId) {
      FlushAsyncLoading(-1);
    }
    FLinkerLoad::DetachExports(this);
    return;
  }
  return;
}

// ResetLoaders @ 1420d1c60

void __cdecl ResetLoaders(UObject *param_1)

{
  FAdditionalInfo *pFVar1;
  FLinkerLoad *pFVar2;
  UPackage *pUVar3;
  FLinkerManager *this;
  FLinkerLoad *local_res10 [3];
  TArrayView<FLinkerLoad_*_const,int> local_18;
  
  pUVar3 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  if (((pUVar3 != (UPackage *)0x0) &&
      (pFVar1 = (pUVar3->AdditionalInfo).Ptr, pFVar1 != (FAdditionalInfo *)0x0)) &&
     (pFVar2 = pFVar1->LinkerLoad, pFVar2 != (FLinkerLoad *)0x0)) {
    local_18.ArrayNum = 1;
    local_18.DataPtr = local_res10;
    local_res10[0] = pFVar2;
    ConditionalFlushAsyncLoadingForLinkers(&local_18);
    this = FLinkerManager::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = local_res10;
    local_res10[0] = pFVar2;
    FLinkerManager::ResetLoaders(this,&local_18);
  }
  return;
}

// ResetLoaders @ 1420d1d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl ResetLoaders(TArrayView<UObject_*_const,int> *param_1)

{
  UObject **ppUVar1;
  uint *puVar2;
  FAdditionalInfo *pFVar3;
  FLinkerLoad *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  UPackage *pUVar10;
  ulonglong uVar11;
  TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> *pTVar12;
  FLinkerManager *this;
  byte bVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong *puVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  FScriptContainerElement *pFVar22;
  ulonglong *puVar23;
  UObject **ppUVar24;
  undefined1 auStackY_158 [32];
  uint local_128;
  uint uStack_124;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f0;
  FSparseArrayAllocationInfo local_d0;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TArrayView<FLinkerLoad_*_const,int> local_a8;
  TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> local_98;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  puVar23 = (ulonglong *)0x0;
  ppUVar24 = param_1->DataPtr;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  ppUVar1 = ppUVar24 + param_1->ArrayNum;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  do {
    if (ppUVar24 == ppUVar1) {
      if (local_88._8_4_ != local_54) {
        pTVar12 = TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Array
                            ((TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>
                              *)local_88,&local_98);
        local_b8 = (pTVar12->AllocatorInstance).Data;
        iStack_b0 = pTVar12->ArrayNum;
        if ((iStack_b0 < 0) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_a8._12_4_ = uStack_ac;
        local_a8.ArrayNum = iStack_b0;
        local_a8.DataPtr = (FLinkerLoad **)local_b8;
        ConditionalFlushAsyncLoadingForLinkers(&local_a8);
        if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.AllocatorInstance.Data);
        }
        this = FLinkerManager::Get();
        FLinkerManager::ResetLoaders
                  (this,(TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator> *
                        )local_88);
      }
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      iVar8 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar8 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_54 = 0;
      local_60 = 0;
      local_58 = -1;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return;
    }
    pUVar10 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)*ppUVar24);
    if (((pUVar10 != (UPackage *)0x0) &&
        (pFVar3 = (pUVar10->AdditionalInfo).Ptr, pFVar3 != (FAdditionalInfo *)0x0)) &&
       (pFVar4 = pFVar3->LinkerLoad, pFVar4 != (FLinkerLoad *)0x0)) {
      if (local_54 == 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                           (int *)(local_88 + 0xc));
        iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
        FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar17 = local_68;
        }
        bVar13 = (byte)iVar9 & 0x1f;
        if (iVar9 < 0) {
          iVar9 = iVar9 + 0x1f;
          bVar13 = bVar13 - 0x20;
        }
        puVar2 = (uint *)((longlong)FVar17 + (longlong)(iVar9 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << (bVar13 & 0x1f));
        iVar9 = local_58;
      }
      else {
        local_54 = local_54 + -1;
        iVar9 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x10 + 4);
        iVar8 = local_58;
        if (local_54 != 0) {
          *(undefined4 *)(local_88._0_8_ + (longlong)iVar9 * 0x10) = 0xffffffff;
        }
      }
      local_58 = iVar9;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,&local_d0,iVar8);
      puVar18 = puVar23;
      if (local_d0.Pointer != (ulonglong *)0x0) {
        *(FLinkerLoad **)local_d0.Pointer = pFVar4;
        *(undefined4 *)((longlong)local_d0.Pointer + 8) = 0xffffffff;
        puVar18 = local_d0.Pointer;
      }
      uVar20 = *puVar18;
      uVar14 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar14 = uVar14 >> 0x10 ^ uVar14;
      if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
        FVar15.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_48.Data;
        }
        for (iVar8 = *(int *)(FVar15.Data + (ulonglong)(local_40 - 1 & uVar14) * 4); iVar8 != -1;
            iVar8 = *(int *)(local_88._0_8_ + (longlong)iVar8 * 0x10 + 8)) {
          if (*(ulonglong *)(local_88._0_8_ + (longlong)iVar8 * 0x10) == uVar20) {
            if (iVar8 != -1) {
              *(ulonglong *)(local_88._0_8_ + (longlong)iVar8 * 0x10) = uVar20;
              TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_88,local_d0.Index,1);
              goto LAB_1420d219b;
            }
            break;
          }
        }
      }
      uVar19 = 1;
      uVar16 = local_88._8_4_ - local_54;
      if (3 < uVar16) {
        uVar20 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar19 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((int)uVar16 < 1) || ((int)uVar19 <= (int)local_40)) {
        uVar14 = local_40 - 1 & uVar14;
        *(uint *)((longlong)puVar18 + 0xc) = uVar14;
        FVar15.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar15.Data = local_48.Data;
        }
        uVar20 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(puVar18 + 1) = *(undefined4 *)(FVar15.Data + uVar20 * 4);
        *(int *)(FVar15.Data + uVar20 * 4) = local_d0.Index;
      }
      else {
        local_40 = uVar19;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
        }
        if (uVar19 != 0) {
          uVar14 = uVar19;
          if (uVar19 < 2) {
            if (local_48.Data != (FScriptContainerElement *)0x0) {
              uVar14 = 0;
              goto LAB_1420d1f9e;
            }
          }
          else {
LAB_1420d1f9e:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_48,0,uVar14,4);
          }
          if (0 < (int)uVar19) {
            uVar20 = (ulonglong)uVar19;
            puVar18 = puVar23;
            do {
              FVar15.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar15.Data = local_48.Data;
              }
              uVar11 = (longlong)(int)uVar19 - 1U & (ulonglong)puVar18;
              puVar18 = (ulonglong *)((longlong)puVar18 + 1);
              *(undefined4 *)(FVar15.Data + uVar11 * 4) = 0xffffffff;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        if (local_40 != 0) {
          local_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
          local_128 = 0;
          uStack_124 = 1;
          uStack_114 = 0;
          uStack_110 = 0;
          puVar18 = puVar23;
          if (local_60 != 0) {
            FVar17 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
            if (local_68 != (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_68;
            }
            uVar14 = *(uint *)FVar17;
            puVar21 = puVar23;
            while (uVar14 == 0) {
              uStack_110 = (int)puVar21 + 0x20;
              puVar21 = (ulonglong *)(ulonglong)uStack_110;
              iVar8 = (int)puVar18;
              local_128 = iVar8 + 1;
              puVar18 = (ulonglong *)(ulonglong)local_128;
              if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_128) goto LAB_1420d20a3;
              uVar14 = ((uint *)((longlong)FVar17 + 4))[iVar8];
            }
            uStack_124 = -uVar14 & uVar14;
            uVar20 = (ulonglong)uStack_124 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uStack_114 = (int)lVar5 + -1 + (int)puVar21;
            puVar18 = (ulonglong *)(ulonglong)uStack_114;
            if ((int)local_60 < (int)uStack_114) {
LAB_1420d20a3:
              puVar18 = (ulonglong *)(ulonglong)local_60;
              uStack_114 = local_60;
            }
          }
          local_f0._padding_ = CONCAT44(uStack_124,local_128);
          local_f0.CurrentBitIndex = uStack_114;
          local_f0.UnvisitedBitMask = 0xffffffff;
          local_f0._28_4_ = uStack_10c;
          local_f0.BaseBitIndex = uStack_110;
          if ((int)puVar18 < (int)local_60) {
            do {
              pFVar22 = (FScriptContainerElement *)(local_88._0_8_ + (longlong)(int)puVar18 * 0x10);
              uVar14 = ((uint)(*(ulonglong *)pFVar22 >> 0x14) & 0xffff ^
                       (uint)(*(ulonglong *)pFVar22 >> 4)) * -0x7a143595;
              uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
              uVar14 = (uVar14 >> 0x10 ^ uVar14) & local_40 - 1;
              *(uint *)(pFVar22 + 0xc) = uVar14;
              FVar15.Data = local_50;
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                FVar15.Data = local_48.Data;
              }
              uVar20 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar14;
              *(undefined4 *)(pFVar22 + 8) = *(undefined4 *)(FVar15.Data + uVar20 * 4);
              *(int *)(FVar15.Data + uVar20 * 4) = (int)puVar18;
              local_f0.UnvisitedBitMask = local_f0.UnvisitedBitMask & ~local_f0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f0);
              puVar18 = (ulonglong *)(ulonglong)(uint)local_f0.CurrentBitIndex;
            } while (local_f0.CurrentBitIndex < (local_f0.Array)->NumBits);
          }
        }
      }
    }
LAB_1420d219b:
    ppUVar24 = ppUVar24 + 1;
  } while( true );
}

// ResetLoadersForSave @ 1420d3950

void __cdecl ResetLoadersForSave(UPackage *param_1,wchar_t *param_2)

{
  FAdditionalInfo *pFVar1;
  FLinkerLoad *pFVar2;
  bool bVar3;
  size_t sVar4;
  FPackagePath *this;
  FLinkerManager *this_00;
  FLinkerLoad *local_res8 [4];
  FPackagePath local_28;
  undefined4 uStack_1c;
  TArrayView<FLinkerLoad_*_const,int> local_18;
  
  if (((param_1 != (UPackage *)0x0) &&
      (pFVar1 = (param_1->AdditionalInfo).Ptr, pFVar1 != (FAdditionalInfo *)0x0)) &&
     (pFVar2 = pFVar1->LinkerLoad, pFVar2 != (FLinkerLoad *)0x0)) {
    local_28._8_4_ = 0;
    local_28.PackageName = (FName)param_2;
    if (param_2 != (wchar_t *)0x0) {
      sVar4 = wcslen(param_2);
      local_28._8_4_ = SUB84(sVar4,0);
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = local_28._8_4_;
    local_18.DataPtr = (FLinkerLoad **)local_28.PackageName;
    this = FPackagePath::FromLocalPath(&local_28,(TStringView<wchar_t> *)&local_18);
    bVar3 = FPackagePath::operator==(this,&pFVar2->PackagePath);
    if (bVar3) {
      local_28.PackageName = (FName)local_res8;
      local_28.HeaderExtension = Asset;
      local_28._9_3_ = 0;
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = 1;
      local_res8[0] = pFVar2;
      local_18.DataPtr = (FLinkerLoad **)local_28.PackageName;
      ConditionalFlushAsyncLoadingForLinkers(&local_18);
      this_00 = FLinkerManager::Get();
      local_28.PackageName = (FName)local_res8;
      local_28.HeaderExtension = Asset;
      local_28._9_3_ = 0;
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = 1;
      local_res8[0] = pFVar2;
      local_18.DataPtr = (FLinkerLoad **)local_28.PackageName;
      FLinkerManager::ResetLoaders(this_00,&local_18);
    }
  }
  return;
}

// ResetLoadersForSave @ 1420d3a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl ResetLoadersForSave(TArrayView<FPackageSaveInfo_const_,int> *param_1)

{
  uint *puVar1;
  FAdditionalInfo *pFVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FPackagePath *this;
  ulonglong uVar7;
  TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> *pTVar8;
  TArrayView<FLinkerLoad_*_const,int> *pTVar9;
  FLinkerManager *this_00;
  byte bVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  FLinkerLoad *pFVar16;
  FLinkerLoad *pFVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  FPackageSaveInfo *pFVar20;
  FLinkerLoad *pFVar21;
  FPackageSaveInfo *pFVar22;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [16];
  undefined4 local_108;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [32];
  TArrayView<FLinkerLoad_*_const,int> local_d8;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  FPackagePath local_a0 [2];
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar21 = (FLinkerLoad *)0x0;
  pFVar22 = param_1->DataPtr;
  pFVar20 = pFVar22 + param_1->ArrayNum;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_54 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  do {
    if (pFVar22 == pFVar20) {
      if (local_88._8_4_ != local_54) {
        pTVar8 = TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Array
                           ((TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>
                             *)local_88,
                            (TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_> *)local_f8);
        pTVar9 = TArrayView<FLinkerLoad_*_const,int>::
                 TArrayView<FLinkerLoad_*_const,int><TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_>,TArray<FLinkerLoad_*,TSizedDefaultAllocator<32>_>_>
                           (&local_d8,pTVar8);
        local_118._0_8_ = pTVar9->DataPtr;
        local_118._8_8_ = *(undefined8 *)&pTVar9->ArrayNum;
        ConditionalFlushAsyncLoadingForLinkers((TArrayView<FLinkerLoad_*_const,int> *)local_118);
        if ((void *)CONCAT44(local_f8._4_4_,local_f8._0_4_) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(local_f8._4_4_,local_f8._0_4_));
        }
        this_00 = FLinkerManager::Get();
        FLinkerManager::ResetLoaders
                  (this_00,(TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>
                            *)local_88);
      }
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      iVar5 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar5 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_54 = 0;
      local_60 = 0;
      local_58 = -1;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return;
    }
    if (((pFVar22->Package != (UPackage *)0x0) &&
        (pFVar2 = (pFVar22->Package->AdditionalInfo).Ptr, pFVar2 != (FAdditionalInfo *)0x0)) &&
       (pFVar16 = pFVar2->LinkerLoad, pFVar16 != (FLinkerLoad *)0x0)) {
      local_118._0_8_ = (pFVar22->Filename).Data.AllocatorInstance.Data;
      iVar5 = (pFVar22->Filename).Data.ArrayNum;
      local_d8.ArrayNum = iVar5 + -1;
      if (iVar5 == 0) {
        local_d8.ArrayNum = 0;
      }
      local_118._8_8_ = CONCAT44(local_d8._12_4_,local_d8.ArrayNum);
      local_d8.DataPtr = (FLinkerLoad **)local_118._0_8_;
      this = FPackagePath::FromLocalPath(local_a0,(TStringView<wchar_t> *)local_118);
      bVar4 = FPackagePath::operator==(this,&pFVar16->PackagePath);
      if (bVar4) {
        pFVar16 = pFVar21;
        if (pFVar22->Package != (UPackage *)0x0) {
          pFVar2 = (pFVar22->Package->AdditionalInfo).Ptr;
          if (pFVar2 == (FAdditionalInfo *)0x0) {
            pFVar16 = (FLinkerLoad *)0x0;
          }
          else {
            pFVar16 = pFVar2->LinkerLoad;
          }
        }
        if (local_54 == 0) {
          iVar5 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                             (int *)(local_88 + 0xc));
          iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
          FVar14 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
          if (local_68 != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_68;
          }
          bVar10 = (byte)iVar6 & 0x1f;
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x1f;
            bVar10 = bVar10 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar14 + (longlong)(iVar6 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar10 & 0x1f));
          iVar6 = local_58;
        }
        else {
          local_54 = local_54 + -1;
          iVar6 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x10 + 4);
          iVar5 = local_58;
          if (local_54 != 0) {
            *(undefined4 *)(local_88._0_8_ + (longlong)iVar6 * 0x10) = 0xffffffff;
          }
        }
        local_58 = iVar6;
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_88,(FSparseArrayAllocationInfo *)local_f8,iVar5);
        pFVar17 = pFVar21;
        if ((FLinkerLoad *)local_f8._8_8_ != (FLinkerLoad *)0x0) {
          *(longlong *)local_f8._8_8_ = (longlong)pFVar16;
          *(undefined4 *)(local_f8._8_8_ + 8) = 0xffffffff;
          pFVar17 = (FLinkerLoad *)local_f8._8_8_;
        }
        uVar18 = pFVar17->_padding_;
        uVar11 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar11 = uVar11 >> 0x10 ^ uVar11;
        if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
          FVar12.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_48.Data;
          }
          for (iVar5 = *(int *)(FVar12.Data + (ulonglong)(local_40 - 1 & uVar11) * 4); iVar5 != -1;
              iVar5 = *(int *)(local_88._0_8_ + (longlong)iVar5 * 0x10 + 8)) {
            if (*(ulonglong *)(local_88._0_8_ + (longlong)iVar5 * 0x10) == uVar18) {
              if (iVar5 != -1) {
                *(ulonglong *)(local_88._0_8_ + (longlong)iVar5 * 0x10) = uVar18;
                TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_88,local_f8._0_4_,1);
                goto LAB_1420d3f34;
              }
              break;
            }
          }
        }
        uVar15 = 1;
        uVar13 = local_88._8_4_ - local_54;
        if (3 < uVar13) {
          uVar18 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          uVar15 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((int)uVar13 < 1) || ((int)uVar15 <= (int)local_40)) {
          uVar11 = local_40 - 1 & uVar11;
          *(uint *)((longlong)&pFVar17->_padding_ + 4) = uVar11;
          FVar12.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_48.Data;
          }
          uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar11;
          *(undefined4 *)&pFVar17->_padding_ = *(undefined4 *)(FVar12.Data + uVar18 * 4);
          *(undefined4 *)(FVar12.Data + uVar18 * 4) = local_f8._0_4_;
        }
        else {
          local_40 = uVar15;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
          }
          if (uVar15 != 0) {
            uVar11 = uVar15;
            if (uVar15 < 2) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar11 = 0;
                goto LAB_1420d3d3a;
              }
            }
            else {
LAB_1420d3d3a:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar11,4);
            }
            if (0 < (int)uVar15) {
              uVar18 = (ulonglong)uVar15;
              pFVar16 = pFVar21;
              do {
                FVar12.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar12.Data = local_48.Data;
                }
                uVar7 = (ulonglong)pFVar16 & (longlong)(int)uVar15 - 1U;
                pFVar16 = (FLinkerLoad *)((longlong)&pFVar16->_padding_ + 1);
                *(undefined4 *)(FVar12.Data + uVar7 * 4) = 0xffffffff;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
          }
          if (local_40 != 0) {
            local_118._8_8_ = local_88 + 0x10;
            local_118._0_8_ = &DAT_100000000;
            uStack_104 = 0;
            uStack_100 = 0;
            pFVar16 = pFVar21;
            if (local_60 != 0) {
              FVar14 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
              if (local_68 != (ForElementType<unsigned_int>)0x0) {
                FVar14 = local_68;
              }
              uVar11 = *(uint *)FVar14;
              pFVar17 = pFVar21;
              while (uVar11 == 0) {
                uStack_100 = (int)pFVar17 + 0x20;
                pFVar17 = (FLinkerLoad *)(ulonglong)uStack_100;
                iVar5 = (int)pFVar16;
                uVar11 = iVar5 + 1;
                pFVar16 = (FLinkerLoad *)(ulonglong)uVar11;
                local_118._4_4_ = (undefined4)((ulonglong)local_118._0_8_ >> 0x20);
                local_118._0_4_ = uVar11;
                if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11
                   ) goto LAB_1420d3e3e;
                uVar11 = ((uint *)((longlong)FVar14 + 4))[iVar5];
              }
              local_118._4_4_ = -uVar11 & uVar11;
              uVar18 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
              lVar3 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              uStack_104 = (int)lVar3 + -1 + (int)pFVar17;
              pFVar16 = (FLinkerLoad *)(ulonglong)uStack_104;
              if ((int)local_60 < (int)uStack_104) {
LAB_1420d3e3e:
                pFVar16 = (FLinkerLoad *)(ulonglong)local_60;
                uStack_104 = local_60;
              }
            }
            local_108 = 0xffffffff;
            local_c8 = (longlong *)local_88;
            local_c0.CurrentBitIndex = uStack_104;
            local_c0.UnvisitedBitMask = 0xffffffff;
            local_c0._28_4_ = uStack_fc;
            local_c0.BaseBitIndex = uStack_100;
            local_c0._padding_ = local_118._0_8_;
            local_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_118._8_8_;
            if ((int)pFVar16 < (int)local_60) {
              do {
                puVar19 = (ulonglong *)((longlong)(int)pFVar16 * 0x10 + *local_c8);
                uVar11 = ((uint)(*puVar19 >> 0x14) & 0xffff ^ (uint)(*puVar19 >> 4)) * -0x7a143595;
                uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
                uVar11 = (uVar11 >> 0x10 ^ uVar11) & local_40 - 1;
                *(uint *)((longlong)puVar19 + 0xc) = uVar11;
                FVar12.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar12.Data = local_48.Data;
                }
                uVar18 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar11;
                *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(FVar12.Data + uVar18 * 4);
                *(int *)(FVar12.Data + uVar18 * 4) = (int)pFVar16;
                local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
                pFVar16 = (FLinkerLoad *)(ulonglong)(uint)local_c0.CurrentBitIndex;
              } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
            }
          }
        }
      }
    }
LAB_1420d3f34:
    pFVar22 = pFVar22 + 1;
  } while( true );
}

// ResolvePropertyAddress @ 1420d5c10

uchar * __cdecl ResolvePropertyAddress(FFieldVariant param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  FFieldClass *pFVar3;
  uchar *puVar4;
  UClass *pUVar5;
  ulonglong uVar6;
  
  pFVar3 = FProperty::StaticClass();
  bVar2 = FFieldVariant::IsA((FFieldVariant *)param_1.Container,pFVar3);
  if ((bVar2) && (uVar6 = *(ulonglong *)param_1.Container, uVar6 != 0)) {
    if (*(int *)(uVar6 + 0x30) < 1) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        puVar4 = (uchar *)(*pcVar1)();
        return puVar4;
      }
    }
    if (param_2 == (void *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        puVar4 = (uchar *)(*pcVar1)();
        return puVar4;
      }
    }
  }
  else {
    pUVar5 = Z_Construct_UClass_UProperty_NoRegister();
    bVar2 = FFieldVariant::IsA((FFieldVariant *)param_1.Container,pUVar5);
    if ((!bVar2) || (uVar6 = *(ulonglong *)param_1.Container & 0xfffffffffffffffe, uVar6 == 0)) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerPlaceholderBase.cpp"
                         ,0x1a9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        puVar4 = (uchar *)(*pcVar1)();
        return puVar4;
      }
      return (uchar *)0x0;
    }
    if (*(int *)(uVar6 + 0x30) < 1) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("ArrayIndex < ArrayDim",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealTypePrivate.h"
                         ,0x71,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        puVar4 = (uchar *)(*pcVar1)();
        return puVar4;
      }
    }
    if (param_2 == (void *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealTypePrivate.h"
                         ,0x72,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        puVar4 = (uchar *)(*pcVar1)();
        return puVar4;
      }
    }
  }
  return (uchar *)((longlong)*(int *)(uVar6 + 0x44) + (longlong)param_2);
}

// StaticFindAllImportObjects @ 1420db2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
StaticFindAllImportObjects
          (TArray<FObjectImport,TSizedDefaultAllocator<32>_> *param_1,FPackageIndex param_2,
          FPackagePath *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  size_t sVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FName FVar9;
  ForElementType<FPackageIndex> FVar10;
  uint uVar11;
  void *_Dst;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  UObject *pUVar15;
  uint uVar16;
  UObjectBaseUtility *this;
  ulonglong uVar17;
  ForElementType<FPackageIndex> FVar18;
  int iVar19;
  FName *this_00;
  int local_res10 [2];
  undefined1 auStackY_5c8 [32];
  undefined1 local_578 [4];
  int local_574;
  int local_570;
  uint local_56c;
  UObjectBaseUtility *local_568;
  UObject *local_560;
  ForElementType<FPackageIndex> local_558;
  FName local_550;
  FPackagePath *local_548;
  TArray<FObjectImport,TSizedDefaultAllocator<32>_> *local_540;
  FString local_538;
  wchar_t *local_528;
  uint uStack_520;
  undefined4 uStack_51c;
  wchar_t *local_518;
  uint uStack_510;
  undefined4 uStack_50c;
  FString local_508;
  FAssetLog local_4f8;
  FString local_4e0;
  TStringView<wchar_t> local_4c8;
  TStringView<wchar_t> local_4b8;
  FString local_4a8;
  FString local_498;
  ForElementType<FPackageIndex> local_488;
  int local_380;
  int local_37c;
  ForElementType<FPackageIndex> local_378;
  int local_270;
  int local_26c;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  local_res10[0] = param_2.Index;
  local_548 = param_3;
  local_540 = param_1;
  if ((-1 < param_2.Index) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("IsImport()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                         ,0x55,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar13 = -local_res10[0] - 1;
  uVar11 = 0;
  if ((int)uVar13 < param_1->ArrayNum) {
    uVar11 = ~uVar13 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this = *(UObjectBaseUtility **)
          ((param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x38 + 0x28);
  if (this == (UObjectBaseUtility *)0x0) {
LAB_1420db3f5:
    local_568 = (UObjectBaseUtility *)0x0;
    this = (UObjectBaseUtility *)0x0;
  }
  else {
    local_568 = this;
    pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar3) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) goto LAB_1420db3f5;
    if ((*(uint *)&this[1].field_0x4 >> 9 & 1) != 0) goto LAB_1420db41f;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("Package && Package->HasAnyPackageFlags(PKG_Cooked)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                     ,0xe40,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1420db41f:
  if (5 < (byte)LogLinker._0_1_) {
    if ((-1 < local_res10[0]) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("IsImport()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                           ,0x55,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    UObjectBaseUtility::GetFullName(this,&local_4e0,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogLinker);
    if (local_4e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4e0.Data.AllocatorInstance.Data);
    }
  }
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.Base = local_248;
  local_488.SecondaryData = (ForElementType<FPackageIndex>)0x0;
  local_268.CurPos = local_248;
  local_380 = 0;
  local_268.End = (wchar_t *)local_48;
  local_37c = 0x40;
  local_378.SecondaryData = (ForElementType<FPackageIndex>)0x0;
  local_270 = 0;
  local_26c = 0x40;
  iVar3 = 0;
  if ((&local_488 <= (ForElementType<FPackageIndex> *)local_res10) &&
     (local_res10 < &local_488.SecondaryData)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = local_380;
    if (local_380 == local_37c) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageIndex>_>
                        (0x404,&local_488,&local_37c);
    }
  }
  local_380 = iVar3 + 1;
  FVar18 = (ForElementType<FPackageIndex>)&local_488;
  if (local_488.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
    FVar18 = local_488.SecondaryData;
  }
  *(int *)((longlong)FVar18 + (longlong)iVar3 * 4) = local_res10[0];
  do {
    do {
      if (local_380 < 1) {
        if (local_378.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
          FMemory::Free((void *)local_378.SecondaryData);
        }
        if (local_488.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
          FMemory::Free((void *)local_488.SecondaryData);
        }
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
        return;
      }
      uVar14 = 0;
      FVar18 = (ForElementType<FPackageIndex>)&local_488;
      if (local_488.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
        FVar18 = local_488.SecondaryData;
      }
      lVar12 = (longlong)(local_380 + -1) * 4;
      iVar3 = *(int *)(lVar12 + (longlong)FVar18);
      FVar18 = (ForElementType<FPackageIndex>)&local_488;
      if (local_488.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
        FVar18 = local_488.SecondaryData;
      }
      _Dst = (void *)(lVar12 + (longlong)FVar18);
      iVar4 = (local_380 - (local_380 + -1)) + -1;
      if (iVar4 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar4 << 2);
      }
      local_380 = local_380 + -1;
      UE::Core::Private::
      ReallocShrink<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageIndex>_>
                (4,4,&local_488,local_380,&local_37c);
      if ((-1 < iVar3) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsImport()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x55,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar13 = -iVar3 - 1;
      uVar11 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      local_56c = uVar13;
      if ((uVar11 == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pUVar15 = *(UObject **)
                 ((param_1->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x38 + 0x28);
      local_560 = pUVar15;
    } while (pUVar15 == (UObject *)0x0);
    local_270 = 0;
    if (local_26c < 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageIndex>_>
                (4,4,0,&local_378,0,&local_26c);
    }
    iVar4 = param_1->ArrayNum;
    if (0 < iVar4) {
      iVar19 = -1;
      uVar17 = uVar14;
      do {
        uVar13 = (uint)uVar17;
        uVar11 = 0;
        if ((int)uVar13 < iVar4) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)((param_1->AllocatorInstance).Data + uVar14 + 8) == iVar3) {
          if (((int)uVar13 < 0) &&
             (bVar2 = FDebug::CheckVerifyFailedImpl2
                                ("ImportIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                 ,0x67,L""), bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar18 = (ForElementType<FPackageIndex>)&local_378;
          if (local_378.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
            FVar18 = local_378.SecondaryData;
          }
          local_570 = iVar19;
          if ((ulonglong)FVar18 <= &local_570) {
            FVar18 = (ForElementType<FPackageIndex>)&local_378;
            if (local_378.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
              FVar18 = local_378.SecondaryData;
            }
            if ((&local_570 < (int *)((longlong)FVar18 + (longlong)local_26c * 4)) &&
               (bVar2 = FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (local_270 == local_26c) {
            local_270 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageIndex>_>
                                  (0x404,&local_378,&local_26c);
          }
          lVar12 = (longlong)local_270;
          FVar18 = (ForElementType<FPackageIndex>)&local_378;
          if (local_378.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
            FVar18 = local_378.SecondaryData;
          }
          local_270 = local_270 + 1;
          *(int *)((longlong)FVar18 + lVar12 * 4) = local_570;
        }
        iVar4 = param_1->ArrayNum;
        uVar17 = (ulonglong)(uVar13 + 1);
        iVar19 = iVar19 + -1;
        uVar14 = uVar14 + 0x38;
        pUVar15 = local_560;
      } while ((int)(uVar13 + 1) < iVar4);
    }
    iVar4 = local_270;
    FVar18 = (ForElementType<FPackageIndex>)&local_378;
    if (local_378.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
      FVar18 = local_378.SecondaryData;
    }
    local_558 = (ForElementType<FPackageIndex>)((longlong)FVar18 + (longlong)local_270 * 4);
    while( true ) {
      FVar10 = local_558;
      pUVar5 = (UClass *)0x0;
      if (local_270 != iVar4) {
        local_578[0] = 0;
        `TCheckedPointerIterator<FPackageIndex,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_578);
      }
      if (FVar18 == FVar10) break;
      local_574 = *(int *)FVar18;
      if ((-1 < local_574) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("IsImport()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                             ,0x55,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar16 = -local_574 - 1;
      uVar13 = 0;
      uVar11 = uVar13;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = (FName *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x38);
      if (this_00[5] == (FName)0x0) {
        FName::ToString((FName *)&this_00[1].Number,&local_268);
        if (local_268.End < local_268.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,1);
        }
        *local_268.CurPos = L'\0';
        local_528 = local_268.Base;
        uVar11 = uVar13;
        if (local_268.Base != (wchar_t *)0x0) {
          sVar6 = wcslen(local_268.Base);
          uVar11 = (uint)sVar6;
        }
        uStack_520 = uVar11;
        pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
        local_4c8._12_4_ = uStack_51c;
        local_4c8.Size = uStack_520;
        local_4c8.DataPtr = local_528;
        pUVar8 = StaticFindObject(pUVar7,(UObject *)0x0,&local_4c8,None);
        if (pUVar8 != (UObject *)0x0) {
          FName::ToString((FName *)&this_00[2].Number,&local_268);
          if (local_268.End < local_268.CurPos + 1) {
            TStringBuilderBase<wchar_t>::Extend(&local_268,1);
          }
          *local_268.CurPos = L'\0';
          local_518 = local_268.Base;
          if (local_268.Base != (wchar_t *)0x0) {
            sVar6 = wcslen(local_268.Base);
            uVar13 = (uint)sVar6;
          }
          uStack_510 = uVar13;
          pUVar5 = Z_Construct_UClass_UClass_NoRegister();
          local_4b8._12_4_ = uStack_50c;
          local_4b8.Size = uStack_510;
          local_4b8.DataPtr = local_518;
          pUVar5 = (UClass *)StaticFindObject(pUVar5,pUVar8,&local_4b8,None);
        }
        FVar9 = (FName)StaticFindObjectFastInternal
                                 (pUVar5,pUVar15,*this_00,None,RF_NoFlags,Borrowed);
        if (FVar9 == (FName)0x0) {
          if (2 < (byte)LogLinker._0_1_) {
            FAssetMsg::FormatPathForAssetLog(&local_498,(UObject *)local_568);
            if ((-1 < iVar3) &&
               (bVar2 = FDebug::CheckVerifyFailedImpl2
                                  ("IsImport()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x55,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            local_550.ComparisonIndex.Value = *(uint *)&pUVar15->field_0x18;
            local_550.Number = *(uint *)&pUVar15->field_0x1c;
            FName::ToString(&local_550,&local_538);
            if ((-1 < local_574) &&
               (bVar2 = FDebug::CheckVerifyFailedImpl2
                                  ("IsImport()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ObjectResource.h"
                                   ,0x55,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FName::ToString(this_00,&local_4a8);
            FString::PrintfImpl(&local_508,
                                L"Failed to resolve import \'%s\' (\'%d\') in outer \'%s\' (\'%d\') within cooked package \'%s\'"
                               );
            local_4f8.PackagePath = local_548;
            local_4f8.Path = (wchar_t *)0x0;
            local_4f8.Object = (UObject *)0x0;
            UE::Core::Private::RecordAssetLog
                      ((FName *)&LogLinker.field_0x4,Warning,&local_4f8,&local_508,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\LinkerLoad.cpp"
                       ,0xe7a);
            if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_508.Data.AllocatorInstance.Data);
            }
            if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
            }
            if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_538.Data.AllocatorInstance.Data);
            }
            if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_498.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          this_00[5] = FVar9;
          FVar10 = (ForElementType<FPackageIndex>)&local_488;
          if (local_488.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
            FVar10 = local_488.SecondaryData;
          }
          if ((ulonglong)FVar10 <= &local_574) {
            FVar10 = (ForElementType<FPackageIndex>)&local_488;
            if (local_488.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
              FVar10 = local_488.SecondaryData;
            }
            if ((&local_574 < (int *)((longlong)FVar10 + (longlong)local_37c * 4)) &&
               (bVar2 = FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          iVar19 = local_380;
          if (local_380 == local_37c) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<FPackageIndex>_>
                               (0x404,&local_488,&local_37c);
          }
          local_380 = iVar19 + 1;
          FVar10 = (ForElementType<FPackageIndex>)&local_488;
          if (local_488.SecondaryData != (ForElementType<FPackageIndex>)0x0) {
            FVar10 = local_488.SecondaryData;
          }
          *(int *)((longlong)FVar10 + (longlong)iVar19 * 4) = local_574;
        }
      }
      FVar18 = (ForElementType<FPackageIndex>)((longlong)FVar18 + 4);
      pUVar15 = local_560;
      param_1 = local_540;
    }
  } while( true );
}

// TrackPackageAssetClass @ 1420dc100

void __cdecl
TrackPackageAssetClass
          (UPackage *param_1,FLinkerLoad *param_2,
          TArray<FObjectExport,TSizedDefaultAllocator<32>_> *param_3)

{
  return;
}

// Z_Construct_UClass_UInterface_NoRegister @ 1420dfa50

UClass * __cdecl Z_Construct_UClass_UInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"Interface",
               &Z_Registration_Info_UClass_UInterface.InnerSingleton,
               UInterface::StaticRegisterNativesUInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface>,InternalVTableHelperCtorCaller<UInterface>,aFStackX_8
               ,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'BPGeneratedClassPostfix'' @ 15034fcc0

void __cdecl
`FLinkerLoad::FixupExportMap'::__l29::_dynamic_atexit_destructor_for__BPGeneratedClassPostfix__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = BPGeneratedClassPostfix.Data.AllocatorInstance.Data;
  if (BPGeneratedClassPostfix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (BPGeneratedClassPostfix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'CEnforcePackageCompatibleVersionCheck'' @ 15034fce0

void __cdecl _dynamic_atexit_destructor_for__CEnforcePackageCompatibleVersionCheck__(void)

{
  CEnforcePackageCompatibleVersionCheck._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CEnforcePackageCompatibleVersionCheck);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowCookedDataInEditorBuilds'' @ 15034fd00

void __cdecl _dynamic_atexit_destructor_for__CVarAllowCookedDataInEditorBuilds__(void)

{
  CVarAllowCookedDataInEditorBuilds._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowCookedDataInEditorBuilds);
  return;
}

// `dynamic_atexit_destructor_for_'CVarApplyBulkDataFix'' @ 15034fd20

void __cdecl _dynamic_atexit_destructor_for__CVarApplyBulkDataFix__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarApplyBulkDataFix);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipAsyncLoaderForCookedData'' @ 15034fd40

void __cdecl _dynamic_atexit_destructor_for__CVarSkipAsyncLoaderForCookedData__(void)

{
  CVarSkipAsyncLoaderForCookedData._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkipAsyncLoaderForCookedData);
  return;
}

// `dynamic_atexit_destructor_for_'FLinkerInstancingContextTestsAutomationTestInstance'' @ 15034fd60

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FLinkerInstancingContextTestsAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FLinkerInstancingContextTestsAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'GuidAnnotation'' @ 15034fd80

void __cdecl _dynamic_atexit_destructor_for__GuidAnnotation__(void)

{
  GuidAnnotation._padding_ =
       (longlong)&___7__FUObjectAnnotationSparseSearchable_UFUniqueObjectGuid___00__6B_;
  FUObjectAnnotationSparseSearchable<FUniqueObjectGuid,1>::RemoveAllAnnotations(&GuidAnnotation);
  DeleteCriticalSection((LPCRITICAL_SECTION)&GuidAnnotation.InverseAnnotationMapCritical);
  GuidAnnotation.InverseAnnotationMap._72_4_ = 0;
  if (GuidAnnotation.InverseAnnotationMap._64_8_ != 0) {
    FMemory::Free((void *)GuidAnnotation.InverseAnnotationMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FUniqueObjectGuid,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FUniqueObjectGuid,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FUniqueObjectGuid,UObjectBase_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GuidAnnotation.InverseAnnotationMap);
  FUObjectAnnotationSparse<FUniqueObjectGuid,1>::~FUObjectAnnotationSparse<FUniqueObjectGuid,1>
            ((FUObjectAnnotationSparse<FUniqueObjectGuid,1> *)&GuidAnnotation);
  return;
}

// `dynamic_atexit_destructor_for_'LogLinker'' @ 15034fdf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogLinker__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogLinker);
  return;
}

// `dynamic_atexit_destructor_for_'PIEGuidMap'' @ 15034fe10

void __cdecl _dynamic_atexit_destructor_for__PIEGuidMap__(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 10;
  puVar2 = (undefined8 *)&MissingSections[0].Sections.Elements.field_0x28;
  do {
    lVar3 = lVar3 + -1;
    *(undefined4 *)(puVar2 + -9) = 0;
    pvVar1 = (void *)puVar2[-10];
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar2 + -0x12));
    puVar2 = puVar2 + -10;
  } while (lVar3 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 15034fe70

void __cdecl `FLinkerManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  if (::Singleton.Ptr != (FLinkerManager *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015034fe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(::Singleton.Ptr)->_padding_)(::Singleton.Ptr,1);
    return;
  }
  return;
}

