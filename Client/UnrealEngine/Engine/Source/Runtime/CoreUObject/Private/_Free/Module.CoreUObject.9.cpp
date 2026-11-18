// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 414

// KeyRedirectMap'' @ 140f23c60

void __cdecl `dynamic_initializer_for_'UDEPRECATED_MetaData::KeyRedirectMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UDEPRECATED_MetaData::KeyRedirectMap__);
  return;
}

// PackagesToScriptSHAMap'' @ 140f23c80

void __cdecl `dynamic_initializer_for_'FLinkerSave::PackagesToScriptSHAMap__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FLinkerSave::PackagesToScriptSHAMap__);
  return;
}

// PrimaryAssetDisplayNameTag'' @ 140f23ca0

void __cdecl `dynamic_initializer_for_'FPrimaryAssetId::PrimaryAssetDisplayNameTag__(void)

{
  ::FName::FName(&FPrimaryAssetId::PrimaryAssetDisplayNameTag,L"PrimaryAssetDisplayName");
  return;
}

// PrimaryAssetNameTag'' @ 140f23cc0

void __cdecl `dynamic_initializer_for_'FPrimaryAssetId::PrimaryAssetNameTag__(void)

{
  ::FName::FName(&FPrimaryAssetId::PrimaryAssetNameTag,L"PrimaryAssetName");
  return;
}

// PrimaryAssetTypeTag'' @ 140f23ce0

void __cdecl `dynamic_initializer_for_'FPrimaryAssetId::PrimaryAssetTypeTag__(void)

{
  ::FName::FName(&FPrimaryAssetId::PrimaryAssetTypeTag,L"PrimaryAssetType");
  return;
}

// RootNodeID'' @ 140f23d00

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  FName local_res8 [4];
  
  pFVar3 = ::FName::FName(local_res8,L"root");
  FVar1 = *pFVar3;
  FOverriddenPropertySet::RootNodeID.Path.Path.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,FOverriddenPropertySet::RootNodeID.Path.Path.ArrayMax,
             (ForAnyElementType *)&FOverriddenPropertySet::RootNodeID,1,
             &FOverriddenPropertySet::RootNodeID.Path.Path.ArrayMax);
  *(FName *)FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data = FVar1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FOverriddenPropertySet::RootNodeID.Path.CachedHash = uVar2 + FVar1.Number;
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// bGarbageEliminationEnabled'' @ 140f23da0

void __cdecl `dynamic_initializer_for_'UObjectBaseUtility::bGarbageEliminationEnabled__(void)

{
  UObjectBaseUtility::bGarbageEliminationEnabled = GGarbageEliminationEnabled != 0;
  return;
}

// `dynamic_initializer_for_'AutoInitialize_UObjectRedirector'' @ 140f23dc0

void __cdecl _dynamic_initializer_for__AutoInitialize_UObjectRedirector__(void)

{
  FClassReloadVersionInfo local_18;
  
  local_18.Size = 0x30;
  local_18.Hash = 0;
  RegisterCompiledInInfo
            (Z_Construct_UClass_UObjectRedirector,UObjectRedirector::StaticClass,
             L"/Script/CoreUObject",L"UObjectRedirector",
             &Z_Registration_Info_UClass_UObjectRedirector,&local_18);
  return;
}

// `dynamic_initializer_for_'CVarGarbageEliminationEnabled'' @ 140f23e20

void __cdecl _dynamic_initializer_for__CVarGarbageEliminationEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGarbageEliminationEnabled,L"gc.GarbageEliminationEnabled",
             &GGarbageEliminationEnabled,
             L"If true, objects marked as Garbage will be automatically nulled and destroyed by Garbage Collector."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarGarbageEliminationEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarPrematureConfigLoadErrorLevel'' @ 140f23e70

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__CVarPrematureConfigLoadErrorLevel__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPrematureConfigLoadErrorLevel,L"obj.PrematureConfigLoadErrorLevel",
             &GPrematureConfigLoadErrorLevel,
             L"Determines the level of warning issued if LoadConfig is called on an object that is not yet sufficiently initialized. 0=Display, 1=Warning, 2=Ensure, 3=Check"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarPrematureConfigLoadErrorLevel__);
  return;
}

// `dynamic_initializer_for_'CVarUseNewPropertySaving'' @ 140f23ec0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__CVarUseNewPropertySaving__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseNewPropertySaving,L"ini.UseNewPropertySaving",&GUseNewPropertySaving,
             L"Determines if UObject property saving should use the Config APIs that can set a property (including arrays) directly in a static layer."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseNewPropertySaving__);
  return;
}

// `dynamic_initializer_for_'CVarUseObjectVisibilityFilterForAsyncLoading'' @ 140f23f10

void __cdecl _dynamic_initializer_for__CVarUseObjectVisibilityFilterForAsyncLoading__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarUseObjectVisibilityFilterForAsyncLoading,
             L"s.UseObjectVisibilityFilterForAsyncLoading",
             &GUseObjectVisibilityFilterForAsyncLoading,
             L"When active and supported by the current loader, will prevent objects still in the early loading phase from being discovered during postload\nto avoid race conditions and manipulation of objects that still haven\'t been deserialized."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseObjectVisibilityFilterForAsyncLoading__);
  return;
}

// `dynamic_initializer_for_'CVar_bEnableSubObjectsShadowSerialization'' @ 140f23f60

void __cdecl Private::_dynamic_initializer_for__CVar_bEnableSubObjectsShadowSerialization__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,Private::<lambda_6>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_bEnableSubObjectsShadowSerialization,
             L"OverridableSerializationLogic.Capabilities.SubObjectsShadowSerialization",
             &bEnableSubObjectsShadowSerialization,L"Enables shadow serialization of subobject",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVar_bEnableSubObjectsShadowSerialization__);
  return;
}

// `dynamic_initializer_for_'CVar_bT3DOverrideSerializationEnabled'' @ 140f240a0

void __cdecl Private::_dynamic_initializer_for__CVar_bT3DOverrideSerializationEnabled__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,Private::<lambda_5>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVar_bT3DOverrideSerializationEnabled,
             L"OverridableSerializationLogic.Capabilities.T3D",&bEnableT3D,
             L"Enables serialization of override state into/from T3D",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVar_bT3DOverrideSerializationEnabled__);
  return;
}

// `dynamic_initializer_for_'CapabilitiesAutoInitializer'' @ 140f241e0

void __cdecl Private::_dynamic_initializer_for__CapabilitiesAutoInitializer__(void)

{
  ECapabilities EVar1;
  
  EVar1 = FOverridableSerializationLogic::Capabilities & ~T3DSerialization;
  if (bEnableT3D) {
    EVar1 = FOverridableSerializationLogic::Capabilities | T3DSerialization;
  }
  FOverridableSerializationLogic::Capabilities = EVar1 & ~SubObjectsShadowSerialization;
  if (bEnableSubObjectsShadowSerialization) {
    FOverridableSerializationLogic::Capabilities = EVar1 | SubObjectsShadowSerialization;
  }
  return;
}

// `dynamic_initializer_for_'DebugBeginDestroyed'' @ 140f24220

void __cdecl _dynamic_initializer_for__DebugBeginDestroyed__(void)

{
  atexit(_dynamic_atexit_destructor_for__DebugBeginDestroyed__);
  return;
}

// `dynamic_initializer_for_'DebugFinishDestroyed'' @ 140f24240

void __cdecl _dynamic_initializer_for__DebugFinishDestroyed__(void)

{
  atexit(_dynamic_atexit_destructor_for__DebugFinishDestroyed__);
  return;
}

// `dynamic_initializer_for_'DebugInvMarkNames'' @ 140f24260

void __cdecl _dynamic_initializer_for__DebugInvMarkNames__(void)

{
  atexit(_dynamic_atexit_destructor_for__DebugInvMarkNames__);
  return;
}

// `dynamic_initializer_for_'DebugInvMarkWeakPtrs'' @ 140f24280

void __cdecl _dynamic_initializer_for__DebugInvMarkWeakPtrs__(void)

{
  atexit(_dynamic_atexit_destructor_for__DebugInvMarkWeakPtrs__);
  return;
}

// `dynamic_initializer_for_'DebugMarkAnnotation'' @ 140f242a0

void __cdecl _dynamic_initializer_for__DebugMarkAnnotation__(void)

{
  atexit(_dynamic_atexit_destructor_for__DebugMarkAnnotation__);
  return;
}

// `dynamic_initializer_for_'DebugSpikeMarkAnnotation'' @ 140f242c0

void __cdecl _dynamic_initializer_for__DebugSpikeMarkAnnotation__(void)

{
  atexit(_dynamic_atexit_destructor_for__DebugSpikeMarkAnnotation__);
  return;
}

// `dynamic_initializer_for_'DebugSpikeMarkNames'' @ 140f242e0

void __cdecl _dynamic_initializer_for__DebugSpikeMarkNames__(void)

{
  atexit(_dynamic_atexit_destructor_for__DebugSpikeMarkNames__);
  return;
}

// `dynamic_initializer_for_'GAssetRegistryTagsObjectsBeingForwarded'' @ 140f24300

void __cdecl _dynamic_initializer_for__GAssetRegistryTagsObjectsBeingForwarded__(void)

{
  __tlregdtor(_dynamic_atexit_destructor_for__GAssetRegistryTagsObjectsBeingForwarded__);
  return;
}

// `dynamic_initializer_for_'GComplexPathHashToId'' @ 140f24320

void __cdecl _dynamic_initializer_for__GComplexPathHashToId__(void)

{
  atexit(_dynamic_atexit_destructor_for__GComplexPathHashToId__);
  return;
}

// `dynamic_initializer_for_'GComplexPathLock'' @ 140f24340

void __cdecl _dynamic_initializer_for__GComplexPathLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GComplexPathLock,4000);
  atexit(_dynamic_atexit_destructor_for__GComplexPathLock__);
  return;
}

// `dynamic_initializer_for_'GComplexPaths'' @ 140f24370

void __cdecl _dynamic_initializer_for__GComplexPaths__(void)

{
  atexit(_dynamic_atexit_destructor_for__GComplexPaths__);
  return;
}

// `dynamic_initializer_for_'GDedicatedClientExclusionList'' @ 140f24390

void __cdecl _dynamic_initializer_for__GDedicatedClientExclusionList__(void)

{
  FClassExclusionData::FClassExclusionData(&GDedicatedClientExclusionList);
  atexit(_dynamic_atexit_destructor_for__GDedicatedClientExclusionList__);
  return;
}

// `dynamic_initializer_for_'GDedicatedServerExclusionList'' @ 140f243c0

void __cdecl _dynamic_initializer_for__GDedicatedServerExclusionList__(void)

{
  FClassExclusionData::FClassExclusionData(&GDedicatedServerExclusionList);
  atexit(_dynamic_atexit_destructor_for__GDedicatedServerExclusionList__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UObject_UObjectInternals'' @ 140f243f0

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UObject_UObjectInternals__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UObject_UObjectInternals,L"UObject_UObjectInternals",(FName)0x0,
             (FName)0x0,(FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogMetaData'' @ 140f24440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMetaData__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMetaData,L"LogMetaData",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMetaData__);
  return;
}

// `dynamic_initializer_for_'LogObj'' @ 140f24480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogObj__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogObj,L"LogObj",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogObj__);
  return;
}

// `dynamic_initializer_for_'LogOverridableObject'' @ 140f244c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOverridableObject__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOverridableObject,L"LogOverridableObject",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogOverridableObject__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderClass_h__Script_CoreUObject_857807102'' @ 140f24500

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderClass_h__Script_CoreUObject_857807102__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderClass_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderExportObject_h__Script_CoreUObject_3535367791'' @ 140f24540

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderExportObject_h__Script_CoreUObject_3535367791__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderExportObject_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderFunction_h__Script_CoreUObject_49469214'' @ 140f24580

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderFunction_h__Script_CoreUObject_49469214__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_LinkerPlaceholderFunction_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h__Script_CoreUObject_1623013830'' @ 140f245c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h__Script_CoreUObject_1623013830__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_MetaData_h__Script_CoreUObject_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h__Script_CoreUObject_306340678'' @ 140f24600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h__Script_CoreUObject_306340678__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_NoExportTypes_h__Script_CoreUObject_Statics
             ::EnumInfo,0x14);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverridableManager_h__Script_CoreUObject_3968214654'' @ 140f24650

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverridableManager_h__Script_CoreUObject_3968214654__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverridableManager_h__Script_CoreUObject_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h__Script_CoreUObject_1102308990'' @ 140f246a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h__Script_CoreUObject_1102308990__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h__Script_CoreUObject_Statics
             ::ScriptStructInfo,4,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Public_UObject_OverriddenPropertySet_h__Script_CoreUObject_Statics
             ::EnumInfo,1);
  return;
}

// Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation @ 1420dfa80

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation(void)

{
  if (Z_Registration_Info_UEnum_EOverriddenPropertyOperation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOverriddenPropertyOperation.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOverriddenPropertyOperation.InnerSingleton;
}

// Z_Construct_UScriptStruct_FOverriddenPropertyNode @ 1420dfac0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOverriddenPropertyNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertyNode.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOverriddenPropertyNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertyNode.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOverriddenPropertyNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FOverriddenPropertyNodeID @ 1420dfb40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOverriddenPropertyNodeID(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertyNodeID.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOverriddenPropertyNodeID.InnerSingleton,
               &Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertyNodeID.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOverriddenPropertyNodeID.InnerSingleton;
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

// Z_Construct_UScriptStruct_FOverriddenPropertyPath @ 1420dfbc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOverriddenPropertyPath(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertyPath.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOverriddenPropertyPath.InnerSingleton,
               &Z_Construct_UScriptStruct_FOverriddenPropertyPath_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertyPath.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOverriddenPropertyPath.InnerSingleton;
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

// EOverriddenPropertyOperation_StaticEnum @ 1420dfc60

UEnum * __cdecl EOverriddenPropertyOperation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOverriddenPropertyOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EOverriddenPropertyOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation,(UObject *)pUVar1,
                       L"EOverriddenPropertyOperation");
  }
  return Z_Registration_Info_UEnum_EOverriddenPropertyOperation.OuterSingleton;
}

// NewStructOps @ 1420dfd40

void * __cdecl Z_Construct_UScriptStruct_FOverriddenPropertyPath_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOverriddenPropertyPath,&UE::CoreUObject::Private::Construct<FOverriddenPropertyPath>,&UE::CoreUObject::Private::ConstructForTests<FOverriddenPropertyPath>,&UE::CoreUObject::Private::Destruct<FOverriddenPropertyPath>,&UE::CoreUObject::Private::Copy<FOverriddenPropertyPath>,&UE::CoreUObject::Private::GetStructTypeHash<FOverriddenPropertyPath>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1420dfd90

void * __cdecl Z_Construct_UScriptStruct_FOverriddenPropertyNodeID_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOverriddenPropertyNodeID,&UE::CoreUObject::Private::Construct<FOverriddenPropertyNodeID>,&UE::CoreUObject::Private::ConstructForTests<FOverriddenPropertyNodeID>,&UE::CoreUObject::Private::Destruct<FOverriddenPropertyNodeID>,&UE::CoreUObject::Private::Copy<FOverriddenPropertyNodeID>,&UE::CoreUObject::Private::GetStructTypeHash<FOverriddenPropertyNodeID>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1420dfdd0

void * __cdecl Z_Construct_UScriptStruct_FOverriddenPropertyNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOverriddenPropertyNode,&UE::CoreUObject::Private::Construct<FOverriddenPropertyNode>,&UE::CoreUObject::Private::ConstructForTests<FOverriddenPropertyNode>,&UE::CoreUObject::Private::Destruct<FOverriddenPropertyNode>,&UE::CoreUObject::Private::SerializeArchive<FOverriddenPropertyNode>,&UE::CoreUObject::Private::Copy<FOverriddenPropertyNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bWasAdded_SetBit @ 1420dfe10

void __cdecl
Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::NewProp_bWasAdded_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 1420dfe20

void * __cdecl Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FOverriddenPropertySet,&UE::CoreUObject::Private::Construct<FOverriddenPropertySet>,&UE::CoreUObject::Private::ConstructForTests<FOverriddenPropertySet>,&UE::CoreUObject::Private::Destruct<FOverriddenPropertySet>,&UE::CoreUObject::Private::Copy<FOverriddenPropertySet>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_ULinkerPlaceholderClass @ 1420dfe60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULinkerPlaceholderClass(void)

{
  if (Z_Registration_Info_UClass_ULinkerPlaceholderClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULinkerPlaceholderClass.OuterSingleton,
               &Z_Construct_UClass_ULinkerPlaceholderClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderClass.OuterSingleton;
}

// Z_Construct_UClass_ULinkerPlaceholderExportObject @ 1420dfea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULinkerPlaceholderExportObject(void)

{
  if (Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.OuterSingleton,
               &Z_Construct_UClass_ULinkerPlaceholderExportObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.OuterSingleton;
}

// Z_Construct_UClass_ULinkerPlaceholderFunction @ 1420dfee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ULinkerPlaceholderFunction(void)

{
  if (Z_Registration_Info_UClass_ULinkerPlaceholderFunction.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ULinkerPlaceholderFunction.OuterSingleton,
               &Z_Construct_UClass_ULinkerPlaceholderFunction_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderFunction.OuterSingleton;
}

// NewProp_IsValid_SetBit @ 1420dff20

void __cdecl Z_Construct_UScriptStruct_FBox3f_Statics::NewProp_IsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// NewProp_IsValid_SetBit @ 1420dff30

void __cdecl Z_Construct_UScriptStruct_FBox3d_Statics::NewProp_IsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_IsValid_SetBit @ 1420dff40

void __cdecl Z_Construct_UScriptStruct_FBox_Statics::NewProp_IsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bIsValid_SetBit @ 1420dff50

void __cdecl Z_Construct_UScriptStruct_FBox2f_Statics::NewProp_bIsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bIsValid_SetBit @ 1420dff60

void __cdecl Z_Construct_UScriptStruct_FBox2D_Statics::NewProp_bIsValid_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// NewProp_bIsLooped_SetBit @ 1420e0040

void __cdecl
Z_Construct_UScriptStruct_FInterpCurveFloat_Statics::NewProp_bIsLooped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bIsLooped_SetBit @ 1420e0050

void __cdecl
Z_Construct_UScriptStruct_FInterpCurveVector2D_Statics::NewProp_bIsLooped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UClass_UDEPRECATED_MetaData @ 1420e0060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_MetaData(void)

{
  if (Z_Registration_Info_UClass_UDEPRECATED_MetaData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UDEPRECATED_MetaData.OuterSingleton,
               &Z_Construct_UClass_UDEPRECATED_MetaData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_MetaData.OuterSingleton;
}

// NewProp_bIsLooped_SetBit @ 1420e00a0

void __cdecl
Z_Construct_UScriptStruct_FInterpCurveVector_Statics::NewProp_bIsLooped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bIsLooped_SetBit @ 1420e00b0

void __cdecl
Z_Construct_UScriptStruct_FInterpCurveQuat_Statics::NewProp_bIsLooped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bIsLooped_SetBit @ 1420e00c0

void __cdecl
Z_Construct_UScriptStruct_FInterpCurveTwoVectors_Statics::NewProp_bIsLooped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bIsLooped_SetBit @ 1420e00d0

void __cdecl
Z_Construct_UScriptStruct_FInterpCurveLinearColor_Statics::NewProp_bIsLooped_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UEnum_CoreUObject_EAutomationEventType @ 1420e00e0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EAutomationEventType(void)

{
  if (Z_Registration_Info_UEnum_EAutomationEventType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAutomationEventType.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EAutomationEventType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAutomationEventType.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState @ 1420e0120

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState(void)

{
  if (Z_Registration_Info_UEnum_EInputDeviceConnectionState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputDeviceConnectionState.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputDeviceConnectionState.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EInterpCurveMode @ 1420e0160

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EInterpCurveMode(void)

{
  if (Z_Registration_Info_UEnum_EInterpCurveMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInterpCurveMode.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EInterpCurveMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInterpCurveMode.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory @ 1420e01a0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory(void)

{
  if (Z_Registration_Info_UEnum_ELocalizedTextSourceCategory.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELocalizedTextSourceCategory.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELocalizedTextSourceCategory.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_ERangeBoundTypes @ 1420e01e0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_ERangeBoundTypes(void)

{
  if (Z_Registration_Info_UEnum_ERangeBoundTypes.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ERangeBoundTypes.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_ERangeBoundTypes_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ERangeBoundTypes.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAutomationEvent @ 1420e0220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationEvent(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FAutomationEvent_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FDateTime @ 1420e02a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDateTime(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FDateTime_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FDoubleRangeBound @ 1420e0320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDoubleRangeBound(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FDoubleRangeBound_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FFloatRangeBound @ 1420e03a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFloatRangeBound(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FFloatRangeBound_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FFrameNumber @ 1420e0420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFrameNumber(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FFrameNumber_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FFrameNumberRangeBound @ 1420e04a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFrameNumberRangeBound(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FFrameNumberRangeBound_Statics::StructParams
              );
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FFrameRate @ 1420e0520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFrameRate(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FFrameRate_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FFrameTime @ 1420e05a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFrameTime(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FFrameTime_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FGuid @ 1420e0620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FGuid(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FGuid_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt32Point @ 1420e06a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt32Point(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt32Point_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt32RangeBound @ 1420e0720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt32RangeBound(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt32RangeBound_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt64Point @ 1420e07a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt64Point(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt64Point_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurvePointFloat @ 1420e0820

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurvePointFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInterpCurvePointFloat_Statics::StructParams
              );
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurvePointLinearColor @ 1420e08a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurvePointLinearColor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,
               &Z_Construct_UScriptStruct_FInterpCurvePointLinearColor_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurvePointQuat @ 1420e0920

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurvePointQuat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInterpCurvePointQuat_Statics::StructParams)
    ;
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurvePointTwoVectors @ 1420e09a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurvePointTwoVectors(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,
               &Z_Construct_UScriptStruct_FInterpCurvePointTwoVectors_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurvePointVector @ 1420e0a20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurvePointVector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,
               &Z_Construct_UScriptStruct_FInterpCurvePointVector_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurvePointVector2D @ 1420e0aa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurvePointVector2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,
               &Z_Construct_UScriptStruct_FInterpCurvePointVector2D_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FIntPoint @ 1420e0b20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIntPoint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FIntPoint_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FLinearColor @ 1420e0ba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FLinearColor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FLinearColor_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FPackedRemoteObjectPathName @ 1420e0c20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPackedRemoteObjectPathName(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,
               &Z_Construct_UScriptStruct_FPackedRemoteObjectPathName_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FPlane @ 1420e0ca0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlane(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FPlane_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FPlane4d @ 1420e0d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlane4d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FPlane4d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FPlane4f @ 1420e0da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlane4f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FPlane4f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FPlatformUserId @ 1420e0e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlatformUserId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FPlatformUserId_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FQuat @ 1420e0ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FQuat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FQuat_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FQuat4d @ 1420e0f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FQuat4d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FQuat4d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FQuat4f @ 1420e0fa0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FQuat4f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FQuat4f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRemoteObjectBytes @ 1420e1020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRemoteObjectBytes(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRemoteObjectBytes_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRemoteObjectId @ 1420e10a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRemoteObjectId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRemoteObjectId_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRemoteObjectTables @ 1420e1120

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRemoteObjectTables(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRemoteObjectTables_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRemoteServerId @ 1420e11a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRemoteServerId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRemoteServerId_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FTwoVectors @ 1420e1220

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTwoVectors(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FTwoVectors_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUint32Point @ 1420e12a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUint32Point(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUint32Point_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUint64Point @ 1420e1320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUint64Point(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUint64Point_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUintPoint @ 1420e13a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUintPoint(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUintPoint_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FVector @ 1420e1420

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FVector_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FVector2D @ 1420e14a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FVector2D_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FVector2f @ 1420e1520

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector2f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FVector2f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FVector3d @ 1420e15a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector3d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FVector3d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FVector3f @ 1420e1620

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector3f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FVector3f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// ESearchCase_StaticEnum @ 1420e16a0

UEnum * __cdecl ESearchCase_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESearchCase.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ESearchCase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ESearchCase,(UObject *)pUVar1,L"ESearchCase");
  }
  return Z_Registration_Info_UEnum_ESearchCase.OuterSingleton;
}

// ESearchDir_StaticEnum @ 1420e16e0

UEnum * __cdecl ESearchDir_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESearchDir.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ESearchDir.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ESearchDir,(UObject *)pUVar1,L"ESearchDir");
  }
  return Z_Registration_Info_UEnum_ESearchDir.OuterSingleton;
}

// ELogTimes_StaticEnum @ 1420e1720

UEnum * __cdecl ELogTimes_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELogTimes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ELogTimes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ELogTimes,(UObject *)pUVar1,L"ELogTimes");
  }
  return Z_Registration_Info_UEnum_ELogTimes.OuterSingleton;
}

// EAxis_StaticEnum @ 1420e1770

UEnum * __cdecl EAxis_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAxis,(UObject *)pUVar1,L"EAxis");
  }
  return Z_Registration_Info_UEnum_EAxis.OuterSingleton;
}

// EAxisList_StaticEnum @ 1420e17b0

UEnum * __cdecl EAxisList_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAxisList.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAxisList.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAxisList,(UObject *)pUVar1,L"EAxisList");
  }
  return Z_Registration_Info_UEnum_EAxisList.OuterSingleton;
}

// EInterpCurveMode_StaticEnum @ 1420e17f0

UEnum * __cdecl EInterpCurveMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterpCurveMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EInterpCurveMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EInterpCurveMode,(UObject *)pUVar1,
                       L"EInterpCurveMode");
  }
  return Z_Registration_Info_UEnum_EInterpCurveMode.OuterSingleton;
}

// EPixelFormat_StaticEnum @ 1420e1830

UEnum * __cdecl EPixelFormat_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPixelFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPixelFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPixelFormat,(UObject *)pUVar1,L"EPixelFormat")
    ;
  }
  return Z_Registration_Info_UEnum_EPixelFormat.OuterSingleton;
}

// NewProp_bDropFrameFormat_SetBit @ 1420e1870

void __cdecl
Z_Construct_UScriptStruct_FTimecode_Statics::NewProp_bDropFrameFormat_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// ERangeBoundTypes_StaticEnum @ 1420e1880

UEnum * __cdecl ERangeBoundTypes_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERangeBoundTypes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ERangeBoundTypes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ERangeBoundTypes,(UObject *)pUVar1,
                       L"ERangeBoundTypes");
  }
  return Z_Registration_Info_UEnum_ERangeBoundTypes.OuterSingleton;
}

// EMouseCursor_StaticEnum @ 1420e18c0

UEnum * __cdecl EMouseCursor_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMouseCursor.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EMouseCursor.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EMouseCursor,(UObject *)pUVar1,L"EMouseCursor")
    ;
  }
  return Z_Registration_Info_UEnum_EMouseCursor.OuterSingleton;
}

// EUnit_StaticEnum @ 1420e1900

UEnum * __cdecl EUnit_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EUnit,(UObject *)pUVar1,L"EUnit");
  }
  return Z_Registration_Info_UEnum_EUnit.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1420e1b60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,Private::<lambda_5>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,Private::<lambda_5>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// EAppMsgCategory_StaticEnum @ 1420e1b90

UEnum * __cdecl EAppMsgCategory_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAppMsgCategory.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAppMsgCategory.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAppMsgCategory,(UObject *)pUVar1,
                       L"EAppMsgCategory");
  }
  return Z_Registration_Info_UEnum_EAppMsgCategory.OuterSingleton;
}

// `scalar_deleting_destructor' @ 1420e1df0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,Private::<lambda_6>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,Private::<lambda_6>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// EAppReturnType_StaticEnum @ 1420e1e20

UEnum * __cdecl EAppReturnType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAppReturnType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAppReturnType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAppReturnType,(UObject *)pUVar1,
                       L"EAppReturnType");
  }
  return Z_Registration_Info_UEnum_EAppReturnType.OuterSingleton;
}

// EAppMsgType_StaticEnum @ 1420e1e60

UEnum * __cdecl EAppMsgType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAppMsgType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAppMsgType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAppMsgType,(UObject *)pUVar1,L"EAppMsgType");
  }
  return Z_Registration_Info_UEnum_EAppMsgType.OuterSingleton;
}

// ELocalizedTextSourceCategory_StaticEnum @ 1420e1ea0

UEnum * __cdecl ELocalizedTextSourceCategory_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELocalizedTextSourceCategory.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ELocalizedTextSourceCategory.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory,(UObject *)pUVar1,
                       L"ELocalizedTextSourceCategory");
  }
  return Z_Registration_Info_UEnum_ELocalizedTextSourceCategory.OuterSingleton;
}

// NewProp_bIsMinimalPatch_SetBit @ 1420e1ee0

void __cdecl
Z_Construct_UScriptStruct_FPolyglotTextData_Statics::NewProp_bIsMinimalPatch_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x98) = 1;
  return;
}

// EAutomationEventType_StaticEnum @ 1420e1ef0

UEnum * __cdecl EAutomationEventType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAutomationEventType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAutomationEventType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAutomationEventType,(UObject *)pUVar1,
                       L"EAutomationEventType");
  }
  return Z_Registration_Info_UEnum_EAutomationEventType.OuterSingleton;
}

// EInputDeviceConnectionState_StaticEnum @ 1420e2130

UEnum * __cdecl EInputDeviceConnectionState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputDeviceConnectionState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EInputDeviceConnectionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState,(UObject *)pUVar1,
                       L"EInputDeviceConnectionState");
  }
  return Z_Registration_Info_UEnum_EInputDeviceConnectionState.OuterSingleton;
}

// EInputDeviceMappingPolicy_StaticEnum @ 1420e21b0

UEnum * __cdecl EInputDeviceMappingPolicy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputDeviceMappingPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EInputDeviceMappingPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EInputDeviceMappingPolicy,(UObject *)pUVar1,
                       L"EInputDeviceMappingPolicy");
  }
  return Z_Registration_Info_UEnum_EInputDeviceMappingPolicy.OuterSingleton;
}

// EInputDeviceTriggerMask_StaticEnum @ 1420e21f0

UEnum * __cdecl EInputDeviceTriggerMask_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputDeviceTriggerMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EInputDeviceTriggerMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EInputDeviceTriggerMask,(UObject *)pUVar1,
                       L"EInputDeviceTriggerMask");
  }
  return Z_Registration_Info_UEnum_EInputDeviceTriggerMask.OuterSingleton;
}

// EInputDeviceAnalogStickMask_StaticEnum @ 1420e2230

UEnum * __cdecl EInputDeviceAnalogStickMask_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputDeviceAnalogStickMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EInputDeviceAnalogStickMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EInputDeviceAnalogStickMask,(UObject *)pUVar1,
                       L"EInputDeviceAnalogStickMask");
  }
  return Z_Registration_Info_UEnum_EInputDeviceAnalogStickMask.OuterSingleton;
}

// EDataValidationResult_StaticEnum @ 1420e2270

UEnum * __cdecl EDataValidationResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataValidationResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EDataValidationResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EDataValidationResult,(UObject *)pUVar1,
                       L"EDataValidationResult");
  }
  return Z_Registration_Info_UEnum_EDataValidationResult.OuterSingleton;
}

// EOverriddenState_StaticEnum @ 1420e2510

UEnum * __cdecl EOverriddenState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOverriddenState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EOverriddenState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EOverriddenState,(UObject *)pUVar1,
                       L"EOverriddenState");
  }
  return Z_Registration_Info_UEnum_EOverriddenState.OuterSingleton;
}

// operator<<<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator> @ 1420e2660

FArchive * __cdecl
operator<<<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,TDefaultMapHashableKeyFuncs<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>,0>,FDefaultSetAllocator>
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
  undefined8 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  uVar13 = 1;
  uVar6 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar6) {
    uVar7 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar6 < 1) {
    return param_1;
  }
  if ((int)uVar13 < 1) {
    return param_1;
  }
  *piVar1 = uVar13;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = uVar13;
  if (uVar13 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1420e672e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_1420e672e:
  uVar10 = (ulonglong)uVar13;
  uVar7 = uVar9;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar7 & (longlong)(int)uVar13 - 1U;
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
      puVar12 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)TStack_50.Array;
      }
      uVar13 = *puVar12;
      uVar7 = uVar9;
      while (uVar13 == 0) {
        iVar8 = (int)uVar9;
        uStack_60 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_60;
        uStack_78 = iVar8 + 1;
        uVar9 = (ulonglong)uStack_78;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1420e680b;
        uVar13 = puVar12[(longlong)iVar8 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar9 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar9 = (ulonglong)uStack_64;
      if ((int)uVar6 < (int)uStack_64) {
LAB_1420e680b:
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
        puVar11 = (undefined8 *)((longlong)(int)uVar9 * 0x60 + *(longlong *)&param_2->Elements);
        uVar6 = ((uint)((ulonglong)*puVar11 >> 0x20) ^ (uint)*puVar11) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0x5c) = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> @ 1420e2670

FArchive * __cdecl
operator<<<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *param_2)

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
  FOverriddenPropertyNode *this;
  int iVar10;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x38);
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
      DestructItems<FOverriddenPropertyNode,int>
                ((FOverriddenPropertyNode *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
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
              FOverriddenPropertyNode::Serialize
                        ((FOverriddenPropertyNode *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x38),param_1);
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x838,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              this = (FOverriddenPropertyNode *)
                     ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x38);
              DefaultConstructItems<FOverriddenPropertyNode,int>(this,1);
              FOverriddenPropertyNode::Serialize(this,param_1);
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

// operator<<<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 1420e2680

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x60,(longlong)*(int *)&param_2->field_0xc * 0x60);
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
      puVar11 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar11 = local_78.Pointer;
      }
      uVar8 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar8 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_1420e29dc;
        uVar8 = puVar11[lVar7 + 1];
      }
      local_78._4_4_ = -uVar8 & uVar8;
      uVar9 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_1420e29dc:
        iStack_64 = iVar6;
      }
    }
    local_68 = 0xffffffff;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = iStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = iStack_60;
    local_50._padding_._0_4_ = local_78.Index;
    local_50._padding_._4_4_ = local_78._4_4_;
    local_58 = param_2;
    local_50.Array = local_78.Pointer;
    if (iStack_64 < iVar6) {
      do {
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x60 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x138))(param_1,lVar7);
        TSetPrivateFriend::
        Serialize<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  (param_1,(TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                            *)(lVar7 + 8));
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
    uVar8 = local_res8[0];
    uVar9 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar9);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar8,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar8 = uVar8 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar8) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar8) {
        uVar5 = uVar8;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x60,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x60 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x60 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x50) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x28) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x34) = 0x80;
          *(undefined4 *)((longlong)local_78.Pointer + 0x38) = 0xffffffff;
          *(undefined4 *)((longlong)local_78.Pointer + 0x3c) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x48) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x50) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x58) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x138))(param_1,puVar10);
        TSetPrivateFriend::
        Serialize<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                  (param_1,(TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                            *)(puVar10 + 1));
        uVar8 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar8;
      } while ((int)uVar8 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// CastChecked<UFunction,UObject> @ 1420e2cd0

UFunction * __cdecl CastChecked<UFunction,UObject>(UObject *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    if (param_2 != NullChecked) {
      return (UFunction *)0x0;
    }
    pFVar3 = GetTypeName<UFunction>(&local_18);
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

// CastChecked<UPackage,UObject_const_> @ 1420e2db0

UPackage * __cdecl CastChecked<UPackage,UObject_const_>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<UPackage>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = Z_Construct_UClass_UPackage_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (UPackage *)param_1;
  }
  pFVar3 = GetTypeName<UPackage>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CompareItems<FMinimalName,int> @ 1420e2e70

bool __cdecl CompareItems<FMinimalName,int>(FMinimalName *param_1,FMinimalName *param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      if (((param_1->Index).Value != (uint)uVar1) ||
         (param_1->Number != (int)((ulonglong)uVar1 >> 0x20))) {
        return false;
      }
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructItems<FOverriddenPropertyNode,FOverriddenPropertyNode,int> @ 1420e2ea0

void __cdecl
ConstructItems<FOverriddenPropertyNode,FOverriddenPropertyNode,int>
          (void *param_1,FOverriddenPropertyNode *param_2,int param_3)

{
  FWeakObjectPtr *pFVar1;
  TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *this;
  
  if (param_3 != 0) {
    this = (TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28)
    ;
    pFVar1 = &(param_2->NodeID).Object.WeakPtr;
    do {
      FOverriddenPropertyPath::FOverriddenPropertyPath
                ((FOverriddenPropertyPath *)
                 ((longlong)param_1 + (-0x18 - (longlong)param_2) + (longlong)pFVar1),
                 (FOverriddenPropertyPath *)(pFVar1 + -3));
      this[-1].AllocatorInstance.Data = (FScriptContainerElement *)*pFVar1;
      *(char *)&this[-1].ArrayNum = (char)pFVar1[1].ObjectIndex;
      (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<FOverriddenPropertyNode,int>
                (this,(FOverriddenPropertyNode *)pFVar1[2],pFVar1[3].ObjectIndex,0);
      this = (TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_> *)&this[3].ArrayNum;
      pFVar1 = pFVar1 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<FObjectDataResource,int> @ 1420e31e0

void __cdecl DefaultConstructItems<FObjectDataResource,int>(void *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)((longlong)param_1 + 8);
    do {
      *(undefined4 *)(puVar1 + -1) = 0;
      *(undefined1 *)((longlong)puVar1 + -4) = 0;
      *puVar1 = 0xffffffffffffffff;
      puVar1[1] = 0xffffffffffffffff;
      puVar1[2] = 0xffffffffffffffff;
      puVar1[3] = 0xffffffffffffffff;
      puVar1[4] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FOverriddenPropertyNode,int> @ 1420e3230

void __cdecl DefaultConstructItems<FOverriddenPropertyNode,int>(void *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = (longlong)param_1 + 0xc;
    do {
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0;
      *(undefined8 *)(lVar1 + 0xc) = 0;
      *(undefined1 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x1c) = 0;
      *(undefined8 *)(lVar1 + 0x24) = 0;
      lVar1 = lVar1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UObject::FAssetRegistryTag,int> @ 1420e3270

void __cdecl DestructItems<UObject::FAssetRegistryTag,int>(FAssetRegistryTag *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->Value;
    do {
      pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FListPropsWildcardPiece,int> @ 1420e32b0

void __cdecl
DestructItems<FListPropsWildcardPiece,int>(FListPropsWildcardPiece *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Str).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FObjectMemoryUsage,int> @ 1420e32f0

void __cdecl DestructItems<FObjectMemoryUsage,int>(FObjectMemoryUsage *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->RootReferencer;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = pTVar2 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FOverriddenPropertyNode,int> @ 1420e3340

void __cdecl
DestructItems<FOverriddenPropertyNode,int>(FOverriddenPropertyNode *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>::
    ~TArray<FOverriddenPropertyNode,TSizedDefaultAllocator<32>_>(&param_1->SubPropertyNodes);
    TArray<FName,TSizedDefaultAllocator<32>_>::~TArray<FName,TSizedDefaultAllocator<32>_>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_1);
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FReferencerInformation,int> @ 1420e3380

void __cdecl DestructItems<FReferencerInformation,int>(FReferencerInformation *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FProperty_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->ReferencingProperties;
    do {
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

// DestructItems<FLinkerSave::FSidecarStorageInfo,int> @ 1420e33c0

void __cdecl
DestructItems<FLinkerSave::FSidecarStorageInfo,int>(FSidecarStorageInfo *param_1,int param_2)

{
  FCompressedBuffer *this;
  
  if (param_2 != 0) {
    this = &param_1->Payload;
    do {
      FCompositeBuffer::~FCompositeBuffer(&this->CompressedData);
      this = this + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<UE::CoreUObject::Private::FStoredObjectPath,int> @ 1420e3400

void __cdecl
DestructItems<UE::CoreUObject::Private::FStoredObjectPath,int>
          (FStoredObjectPath *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (3 < param_1->NumElements) {
      operator_delete__((param_1->field1_0x8).Long);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TArray<UObject_*,TSizedDefaultAllocator<32>_>,int> @ 1420e3440

void __cdecl
DestructItems<TArray<UObject_*,TSizedDefaultAllocator<32>_>,int>
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,int param_2)

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

// DestructItems<TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)>,int> @ 1420e3480

void __cdecl
DestructItems<TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)>,int>
          (TFunction<void___cdecl(FLinkerSave_&,UE::FPackageTrailer_const_&)> *param_1,int param_2)

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

// DestructItems<TUniqueFunction<void___cdecl(FLinkerSave_&,FArchive_&,__int64)>,int> @ 1420e34d0

void __cdecl
DestructItems<TUniqueFunction<void___cdecl(FLinkerSave_&,FArchive_&,__int64)>,int>
          (TUniqueFunction<void___cdecl(FLinkerSave_&,FArchive_&,__int64)> *param_1,int param_2)

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

// DestructItems<TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)>,int> @ 1420e3520

void __cdecl
DestructItems<TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)>,int>
          (TUniqueFunction<void___cdecl(FPackagePath_const_&,FObjectPostSaveContext)> *param_1,
          int param_2)

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

// FindFProperty<FProperty> @ 1420e4170

FProperty * __cdecl
FindFProperty<FProperty>(UStruct *param_1,wchar_t *param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  FProperty *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  FName FVar5;
  FName FVar6;
  FName local_28;
  TFieldIterator<FProperty> local_20;
  
  FName::FName(&local_28,param_2,FNAME_Find);
  FVar6.ComparisonIndex.Value = 0;
  FVar6.Number = 0;
  if (local_28 == (FName)0x0) {
    return (FProperty *)0x0;
  }
  if (param_1 == (UStruct *)0x0) {
    local_20.Field = (FField *)0x0;
  }
  else {
    local_20.Field = param_1->ChildProperties;
  }
  local_20.InterfaceIndex = -1;
  local_20.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_20.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_20.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_20.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar4->_padding_)) goto LAB_1420e4218;
  }
  local_20.bIncludeInterface = false;
LAB_1420e4218:
  TFieldIterator<FProperty>::IterateToNext(&local_20);
  pFVar2 = (FProperty *)local_20.Field;
  while( true ) {
    if (pFVar2 == (FProperty *)0x0) {
      return (FProperty *)0x0;
    }
    local_20.Field = (FField *)pFVar2;
    bVar3 = IsThisNotNull(pFVar2,"FField::GetFName");
    FVar5 = FVar6;
    if (bVar3) {
      FVar5 = (FName)pFVar2->_padding_;
    }
    if (FVar5 == local_28) break;
    local_20.Field = (FField *)pFVar2->_padding_;
    TFieldIterator<FProperty>::IterateToNext(&local_20);
    pFVar2 = (FProperty *)local_20.Field;
  }
  return pFVar2;
}

// FindFirstObject<UClass> @ 1420e42a0

/* WARNING: Enum "Type": Some values do not have unique names */

UClass * __cdecl
FindFirstObject<UClass>
          (TStringView<wchar_t> *param_1,EFindFirstObjectOptions param_2,Type param_3,
          wchar_t *param_4)

{
  UClass *pUVar1;
  TStringView<wchar_t> local_18;
  
  pUVar1 = Z_Construct_UClass_UClass_NoRegister();
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pUVar1 = (UClass *)StaticFindFirstObject(pUVar1,&local_18,param_2,param_3,param_4);
  return pUVar1;
}

// FindFirstObject<UObject> @ 1420e4310

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
FindFirstObject<UObject>
          (TStringView<wchar_t> *param_1,EFindFirstObjectOptions param_2,Type param_3,
          wchar_t *param_4)

{
  UClass *pUVar1;
  UObject *pUVar2;
  TStringView<wchar_t> local_18;
  
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pUVar2 = StaticFindFirstObject(pUVar1,&local_18,param_2,param_3,param_4);
  return pUVar2;
}

// FindLastByPredicate<char_const_,bool_(__cdecl*)(char)> @ 1420e44c0

char * __cdecl
AlgoImpl::FindLastByPredicate<char_const_,bool_(__cdecl*)(char)>
          (char *param_1,ulong64 param_2,_func___cdecl_bool_char *param_3)

{
  char *pcVar1;
  bool bVar2;
  char *pcVar3;
  
  pcVar3 = param_1 + param_2;
  do {
    if (param_1 == pcVar3) {
      return (char *)0x0;
    }
    pcVar1 = pcVar3 + -1;
    pcVar3 = pcVar3 + -1;
    bVar2 = (*param_3)(*pcVar1);
  } while (!bVar2);
  return pcVar3;
}

// FindUField<UFunction> @ 1420e45d0

UFunction * __cdecl
FindUField<UFunction>(UStruct *param_1,wchar_t *param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  UClass *pUVar2;
  FName local_res20;
  TFieldIterator<UFunction> local_28;
  
  FName::FName(&local_res20,param_2,FNAME_Find);
  if (local_res20 == (FName)0x0) {
    return (UFunction *)0x0;
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (UField *)0x0;
  }
  else {
    local_28.Field = *(UField **)&(param_1->Children).field0_0x0;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) goto LAB_1420e4675;
  }
  local_28.bIncludeInterface = false;
LAB_1420e4675:
  TFieldIterator<UFunction>::IterateToNext(&local_28);
  while( true ) {
    if ((UFunction *)local_28.Field == (UFunction *)0x0) {
      return (UFunction *)0x0;
    }
    if ((FName)(local_28.Field)->_padding_ == local_res20) break;
    local_28.Field = ((local_28.Field)->Next).field0_0x0.DebugPtr;
    TFieldIterator<UFunction>::IterateToNext(&local_28);
  }
  return (UFunction *)local_28.Field;
}

// FindUField<UFunction> @ 1420e46d0

UFunction * __cdecl
FindUField<UFunction>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  UClass *pUVar2;
  TFieldIterator<UFunction> local_28;
  
  if (param_2 == (FName)0x0) {
    return (UFunction *)0x0;
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (UField *)0x0;
  }
  else {
    local_28.Field = *(UField **)&(param_1->Children).field0_0x0;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) goto LAB_1420e475d;
  }
  local_28.bIncludeInterface = false;
LAB_1420e475d:
  TFieldIterator<UFunction>::IterateToNext(&local_28);
  while( true ) {
    if ((UFunction *)local_28.Field == (UFunction *)0x0) {
      return (UFunction *)0x0;
    }
    if ((FName)(local_28.Field)->_padding_ == param_2) break;
    local_28.Field = ((local_28.Field)->Next).field0_0x0.DebugPtr;
    TFieldIterator<UFunction>::IterateToNext(&local_28);
  }
  return (UFunction *)local_28.Field;
}

// HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<`StaticExec'::__l905::FSortUObjectByClassName>_>_> @ 1420e47b0

void __cdecl
AlgoImpl::
HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<_StaticExec_::__l905::FSortUObjectByClassName>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<_bool___cdecl_StaticExec(UWorld_*,wchar_t_const_*,FOutputDevice_&)_::_905_::FSortUObjectByClassName>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar13;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar14;
  FElementCompareClass<_bool___cdecl_StaticExec(UWorld_*,wchar_t_const_*,FOutputDevice_&)_::_905_::FSortUObjectByClassName>
  *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar7 = iVar6 * 2 + 1;
  iVar12 = iVar7;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar7) {
LAB_1420e48d9:
      if (iVar10 == 0) {
        iVar7 = param_2 + -1;
        lVar11 = (longlong)iVar7;
        if (0 < iVar7) {
          pTVar14 = param_1 + lVar11;
          do {
            uVar2 = *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8);
            iVar12 = 0;
            TVar3 = param_1->_s_1;
            uVar4 = *(undefined8 *)((param_1->ElementData).Pad + 8);
            param_1->_s_1 = pTVar14->_s_1;
            *(undefined8 *)((param_1->ElementData).Pad + 8) = uVar2;
            pTVar14->_s_1 = TVar3;
            *(undefined8 *)((longlong)(pTVar14->ElementData).Pad + 8) = uVar4;
            if (1 < iVar7) {
              do {
                iVar10 = iVar12 * 2;
                iVar6 = iVar10 + 1;
                if (iVar10 + 2 < iVar7) {
                  bVar5 = TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ::
                          FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<`StaticExec'::__l905::FSortUObjectByClassName>_>
                          ::operator()(&local_res20,param_1 + (iVar10 + 2),param_1 + iVar6);
                  if (bVar5) {
                    iVar6 = iVar10;
                  }
                  iVar6 = iVar6 + 1;
                }
                pTVar9 = param_1 + iVar6;
                pTVar13 = param_1 + iVar12;
                bVar5 = TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ::
                        FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<`StaticExec'::__l905::FSortUObjectByClassName>_>
                        ::operator()(&local_res20,pTVar13,pTVar9);
                if (!bVar5) break;
                TVar3 = pTVar13->_s_1;
                uVar2 = *(undefined8 *)((pTVar13->ElementData).Pad + 8);
                uVar4 = *(undefined8 *)((pTVar9->ElementData).Pad + 8);
                pTVar13->_s_1 = pTVar9->_s_1;
                *(undefined8 *)((pTVar13->ElementData).Pad + 8) = uVar4;
                pTVar9->_s_1 = TVar3;
                *(undefined8 *)((pTVar9->ElementData).Pad + 8) = uVar2;
                iVar12 = iVar6;
              } while (iVar6 * 2 + 1 < iVar7);
            }
            iVar7 = iVar7 + -1;
            lVar11 = lVar11 + -1;
            pTVar14 = pTVar14 + -1;
          } while (0 < lVar11);
        }
        return;
      }
      iVar6 = iVar10 + -1;
      iVar7 = iVar12 + -2;
      iVar12 = iVar7;
      iVar10 = iVar6;
    }
    iVar7 = iVar6 * 2;
    iVar8 = iVar7 + 1;
    if (iVar7 + 2 < param_2) {
      bVar5 = TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<`StaticExec'::__l905::FSortUObjectByClassName>_>
              ::operator()(&local_res20,param_1 + (iVar7 + 2),param_1 + iVar8);
      if (bVar5) {
        iVar8 = iVar7;
      }
      iVar8 = iVar8 + 1;
    }
    pTVar9 = param_1 + iVar8;
    pTVar14 = param_1 + iVar6;
    bVar5 = TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<`StaticExec'::__l905::FSortUObjectByClassName>_>
            ::operator()(&local_res20,pTVar14,pTVar9);
    if (!bVar5) goto LAB_1420e48d9;
    uVar2 = *(undefined8 *)((pTVar9->ElementData).Pad + 8);
    iVar7 = iVar8 * 2 + 1;
    TVar3 = pTVar14->_s_1;
    uVar4 = *(undefined8 *)((pTVar14->ElementData).Pad + 8);
    pTVar14->_s_1 = pTVar9->_s_1;
    *(undefined8 *)((pTVar14->ElementData).Pad + 8) = uVar2;
    pTVar9->_s_1 = TVar3;
    *(undefined8 *)((pTVar9->ElementData).Pad + 8) = uVar4;
    iVar6 = iVar8;
  } while( true );
}

// HeapSortInternal<FObjectMemoryUsage,int,FIdentityFunctor,TDereferenceWrapper<FObjectMemoryUsage,FObjectMemoryAnalyzer::FCompareFSortBySize>_> @ 1420e49e0

void __cdecl
AlgoImpl::
HeapSortInternal<FObjectMemoryUsage,int,FIdentityFunctor,TDereferenceWrapper<FObjectMemoryUsage,FObjectMemoryAnalyzer::FCompareFSortBySize>_>
          (FObjectMemoryUsage *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FObjectMemoryUsage,FObjectMemoryAnalyzer::FCompareFSortBySize> param_4
          )

{
  code *pcVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  UObject *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  UObject *pUVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  FObjectMemoryUsage *pFVar25;
  int iVar26;
  FObjectMemoryUsage *pFVar27;
  FObjectMemoryUsage *pFVar28;
  
  if (param_2 < 0) {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar18) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar18) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar19 = (param_2 + -2) / 2;
  iVar20 = iVar19 * 2 + 1;
  iVar22 = iVar20;
  iVar23 = iVar19;
  do {
    while (param_2 <= iVar20) {
LAB_1420e4b63:
      if (iVar23 == 0) {
        iVar20 = param_2 + -1;
        lVar24 = (longlong)iVar20;
        if (0 < iVar20) {
          pFVar25 = param_1 + lVar24;
          do {
            uVar2 = pFVar25->ExclusiveMemoryUsage;
            iVar26 = 0;
            uVar3 = param_1->InclusiveMemoryUsage;
            uVar4 = param_1->ExclusiveMemoryUsage;
            uVar5 = param_1->InclusiveResourceSize;
            uVar6 = param_1->ExclusiveResourceSize;
            uVar13 = param_1->Flags;
            uVar14 = *(undefined4 *)&param_1->field_0x24;
            pUVar7 = param_1->Object;
            pFVar8 = (param_1->RootReferencer).AllocatorInstance.Data;
            iVar23 = (param_1->RootReferencer).ArrayNum;
            iVar21 = (param_1->RootReferencer).ArrayMax;
            pFVar9 = (param_1->NonRootReferencer).AllocatorInstance.Data;
            iVar12 = (param_1->NonRootReferencer).ArrayNum;
            iVar15 = (param_1->NonRootReferencer).ArrayMax;
            param_1->InclusiveMemoryUsage = pFVar25->InclusiveMemoryUsage;
            param_1->ExclusiveMemoryUsage = uVar2;
            uVar2 = pFVar25->ExclusiveResourceSize;
            param_1->InclusiveResourceSize = pFVar25->InclusiveResourceSize;
            param_1->ExclusiveResourceSize = uVar2;
            uVar11 = *(undefined4 *)&pFVar25->field_0x24;
            pUVar10 = pFVar25->Object;
            param_1->Flags = pFVar25->Flags;
            *(undefined4 *)&param_1->field_0x24 = uVar11;
            param_1->Object = pUVar10;
            iVar22 = (pFVar25->RootReferencer).ArrayNum;
            iVar19 = (pFVar25->RootReferencer).ArrayMax;
            (param_1->RootReferencer).AllocatorInstance.Data =
                 (pFVar25->RootReferencer).AllocatorInstance.Data;
            (param_1->RootReferencer).ArrayNum = iVar22;
            (param_1->RootReferencer).ArrayMax = iVar19;
            iVar22 = (pFVar25->NonRootReferencer).ArrayNum;
            iVar19 = (pFVar25->NonRootReferencer).ArrayMax;
            (param_1->NonRootReferencer).AllocatorInstance.Data =
                 (pFVar25->NonRootReferencer).AllocatorInstance.Data;
            (param_1->NonRootReferencer).ArrayNum = iVar22;
            (param_1->NonRootReferencer).ArrayMax = iVar19;
            pFVar25->InclusiveMemoryUsage = uVar3;
            pFVar25->ExclusiveMemoryUsage = uVar4;
            pFVar25->InclusiveResourceSize = uVar5;
            pFVar25->ExclusiveResourceSize = uVar6;
            pFVar25->Flags = uVar13;
            *(undefined4 *)&pFVar25->field_0x24 = uVar14;
            pFVar25->Object = pUVar7;
            (pFVar25->RootReferencer).AllocatorInstance.Data = pFVar8;
            (pFVar25->RootReferencer).ArrayNum = iVar23;
            (pFVar25->RootReferencer).ArrayMax = iVar21;
            (pFVar25->NonRootReferencer).AllocatorInstance.Data = pFVar9;
            (pFVar25->NonRootReferencer).ArrayNum = iVar12;
            (pFVar25->NonRootReferencer).ArrayMax = iVar15;
            if (1 < iVar20) {
              do {
                iVar19 = iVar26 * 2;
                iVar22 = iVar19 + 1;
                if (iVar19 + 2 < iVar20) {
                  bVar18 = FObjectMemoryAnalyzer::FCompareFSortBySize::operator()
                                     (param_4.Predicate,param_1 + (iVar19 + 2),param_1 + iVar22);
                  if (bVar18) {
                    iVar22 = iVar19;
                  }
                  iVar22 = iVar22 + 1;
                }
                pFVar27 = param_1 + iVar22;
                pFVar28 = param_1 + iVar26;
                bVar18 = FObjectMemoryAnalyzer::FCompareFSortBySize::operator()
                                   (param_4.Predicate,pFVar28,pFVar27);
                if (!bVar18) break;
                uVar2 = pFVar27->ExclusiveMemoryUsage;
                uVar3 = pFVar28->InclusiveMemoryUsage;
                uVar4 = pFVar28->ExclusiveMemoryUsage;
                uVar5 = pFVar28->InclusiveResourceSize;
                uVar6 = pFVar28->ExclusiveResourceSize;
                uVar13 = pFVar28->Flags;
                uVar14 = *(undefined4 *)&pFVar28->field_0x24;
                pUVar7 = pFVar28->Object;
                pFVar8 = (pFVar28->RootReferencer).AllocatorInstance.Data;
                iVar21 = (pFVar28->RootReferencer).ArrayNum;
                iVar12 = (pFVar28->RootReferencer).ArrayMax;
                pFVar9 = (pFVar28->NonRootReferencer).AllocatorInstance.Data;
                iVar15 = (pFVar28->NonRootReferencer).ArrayNum;
                iVar26 = (pFVar28->NonRootReferencer).ArrayMax;
                pFVar28->InclusiveMemoryUsage = pFVar27->InclusiveMemoryUsage;
                pFVar28->ExclusiveMemoryUsage = uVar2;
                uVar2 = pFVar27->ExclusiveResourceSize;
                pFVar28->InclusiveResourceSize = pFVar27->InclusiveResourceSize;
                pFVar28->ExclusiveResourceSize = uVar2;
                uVar11 = *(undefined4 *)&pFVar27->field_0x24;
                pUVar10 = pFVar27->Object;
                pFVar28->Flags = pFVar27->Flags;
                *(undefined4 *)&pFVar28->field_0x24 = uVar11;
                pFVar28->Object = pUVar10;
                iVar19 = (pFVar27->RootReferencer).ArrayNum;
                iVar23 = (pFVar27->RootReferencer).ArrayMax;
                (pFVar28->RootReferencer).AllocatorInstance.Data =
                     (pFVar27->RootReferencer).AllocatorInstance.Data;
                (pFVar28->RootReferencer).ArrayNum = iVar19;
                (pFVar28->RootReferencer).ArrayMax = iVar23;
                iVar19 = (pFVar27->NonRootReferencer).ArrayNum;
                iVar23 = (pFVar27->NonRootReferencer).ArrayMax;
                (pFVar28->NonRootReferencer).AllocatorInstance.Data =
                     (pFVar27->NonRootReferencer).AllocatorInstance.Data;
                (pFVar28->NonRootReferencer).ArrayNum = iVar19;
                (pFVar28->NonRootReferencer).ArrayMax = iVar23;
                pFVar27->InclusiveMemoryUsage = uVar3;
                pFVar27->ExclusiveMemoryUsage = uVar4;
                pFVar27->InclusiveResourceSize = uVar5;
                pFVar27->ExclusiveResourceSize = uVar6;
                pFVar27->Flags = uVar13;
                *(undefined4 *)&pFVar27->field_0x24 = uVar14;
                pFVar27->Object = pUVar7;
                (pFVar27->RootReferencer).AllocatorInstance.Data = pFVar8;
                (pFVar27->RootReferencer).ArrayNum = iVar21;
                (pFVar27->RootReferencer).ArrayMax = iVar12;
                (pFVar27->NonRootReferencer).AllocatorInstance.Data = pFVar9;
                (pFVar27->NonRootReferencer).ArrayNum = iVar15;
                (pFVar27->NonRootReferencer).ArrayMax = iVar26;
                iVar26 = iVar22;
              } while (iVar22 * 2 + 1 < iVar20);
            }
            iVar20 = iVar20 + -1;
            lVar24 = lVar24 + -1;
            pFVar25 = pFVar25 + -1;
          } while (0 < lVar24);
        }
        return;
      }
      iVar19 = iVar23 + -1;
      iVar20 = iVar22 + -2;
      iVar22 = iVar20;
      iVar23 = iVar19;
    }
    iVar20 = iVar19 * 2;
    iVar21 = iVar20 + 1;
    if (iVar20 + 2 < param_2) {
      bVar18 = FObjectMemoryAnalyzer::FCompareFSortBySize::operator()
                         (param_4.Predicate,param_1 + (iVar20 + 2),param_1 + iVar21);
      if (bVar18) {
        iVar21 = iVar20;
      }
      iVar21 = iVar21 + 1;
    }
    pFVar25 = param_1 + iVar21;
    pFVar27 = param_1 + iVar19;
    bVar18 = FObjectMemoryAnalyzer::FCompareFSortBySize::operator()
                       (param_4.Predicate,pFVar27,pFVar25);
    if (!bVar18) goto LAB_1420e4b63;
    uVar2 = pFVar25->ExclusiveMemoryUsage;
    iVar20 = iVar21 * 2 + 1;
    uVar3 = pFVar27->InclusiveMemoryUsage;
    uVar4 = pFVar27->ExclusiveMemoryUsage;
    uVar5 = pFVar27->InclusiveResourceSize;
    uVar6 = pFVar27->ExclusiveResourceSize;
    uVar13 = pFVar27->Flags;
    uVar14 = *(undefined4 *)&pFVar27->field_0x24;
    pUVar7 = pFVar27->Object;
    pFVar8 = (pFVar27->RootReferencer).AllocatorInstance.Data;
    iVar15 = (pFVar27->RootReferencer).ArrayNum;
    iVar26 = (pFVar27->RootReferencer).ArrayMax;
    pFVar9 = (pFVar27->NonRootReferencer).AllocatorInstance.Data;
    iVar16 = (pFVar27->NonRootReferencer).ArrayNum;
    iVar17 = (pFVar27->NonRootReferencer).ArrayMax;
    pFVar27->InclusiveMemoryUsage = pFVar25->InclusiveMemoryUsage;
    pFVar27->ExclusiveMemoryUsage = uVar2;
    uVar2 = pFVar25->ExclusiveResourceSize;
    pFVar27->InclusiveResourceSize = pFVar25->InclusiveResourceSize;
    pFVar27->ExclusiveResourceSize = uVar2;
    uVar11 = *(undefined4 *)&pFVar25->field_0x24;
    pUVar10 = pFVar25->Object;
    pFVar27->Flags = pFVar25->Flags;
    *(undefined4 *)&pFVar27->field_0x24 = uVar11;
    pFVar27->Object = pUVar10;
    iVar19 = (pFVar25->RootReferencer).ArrayNum;
    iVar12 = (pFVar25->RootReferencer).ArrayMax;
    (pFVar27->RootReferencer).AllocatorInstance.Data =
         (pFVar25->RootReferencer).AllocatorInstance.Data;
    (pFVar27->RootReferencer).ArrayNum = iVar19;
    (pFVar27->RootReferencer).ArrayMax = iVar12;
    iVar19 = (pFVar25->NonRootReferencer).ArrayNum;
    iVar12 = (pFVar25->NonRootReferencer).ArrayMax;
    (pFVar27->NonRootReferencer).AllocatorInstance.Data =
         (pFVar25->NonRootReferencer).AllocatorInstance.Data;
    (pFVar27->NonRootReferencer).ArrayNum = iVar19;
    (pFVar27->NonRootReferencer).ArrayMax = iVar12;
    pFVar25->InclusiveMemoryUsage = uVar3;
    pFVar25->ExclusiveMemoryUsage = uVar4;
    pFVar25->InclusiveResourceSize = uVar5;
    pFVar25->ExclusiveResourceSize = uVar6;
    pFVar25->Flags = uVar13;
    *(undefined4 *)&pFVar25->field_0x24 = uVar14;
    pFVar25->Object = pUVar7;
    (pFVar25->RootReferencer).AllocatorInstance.Data = pFVar8;
    (pFVar25->RootReferencer).ArrayNum = iVar15;
    (pFVar25->RootReferencer).ArrayMax = iVar26;
    (pFVar25->NonRootReferencer).AllocatorInstance.Data = pFVar9;
    (pFVar25->NonRootReferencer).ArrayNum = iVar16;
    (pFVar25->NonRootReferencer).ArrayMax = iVar17;
    iVar19 = iVar21;
  } while( true );
}

// InternalConstructor<UDEPRECATED_MetaData> @ 1420e4d20

void __cdecl InternalConstructor<UDEPRECATED_MetaData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UDEPRECATED_MetaData__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined4 *)(this + 2) = 0;
    *(undefined4 *)&this[2].field_0x4 = 0x80;
    *(undefined4 *)&this[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[2].field_0xc = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)&this[4].field_0x4 = 0x80;
    *(undefined4 *)&this[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[4].field_0xc = 0;
    *(undefined8 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x20 = 0;
  }
  return;
}

// InternalConstructor<ULinkerPlaceholderClass> @ 1420e4dc0

void __cdecl InternalConstructor<ULinkerPlaceholderClass>(FObjectInitializer *param_1)

{
  UClass *this;
  
  this = (UClass *)param_1->Obj;
  if (this != (UClass *)0x0) {
    UClass::UClass(this,param_1);
    TLinkerImportPlaceholder<UClass>::TLinkerImportPlaceholder<UClass>
              ((TLinkerImportPlaceholder<UClass> *)(this + 1));
    this->_padding_ = (longlong)&ULinkerPlaceholderClass::_vftable__for__UClass__;
    this[1]._padding_ =
         (longlong)&ULinkerPlaceholderClass::_vftable__for__TLinkerImportPlaceholder<UClass>__;
  }
  return;
}

// InternalConstructor<ULinkerPlaceholderExportObject> @ 1420e4e20

void __cdecl InternalConstructor<ULinkerPlaceholderExportObject>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    FLinkerPlaceholderBase::FLinkerPlaceholderBase((FLinkerPlaceholderBase *)(this + 1));
    *(undefined ***)this = &ULinkerPlaceholderExportObject::_vftable__for__UObject__;
    *(undefined ***)(this + 1) =
         &ULinkerPlaceholderExportObject::_vftable__for__FLinkerPlaceholderBase__;
  }
  return;
}

// InternalConstructor<ULinkerPlaceholderFunction> @ 1420e4e70

void __cdecl InternalConstructor<ULinkerPlaceholderFunction>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined4 *)&this[1].field_0x10 = 0xffffffff;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined2 *)&this[2].field_0xe = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined ***)this = &___7UFunction__6B_;
    TLinkerImportPlaceholder<UFunction>::TLinkerImportPlaceholder<UFunction>
              ((TLinkerImportPlaceholder<UFunction> *)&this[5].field_0x20);
    *(undefined ***)this = &ULinkerPlaceholderFunction::_vftable__for__UFunction__;
    *(undefined ***)&this[5].field_0x20 =
         &ULinkerPlaceholderFunction::_vftable__for__TLinkerImportPlaceholder<UFunction>__;
  }
  return;
}

// InternalConstructor<UObjectRedirector> @ 1420e4f10

void __cdecl InternalConstructor<UObjectRedirector>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UObjectRedirector__6B_;
  }
  return;
}

// InternalVTableHelperCtorCaller<UDEPRECATED_MetaData> @ 1420e4f40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UDEPRECATED_MetaData>(FVTableHelper *param_1)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar1 = GObjTransientPkg;
  pUVar2 = UDEPRECATED_MetaData::GetPrivateStaticClass();
  pUVar3 = StaticAllocateObject
                     (pUVar2,(UObject *)pUVar1,(FName)0x0,
                      RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,(bool *)0x0
                      ,(UPackage *)0x0,0,(FRemoteObjectId)0x0,(FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UObject *)0x0) {
    *(undefined ***)pUVar3 = &___7UObject__6B_;
    EnsureRetrievingVTablePtrDuringCtor(L"UObject(FVTableHelper& Helper)");
    *(undefined ***)pUVar3 = &___7UDEPRECATED_MetaData__6B_;
    *(undefined8 *)(pUVar3 + 1) = 0;
    *(undefined8 *)&pUVar3[1].field_0x8 = 0;
    *(undefined8 *)&pUVar3[1].field_0x20 = 0;
    *(undefined4 *)(pUVar3 + 2) = 0;
    *(undefined4 *)&pUVar3[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar3[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar3[2].field_0xc = 0;
    *(undefined8 *)&pUVar3[2].field_0x18 = 0;
    *(undefined4 *)&pUVar3[2].field_0x20 = 0;
    *(undefined8 *)(pUVar3 + 3) = 0;
    *(undefined8 *)&pUVar3[3].field_0x8 = 0;
    *(undefined8 *)&pUVar3[3].field_0x20 = 0;
    *(undefined4 *)(pUVar3 + 4) = 0;
    *(undefined4 *)&pUVar3[4].field_0x4 = 0x80;
    *(undefined4 *)&pUVar3[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar3[4].field_0xc = 0;
    *(undefined8 *)&pUVar3[4].field_0x18 = 0;
    *(undefined4 *)&pUVar3[4].field_0x20 = 0;
    return pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULinkerPlaceholderClass> @ 1420e5050

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULinkerPlaceholderClass>(FVTableHelper *param_1)

{
  UPackage *pUVar1;
  UClass *this;
  FUObjectCppClassStaticFunctions local_res18;
  
  pUVar1 = GObjTransientPkg;
  if (Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton == (UClass *)0x0) {
    local_res18.AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LinkerPlaceholderClass",
               &Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton,
               ULinkerPlaceholderClass::StaticRegisterNativesULinkerPlaceholderClass,0x3c8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULinkerPlaceholderClass>
               ,InternalVTableHelperCtorCaller<ULinkerPlaceholderClass>,&local_res18,
               UClass::StaticClass,UPackage::StaticClass);
  }
  this = (UClass *)
         StaticAllocateObject
                   (Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton,
                    (UObject *)pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject
                    ,Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UClass *)0x0) {
    UClass::UClass(this,param_1);
    TLinkerImportPlaceholder<UClass>::TLinkerImportPlaceholder<UClass>
              ((TLinkerImportPlaceholder<UClass> *)(this + 1));
    this->_padding_ = (longlong)&ULinkerPlaceholderClass::_vftable__for__UClass__;
    this[1]._padding_ =
         (longlong)&ULinkerPlaceholderClass::_vftable__for__TLinkerImportPlaceholder<UClass>__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULinkerPlaceholderExportObject> @ 1420e51b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<ULinkerPlaceholderExportObject>(FVTableHelper *param_1)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar1 = GObjTransientPkg;
  pUVar2 = ULinkerPlaceholderExportObject::GetPrivateStaticClass();
  pUVar3 = StaticAllocateObject
                     (pUVar2,(UObject *)pUVar1,(FName)0x0,
                      RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,(bool *)0x0
                      ,(UPackage *)0x0,0,(FRemoteObjectId)0x0,(FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UObject *)0x0) {
    *(undefined ***)pUVar3 = &___7UObject__6B_;
    EnsureRetrievingVTablePtrDuringCtor(L"UObject(FVTableHelper& Helper)");
    FLinkerPlaceholderBase::FLinkerPlaceholderBase((FLinkerPlaceholderBase *)(pUVar3 + 1));
    *(undefined ***)pUVar3 = &ULinkerPlaceholderExportObject::_vftable__for__UObject__;
    *(undefined ***)(pUVar3 + 1) =
         &ULinkerPlaceholderExportObject::_vftable__for__FLinkerPlaceholderBase__;
    return pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ULinkerPlaceholderFunction> @ 1420e5280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ULinkerPlaceholderFunction>(FVTableHelper *param_1)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  UFunction *this;
  UFunction *pUVar3;
  
  pUVar1 = GObjTransientPkg;
  pUVar3 = (UFunction *)0x0;
  pUVar2 = ULinkerPlaceholderFunction::GetPrivateStaticClass();
  this = (UFunction *)
         StaticAllocateObject
                   (pUVar2,(UObject *)pUVar1,(FName)0x0,
                    RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,(bool *)0x0,
                    (UPackage *)0x0,0,(FRemoteObjectId)0x0,(FGCReconstructionGuard *)0x0);
  if (this != (UFunction *)0x0) {
    UFunction::UFunction(this,param_1);
    TLinkerImportPlaceholder<UFunction>::TLinkerImportPlaceholder<UFunction>
              ((TLinkerImportPlaceholder<UFunction> *)(this + 1));
    this->_padding_ = (longlong)&ULinkerPlaceholderFunction::_vftable__for__UFunction__;
    this[1]._padding_ =
         (longlong)&ULinkerPlaceholderFunction::_vftable__for__TLinkerImportPlaceholder<UFunction>__
    ;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UObjectRedirector> @ 1420e5340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UObjectRedirector>(FVTableHelper *param_1)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  
  pUVar1 = GObjTransientPkg;
  pUVar2 = UObjectRedirector::GetPrivateStaticClass();
  pUVar3 = StaticAllocateObject
                     (pUVar2,(UObject *)pUVar1,(FName)0x0,
                      RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,(bool *)0x0
                      ,(UPackage *)0x0,0,(FRemoteObjectId)0x0,(FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UObject *)0x0) {
    *(undefined ***)pUVar3 = &___7UObject__6B_;
    EnsureRetrievingVTablePtrDuringCtor(L"UObject(FVTableHelper& Helper)");
    *(undefined ***)pUVar3 = &___7UObjectRedirector__6B_;
    return pUVar3;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<`StaticExec'::__l905::FSortUObjectByClassName>_>_> @ 1420e53e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<_StaticExec_::__l905::FSortUObjectByClassName>_>_>
          (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *param_1,int param_2,
          FIdentityFunctor param_3,
          FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<_bool___cdecl_StaticExec(UWorld_*,wchar_t_const_*,FOutputDevice_&)_::_905_::FSortUObjectByClassName>_>
          param_4)

{
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>_s_1 TVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ForAnyElementType FVar5;
  ForAnyElementType FVar6;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar7;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar9;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar10;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar11;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *pTVar12;
  float fVar13;
  undefined1 auStack_408 [32];
  FName local_3e8;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> **local_3e0;
  int local_3d8;
  FElementCompareClass<_bool___cdecl_StaticExec(UWorld_*,wchar_t_const_*,FOutputDevice_&)_::_905_::FSortUObjectByClassName>
  *local_3d0;
  FString local_3c8;
  FString local_3b8;
  FString local_3a8;
  FString local_398;
  FString local_388;
  FString local_378 [2];
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_358;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_348;
  TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_408;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_3d0 = param_4.Predicate;
    local_348 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar13;
    memset(local_330,0,0x2e8);
    local_3e0 = &local_348;
    do {
      pTVar9 = local_3e0[1];
      pTVar8 = *local_3e0;
      local_358 = local_3e0[2];
      iVar4 = (int)((longlong)pTVar9 - (longlong)pTVar8 >> 4) + 1;
      local_3d8 = (int)local_358;
      pTVar7 = pTVar8;
      if ((int)local_358 != 0) {
LAB_1420e54b0:
        if (8 < iVar4) {
          lVar2 = *(longlong *)((pTVar7->ElementData).Pad + 8);
          pTVar10 = pTVar9 + 1;
          TVar1 = pTVar7[iVar4 / 2]._s_1;
          lVar3 = *(longlong *)((longlong)pTVar7[iVar4 / 2].ElementData.Pad + 8);
          pTVar7[iVar4 / 2]._s_1 = pTVar7->_s_1;
          *(longlong *)((longlong)pTVar7[iVar4 / 2].ElementData.Pad + 8) = lVar2;
          pTVar7->_s_1 = TVar1;
          *(longlong *)((pTVar7->ElementData).Pad + 8) = lVar3;
          pTVar8 = pTVar7;
LAB_1420e54e0:
          pTVar12 = pTVar8;
          pTVar8 = pTVar12 + 1;
          if (pTVar8 <= pTVar9) goto code_r0x0001420e54ed;
          goto LAB_1420e5581;
        }
        for (; pTVar10 = pTVar7, pTVar8 = pTVar7, pTVar7 < pTVar9; pTVar9 = pTVar9 + -1) {
          while (pTVar12 = pTVar10, pTVar8 = pTVar8 + 1, pTVar8 <= pTVar9) {
            TVar1 = pTVar12->_s_1;
            local_3e8 = *(FName *)(*(longlong *)((longlong)pTVar8->_s_1 + 0x10) + 0x18);
            ::FName::ToString(&local_3e8,local_378);
            local_3e8 = *(FName *)(*(longlong *)((longlong)TVar1 + 0x10) + 0x18);
            ::FName::ToString(&local_3e8,&local_388);
            FVar6.Data = (FScriptContainerElement *)L"";
            if (local_388.Data.ArrayNum != 0) {
              FVar6.Data = local_388.Data.AllocatorInstance.Data;
            }
            FVar5.Data = (FScriptContainerElement *)L"";
            if (local_378[0].Data.ArrayNum != 0) {
              FVar5.Data = local_378[0].Data.AllocatorInstance.Data;
            }
            iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,(wchar_t *)FVar6.Data);
            if (local_388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_388.Data.AllocatorInstance.Data);
            }
            if (local_378[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_378[0].Data.AllocatorInstance.Data);
            }
            pTVar10 = pTVar8;
            if (iVar4 < 0) {
              pTVar10 = pTVar12;
            }
          }
          TVar1 = pTVar12->_s_1;
          lVar2 = *(longlong *)((pTVar12->ElementData).Pad + 8);
          lVar3 = *(longlong *)((pTVar9->ElementData).Pad + 8);
          pTVar12->_s_1 = pTVar9->_s_1;
          *(longlong *)((pTVar12->ElementData).Pad + 8) = lVar3;
          pTVar9->_s_1 = TVar1;
          *(longlong *)((pTVar9->ElementData).Pad + 8) = lVar2;
          param_4.Predicate = local_3d0;
        }
        goto LAB_1420e56f6;
      }
LAB_1420e56e0:
      HeapSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<_StaticExec_::__l905::FSortUObjectByClassName>_>_>
                (pTVar8,iVar4,param_3,param_4);
LAB_1420e56f6:
      local_3e0 = local_3e0 + -3;
    } while (&local_348 <= local_3e0);
  }
  return;
code_r0x0001420e54ed:
  TVar1 = pTVar7->_s_1;
  local_3e8 = *(FName *)(*(longlong *)((longlong)pTVar8->_s_1 + 0x10) + 0x18);
  ::FName::ToString(&local_3e8,&local_3b8);
  local_3e8 = *(FName *)(*(longlong *)((longlong)TVar1 + 0x10) + 0x18);
  ::FName::ToString(&local_3e8,&local_3c8);
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_3c8.Data.ArrayNum != 0) {
    FVar6.Data = local_3c8.Data.AllocatorInstance.Data;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_3b8.Data.ArrayNum != 0) {
    FVar5.Data = local_3b8.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,(wchar_t *)FVar6.Data);
  if (local_3c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3c8.Data.AllocatorInstance.Data);
  }
  if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
  }
  if (iVar4 < 0) goto LAB_1420e54e0;
LAB_1420e5581:
  do {
    pTVar11 = pTVar10;
    pTVar10 = pTVar11 + -1;
    if (pTVar10 <= pTVar7) break;
    TVar1 = pTVar10->_s_1;
    local_3e8 = *(FName *)(*(longlong *)((longlong)pTVar7->_s_1 + 0x10) + 0x18);
    ::FName::ToString(&local_3e8,&local_398);
    local_3e8 = *(FName *)(*(longlong *)((longlong)TVar1 + 0x10) + 0x18);
    ::FName::ToString(&local_3e8,&local_3a8);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_3a8.Data.ArrayNum != 0) {
      FVar6.Data = local_3a8.Data.AllocatorInstance.Data;
    }
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_398.Data.ArrayNum != 0) {
      FVar5.Data = local_398.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,(wchar_t *)FVar6.Data);
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    if (local_398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_398.Data.AllocatorInstance.Data);
    }
  } while (iVar4 < 0);
  lVar2 = *(longlong *)((longlong)pTVar11 + -8);
  if (pTVar8 <= pTVar10) {
    TVar1 = pTVar8->_s_1;
    lVar3 = *(longlong *)((longlong)pTVar12 + 0x18);
    pTVar8->_s_1 = pTVar10->_s_1;
    *(longlong *)((longlong)pTVar12 + 0x18) = lVar2;
    pTVar10->_s_1 = TVar1;
    *(longlong *)((longlong)pTVar11 + -8) = lVar3;
    goto LAB_1420e54e0;
  }
  TVar1 = pTVar7->_s_1;
  lVar3 = *(longlong *)((pTVar7->ElementData).Pad + 8);
  local_3d8 = local_3d8 + -1;
  pTVar7->_s_1 = pTVar10->_s_1;
  *(longlong *)((pTVar7->ElementData).Pad + 8) = lVar2;
  pTVar10->_s_1 = TVar1;
  *(longlong *)((longlong)pTVar11 + -8) = lVar3;
  if ((longlong)((longlong)pTVar10 + (-0x10 - (longlong)pTVar7) & 0xfffffffffffffff0U) <
      (longlong)((longlong)pTVar9 - (longlong)pTVar8 & 0xfffffffffffffff0U)) {
    if (pTVar8 < pTVar9) {
      *local_3e0 = pTVar8;
      local_3e0[1] = pTVar9;
      *(int *)(local_3e0 + 2) = local_3d8;
      local_3e0 = local_3e0 + 3;
    }
    if (pTVar10 <= pTVar7 + 1) goto LAB_1420e56f6;
    pTVar9 = pTVar11 + -2;
    pTVar8 = pTVar7;
  }
  else {
    if (pTVar7 + 1 < pTVar10) {
      *local_3e0 = pTVar7;
      local_3e0[1] = pTVar11 + -2;
      *(int *)(local_3e0 + 2) = local_3d8;
      local_3e0 = local_3e0 + 3;
    }
    if (pTVar9 <= pTVar8) goto LAB_1420e56f6;
  }
  iVar4 = (int)((longlong)pTVar9 - (longlong)pTVar8 >> 4) + 1;
  pTVar7 = pTVar8;
  if (local_3d8 == 0) goto LAB_1420e56e0;
  goto LAB_1420e54b0;
}

// IntroSortInternal<FObjectMemoryUsage,int,FIdentityFunctor,TDereferenceWrapper<FObjectMemoryUsage,FObjectMemoryAnalyzer::FCompareFSortBySize>_> @ 1420e5840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<FObjectMemoryUsage,int,FIdentityFunctor,TDereferenceWrapper<FObjectMemoryUsage,FObjectMemoryAnalyzer::FCompareFSortBySize>_>
          (FObjectMemoryUsage *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FObjectMemoryUsage,FObjectMemoryAnalyzer::FCompareFSortBySize> param_4
          )

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  UObject *pUVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  int iVar19;
  FObjectMemoryUsage *pFVar20;
  FObjectMemoryUsage *pFVar21;
  FObjectMemoryUsage *pFVar22;
  FObjectMemoryUsage **ppFVar23;
  int iVar24;
  FObjectMemoryUsage *pFVar25;
  FObjectMemoryUsage *pFVar26;
  FObjectMemoryUsage *pFVar27;
  float fVar28;
  undefined1 auStack_398 [48];
  FObjectMemoryUsage *local_368;
  FObjectMemoryUsage *local_358;
  FObjectMemoryUsage *local_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  if (1 < param_2) {
    local_350 = param_1 + (longlong)param_2 + -1;
    local_358 = param_1;
    fVar28 = logf((float)param_2 * (float)param_2);
    local_348 = (undefined4)(longlong)fVar28;
    memset(local_340,0,0x2e8);
    ppFVar23 = &local_358;
    do {
      pFVar27 = ppFVar23[1];
      pFVar26 = *ppFVar23;
      local_368 = ppFVar23[2];
      iVar19 = (int)(((longlong)pFVar27 - (longlong)pFVar26) / 0x50) + 1;
      pFVar25 = pFVar26;
      iVar24 = (int)local_368;
      if ((int)local_368 != 0) {
LAB_1420e5930:
        if (8 < iVar19) {
          uVar1 = pFVar25->ExclusiveMemoryUsage;
          pFVar20 = pFVar27 + 1;
          pFVar26 = pFVar25 + iVar19 / 2;
          uVar2 = pFVar26->InclusiveMemoryUsage;
          uVar3 = pFVar26->ExclusiveMemoryUsage;
          uVar4 = pFVar26->InclusiveResourceSize;
          uVar5 = pFVar26->ExclusiveResourceSize;
          uVar12 = pFVar26->Flags;
          uVar13 = *(undefined4 *)&pFVar26->field_0x24;
          pUVar6 = pFVar26->Object;
          pFVar7 = (pFVar26->RootReferencer).AllocatorInstance.Data;
          iVar14 = (pFVar26->RootReferencer).ArrayNum;
          iVar15 = (pFVar26->RootReferencer).ArrayMax;
          pFVar8 = (pFVar26->NonRootReferencer).AllocatorInstance.Data;
          iVar16 = (pFVar26->NonRootReferencer).ArrayNum;
          iVar17 = (pFVar26->NonRootReferencer).ArrayMax;
          pFVar26->InclusiveMemoryUsage = pFVar25->InclusiveMemoryUsage;
          pFVar26->ExclusiveMemoryUsage = uVar1;
          uVar1 = pFVar25->ExclusiveResourceSize;
          pFVar26->InclusiveResourceSize = pFVar25->InclusiveResourceSize;
          pFVar26->ExclusiveResourceSize = uVar1;
          uVar10 = *(undefined4 *)&pFVar25->field_0x24;
          pUVar9 = pFVar25->Object;
          pFVar26->Flags = pFVar25->Flags;
          *(undefined4 *)&pFVar26->field_0x24 = uVar10;
          pFVar26->Object = pUVar9;
          iVar19 = (pFVar25->RootReferencer).ArrayNum;
          iVar11 = (pFVar25->RootReferencer).ArrayMax;
          (pFVar26->RootReferencer).AllocatorInstance.Data =
               (pFVar25->RootReferencer).AllocatorInstance.Data;
          (pFVar26->RootReferencer).ArrayNum = iVar19;
          (pFVar26->RootReferencer).ArrayMax = iVar11;
          iVar19 = (pFVar25->NonRootReferencer).ArrayNum;
          iVar11 = (pFVar25->NonRootReferencer).ArrayMax;
          (pFVar26->NonRootReferencer).AllocatorInstance.Data =
               (pFVar25->NonRootReferencer).AllocatorInstance.Data;
          (pFVar26->NonRootReferencer).ArrayNum = iVar19;
          (pFVar26->NonRootReferencer).ArrayMax = iVar11;
          pFVar25->InclusiveMemoryUsage = uVar2;
          pFVar25->ExclusiveMemoryUsage = uVar3;
          pFVar25->InclusiveResourceSize = uVar4;
          pFVar25->ExclusiveResourceSize = uVar5;
          pFVar25->Flags = uVar12;
          *(undefined4 *)&pFVar25->field_0x24 = uVar13;
          pFVar25->Object = pUVar6;
          (pFVar25->RootReferencer).AllocatorInstance.Data = pFVar7;
          (pFVar25->RootReferencer).ArrayNum = iVar14;
          (pFVar25->RootReferencer).ArrayMax = iVar15;
          (pFVar25->NonRootReferencer).AllocatorInstance.Data = pFVar8;
          (pFVar25->NonRootReferencer).ArrayNum = iVar16;
          (pFVar25->NonRootReferencer).ArrayMax = iVar17;
          pFVar26 = pFVar25;
LAB_1420e59b0:
          pFVar22 = pFVar26;
          pFVar26 = pFVar22 + 1;
          if (pFVar26 <= pFVar27) goto code_r0x0001420e59b9;
          goto LAB_1420e59d0;
        }
        for (; pFVar20 = pFVar25, pFVar26 = pFVar25, pFVar25 < pFVar27; pFVar27 = pFVar27 + -1) {
          while (pFVar22 = pFVar20, pFVar26 = pFVar26 + 1, pFVar26 <= pFVar27) {
            bVar18 = FObjectMemoryAnalyzer::FCompareFSortBySize::operator()
                               (param_4.Predicate,pFVar22,pFVar26);
            pFVar20 = pFVar26;
            if (!bVar18) {
              pFVar20 = pFVar22;
            }
          }
          uVar1 = pFVar22->InclusiveMemoryUsage;
          uVar2 = pFVar22->ExclusiveMemoryUsage;
          uVar3 = pFVar22->InclusiveResourceSize;
          uVar4 = pFVar22->ExclusiveResourceSize;
          uVar12 = pFVar22->Flags;
          uVar13 = *(undefined4 *)&pFVar22->field_0x24;
          pUVar6 = pFVar22->Object;
          uVar5 = pFVar27->ExclusiveMemoryUsage;
          pFVar7 = (pFVar22->RootReferencer).AllocatorInstance.Data;
          iVar11 = (pFVar22->RootReferencer).ArrayNum;
          iVar14 = (pFVar22->RootReferencer).ArrayMax;
          pFVar8 = (pFVar22->NonRootReferencer).AllocatorInstance.Data;
          iVar15 = (pFVar22->NonRootReferencer).ArrayNum;
          iVar16 = (pFVar22->NonRootReferencer).ArrayMax;
          pFVar22->InclusiveMemoryUsage = pFVar27->InclusiveMemoryUsage;
          pFVar22->ExclusiveMemoryUsage = uVar5;
          uVar5 = pFVar27->ExclusiveResourceSize;
          pFVar22->InclusiveResourceSize = pFVar27->InclusiveResourceSize;
          pFVar22->ExclusiveResourceSize = uVar5;
          uVar10 = *(undefined4 *)&pFVar27->field_0x24;
          pUVar9 = pFVar27->Object;
          pFVar22->Flags = pFVar27->Flags;
          *(undefined4 *)&pFVar22->field_0x24 = uVar10;
          pFVar22->Object = pUVar9;
          iVar24 = (pFVar27->RootReferencer).ArrayNum;
          iVar19 = (pFVar27->RootReferencer).ArrayMax;
          (pFVar22->RootReferencer).AllocatorInstance.Data =
               (pFVar27->RootReferencer).AllocatorInstance.Data;
          (pFVar22->RootReferencer).ArrayNum = iVar24;
          (pFVar22->RootReferencer).ArrayMax = iVar19;
          iVar24 = (pFVar27->NonRootReferencer).ArrayNum;
          iVar19 = (pFVar27->NonRootReferencer).ArrayMax;
          (pFVar22->NonRootReferencer).AllocatorInstance.Data =
               (pFVar27->NonRootReferencer).AllocatorInstance.Data;
          (pFVar22->NonRootReferencer).ArrayNum = iVar24;
          (pFVar22->NonRootReferencer).ArrayMax = iVar19;
          pFVar27->InclusiveMemoryUsage = uVar1;
          pFVar27->ExclusiveMemoryUsage = uVar2;
          pFVar27->InclusiveResourceSize = uVar3;
          pFVar27->ExclusiveResourceSize = uVar4;
          pFVar27->Flags = uVar12;
          *(undefined4 *)&pFVar27->field_0x24 = uVar13;
          pFVar27->Object = pUVar6;
          (pFVar27->RootReferencer).AllocatorInstance.Data = pFVar7;
          (pFVar27->RootReferencer).ArrayNum = iVar11;
          (pFVar27->RootReferencer).ArrayMax = iVar14;
          (pFVar27->NonRootReferencer).AllocatorInstance.Data = pFVar8;
          (pFVar27->NonRootReferencer).ArrayNum = iVar15;
          (pFVar27->NonRootReferencer).ArrayMax = iVar16;
        }
        goto LAB_1420e5b6f;
      }
LAB_1420e5b56:
      HeapSortInternal<FObjectMemoryUsage,int,FIdentityFunctor,TDereferenceWrapper<FObjectMemoryUsage,FObjectMemoryAnalyzer::FCompareFSortBySize>_>
                (pFVar26,iVar19,param_3,param_4);
LAB_1420e5b6f:
      ppFVar23 = ppFVar23 + -3;
    } while (&local_358 <= ppFVar23);
  }
  return;
code_r0x0001420e59b9:
  bVar18 = FObjectMemoryAnalyzer::FCompareFSortBySize::operator()(param_4.Predicate,pFVar25,pFVar26)
  ;
  if (!bVar18) goto LAB_1420e59b0;
LAB_1420e59d0:
  do {
    pFVar21 = pFVar20;
    pFVar20 = pFVar21 + -1;
    if (pFVar20 <= pFVar25) break;
    bVar18 = FObjectMemoryAnalyzer::FCompareFSortBySize::operator()
                       (param_4.Predicate,pFVar20,pFVar25);
  } while (!bVar18);
  uVar1 = pFVar21[-1].ExclusiveMemoryUsage;
  if (pFVar26 <= pFVar20) {
    uVar2 = pFVar26->InclusiveMemoryUsage;
    uVar3 = pFVar22[1].ExclusiveMemoryUsage;
    uVar4 = pFVar22[1].InclusiveResourceSize;
    uVar5 = pFVar22[1].ExclusiveResourceSize;
    uVar12 = pFVar22[1].Flags;
    uVar13 = *(undefined4 *)&pFVar22[1].field_0x24;
    pUVar6 = pFVar22[1].Object;
    pFVar7 = pFVar22[1].RootReferencer.AllocatorInstance.Data;
    iVar14 = pFVar22[1].RootReferencer.ArrayNum;
    iVar15 = pFVar22[1].RootReferencer.ArrayMax;
    pFVar8 = pFVar22[1].NonRootReferencer.AllocatorInstance.Data;
    iVar16 = pFVar22[1].NonRootReferencer.ArrayNum;
    iVar17 = pFVar22[1].NonRootReferencer.ArrayMax;
    pFVar26->InclusiveMemoryUsage = pFVar20->InclusiveMemoryUsage;
    pFVar22[1].ExclusiveMemoryUsage = uVar1;
    uVar1 = pFVar21[-1].ExclusiveResourceSize;
    pFVar22[1].InclusiveResourceSize = pFVar21[-1].InclusiveResourceSize;
    pFVar22[1].ExclusiveResourceSize = uVar1;
    uVar10 = *(undefined4 *)&pFVar21[-1].field_0x24;
    pUVar9 = pFVar21[-1].Object;
    pFVar22[1].Flags = pFVar21[-1].Flags;
    *(undefined4 *)&pFVar22[1].field_0x24 = uVar10;
    pFVar22[1].Object = pUVar9;
    iVar19 = pFVar21[-1].RootReferencer.ArrayNum;
    iVar11 = pFVar21[-1].RootReferencer.ArrayMax;
    pFVar22[1].RootReferencer.AllocatorInstance.Data =
         pFVar21[-1].RootReferencer.AllocatorInstance.Data;
    pFVar22[1].RootReferencer.ArrayNum = iVar19;
    pFVar22[1].RootReferencer.ArrayMax = iVar11;
    iVar19 = pFVar21[-1].NonRootReferencer.ArrayNum;
    iVar11 = pFVar21[-1].NonRootReferencer.ArrayMax;
    pFVar22[1].NonRootReferencer.AllocatorInstance.Data =
         pFVar21[-1].NonRootReferencer.AllocatorInstance.Data;
    pFVar22[1].NonRootReferencer.ArrayNum = iVar19;
    pFVar22[1].NonRootReferencer.ArrayMax = iVar11;
    pFVar20->InclusiveMemoryUsage = uVar2;
    pFVar21[-1].ExclusiveMemoryUsage = uVar3;
    pFVar21[-1].InclusiveResourceSize = uVar4;
    pFVar21[-1].ExclusiveResourceSize = uVar5;
    pFVar21[-1].Flags = uVar12;
    *(undefined4 *)&pFVar21[-1].field_0x24 = uVar13;
    pFVar21[-1].Object = pUVar6;
    pFVar21[-1].RootReferencer.AllocatorInstance.Data = pFVar7;
    pFVar21[-1].RootReferencer.ArrayNum = iVar14;
    pFVar21[-1].RootReferencer.ArrayMax = iVar15;
    pFVar21[-1].NonRootReferencer.AllocatorInstance.Data = pFVar8;
    pFVar21[-1].NonRootReferencer.ArrayNum = iVar16;
    pFVar21[-1].NonRootReferencer.ArrayMax = iVar17;
    goto LAB_1420e59b0;
  }
  uVar2 = pFVar25->InclusiveMemoryUsage;
  uVar3 = pFVar25->ExclusiveMemoryUsage;
  uVar4 = pFVar25->InclusiveResourceSize;
  uVar5 = pFVar25->ExclusiveResourceSize;
  uVar12 = pFVar25->Flags;
  uVar13 = *(undefined4 *)&pFVar25->field_0x24;
  pUVar6 = pFVar25->Object;
  iVar24 = iVar24 + -1;
  pFVar7 = (pFVar25->RootReferencer).AllocatorInstance.Data;
  iVar14 = (pFVar25->RootReferencer).ArrayNum;
  iVar15 = (pFVar25->RootReferencer).ArrayMax;
  pFVar8 = (pFVar25->NonRootReferencer).AllocatorInstance.Data;
  iVar16 = (pFVar25->NonRootReferencer).ArrayNum;
  iVar17 = (pFVar25->NonRootReferencer).ArrayMax;
  pFVar25->InclusiveMemoryUsage = pFVar20->InclusiveMemoryUsage;
  pFVar25->ExclusiveMemoryUsage = uVar1;
  uVar1 = pFVar21[-1].ExclusiveResourceSize;
  pFVar25->InclusiveResourceSize = pFVar21[-1].InclusiveResourceSize;
  pFVar25->ExclusiveResourceSize = uVar1;
  uVar10 = *(undefined4 *)&pFVar21[-1].field_0x24;
  pUVar9 = pFVar21[-1].Object;
  pFVar25->Flags = pFVar21[-1].Flags;
  *(undefined4 *)&pFVar25->field_0x24 = uVar10;
  pFVar25->Object = pUVar9;
  iVar19 = pFVar21[-1].RootReferencer.ArrayNum;
  iVar11 = pFVar21[-1].RootReferencer.ArrayMax;
  (pFVar25->RootReferencer).AllocatorInstance.Data =
       pFVar21[-1].RootReferencer.AllocatorInstance.Data;
  (pFVar25->RootReferencer).ArrayNum = iVar19;
  (pFVar25->RootReferencer).ArrayMax = iVar11;
  iVar19 = pFVar21[-1].NonRootReferencer.ArrayNum;
  iVar11 = pFVar21[-1].NonRootReferencer.ArrayMax;
  (pFVar25->NonRootReferencer).AllocatorInstance.Data =
       pFVar21[-1].NonRootReferencer.AllocatorInstance.Data;
  (pFVar25->NonRootReferencer).ArrayNum = iVar19;
  (pFVar25->NonRootReferencer).ArrayMax = iVar11;
  pFVar20->InclusiveMemoryUsage = uVar2;
  pFVar21[-1].ExclusiveMemoryUsage = uVar3;
  pFVar21[-1].InclusiveResourceSize = uVar4;
  pFVar21[-1].ExclusiveResourceSize = uVar5;
  pFVar21[-1].Flags = uVar12;
  *(undefined4 *)&pFVar21[-1].field_0x24 = uVar13;
  pFVar21[-1].Object = pUVar6;
  pFVar21[-1].RootReferencer.AllocatorInstance.Data = pFVar7;
  pFVar21[-1].RootReferencer.ArrayNum = iVar14;
  pFVar21[-1].RootReferencer.ArrayMax = iVar15;
  pFVar21[-1].NonRootReferencer.AllocatorInstance.Data = pFVar8;
  pFVar21[-1].NonRootReferencer.ArrayNum = iVar16;
  pFVar21[-1].NonRootReferencer.ArrayMax = iVar17;
  if (((longlong)pFVar20 + (-0x50 - (longlong)pFVar25)) / 0x50 <
      ((longlong)pFVar27 - (longlong)pFVar26) / 0x50) {
    if (pFVar26 < pFVar27) {
      *ppFVar23 = pFVar26;
      ppFVar23[1] = pFVar27;
      *(int *)(ppFVar23 + 2) = iVar24;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar20 <= pFVar25 + 1) goto LAB_1420e5b6f;
    pFVar27 = pFVar21 + -2;
    pFVar26 = pFVar25;
  }
  else {
    if (pFVar25 + 1 < pFVar20) {
      *ppFVar23 = pFVar25;
      ppFVar23[1] = pFVar21 + -2;
      *(int *)(ppFVar23 + 2) = iVar24;
      ppFVar23 = ppFVar23 + 3;
    }
    if (pFVar27 <= pFVar26) goto LAB_1420e5b6f;
  }
  iVar19 = (int)(((longlong)pFVar27 - (longlong)pFVar26) / 0x50) + 1;
  pFVar25 = pFVar26;
  if (iVar24 == 0) goto LAB_1420e5b56;
  goto LAB_1420e5930;
}

// IsObjectPtrEqual<UObject_const_,UObject_*,0> @ 1420e5c80

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<UObject_const_,UObject_*,0>
          (TObjectPtr<UObject_const_> *param_1,UObject **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (UObject *)0x0) {
    return *param_2 == (UObject *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// NewObject<UObject> @ 1420e5d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
NewObject<UObject>(UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,
                  UObject *param_5,bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UObject *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = Z_Construct_UClass_UObject_NoRegister();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UPackage> @ 1420e5e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPackage * __cdecl
NewObject<UPackage>(UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,
                   bool param_5,FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UPackage *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UPackage_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UPackage *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar3 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NotNullGet<UObject_const_*> @ 1420e5ef0

UObject * __cdecl NotNullGet<UObject_const_*>(TNotNull<UObject_const_*> *param_1)

{
  return param_1->Val;
}

// ParseObject<UClass> @ 1420e5f00

bool __cdecl
ParseObject<UClass>(wchar_t *param_1,wchar_t *param_2,UClass **param_3,UObject *param_4,
                   bool *param_5)

{
  bool bVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UClass_NoRegister();
  bVar1 = ParseObject(param_1,param_2,pUVar2,(UObject **)param_3,param_4,Find,param_5);
  return bVar1;
}

// ParseObject<UObject> @ 1420e5f70

bool __cdecl
ParseObject<UObject>
          (wchar_t *param_1,wchar_t *param_2,UObject **param_3,UObject *param_4,bool *param_5)

{
  bool bVar1;
  UClass *pUVar2;
  
  pUVar2 = Z_Construct_UClass_UObject_NoRegister();
  bVar1 = ParseObject(param_1,param_2,pUVar2,param_3,param_4,Find,param_5);
  return bVar1;
}

// StaticEnum<enum_EAppMsgCategory> @ 1420e6b20

UEnum * __cdecl StaticEnum<enum_EAppMsgCategory>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAppMsgCategory.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAppMsgCategory.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAppMsgCategory,(UObject *)pUVar1,
                       L"EAppMsgCategory");
  }
  return Z_Registration_Info_UEnum_EAppMsgCategory.OuterSingleton;
}

// StaticEnum<enum_EAutomationEventType> @ 1420e6b60

UEnum * __cdecl StaticEnum<enum_EAutomationEventType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAutomationEventType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAutomationEventType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAutomationEventType,(UObject *)pUVar1,
                       L"EAutomationEventType");
  }
  return Z_Registration_Info_UEnum_EAutomationEventType.OuterSingleton;
}

// StaticEnum<enum_EDataValidationResult> @ 1420e6ba0

UEnum * __cdecl StaticEnum<enum_EDataValidationResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EDataValidationResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EDataValidationResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EDataValidationResult,(UObject *)pUVar1,
                       L"EDataValidationResult");
  }
  return Z_Registration_Info_UEnum_EDataValidationResult.OuterSingleton;
}

// StaticEnum<enum_EInputDeviceAnalogStickMask> @ 1420e6be0

UEnum * __cdecl StaticEnum<enum_EInputDeviceAnalogStickMask>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputDeviceAnalogStickMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EInputDeviceAnalogStickMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EInputDeviceAnalogStickMask,(UObject *)pUVar1,
                       L"EInputDeviceAnalogStickMask");
  }
  return Z_Registration_Info_UEnum_EInputDeviceAnalogStickMask.OuterSingleton;
}

// StaticEnum<enum_EInputDeviceConnectionState> @ 1420e6c20

UEnum * __cdecl StaticEnum<enum_EInputDeviceConnectionState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputDeviceConnectionState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EInputDeviceConnectionState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState,(UObject *)pUVar1,
                       L"EInputDeviceConnectionState");
  }
  return Z_Registration_Info_UEnum_EInputDeviceConnectionState.OuterSingleton;
}

// StaticEnum<enum_EInputDeviceMappingPolicy> @ 1420e6c60

UEnum * __cdecl StaticEnum<enum_EInputDeviceMappingPolicy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputDeviceMappingPolicy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EInputDeviceMappingPolicy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EInputDeviceMappingPolicy,(UObject *)pUVar1,
                       L"EInputDeviceMappingPolicy");
  }
  return Z_Registration_Info_UEnum_EInputDeviceMappingPolicy.OuterSingleton;
}

// StaticEnum<enum_EInputDeviceTriggerMask> @ 1420e6ca0

UEnum * __cdecl StaticEnum<enum_EInputDeviceTriggerMask>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInputDeviceTriggerMask.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EInputDeviceTriggerMask.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EInputDeviceTriggerMask,(UObject *)pUVar1,
                       L"EInputDeviceTriggerMask");
  }
  return Z_Registration_Info_UEnum_EInputDeviceTriggerMask.OuterSingleton;
}

// StaticEnum<enum_EInterpCurveMode> @ 1420e6ce0

UEnum * __cdecl StaticEnum<enum_EInterpCurveMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EInterpCurveMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EInterpCurveMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EInterpCurveMode,(UObject *)pUVar1,
                       L"EInterpCurveMode");
  }
  return Z_Registration_Info_UEnum_EInterpCurveMode.OuterSingleton;
}

// StaticEnum<enum_ELocalizedTextSourceCategory> @ 1420e6d20

UEnum * __cdecl StaticEnum<enum_ELocalizedTextSourceCategory>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELocalizedTextSourceCategory.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ELocalizedTextSourceCategory.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ELocalizedTextSourceCategory,(UObject *)pUVar1,
                       L"ELocalizedTextSourceCategory");
  }
  return Z_Registration_Info_UEnum_ELocalizedTextSourceCategory.OuterSingleton;
}

// StaticEnum<enum_EOverriddenPropertyOperation> @ 1420e6d60

UEnum * __cdecl StaticEnum<enum_EOverriddenPropertyOperation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOverriddenPropertyOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EOverriddenPropertyOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EOverriddenPropertyOperation,(UObject *)pUVar1,
                       L"EOverriddenPropertyOperation");
  }
  return Z_Registration_Info_UEnum_EOverriddenPropertyOperation.OuterSingleton;
}

// StaticEnum<enum_EOverriddenState> @ 1420e6da0

UEnum * __cdecl StaticEnum<enum_EOverriddenState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EOverriddenState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EOverriddenState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EOverriddenState,(UObject *)pUVar1,
                       L"EOverriddenState");
  }
  return Z_Registration_Info_UEnum_EOverriddenState.OuterSingleton;
}

// StaticEnum<enum_EPixelFormat> @ 1420e6de0

UEnum * __cdecl StaticEnum<enum_EPixelFormat>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPixelFormat.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EPixelFormat.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EPixelFormat,(UObject *)pUVar1,L"EPixelFormat")
    ;
  }
  return Z_Registration_Info_UEnum_EPixelFormat.OuterSingleton;
}

// StaticEnum<enum_EUnit> @ 1420e6e20

UEnum * __cdecl StaticEnum<enum_EUnit>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EUnit.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EUnit.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EUnit,(UObject *)pUVar1,L"EUnit");
  }
  return Z_Registration_Info_UEnum_EUnit.OuterSingleton;
}

// StaticEnum<enum_EAppMsgType::Type> @ 1420e6e60

UEnum * __cdecl StaticEnum<enum_EAppMsgType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAppMsgType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAppMsgType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAppMsgType,(UObject *)pUVar1,L"EAppMsgType");
  }
  return Z_Registration_Info_UEnum_EAppMsgType.OuterSingleton;
}

// StaticEnum<enum_EAppReturnType::Type> @ 1420e6ea0

UEnum * __cdecl StaticEnum<enum_EAppReturnType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAppReturnType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAppReturnType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAppReturnType,(UObject *)pUVar1,
                       L"EAppReturnType");
  }
  return Z_Registration_Info_UEnum_EAppReturnType.OuterSingleton;
}

// StaticEnum<enum_EAxis::Type> @ 1420e6ee0

UEnum * __cdecl StaticEnum<enum_EAxis::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAxis.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAxis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAxis,(UObject *)pUVar1,L"EAxis");
  }
  return Z_Registration_Info_UEnum_EAxis.OuterSingleton;
}

// StaticEnum<enum_EAxisList::Type> @ 1420e6f20

UEnum * __cdecl StaticEnum<enum_EAxisList::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAxisList.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EAxisList.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EAxisList,(UObject *)pUVar1,L"EAxisList");
  }
  return Z_Registration_Info_UEnum_EAxisList.OuterSingleton;
}

// StaticEnum<enum_ELogTimes::Type> @ 1420e6f60

UEnum * __cdecl StaticEnum<enum_ELogTimes::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ELogTimes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ELogTimes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ELogTimes,(UObject *)pUVar1,L"ELogTimes");
  }
  return Z_Registration_Info_UEnum_ELogTimes.OuterSingleton;
}

// StaticEnum<enum_EMouseCursor::Type> @ 1420e6fa0

UEnum * __cdecl StaticEnum<enum_EMouseCursor::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMouseCursor.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EMouseCursor.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EMouseCursor,(UObject *)pUVar1,L"EMouseCursor")
    ;
  }
  return Z_Registration_Info_UEnum_EMouseCursor.OuterSingleton;
}

// StaticEnum<enum_ERangeBoundTypes::Type> @ 1420e6fe0

UEnum * __cdecl StaticEnum<enum_ERangeBoundTypes::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ERangeBoundTypes.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ERangeBoundTypes.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ERangeBoundTypes,(UObject *)pUVar1,
                       L"ERangeBoundTypes");
  }
  return Z_Registration_Info_UEnum_ERangeBoundTypes.OuterSingleton;
}

// StaticEnum<enum_ESearchCase::Type> @ 1420e7020

UEnum * __cdecl StaticEnum<enum_ESearchCase::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESearchCase.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ESearchCase.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ESearchCase,(UObject *)pUVar1,L"ESearchCase");
  }
  return Z_Registration_Info_UEnum_ESearchCase.OuterSingleton;
}

// StaticEnum<enum_ESearchDir::Type> @ 1420e7060

UEnum * __cdecl StaticEnum<enum_ESearchDir::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESearchDir.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_ESearchDir.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_ESearchDir,(UObject *)pUVar1,L"ESearchDir");
  }
  return Z_Registration_Info_UEnum_ESearchDir.OuterSingleton;
}

// StoreObjectPathId<`UE::CoreUObject::Private::FObjectPathId::MakeImportPathIdAndPackageName'::__l2::FImportObjectNamePathProducer> @ 1420e7ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __thiscall
UE::CoreUObject::Private::FObjectPathId::
StoreObjectPathId<_UE::CoreUObject::Private::FObjectPathId::MakeImportPathIdAndPackageName_::__l2::FImportObjectNamePathProducer>
          (FObjectPathId *this,FImportObjectNamePathProducer *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FObjectImport *pFVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ForElementType<FMinimalName> FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  uint local_128 [2];
  undefined8 local_120;
  uint local_118 [2];
  undefined4 local_110;
  undefined4 uStack_10c;
  uint uStack_108;
  int iStack_104;
  int local_100;
  TMultiMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>_>
  *local_f8;
  uint uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined8 local_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  int iStack_cc;
  undefined1 local_c8 [16];
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ForElementType<FMinimalName> local_98;
  int iStack_90;
  undefined4 uStack_8c;
  uint *local_88;
  uint *local_80;
  TArrayView<FMinimalName_const_,int> local_78;
  ForElementType<FMinimalName> local_68;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_158;
  pFVar5 = param_1->CurrentImport;
  lVar11 = 0;
  uVar14 = 0;
  if ((pFVar5 == (FObjectImport *)0x0) || (pFVar5->_padding_ == 0)) {
    local_120 = 0;
    uVar7 = uVar14;
    local_d8 = uVar14;
  }
  else {
    lVar6 = pFVar5->_padding_;
    pFVar5 = FLinkerTables::Imp(param_1->LinkerTables,(FPackageIndex)pFVar5->_padding_);
    local_120._4_4_ = (uint)((ulonglong)lVar6 >> 0x20);
    local_120._0_4_ = (uint)lVar6;
    param_1->CurrentImport = pFVar5;
    uVar7 = local_120._4_4_;
    local_d8 = (uint)local_120;
    local_120 = lVar6;
  }
  lVar6 = local_120;
  if (local_120 != 0) {
    if ((pFVar5 == (FObjectImport *)0x0) || (pFVar5->_padding_ == 0)) {
      local_e0 = 0;
      lVar8 = lVar11;
    }
    else {
      lVar8 = pFVar5->_padding_;
      pFVar5 = FLinkerTables::Imp(param_1->LinkerTables,(FPackageIndex)pFVar5->_padding_);
      param_1->CurrentImport = pFVar5;
    }
    if (((lVar8 == 0) && ((uVar7 >> 0x1e & 1) == 0)) && (-1 < (int)uVar7)) {
      this->Index = local_d8;
      this->Number = uVar7 | 0x40000000;
    }
    else {
      iStack_d4 = (int)((ulonglong)lVar6 >> 0x20);
      local_68.SecondaryData = (ForElementType<FMinimalName>)0x0;
      local_44 = 3;
      local_128[0] = iStack_d4 * 0x17 + local_d8;
      local_68.InlineData[4] = (char)iStack_d4;
      local_68.InlineData[5] = (char)((uint)iStack_d4 >> 8);
      local_68.InlineData[6] = (char)((uint)iStack_d4 >> 0x10);
      local_68.InlineData[7] = (char)((uint)iStack_d4 >> 0x18);
      local_68.InlineData[0] = (char)local_d8;
      local_68.InlineData[1] = (char)(local_d8 >> 8);
      local_68.InlineData[2] = (char)(local_d8 >> 0x10);
      local_68.InlineData[3] = (char)(local_d8 >> 0x18);
      local_48 = 1;
      while (iVar15 = local_48, lVar8 != 0) {
        pFVar5 = param_1->CurrentImport;
        lVar6 = lVar11;
        local_120 = lVar8;
        if ((pFVar5 != (FObjectImport *)0x0) && (pFVar5->_padding_ != 0)) {
          lVar6 = pFVar5->_padding_;
          pFVar5 = FLinkerTables::Imp(param_1->LinkerTables,(FPackageIndex)pFVar5->_padding_);
          param_1->CurrentImport = pFVar5;
        }
        local_d0 = (undefined4)lVar8;
        iVar15 = (int)((ulonglong)lVar8 >> 0x20);
        iStack_cc = iVar15;
        if (local_48 == local_44) {
          local_48 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FMinimalName>_>
                               (0x408,&local_68,&local_44);
        }
        lVar8 = (longlong)local_48;
        FVar10 = (ForElementType<FMinimalName>)&local_68;
        if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
          FVar10 = local_68.SecondaryData;
        }
        local_48 = local_48 + 1;
        *(ulonglong *)((longlong)FVar10 + lVar8 * 8) = CONCAT44(iStack_cc,local_d0);
        uVar13 = iVar15 * 0x17 + (uint)local_120;
        uVar9 = local_128[0] - uVar13 ^ uVar13 >> 0xd;
        uVar7 = (-0x61c88647 - uVar9) - uVar13 ^ uVar9 << 8;
        uVar13 = (uVar13 - uVar7) - uVar9 ^ uVar7 >> 0xd;
        uVar9 = (uVar9 - uVar13) - uVar7 ^ uVar13 >> 0xc;
        uVar7 = (uVar7 - uVar9) - uVar13 ^ uVar9 << 0x10;
        uVar13 = (uVar13 - uVar7) - uVar9 ^ uVar7 >> 5;
        uVar9 = (uVar9 - uVar13) - uVar7 ^ uVar13 >> 3;
        uVar7 = (uVar7 - uVar9) - uVar13 ^ uVar9 << 10;
        local_128[0] = (uVar13 - uVar7) - uVar9 ^ uVar7 >> 0xf;
        lVar8 = lVar6;
      }
      local_98 = (ForElementType<FMinimalName>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
        local_98 = local_68.SecondaryData;
      }
      if ((local_48 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_78._12_4_ = uStack_8c;
      local_78.ArrayNum = iVar15;
      local_78.DataPtr = (FMinimalName *)local_98;
      iStack_90 = iVar15;
      FStoredObjectPath::FStoredObjectPath((FStoredObjectPath *)(local_c8 + 8),&local_78);
      EnterCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
      uVar7 = local_128[0];
      local_f8 = &GComplexPathHashToId;
      iStack_ec = -1;
      if (GComplexPathHashToId._72_4_ == 0) {
        local_e8 = -1;
      }
      else {
        lVar11 = 0x154b91298;
        if (GComplexPathHashToId._64_8_ != 0) {
          lVar11 = GComplexPathHashToId._64_8_;
        }
        iVar15 = *(int *)(lVar11 + (longlong)(int)(GComplexPathHashToId._72_4_ - 1U & local_128[0])
                                   * 4);
        do {
          iStack_ec = iVar15;
          local_e8 = iStack_ec;
          if (iStack_ec == -1) break;
          local_e8 = *(int *)(GComplexPathHashToId._0_8_ + 8 + (longlong)iStack_ec * 0x10);
          iVar15 = local_e8;
        } while (*(uint *)(GComplexPathHashToId._0_8_ + (longlong)iStack_ec * 0x10) != local_128[0])
        ;
      }
      local_110 = 0x54b91260;
      uStack_10c = 1;
      uStack_f0 = local_128[0];
      uStack_108 = local_128[0];
      iStack_104 = iStack_ec;
      lVar11 = local_130;
      iVar15 = local_e8;
joined_r0x0001420e8232:
      local_130 = lVar11;
      local_100 = iVar15;
      if (iStack_104 != -1) {
        local_130 = (longlong)GComplexPaths.ArrayNum;
        uVar13 = *(uint *)(GComplexPathHashToId._0_8_ + 4 + (longlong)iStack_104 * 0x10);
        uVar9 = uVar13 - 1;
        uVar4 = 0;
        if ((int)uVar9 < GComplexPaths.ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if (uVar4 == 0) {
          local_138 = (longlong)(int)uVar9;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          lVar11 = local_130;
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        local_130 = lVar11;
        bVar3 = Private::operator==((FStoredObjectPath *)
                                    (GComplexPaths.AllocatorInstance.Data +
                                    (longlong)(int)uVar9 * 0x20),(FStoredObjectPath *)(local_c8 + 8)
                                   );
        if (bVar3) {
          this->Number = 0;
          this->Index = uVar13;
          goto LAB_1420e83d9;
        }
        iStack_104 = iVar15;
        if (iVar15 == -1) goto LAB_1420e831e;
        do {
          lVar6 = (longlong)iVar15;
          iVar1 = *(int *)(GComplexPathHashToId._0_8_ + 8 + lVar6 * 0x10);
          iStack_104 = iVar15;
          lVar11 = local_130;
          iVar15 = iVar1;
          if (*(uint *)(GComplexPathHashToId._0_8_ + lVar6 * 0x10) == uVar7) break;
          iStack_104 = iVar1;
        } while (iVar1 != -1);
        goto joined_r0x0001420e8232;
      }
LAB_1420e831e:
      if (GComplexPaths.ArrayNum == GComplexPaths.ArrayMax) {
        GComplexPaths.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&GComplexPaths.AllocatorInstance,&GComplexPaths.ArrayMax);
      }
      local_118[0] = GComplexPaths.ArrayNum + 1;
      pFVar12 = GComplexPaths.AllocatorInstance.Data + (longlong)GComplexPaths.ArrayNum * 0x20;
      GComplexPaths.ArrayNum = local_118[0];
      *(undefined4 *)pFVar12 = local_c8._8_4_;
      if ((int)local_c8._8_4_ < 4) {
        *(void **)(pFVar12 + 8) = local_b8;
        *(undefined8 *)(pFVar12 + 0x10) = uStack_b0;
        *(undefined8 *)(pFVar12 + 0x18) = local_a8;
      }
      else {
        *(void **)(pFVar12 + 8) = local_b8;
      }
      local_88 = local_128;
      local_80 = local_118;
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
                ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>,FDefaultSetAllocator>
                  *)&GComplexPathHashToId,
                 (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)local_c8,
                 (bool *)&local_88);
      this->Index = local_118[0];
      this->Number = 0;
      GCoreComplexObjectPathDebug = (FStoredObjectPathDebug *)GComplexPaths.AllocatorInstance.Data;
      local_c8._8_4_ = uVar14;
LAB_1420e83d9:
      LeaveCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
      if (3 < (int)local_c8._8_4_) {
        operator_delete__(local_b8);
      }
      if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
        FMemory::Free((void *)local_68.SecondaryData);
      }
    }
  }
  return;
}

// StoreObjectPathId<`UE::CoreUObject::Private::FObjectPathId::FObjectPathId'::__l2::FLoadedObjectNamePathProducer> @ 1420e8430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __thiscall
UE::CoreUObject::Private::FObjectPathId::
StoreObjectPathId<_UE::CoreUObject::Private::FObjectPathId::FObjectPathId_::__l2::FLoadedObjectNamePathProducer>
          (FObjectPathId *this,FLoadedObjectNamePathProducer *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  UObject *pUVar10;
  ForElementType<FMinimalName> FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  uint local_128 [2];
  undefined8 local_120;
  uint local_118 [2];
  undefined4 local_110;
  undefined4 uStack_10c;
  uint uStack_108;
  int iStack_104;
  int local_100;
  TMultiMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>_>
  *local_f8;
  uint uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined8 local_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  int iStack_cc;
  undefined1 local_c8 [16];
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ForElementType<FMinimalName> local_98;
  int iStack_90;
  undefined4 uStack_8c;
  uint *local_88;
  uint *local_80;
  TArrayView<FMinimalName_const_,int> local_78;
  ForElementType<FMinimalName> local_68;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar12 = 0;
  uVar15 = 0;
  pUVar10 = (UObject *)0x0;
  if (param_1->CurrentObject == (UObject *)0x0) {
LAB_1420e8490:
    local_120 = 0;
    uVar7 = uVar15;
    uVar9 = uVar15;
  }
  else {
    pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
    pUVar10 = param_1->CurrentObject;
    if (*(UClass **)&pUVar10->field_0x10 == pUVar5) goto LAB_1420e8490;
    lVar6 = *(longlong *)&pUVar10->field_0x18;
    pUVar10 = *(UObject **)&pUVar10->field_0x20;
    local_120._4_4_ = (uint)((ulonglong)lVar6 >> 0x20);
    local_120._0_4_ = (uint)lVar6;
    param_1->CurrentObject = pUVar10;
    uVar7 = local_120._4_4_;
    uVar9 = (uint)local_120;
    local_120 = lVar6;
  }
  lVar6 = local_120;
  if (local_120 == 0) {
    return;
  }
  if (pUVar10 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
    pUVar10 = param_1->CurrentObject;
    if (*(UClass **)&pUVar10->field_0x10 != pUVar5) {
      lVar8 = *(longlong *)&pUVar10->field_0x18;
      param_1->CurrentObject = *(UObject **)&pUVar10->field_0x20;
      goto LAB_1420e84d7;
    }
  }
  local_e0 = 0;
  lVar8 = lVar12;
LAB_1420e84d7:
  if (((lVar8 == 0) && ((uVar7 >> 0x1e & 1) == 0)) && (-1 < (int)uVar7)) {
    this->Index = uVar9;
    this->Number = uVar7 | 0x40000000;
  }
  else {
    iStack_d4 = (int)((ulonglong)lVar6 >> 0x20);
    local_68.SecondaryData = (ForElementType<FMinimalName>)0x0;
    local_44 = 3;
    local_128[0] = iStack_d4 * 0x17 + uVar9;
    local_48 = 1;
    local_68.InlineData[4] = (char)iStack_d4;
    local_68.InlineData[5] = (char)((uint)iStack_d4 >> 8);
    local_68.InlineData[6] = (char)((uint)iStack_d4 >> 0x10);
    local_68.InlineData[7] = (char)((uint)iStack_d4 >> 0x18);
    local_68.InlineData[0] = (char)uVar9;
    local_68.InlineData[1] = (char)(uVar9 >> 8);
    local_68.InlineData[2] = (char)(uVar9 >> 0x10);
    local_68.InlineData[3] = (char)(uVar9 >> 0x18);
    local_d8 = uVar9;
    while (iVar16 = local_48, lVar8 != 0) {
      lVar6 = lVar12;
      local_120 = lVar8;
      if (param_1->CurrentObject != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UPackage_NoRegister();
        pUVar10 = param_1->CurrentObject;
        if (*(UClass **)&pUVar10->field_0x10 != pUVar5) {
          lVar6 = *(longlong *)&pUVar10->field_0x18;
          param_1->CurrentObject = *(UObject **)&pUVar10->field_0x20;
        }
      }
      local_d0 = (undefined4)lVar8;
      iVar16 = (int)((ulonglong)lVar8 >> 0x20);
      iStack_cc = iVar16;
      if (local_48 == local_44) {
        local_48 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FMinimalName>_>
                             (0x408,&local_68,&local_44);
      }
      FVar11 = (ForElementType<FMinimalName>)&local_68;
      if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
        FVar11 = local_68.SecondaryData;
      }
      lVar8 = (longlong)local_48;
      local_48 = local_48 + 1;
      *(ulonglong *)((longlong)FVar11 + lVar8 * 8) = CONCAT44(iStack_cc,local_d0);
      uVar14 = iVar16 * 0x17 + (uint)local_120;
      uVar9 = local_128[0] - uVar14 ^ uVar14 >> 0xd;
      uVar7 = (-0x61c88647 - uVar9) - uVar14 ^ uVar9 << 8;
      uVar14 = (uVar14 - uVar7) - uVar9 ^ uVar7 >> 0xd;
      uVar9 = (uVar9 - uVar14) - uVar7 ^ uVar14 >> 0xc;
      uVar7 = (uVar7 - uVar9) - uVar14 ^ uVar9 << 0x10;
      uVar14 = (uVar14 - uVar7) - uVar9 ^ uVar7 >> 5;
      uVar9 = (uVar9 - uVar14) - uVar7 ^ uVar14 >> 3;
      uVar7 = (uVar7 - uVar9) - uVar14 ^ uVar9 << 10;
      local_128[0] = (uVar14 - uVar7) - uVar9 ^ uVar7 >> 0xf;
      lVar8 = lVar6;
    }
    local_98 = (ForElementType<FMinimalName>)&local_68;
    if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
      local_98 = local_68.SecondaryData;
    }
    if ((local_48 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_78._12_4_ = uStack_8c;
    local_78.ArrayNum = iVar16;
    local_78.DataPtr = (FMinimalName *)local_98;
    iStack_90 = iVar16;
    FStoredObjectPath::FStoredObjectPath((FStoredObjectPath *)(local_c8 + 8),&local_78);
    EnterCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
    uVar7 = local_128[0];
    local_f8 = &GComplexPathHashToId;
    iStack_ec = -1;
    if (GComplexPathHashToId._72_4_ == 0) {
      local_e8 = -1;
    }
    else {
      lVar12 = 0x154b91298;
      if (GComplexPathHashToId._64_8_ != 0) {
        lVar12 = GComplexPathHashToId._64_8_;
      }
      iVar16 = *(int *)(lVar12 + (longlong)(int)(GComplexPathHashToId._72_4_ - 1U & local_128[0]) *
                                 4);
      do {
        iStack_ec = iVar16;
        local_e8 = iStack_ec;
        if (iStack_ec == -1) break;
        local_e8 = *(int *)(GComplexPathHashToId._0_8_ + 8 + (longlong)iStack_ec * 0x10);
        iVar16 = local_e8;
      } while (*(uint *)(GComplexPathHashToId._0_8_ + (longlong)iStack_ec * 0x10) != local_128[0]);
    }
    local_110 = 0x54b91260;
    uStack_10c = 1;
    uStack_f0 = local_128[0];
    uStack_108 = local_128[0];
    iStack_104 = iStack_ec;
    lVar12 = local_130;
    iVar16 = local_e8;
joined_r0x0001420e8762:
    local_130 = lVar12;
    local_100 = iVar16;
    if (iStack_104 != -1) {
      local_130 = (longlong)GComplexPaths.ArrayNum;
      uVar14 = *(uint *)(GComplexPathHashToId._0_8_ + 4 + (longlong)iStack_104 * 0x10);
      uVar9 = uVar14 - 1;
      uVar4 = 0;
      if ((int)uVar9 < GComplexPaths.ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_138 = (longlong)(int)uVar9;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        lVar12 = local_130;
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_130 = lVar12;
      bVar3 = Private::operator==((FStoredObjectPath *)
                                  (GComplexPaths.AllocatorInstance.Data +
                                  (longlong)(int)uVar9 * 0x20),(FStoredObjectPath *)(local_c8 + 8));
      if (bVar3) {
        this->Number = 0;
        this->Index = uVar14;
        goto LAB_1420e8909;
      }
      iStack_104 = iVar16;
      if (iVar16 == -1) goto LAB_1420e884e;
      do {
        lVar6 = (longlong)iVar16;
        iVar1 = *(int *)(GComplexPathHashToId._0_8_ + 8 + lVar6 * 0x10);
        iStack_104 = iVar16;
        lVar12 = local_130;
        iVar16 = iVar1;
        if (*(uint *)(GComplexPathHashToId._0_8_ + lVar6 * 0x10) == uVar7) break;
        iStack_104 = iVar1;
      } while (iVar1 != -1);
      goto joined_r0x0001420e8762;
    }
LAB_1420e884e:
    if (GComplexPaths.ArrayNum == GComplexPaths.ArrayMax) {
      GComplexPaths.ArrayNum =
           Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x820,&GComplexPaths.AllocatorInstance,&GComplexPaths.ArrayMax);
    }
    local_118[0] = GComplexPaths.ArrayNum + 1;
    pFVar13 = GComplexPaths.AllocatorInstance.Data + (longlong)GComplexPaths.ArrayNum * 0x20;
    GComplexPaths.ArrayNum = local_118[0];
    *(undefined4 *)pFVar13 = local_c8._8_4_;
    if ((int)local_c8._8_4_ < 4) {
      *(void **)(pFVar13 + 8) = local_b8;
      *(undefined8 *)(pFVar13 + 0x10) = uStack_b0;
      *(undefined8 *)(pFVar13 + 0x18) = local_a8;
    }
    else {
      *(void **)(pFVar13 + 8) = local_b8;
    }
    local_88 = local_128;
    local_80 = local_118;
    TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,unsigned_int_const_&>_>
              ((TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>,FDefaultSetAllocator>
                *)&GComplexPathHashToId,
               (TPairInitializer<unsigned_int_const_&,unsigned_int_const_&> *)local_c8,
               (bool *)&local_88);
    this->Index = local_118[0];
    this->Number = 0;
    GCoreComplexObjectPathDebug = (FStoredObjectPathDebug *)GComplexPaths.AllocatorInstance.Data;
    local_c8._8_4_ = uVar15;
LAB_1420e8909:
    LeaveCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
    if (3 < (int)local_c8._8_4_) {
      operator_delete__(local_b8);
    }
    if (local_68.SecondaryData != (ForElementType<FMinimalName>)0x0) {
      FMemory::Free((void *)local_68.SecondaryData);
    }
  }
  return;
}

// WithScriptMap<`FScriptMapHelper::EmptyValues'::__l9::<lambda_1>_> @ 1420e89b0

void __thiscall
FScriptMapHelper::WithScriptMap<_FScriptMapHelper::EmptyValues_::__l9::<lambda_1>_>
          (FScriptMapHelper *this,<lambda_1> *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  TScriptArray<TMemoryImageAllocator<0>_> *this_00;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  if ((this->MapFlags & UsesMemoryImageAllocator) != None) {
    iVar7 = 0;
    uVar2 = param_1->Slack;
    uVar5 = (param_1->__this->MapLayout).SetLayout.SparseArrayLayout.Alignment;
    iVar8 = (param_1->__this->MapLayout).SetLayout.SparseArrayLayout.Size;
    this_00 = (TScriptArray<TMemoryImageAllocator<0>_> *)(this->field2_0x10).FreezableMap;
    this_00->ArrayNum = 0;
    if (uVar2 != this_00->ArrayMax) {
      TScriptArray<TMemoryImageAllocator<0>_>::ResizeTo(this_00,uVar2,iVar8,uVar5);
    }
    *(undefined4 *)&this_00[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this_00[2]._padding_ + 4) = 0;
    uVar5 = uVar2 + 0x1f & 0xffffffe0;
    this_00[1].ArrayNum = 0;
    if (this_00[1].ArrayMax != uVar5) {
      this_00[1].ArrayMax = uVar5;
      TScriptBitArray<TMemoryImageAllocator<0>,void>::Realloc
                ((TScriptBitArray<TMemoryImageAllocator<0>,void> *)(this_00 + 1),0);
    }
    iVar8 = 1;
    if (3 < uVar2) {
      uVar1 = (ulonglong)((uVar2 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((uVar2 != 0) && ((iVar3 = (int)this_00[3]._padding_, iVar3 == 0 || (iVar3 != iVar8)))) {
      *(int *)&this_00[3]._padding_ = iVar8;
      FMemoryImageAllocatorBase::ResizeAllocation
                ((FMemoryImageAllocatorBase *)&this_00[2].ArrayNum,0,iVar8,4,0);
    }
    puVar6 = *(undefined4 **)&this_00[2].ArrayNum;
    if (((ulonglong)puVar6 & 1) != 0) {
      puVar6 = (undefined4 *)((longlong)&this_00[2].ArrayNum + ((longlong)puVar6 >> 0x18));
    }
    if (0 < (int)this_00[3]._padding_) {
      do {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)this_00[3]._padding_);
    }
    return;
  }
  TScriptSparseSet<FDefaultSetAllocator>::Empty
            ((TScriptSparseSet<FDefaultSetAllocator> *)(this->field2_0x10).HeapMap,param_1->Slack,
             &(param_1->__this->MapLayout).SetLayout);
  return;
}

// ~TScopeGuard<`FOverriddenPropertySet::NotifyPropertyChange'::__l2::<lambda_2>_> @ 1420eb1a0

void __thiscall
ScopeExitSupport::TScopeGuard<`FOverriddenPropertySet::NotifyPropertyChange'::__l2::<lambda_2>_>::
~TScopeGuard<_FOverriddenPropertySet::NotifyPropertyChange_::__l2::<lambda_2>_>(void *this)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  FOverriddenPropertyNodeID local_28;
  
  if (((**(longlong **)this != 0) && (**(char **)((longlong)this + 8) == '\x01')) &&
     (**(longlong **)((longlong)this + 0x10) != 0)) {
    iVar2 = *(int *)(**(longlong **)((longlong)this + 0x10) + 0x30);
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if ((iVar2 == 0) &&
            (((**(char **)((longlong)this + 0x18) != '\0' ||
              (cVar1 = *(char *)(**(longlong **)((longlong)this + 0x10) + 0x20), cVar1 == '\0')) ||
             (cVar1 == '\x01')))) {
      if ((FProperty *)**(undefined8 **)((longlong)this + 0x20) == (FProperty *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      FOverriddenPropertyNodeID::FOverriddenPropertyNodeID
                (&local_28,(FProperty *)**(undefined8 **)((longlong)this + 0x20));
      FOverriddenPropertyNode::RemoveSubPropertyNode
                ((FOverriddenPropertyNode *)**(undefined8 **)this,&local_28,
                 *(bool **)((longlong)this + 0x28));
      if (*(char *)(**(longlong **)this + 0x20) == '\x01') {
        iVar2 = *(int *)(**(longlong **)this + 0x30);
        if (iVar2 < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else if (iVar2 == 0) {
          puVar3 = *(undefined1 **)((longlong)this + 0x28);
          if ((*(char *)(**(longlong **)this + 0x20) != '\0') &&
             (*(undefined1 *)(**(longlong **)this + 0x20) = 0, puVar3 != (undefined1 *)0x0)) {
            *puVar3 = 1;
          }
        }
      }
      if (local_28.Path.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Path.Path.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// ~TScopeGuard<`FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_3>_> @ 1420eb2e0

void __thiscall
ScopeExitSupport::TScopeGuard<`FOverriddenPropertySet::NotifyPropertyChange'::__l62::<lambda_3>_>::
~TScopeGuard<_FOverriddenPropertySet::NotifyPropertyChange_::__l62::<lambda_3>_>(void *this)

{
  if (**(char **)this != '\x01') {
    return;
  }
  if (((FProperty *)**(undefined8 **)((longlong)this + 0x10) != (FProperty *)0x0) &&
     ((UObject *)**(undefined8 **)((longlong)this + 8) != (UObject *)0x0)) {
    `FOverriddenPropertySet::NotifyPropertyChange'::__l2::<unnamed-type-SavedPreEditContainers>::
    Free(&SavedPreEditContainers,(UObject *)**(undefined8 **)((longlong)this + 8),
         (FProperty *)**(undefined8 **)((longlong)this + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ~TScopeGuard<`FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_7>_> @ 1420eb330

void __thiscall
ScopeExitSupport::TScopeGuard<`FOverriddenPropertySet::NotifyPropertyChange'::__l218::<lambda_7>_>::
~TScopeGuard<_FOverriddenPropertySet::NotifyPropertyChange_::__l218::<lambda_7>_>(void *this)

{
  if (**(char **)this != '\x01') {
    return;
  }
  if (((FProperty *)**(undefined8 **)((longlong)this + 0x10) != (FProperty *)0x0) &&
     ((UObject *)**(undefined8 **)((longlong)this + 8) != (UObject *)0x0)) {
    `FOverriddenPropertySet::NotifyPropertyChange'::__l2::<unnamed-type-SavedPreEditContainers>::
    Free(&SavedPreEditContainers,(UObject *)**(undefined8 **)((longlong)this + 8),
         (FProperty *)**(undefined8 **)((longlong)this + 0x10));
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// operator<< @ 1420ec9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FCellExport *param_2)

{
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this);
  operator<<(*(FStructuredArchiveSlot *)FVar1,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// operator<< @ 1420eca60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FCellImport *param_2)

{
  FPackageIndex *pFVar1;
  int *piVar2;
  FSlotBase FVar3;
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar4;
  FArchive *pFVar5;
  undefined1 auStack_1d8 [32];
  FSlotBase local_1b8;
  FSlotBase local_1b0 [2];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar4 = FStructuredArchiveFromArchive::GetSlot(this);
  local_1b8.StructuredArchive = *(FStructuredArchive **)FVar4;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_1b8);
  FVar3.StructuredArchive = local_1b8.StructuredArchive;
  pFVar1 = &param_2->PackageIndex;
  pFVar5 = (local_1b8.StructuredArchive)->Formatter->Inner;
  piVar2 = (int *)**(undefined8 **)&pFVar5->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar5->field_0x8)[1] < piVar2 + 1) {
    if ((pFVar5->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar5,(uint *)pFVar1);
    }
  }
  else {
    pFVar1->Index = *piVar2;
    **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 4;
  }
  local_1b0[0].StructuredArchive = FVar3.StructuredArchive;
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_1b0);
  operator<<(pFVar5,(FUtf8String *)param_2);
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_1b8);
  if ((pFVar5->field_0x28 & 1) != 0) {
    param_2->Cell = (VCell *)0x0;
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// operator<< @ 1420ecb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FObjectExport *param_2)

{
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this);
  operator<<(*(FStructuredArchiveSlot *)FVar1,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// operator<< @ 1420ecbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FObjectImport *param_2)

{
  int *piVar1;
  FStructuredArchive *pFVar2;
  int *piVar3;
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar4;
  FArchive *pFVar5;
  undefined1 auStack_1d8 [32];
  FSlotBase local_1b8 [2];
  FStructuredArchiveFromArchive local_1a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a8,param_1);
  FVar4 = FStructuredArchiveFromArchive::GetSlot(this);
  pFVar2 = *(FStructuredArchive **)FVar4;
  pFVar5 = pFVar2->Formatter->Inner;
  local_1b8[0].StructuredArchive = pFVar2;
  (**(code **)(*(longlong *)pFVar5 + 0x178))(pFVar5,&param_2->ClassPackage);
  pFVar5 = pFVar2->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar5 + 0x178))(pFVar5,&param_2->ClassName);
  piVar1 = &param_2->_padding_;
  pFVar5 = pFVar2->Formatter->Inner;
  piVar3 = (int *)**(undefined8 **)&pFVar5->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar5->field_0x8)[1] < piVar3 + 1) {
    if ((pFVar5->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar5 + 0x188))(pFVar5,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar5,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&pFVar5->field_0x8 = **(longlong **)&pFVar5->field_0x8 + 4;
  }
  pFVar5 = pFVar2->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar5 + 0x178))(pFVar5,param_2);
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_1b8);
  if (0x3ea < (int)((ulonglong)*(undefined8 *)&pFVar5->field_0x40 >> 0x20)) {
    operator<<(pFVar2->Formatter->Inner,&param_2->bImportOptional);
  }
  pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_1b8);
  if ((pFVar5->field_0x28 & 1) != 0) {
    param_2->SourceIndex = -1;
    param_2->SourceLinker = (FLinkerLoad *)0x0;
    param_2->XObject = (UObject *)0x0;
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a8);
  return param_1;
}

// operator<< @ 1420ecd50

void __cdecl operator<<(FStructuredArchiveSlot param_1,FCellExport *param_2)

{
  long64 *plVar1;
  int *piVar2;
  long64 *plVar3;
  int *piVar4;
  FSlotBase FVar5;
  FArchive *pFVar6;
  FSlotBase local_res8;
  FSlotBase local_res10;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar5.StructuredArchive = local_res8.StructuredArchive;
  pFVar6 = (local_res8.StructuredArchive)->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar6 + 0x178))(pFVar6,&param_2->CppClassInfo);
  local_res10.StructuredArchive = FVar5.StructuredArchive;
  pFVar6 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  operator<<(pFVar6,(FUtf8String *)param_2);
  plVar1 = &param_2->SerialOffset;
  pFVar6 = (FVar5.StructuredArchive)->Formatter->Inner;
  plVar3 = (long64 *)**(longlong **)&pFVar6->field_0x8;
  if ((long64 *)(*(longlong **)&pFVar6->field_0x8)[1] < plVar3 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,plVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)plVar1);
    }
  }
  else {
    *plVar1 = *plVar3;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  plVar1 = &param_2->SerialLayoutSize;
  pFVar6 = (FVar5.StructuredArchive)->Formatter->Inner;
  plVar3 = (long64 *)**(longlong **)&pFVar6->field_0x8;
  if ((long64 *)(*(longlong **)&pFVar6->field_0x8)[1] < plVar3 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,plVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)plVar1);
    }
  }
  else {
    *plVar1 = *plVar3;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  plVar1 = &param_2->SerialSize;
  pFVar6 = (FVar5.StructuredArchive)->Formatter->Inner;
  plVar3 = (long64 *)**(longlong **)&pFVar6->field_0x8;
  if ((long64 *)(*(longlong **)&pFVar6->field_0x8)[1] < plVar3 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,plVar1,8);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(ulong64 *)plVar1);
    }
  }
  else {
    *plVar1 = *plVar3;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 8;
  }
  piVar2 = &param_2->FirstExportDependency;
  pFVar6 = (FVar5.StructuredArchive)->Formatter->Inner;
  piVar4 = (int *)**(undefined8 **)&pFVar6->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar4 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  piVar2 = &param_2->SerializationBeforeSerializationDependencies;
  pFVar6 = (FVar5.StructuredArchive)->Formatter->Inner;
  piVar4 = (int *)**(undefined8 **)&pFVar6->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar6->field_0x8)[1] < piVar4 + 1) {
    if ((pFVar6->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,piVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)piVar2);
    }
  }
  else {
    *piVar2 = *piVar4;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
  }
  piVar2 = &param_2->CreateBeforeSerializationDependencies;
  pFVar6 = (FVar5.StructuredArchive)->Formatter->Inner;
  piVar4 = (int *)**(undefined8 **)&pFVar6->field_0x8;
  if (piVar4 + 1 <= (int *)(*(undefined8 **)&pFVar6->field_0x8)[1]) {
    *piVar2 = *piVar4;
    **(longlong **)&pFVar6->field_0x8 = **(longlong **)&pFVar6->field_0x8 + 4;
    return;
  }
  if ((pFVar6->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)pFVar6 + 0x188))(pFVar6,piVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(pFVar6,(uint *)piVar2);
  return;
}

// operator<< @ 1420ecf90

void __cdecl operator<<(FStructuredArchiveSlot param_1,FCellImport *param_2)

{
  FPackageIndex *pFVar1;
  int *piVar2;
  FSlotBase FVar3;
  FArchive *pFVar4;
  FSlotBase local_res8;
  FSlotBase local_res10;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar3.StructuredArchive = local_res8.StructuredArchive;
  pFVar1 = &param_2->PackageIndex;
  pFVar4 = (local_res8.StructuredArchive)->Formatter->Inner;
  piVar2 = (int *)**(undefined8 **)&pFVar4->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar2 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)pFVar1);
    }
  }
  else {
    pFVar1->Index = *piVar2;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  local_res10.StructuredArchive = FVar3.StructuredArchive;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  operator<<(pFVar4,(FUtf8String *)param_2);
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((pFVar4->field_0x28 & 1) != 0) {
    param_2->Cell = (VCell *)0x0;
  }
  return;
}

// operator<< @ 1420ed040

void __cdecl operator<<(FStructuredArchiveSlot param_1,FObjectExport *param_2)

{
  FPackageIndex *pFVar1;
  byte bVar2;
  undefined1 uVar3;
  FArchive *pFVar4;
  int *piVar5;
  int *piVar6;
  EObjectFlags *pEVar7;
  uint *puVar8;
  long64 *plVar9;
  uint *puVar10;
  long64 *plVar11;
  FSlotBase FVar12;
  FArchive *pFVar13;
  FSlotBase local_res8;
  uint local_res10 [2];
  EObjectFlags local_res18 [2];
  uint local_res20 [2];
  FGuid local_38;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  FVar12.StructuredArchive = local_res8.StructuredArchive;
  pFVar4 = (local_res8.StructuredArchive)->Formatter->Inner;
  piVar5 = (int *)**(undefined8 **)&pFVar4->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar5 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,&param_2->ClassIndex,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)&param_2->ClassIndex);
    }
  }
  else {
    (param_2->ClassIndex).Index = *piVar5;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  pFVar1 = &param_2->SuperIndex;
  pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
  piVar5 = (int *)**(undefined8 **)&pFVar4->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar5 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pFVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)pFVar1);
    }
  }
  else {
    pFVar1->Index = *piVar5;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  if (0x1fb < *(int *)&pFVar13->field_0x40) {
    pFVar1 = &param_2->TemplateIndex;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    piVar5 = (int *)**(undefined8 **)&pFVar4->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar5 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,pFVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)pFVar1);
      }
    }
    else {
      pFVar1->Index = *piVar5;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
    }
  }
  piVar5 = &param_2->_padding_;
  pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
  piVar6 = (int *)**(undefined8 **)&pFVar4->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar6 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar5,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar5);
    }
  }
  else {
    *piVar5 = *piVar6;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar4 + 0x178))(pFVar4,param_2);
  local_res18[0] =
       param_2->ObjectFlags &
       (RF_MigratingAsset|RF_NonPIEDuplicateTransient|RF_DuplicateTransient|
        RF_InheritableComponentTemplate|RF_TextExportTransient|RF_DefaultSubObject|
        RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|RF_Standalone|RF_Public);
  pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
  pEVar7 = (EObjectFlags *)**(undefined8 **)&pFVar4->field_0x8;
  if ((EObjectFlags *)(*(undefined8 **)&pFVar4->field_0x8)[1] < pEVar7 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,local_res18);
    }
  }
  else {
    local_res18[0] = *pEVar7;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  if ((pFVar13->field_0x28 & 1) != 0) {
    param_2->ObjectFlags =
         local_res18[0] &
         (RF_MigratingAsset|RF_NonPIEDuplicateTransient|RF_DuplicateTransient|
          RF_InheritableComponentTemplate|RF_TextExportTransient|RF_DefaultSubObject|
          RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|RF_Standalone|RF_Public);
  }
  if (*(int *)&pFVar13->field_0x40 < 0x1ff) {
    local_res10[0] = (uint)param_2->SerialSize;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    puVar8 = (uint *)**(undefined8 **)&pFVar4->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar8 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,local_res10);
      }
    }
    else {
      local_res10[0] = *puVar8;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
    }
    param_2->SerialSize = (longlong)(int)local_res10[0];
    local_res20[0] = (uint)param_2->SerialOffset;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    puVar8 = (uint *)**(undefined8 **)&pFVar4->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar8 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,local_res20,4);
        param_2->SerialOffset = (longlong)(int)local_res20[0];
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,local_res20);
        param_2->SerialOffset = (longlong)(int)local_res20[0];
      }
    }
    else {
      local_res20[0] = *puVar8;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
      param_2->SerialOffset = (longlong)(int)local_res20[0];
    }
  }
  else {
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    plVar9 = (long64 *)**(longlong **)&pFVar4->field_0x8;
    if ((long64 *)(*(longlong **)&pFVar4->field_0x8)[1] < plVar9 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,&param_2->SerialSize,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,(ulong64 *)&param_2->SerialSize);
      }
    }
    else {
      param_2->SerialSize = *plVar9;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 8;
    }
    plVar9 = &param_2->SerialOffset;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    plVar11 = (long64 *)**(longlong **)&pFVar4->field_0x8;
    if ((long64 *)(*(longlong **)&pFVar4->field_0x8)[1] < plVar11 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,plVar9,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,(ulong64 *)plVar9);
      }
    }
    else {
      *plVar9 = *plVar11;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 8;
    }
  }
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,param_2->field_0x4c) & 0xffffff01;
  operator<<((FVar12.StructuredArchive)->Formatter->Inner,(bool *)local_res10);
  bVar2 = param_2->field_0x4c;
  param_2->bForcedExport = local_res10[0];
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar2 >> 1) & 0xffffff01;
  operator<<((FVar12.StructuredArchive)->Formatter->Inner,(bool *)local_res10);
  param_2->bNotForClient = local_res10[0];
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,param_2->bNotForServer);
  operator<<((FVar12.StructuredArchive)->Formatter->Inner,(bool *)local_res10);
  param_2->bNotForServer = local_res10[0];
  if ((int)((ulonglong)*(undefined8 *)&pFVar13->field_0x40 >> 0x20) < 0x3ed) {
    local_38.A = 0;
    local_38.B = 0;
    local_38.C = 0;
    local_38.D = 0;
    operator<<((FStructuredArchiveSlot)FVar12.StructuredArchive,&local_38);
  }
  if (0x3ed < (int)((ulonglong)*(undefined8 *)&pFVar13->field_0x40 >> 0x20)) {
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,(byte)param_2->field_0x4c >> 5) & 0xffffff01;
    operator<<((FVar12.StructuredArchive)->Formatter->Inner,(bool *)local_res10);
    param_2->bIsInheritedInstance = local_res10[0];
  }
  puVar8 = &param_2->PackageFlags;
  pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
  puVar10 = (uint *)**(undefined8 **)&pFVar4->field_0x8;
  if ((uint *)(*(undefined8 **)&pFVar4->field_0x8)[1] < puVar10 + 1) {
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,puVar8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar4,puVar8);
    }
  }
  else {
    *puVar8 = *puVar10;
    **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
  }
  if (0x16c < *(int *)&pFVar13->field_0x40) {
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,(byte)param_2->field_0x4c >> 3) & 0xffffff01;
    operator<<((FVar12.StructuredArchive)->Formatter->Inner,(bool *)local_res10);
    param_2->bNotAlwaysLoadedForEditorGame = local_res10[0];
  }
  if (0x1e4 < *(int *)&pFVar13->field_0x40) {
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,(byte)param_2->field_0x4c >> 4) & 0xffffff01;
    operator<<((FVar12.StructuredArchive)->Formatter->Inner,(bool *)local_res10);
    param_2->bIsAsset = local_res10[0];
  }
  if (0x3ea < (int)((ulonglong)*(undefined8 *)&pFVar13->field_0x40 >> 0x20)) {
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,(byte)param_2->field_0x4c >> 6) & 0xffffff01;
    operator<<((FVar12.StructuredArchive)->Formatter->Inner,(bool *)local_res10);
    param_2->bGeneratePublicHash = local_res10[0];
  }
  if (0x1fa < *(int *)&pFVar13->field_0x40) {
    piVar5 = &param_2->FirstExportDependency;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    piVar6 = (int *)**(undefined8 **)&pFVar4->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar6 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar5);
      }
    }
    else {
      *piVar5 = *piVar6;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
    }
    piVar5 = &param_2->SerializationBeforeSerializationDependencies;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    piVar6 = (int *)**(undefined8 **)&pFVar4->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar6 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar5);
      }
    }
    else {
      *piVar5 = *piVar6;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
    }
    piVar5 = &param_2->CreateBeforeSerializationDependencies;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    piVar6 = (int *)**(undefined8 **)&pFVar4->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar6 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar5);
      }
    }
    else {
      *piVar5 = *piVar6;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
    }
    piVar5 = &param_2->SerializationBeforeCreateDependencies;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    piVar6 = (int *)**(undefined8 **)&pFVar4->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar6 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar5);
      }
    }
    else {
      *piVar5 = *piVar6;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
    }
    piVar5 = &param_2->CreateBeforeCreateDependencies;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    piVar6 = (int *)**(undefined8 **)&pFVar4->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar4->field_0x8)[1] < piVar6 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,piVar5,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,(uint *)piVar5);
      }
    }
    else {
      *piVar5 = *piVar6;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 4;
    }
  }
  if (((pFVar13->field_0x28 & 0x40) == 0) &&
     (0x3f1 < (int)((ulonglong)*(undefined8 *)&pFVar13->field_0x40 >> 0x20))) {
    plVar9 = &param_2->ScriptSerializationStartOffset;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    plVar11 = (long64 *)**(longlong **)&pFVar4->field_0x8;
    if ((long64 *)(*(longlong **)&pFVar4->field_0x8)[1] < plVar11 + 1) {
      if ((pFVar4->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,plVar9,8);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar4,(ulong64 *)plVar9);
      }
    }
    else {
      *plVar9 = *plVar11;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 8;
    }
    plVar9 = &param_2->ScriptSerializationEndOffset;
    pFVar4 = (FVar12.StructuredArchive)->Formatter->Inner;
    plVar11 = (long64 *)**(longlong **)&pFVar4->field_0x8;
    if (plVar11 + 1 <= (long64 *)(*(longlong **)&pFVar4->field_0x8)[1]) {
      *plVar9 = *plVar11;
      **(longlong **)&pFVar4->field_0x8 = **(longlong **)&pFVar4->field_0x8 + 8;
      return;
    }
    if ((pFVar4->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar4 + 0x188))(pFVar4,plVar9,8);
      return;
    }
    FArchive::SerializeByteOrderSwapped(pFVar4,(ulong64 *)plVar9);
    return;
  }
  if ((pFVar13->field_0x28 & 1) != 0) {
    param_2->ScriptSerializationStartOffset = 0;
    param_2->ScriptSerializationEndOffset = 0;
  }
  return;
}

// operator<< @ 1420ed7f0

void __cdecl operator<<(FStructuredArchiveSlot param_1,FObjectImport *param_2)

{
  int *piVar1;
  int *piVar2;
  FArchive *pFVar3;
  FSlotBase local_res8;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x178))
            (*(longlong **)(*(longlong *)param_1 + 8),&param_2->ClassPackage);
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x178))
            (*(longlong **)(*(longlong *)param_1 + 8),&param_2->ClassName);
  piVar1 = &param_2->_padding_;
  pFVar3 = *(FArchive **)(*(longlong *)param_1 + 8);
  piVar2 = (int *)**(undefined8 **)&pFVar3->field_0x8;
  if ((int *)(*(undefined8 **)&pFVar3->field_0x8)[1] < piVar2 + 1) {
    if ((pFVar3->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(pFVar3,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
  }
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x178))
            (*(longlong **)(*(longlong *)param_1 + 8),param_2);
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if (0x3ea < (int)((ulonglong)*(undefined8 *)&pFVar3->field_0x40 >> 0x20)) {
    operator<<(*(FArchive **)(*(longlong *)param_1 + 8),&param_2->bImportOptional);
  }
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((pFVar3->field_0x28 & 1) != 0) {
    param_2->SourceIndex = -1;
    param_2->SourceLinker = (FLinkerLoad *)0x0;
    param_2->XObject = (UObject *)0x0;
  }
  return;
}

// operator<< @ 1420ed8f0

/* WARNING: Removing unreachable block (ram,0x0001420edb7c) */
/* WARNING: Removing unreachable block (ram,0x0001420edbf4) */

void __cdecl operator<<(FStructuredArchiveSlot param_1,FObjectTextExport *param_2)

{
  undefined1 uVar1;
  UObjectBaseUtility *this;
  UObject *pUVar2;
  FArchive *this_00;
  EObjectFlags *pEVar3;
  FObjectExport *pFVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FArchive *pFVar9;
  UClass *pUVar10;
  FString *pFVar11;
  UClass *pUVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  FSlotBase local_res8;
  uint local_res10 [2];
  bool local_res18 [8];
  bool local_res20 [8];
  bool local_e8;
  bool local_e7 [3];
  EObjectFlags local_e4;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FArchiveFieldName local_b0;
  undefined7 uStack_af;
  FString local_98;
  FString local_88;
  FString local_78;
  FGuid local_68;
  FString local_58;
  FString local_48;
  
  iVar15 = 0;
  local_res10[0] = 0;
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar9 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.Data.ArrayNum = 0;
  local_d0.Data.ArrayMax = 0;
  local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.Data.ArrayNum = 0;
  local_e0.Data.ArrayMax = 0;
  bVar8 = FDebug::CheckVerifyFailedImpl2
                    ("BaseArchive.IsTextFormat()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectResource.cpp"
                     ,0xeb,L"");
  if (bVar8) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((pFVar9->field_0x28 & 4) == 0) goto LAB_1420edb4b;
  if ((param_2->Export->Object == (UObject *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("E.Export.Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectResource.cpp"
                         ,0xef,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pUVar12 = *(UClass **)&param_2->Export->Object->field_0x10;
  pUVar10 = Z_Construct_UClass_UClass_NoRegister();
  if (pUVar12 != pUVar10) {
    pFVar11 = UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)pUVar12,&local_58,(UObject *)0x0,None);
    if (&local_c0 != pFVar11) {
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      local_c0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_c0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  this = *(UObjectBaseUtility **)&param_2->Export->Object->field_0x20;
  if (this != (UObjectBaseUtility *)param_2->Outer) {
    if (this == (UObjectBaseUtility *)0x0) {
      bVar7 = false;
      bVar8 = true;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      pFVar11 = &local_98;
LAB_1420eda60:
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      local_d0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
      (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
      local_d0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
      (pFVar11->Data).ArrayNum = 0;
      (pFVar11->Data).ArrayMax = 0;
      if ((bVar8) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
      if (!bVar7) goto LAB_1420edabb;
    }
    else {
      pFVar11 = UObjectBaseUtility::GetFullName(this,&local_48,(UObject *)0x0,None);
      bVar7 = true;
      bVar8 = false;
      if (&local_d0 != pFVar11) goto LAB_1420eda60;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
LAB_1420edabb:
  pUVar2 = param_2->Export->Object;
  if (pUVar2 != (UObject *)0x0) {
    pUVar12 = Z_Construct_UClass_UStruct_NoRegister();
    iVar14 = (int)pUVar12->_padding_;
    if (((iVar14 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar14 * 8) ==
         &pUVar12->_padding_)) &&
       (*(UObjectBaseUtility **)&pUVar2[1].field_0x18 != (UObjectBaseUtility *)0x0)) {
      pFVar11 = UObjectBaseUtility::GetFullName
                          (*(UObjectBaseUtility **)&pUVar2[1].field_0x18,(FString *)&local_b0,
                           (UObject *)0x0,None);
      if (&local_e0 != pFVar11) {
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        local_e0.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e0.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_e0.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if ((void *)CONCAT71(uStack_af,local_b0) != (void *)0x0) {
        FMemory::Free((void *)CONCAT71(uStack_af,local_b0));
      }
    }
  }
LAB_1420edb4b:
  operator<<((local_res8.StructuredArchive)->Formatter->Inner,&local_c0);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  bVar8 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_b0,
                     1 < (uint)local_d0.Data.ArrayNum);
  if (bVar8) {
    operator<<((local_res8.StructuredArchive)->Formatter->Inner,&local_d0);
  }
  else {
    FString::operator=(&local_d0,&local_88);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  bVar8 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_b0,
                     1 < (uint)local_e0.Data.ArrayNum);
  if (bVar8) {
    operator<<((local_res8.StructuredArchive)->Formatter->Inner,&local_e0);
  }
  else {
    FString::operator=(&local_e0,&local_78);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((pFVar9->field_0x28 & 1) != 0) {
    iVar14 = local_c0.Data.ArrayNum + -1;
    if (local_c0.Data.ArrayNum == 0) {
      iVar14 = 0;
    }
    FString::AssignRange(&param_2->ClassName,(wchar_t *)local_c0.Data.AllocatorInstance.Data,iVar14)
    ;
    iVar14 = iVar15;
    if (local_d0.Data.ArrayNum != 0) {
      iVar14 = local_d0.Data.ArrayNum + -1;
    }
    FString::AssignRange(&param_2->OuterName,(wchar_t *)local_d0.Data.AllocatorInstance.Data,iVar14)
    ;
    if (local_e0.Data.ArrayNum != 0) {
      iVar15 = local_e0.Data.ArrayNum + -1;
    }
    FString::AssignRange
              (&param_2->SuperStructName,(wchar_t *)local_e0.Data.AllocatorInstance.Data,iVar15);
  }
  local_e4 = param_2->Export->ObjectFlags &
             (RF_MigratingAsset|RF_NonPIEDuplicateTransient|RF_DuplicateTransient|
              RF_InheritableComponentTemplate|RF_TextExportTransient|RF_DefaultSubObject|
              RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|RF_Standalone|RF_Public);
  bVar8 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_b0,local_e4 != RF_NoFlags);
  if (bVar8) {
    this_00 = (local_res8.StructuredArchive)->Formatter->Inner;
    pEVar3 = (EObjectFlags *)**(undefined8 **)&this_00->field_0x8;
    if ((EObjectFlags *)(*(undefined8 **)&this_00->field_0x8)[1] < pEVar3 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,&local_e4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,&local_e4);
      }
    }
    else {
      local_e4 = *pEVar3;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    }
  }
  else {
    local_e4 = RF_NoFlags;
  }
  if ((pFVar9->field_0x28 & 1) != 0) {
    param_2->Export->ObjectFlags =
         local_e4 &
         (RF_MigratingAsset|RF_NonPIEDuplicateTransient|RF_DuplicateTransient|
          RF_InheritableComponentTemplate|RF_TextExportTransient|RF_DefaultSubObject|
          RF_ArchetypeObject|RF_ClassDefaultObject|RF_Transactional|RF_Standalone|RF_Public);
  }
  uVar1 = param_2->Export->field_0x4c;
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,uVar1) & 0xffffff01;
  bVar8 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_b0,
                     param_2->Export->bForcedExport);
  if (bVar8) {
    operator<<((local_res8.StructuredArchive)->Formatter->Inner,(bool *)local_res10);
    bVar13 = local_res10[0]._0_1_;
  }
  else {
    bVar13 = 0;
    local_res10[0] = local_res10[0] & 0xffffff00;
  }
  param_2->Export->bForcedExport = bVar13;
  local_res18[0] = param_2->Export->bNotForClient;
  bVar8 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_b0,local_res18[0]);
  if (bVar8) {
    operator<<((local_res8.StructuredArchive)->Formatter->Inner,local_res18);
  }
  else {
    local_res18[0] = false;
  }
  param_2->Export->bNotForClient = local_res18[0];
  local_res20[0] = param_2->Export->bNotForServer;
  bVar8 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_b0,local_res20[0]);
  if (bVar8) {
    operator<<((local_res8.StructuredArchive)->Formatter->Inner,local_res20);
  }
  else {
    local_res20[0] = false;
  }
  param_2->Export->bNotForServer = local_res20[0];
  if ((int)((ulonglong)*(undefined8 *)&pFVar9->field_0x40 >> 0x20) < 0x3ed) {
    local_68.A = 0;
    local_68.B = 0;
    local_68.C = 0;
    local_68.D = 0;
    bVar8 = FBinaryArchiveFormatter::TryEnterAttribute
                      ((local_res8.StructuredArchive)->Formatter,local_b0,false);
    if (bVar8) {
      operator<<((FStructuredArchiveSlot)local_res8.StructuredArchive,&local_68);
    }
  }
  pFVar4 = param_2->Export;
  bVar8 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_b0,pFVar4->PackageFlags != 0);
  if (bVar8) {
    pFVar9 = (local_res8.StructuredArchive)->Formatter->Inner;
    puVar5 = (uint *)**(undefined8 **)&pFVar9->field_0x8;
    if ((uint *)(*(undefined8 **)&pFVar9->field_0x8)[1] < puVar5 + 1) {
      if ((pFVar9->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar9 + 0x188))(pFVar9,&pFVar4->PackageFlags,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar9,&pFVar4->PackageFlags);
      }
    }
    else {
      pFVar4->PackageFlags = *puVar5;
      **(longlong **)&pFVar9->field_0x8 = **(longlong **)&pFVar9->field_0x8 + 4;
    }
  }
  else {
    pFVar4->PackageFlags = 0;
  }
  local_e8 = param_2->Export->bNotAlwaysLoadedForEditorGame;
  bVar8 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_b0,local_e8);
  if (bVar8) {
    operator<<((local_res8.StructuredArchive)->Formatter->Inner,&local_e8);
  }
  else {
    local_e8 = false;
  }
  param_2->Export->bNotAlwaysLoadedForEditorGame = local_e8;
  local_e7[0] = param_2->Export->bIsAsset;
  bVar8 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_b0,local_e7[0]);
  if (bVar8) {
    operator<<((local_res8.StructuredArchive)->Formatter->Inner,local_e7);
  }
  else {
    local_e7[0] = false;
  }
  param_2->Export->bIsAsset = local_e7[0];
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  return;
}

// `vector_deleting_destructor'`adjustor{704}' @ 1420f0378

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FLinkerSave::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
FLinkerSave::_vector_deleting_destructor__adjustor_704__(FLinkerSave *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FLinkerSave *)&this[-1].CellIndicesMap,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{520}' @ 1420f038c

/* [thunk]:public: virtual void * __ptr64 __cdecl ULinkerPlaceholderClass::`vector deleting
   destructor'`adjustor{520}' (unsigned int) __ptr64 */

void * __thiscall
ULinkerPlaceholderClass::_vector_deleting_destructor__adjustor_520__
          (ULinkerPlaceholderClass *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULinkerPlaceholderClass *)&this[-1].field_0x1c0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1420f03a0

/* [thunk]:public: virtual void * __ptr64 __cdecl ULinkerPlaceholderExportObject::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
ULinkerPlaceholderExportObject::_vector_deleting_destructor__adjustor_40__
          (ULinkerPlaceholderExportObject *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((ULinkerPlaceholderExportObject *)&this[-1].field_0xd0,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 1420f03b0

/* [thunk]:public: virtual void * __ptr64 __cdecl ULinkerPlaceholderFunction::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
ULinkerPlaceholderFunction::_vector_deleting_destructor__adjustor_232__
          (ULinkerPlaceholderFunction *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((ULinkerPlaceholderFunction *)&this[-1].field_0x1c0,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1420f03d0

void * __thiscall
FUObjectAnnotationDense<FObjectMemoryUsage,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationDense<FObjectMemoryUsage,1> *this,uint param_1)

{
  ~FUObjectAnnotationDense<FObjectMemoryUsage,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0410

void * __thiscall
FUObjectAnnotationSparse<FBoolAnnotation,1>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparse<FBoolAnnotation,1> *this,uint param_1)

{
  ~FUObjectAnnotationSparse<FBoolAnnotation,1>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0450

void * __thiscall
IBaseDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::_scalar_deleting_destructor_
          (IBaseDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0480

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f04b0

void * __thiscall
TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f04e0

void * __thiscall
TCommonDelegateInstanceState<bool___cdecl(FName),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<bool___cdecl(FName),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0510

void * __thiscall
TDoubleLinkedList<UObject_*>::_scalar_deleting_destructor_
          (TDoubleLinkedList<UObject_*> *this,uint param_1)

{
  ~TDoubleLinkedList<UObject_*>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0550

void * __thiscall
TFileRegionArchive<FLargeMemoryWriter>::_scalar_deleting_destructor_
          (TFileRegionArchive<FLargeMemoryWriter> *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->FileRegions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLargeMemoryWriter::~FLargeMemoryWriter((FLargeMemoryWriter *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f05a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<UObject_*_(__cdecl*)(UObject_*),0,0> *this,uint param_1)

{
  this->_padding_ =
       (longlong)
       &___7__TFunction_OwnedObject_P6APEAVUObject__PEAV1__Z_0A__0A__Function_Private_Core_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f05e0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAssetBundleData,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FAssetBundleData,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0620

void * __thiscall
TLinkerImportPlaceholder<UClass>::_scalar_deleting_destructor_
          (TLinkerImportPlaceholder<UClass> *this,uint param_1)

{
  ~TLinkerImportPlaceholder<UClass>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0660

void * __thiscall
TLinkerImportPlaceholder<UFunction>::_scalar_deleting_destructor_
          (TLinkerImportPlaceholder<UFunction> *this,uint param_1)

{
  ~TLinkerImportPlaceholder<UFunction>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f06a0

void * __thiscall
FArchiveCountMem::_scalar_deleting_destructor_(FArchiveCountMem *this,uint param_1)

{
  FArchive::~FArchive((FArchive *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f06e0

void * __thiscall
`StaticExec'::__l905::FArchiveListRefs::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined4 *)((longlong)this + 0xd8) = 0;
  if (*(void **)((longlong)this + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xd0));
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x90));
  FArchive::~FArchive(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0750

/* WARNING: Enum "ESaveRealm": Some values do not have unique names */

void * __thiscall FLinkerSave::_scalar_deleting_destructor_(FLinkerSave *this,uint param_1)

{
  ~FLinkerSave(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x688);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0790

void * __thiscall
FSubobjectReferenceFinder::_scalar_deleting_destructor_
          (FSubobjectReferenceFinder *this,uint param_1)

{
  FReferenceCollector::~FReferenceCollector((FReferenceCollector *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f07d0

void * __thiscall
FUObjectAnnotationSparseBool::_scalar_deleting_destructor_
          (FUObjectAnnotationSparseBool *this,uint param_1)

{
  FUObjectAnnotationSparse<FBoolAnnotation,1>::~FUObjectAnnotationSparse<FBoolAnnotation,1>
            ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0810

void * __thiscall
UDEPRECATED_MetaData::_scalar_deleting_destructor_(UDEPRECATED_MetaData *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDEPRECATED_MetaData__6B_;
  *(undefined4 *)&(this->RootMetaDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RootMetaDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RootMetaDataMap);
  *(undefined4 *)&(this->ObjectMetaDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectMetaDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWeakObjectPtr,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectMetaDataMap);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f08d0

void * __thiscall
ULinkerPlaceholderClass::_scalar_deleting_destructor_(ULinkerPlaceholderClass *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UClass__;
  *(undefined ***)&this->field_0x208 = &_vftable__for__TLinkerImportPlaceholder<UClass>__;
  TLinkerImportPlaceholder<UClass>::~TLinkerImportPlaceholder<UClass>
            ((TLinkerImportPlaceholder<UClass> *)&this->field_0x208);
  UClass::~UClass((UClass *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0950

void * __thiscall
ULinkerPlaceholderExportObject::_scalar_deleting_destructor_
          (ULinkerPlaceholderExportObject *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__FLinkerPlaceholderBase__;
  FLinkerPlaceholderBase::~FLinkerPlaceholderBase((FLinkerPlaceholderBase *)&this->field_0x28);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f09d0

void * __thiscall
ULinkerPlaceholderFunction::_scalar_deleting_destructor_
          (ULinkerPlaceholderFunction *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UFunction__;
  *(undefined ***)&this->field_0xe8 = &_vftable__for__TLinkerImportPlaceholder<UFunction>__;
  TLinkerImportPlaceholder<UFunction>::~TLinkerImportPlaceholder<UFunction>
            ((TLinkerImportPlaceholder<UFunction> *)&this->field_0xe8);
  UFunction::~UFunction((UFunction *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2a8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0a50

void * __thiscall UObjectBase::_scalar_deleting_destructor_(UObjectBase *this,uint param_1)

{
  ~UObjectBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0a90

void * __thiscall
UObjectBaseUtility::_scalar_deleting_destructor_(UObjectBaseUtility *this,uint param_1)

{
  UObjectBase::~UObjectBase((UObjectBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1420f0ad0

void * __thiscall
UObjectRedirector::_scalar_deleting_destructor_(UObjectRedirector *this,uint param_1)

{
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x30);
  }
  return this;
}

// CheckMissingSection @ 1420f35a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl CheckMissingSection(FString *param_1,FString *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  FConfigSection *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  ForAnyElementType FVar7;
  FMissingSections *SRWLock;
  bool bVar8;
  undefined1 local_res8 [8];
  FString local_48;
  TStringView<wchar_t> local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`CheckMissingSection'::__l2::_dynamic_atexit_destructor_for__MissingSections__);
    _Init_thread_footer(&_TSS0);
  }
  if ((param_2->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  FString::FString(&local_48,pwVar6);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar4 = FConfigCacheIni::GetSection(GConfig,pwVar6,false,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (pFVar4 != (FConfigSection *)0x0) {
    return;
  }
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar5 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar5 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  uVar2 = uVar1 % 0x1f;
  SRWLock = MissingSections + uVar2;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&MissingSections[uVar2].Sections,uVar1,param_1);
  if (iVar3 != -1) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&MissingSections[uVar2].Sections,uVar1,param_1);
  if (iVar3 != -1) goto LAB_1420f37fa;
  local_48.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  iVar3 = (param_1->Data).ArrayNum;
  local_48.Data.ArrayNum = iVar3 + -1;
  if (iVar3 == 0) {
    local_48.Data.ArrayNum = 0;
  }
  local_38._12_4_ = local_48.Data.ArrayMax;
  local_38.Size = local_48.Data.ArrayNum;
  local_38.DataPtr = (wchar_t *)local_48.Data.AllocatorInstance.Data;
  FPackageName::GetShortName(&local_48,&local_38);
  iVar3 = (param_1->Data).ArrayNum;
  if (local_48.Data.ArrayNum == iVar3) {
    if (1 < local_48.Data.ArrayNum) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_48.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar8 = iVar3 == 0;
      goto LAB_1420f3744;
    }
  }
  else {
    bVar8 = local_48.Data.ArrayNum + iVar3 == 1;
LAB_1420f3744:
    if (!bVar8) {
      if ((param_2->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      FString::FString((FString *)&local_38,pwVar6);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar7.Data = local_48.Data.AllocatorInstance.Data;
      }
      pFVar4 = FConfigCacheIni::GetSection(GConfig,(wchar_t *)FVar7.Data,false,(FString *)&local_38)
      ;
      if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.DataPtr);
      }
      if (pFVar4 != (FConfigSection *)0x0) {
        UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogObj);
      }
    }
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::EmplaceByHash<FString_const_&>
            (&MissingSections[uVar2].Sections,(uint)local_res8,(FString *)(ulonglong)uVar1,
             (bool *)param_1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_1420f37fa:
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// EmptyLinkFunctionForGeneratedCodeLinkerPlaceholderClass @ 1420f69f0

void __cdecl EmptyLinkFunctionForGeneratedCodeLinkerPlaceholderClass(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLinkerPlaceholderExportObject @ 1420f6a00

void __cdecl EmptyLinkFunctionForGeneratedCodeLinkerPlaceholderExportObject(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeLinkerPlaceholderFunction @ 1420f6a10

void __cdecl EmptyLinkFunctionForGeneratedCodeLinkerPlaceholderFunction(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMetaData @ 1420f6a20

void __cdecl EmptyLinkFunctionForGeneratedCodeMetaData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNoExportTypes @ 1420f6a30

void __cdecl EmptyLinkFunctionForGeneratedCodeNoExportTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOverridableManager @ 1420f6a40

void __cdecl EmptyLinkFunctionForGeneratedCodeOverridableManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOverriddenPropertySet @ 1420f6a50

void __cdecl EmptyLinkFunctionForGeneratedCodeOverriddenPropertySet(void)

{
  return;
}

// GetClassTraceScope @ 1420f9ea0

FName __cdecl GetClassTraceScope(UObjectBaseUtility *param_1)

{
  longlong lVar1;
  uint uVar2;
  FUObjectItem *pFVar3;
  longlong in_RDX;
  
  lVar1 = *(longlong *)(in_RDX + 0x10);
  pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar1 + 0xc));
  if ((((uint)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) &&
     (PRIVATE_GIsRunningCommandlet != false)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FName::FName(&NAME_Blueprint,L"Blueprint");
        _Init_thread_footer(&_TSS0);
      }
    }
    uVar2 = NAME_Blueprint.Number;
    *(uint *)&param_1->field_0x0 = NAME_Blueprint.ComparisonIndex.Value;
    *(uint *)&param_1->field_0x4 = uVar2;
    return (FName)param_1;
  }
  *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + 0x18);
  return (FName)param_1;
}

// GetConfigFilename @ 1420f9f70

FString * __cdecl GetConfigFilename(FString *__return_storage_ptr__,UObject *param_1)

{
  UClass::GetConfigName(*(UClass **)&param_1->field_0x10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFinalOverridePlatform @ 1420fa710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl GetFinalOverridePlatform(FString *__return_storage_ptr__,UObject *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  bool bVar5;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  bVar5 = false;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_158 = 0;
  lVar3 = (**(code **)(*(longlong *)param_1 + 0x248))(param_1);
  if (lVar3 != 0) {
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_148,"Windows",7,Yes);
    pwVar4 = (wchar_t *)(**(code **)(*(longlong *)param_1 + 0x248))(param_1);
    bVar5 = true;
    iVar2 = FGenericPlatformStricmp::Stricmp(pwVar4,local_148.Ptr);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_1420fa7ab;
    }
  }
  bVar1 = false;
LAB_1420fa7ab:
  if ((bVar5) && ((void *)local_148._padding_ != (void *)0x0)) {
    FMemory::Free((void *)local_148._padding_);
  }
  if (bVar1) {
    pwVar4 = (wchar_t *)(**(code **)(*(longlong *)param_1 + 0x248))(param_1);
    FString::operator=(__return_storage_ptr__,pwVar4);
  }
  return __return_storage_ptr__;
}

// GetObjectIteratorDefaultInternalExclusionFlags @ 1420fafe0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

EInternalObjectFlags __cdecl
GetObjectIteratorDefaultInternalExclusionFlags(EInternalObjectFlags param_1)

{
  bool bVar1;
  uint *puVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res8 [32];
  code *local_18;
  undefined1 *local_10;
  
  bVar1 = (*IsInAsyncLoadingThread)();
  if (!bVar1) {
    bVar1 = IsInParallelLoadingThread();
    if (!bVar1) {
      return param_1 | (PendingConstruction|Unreachable|AsyncLoadingPhase2|AsyncLoadingPhase1|
                       AutoRTFMConstructionAborted);
    }
  }
  if (GUseObjectVisibilityFilterForAsyncLoading != false) {
    puVar2 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar3 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
    return *(EInternalObjectFlags *)(pFVar3 + 10) | param_1 |
           (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
  }
  return param_1 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
}

// GetTransientOuterForRename @ 1420fd800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl GetTransientOuterForRename(UClass *param_1)

{
  UClass *pUVar1;
  FName FVar2;
  FName FVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  FScopedAllowAbstractClassAllocation local_a8 [8];
  FName local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar1 = (param_1->ClassWithin).field0_0x0.DebugPtr;
  pUVar6 = GObjTransientPkg;
  if ((pUVar1 != (UClass *)0x0) && (pUVar1 != param_1)) {
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    pUVar1 = (param_1->ClassWithin).field0_0x0.DebugPtr;
    if (pUVar1 == (UClass *)0x0) {
      bVar8 = pUVar4 == (UClass *)0x0;
    }
    else {
      bVar8 = pUVar1 == pUVar4;
    }
    pUVar6 = GObjTransientPkg;
    if (!bVar8) {
      FScopedAllowAbstractClassAllocation::FScopedAllowAbstractClassAllocation(local_a8);
      pUVar1 = (param_1->ClassWithin).field0_0x0.DebugPtr;
      local_a0.ComparisonIndex.Value = 0;
      local_a0.Number = 0;
      pUVar5 = GetTransientOuterForRename(pUVar1);
      FVar2 = local_a0;
      if (local_a0 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  (pUVar5,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar4 = Z_Construct_UClass_UObject_NoRegister();
      CheckIsClassChildOf_Internal(pUVar4,pUVar1);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar1);
      FVar3 = local_a0;
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_a0.ComparisonIndex = FVar2.ComparisonIndex.Value;
      local_a0.Number = FVar2.Number;
      local_98._16_4_ = local_a0.ComparisonIndex.Value;
      local_98._20_4_ = local_a0.Number;
      local_98._24_4_ = RF_Transient;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_a0 = FVar3;
      local_98._8_8_ = pUVar5;
      pUVar6 = (UPackage *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar7 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      FScopedAllowAbstractClassAllocation::~FScopedAllowAbstractClassAllocation(local_a8);
    }
  }
  return (UObject *)pUVar6;
}

// GetTransientPackage @ 1420fd970

UPackage * __cdecl GetTransientPackage(void)

{
  return GObjTransientPkg;
}

// GetTransientPackageAsObject @ 1420fd980

UObject * __cdecl GetTransientPackageAsObject(void)

{
  return (UObject *)GObjTransientPkg;
}

// InitGarbageElimination @ 1420fe890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl InitGarbageElimination(void)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  bool local_res8 [32];
  
  if ((GConfig == (FConfigCacheIni *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("GConfig",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectBaseUtility.cpp"
                         ,0xb5,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res8[0] = true;
  bVar2 = FConfigCacheIni::GetBool
                    (GConfig,L"/Script/Engine.GarbageCollectionSettings",L"gc.PendingKillEnabled",
                     local_res8,&GEngineIni);
  if (bVar2) {
    if (2 < (byte)LogObj._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogObj);
    }
  }
  else {
    FConfigCacheIni::GetBool
              (GConfig,L"/Script/Engine.GarbageCollectionSettings",L"gc.GarbageEliminationEnabled",
               local_res8,&GEngineIni);
  }
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar3,L"DisablePendingKill");
  if (!bVar2) {
    pwVar3 = FCommandLine::Get();
    bVar2 = FParse::Param(pwVar3,L"DisableGarbageElimination");
    if (!bVar2) {
      pwVar3 = FCommandLine::Get();
      bVar2 = FParse::Param(pwVar3,L"EnablePendingKill");
      if (!bVar2) {
        pwVar3 = FCommandLine::Get();
        bVar2 = FParse::Param(pwVar3,L"EnableGarbageElimination");
        if (!bVar2) {
          UObjectBaseUtility::bGarbageEliminationEnabled = local_res8[0];
          GGarbageEliminationEnabled = (uint)local_res8[0];
          return;
        }
      }
      UObjectBaseUtility::bGarbageEliminationEnabled = true;
      goto LAB_1420fe9d0;
    }
  }
  UObjectBaseUtility::bGarbageEliminationEnabled = false;
LAB_1420fe9d0:
  GGarbageEliminationEnabled = (uint)UObjectBaseUtility::bGarbageEliminationEnabled;
  return;
}

// InitUObject @ 1420fe9f0

/* WARNING: Type propagation algorithm not settling */

void __cdecl InitUObject(void)

{
  int iVar1;
  FModuleManager *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *this;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  FDestructionSentinel local_38;
  undefined1 *local_20;
  
  FLLMScope::FLLMScope(local_res10,InitUObject,false,None,Default,true);
  FMemScope::FMemScope(local_res18,InitUObject,true);
  FGCCSyncObject::Create();
  FCoreRedirects::Initialize();
  FConfigCacheIni::GetFilenames(GConfig,(TArray<FString,TSizedDefaultAllocator<32>_> *)&local_38);
  iVar1 = (int)local_38.Accessor;
  pFVar6 = (FScriptContainerElement *)(local_38._0_8_ + (longlong)(int)local_38.Accessor * 0x10);
  pFVar5 = (FScriptContainerElement *)local_38._0_8_;
  while( true ) {
    if ((int)local_38.Accessor != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (pFVar5 == pFVar6) break;
    FCoreRedirects::ReadRedirectsFromIni((FString *)pFVar5);
    FLinkerLoad::CreateActiveRedirectsMap((FString *)pFVar5);
    pFVar5 = pFVar5 + 0x10;
  }
  DestructItems<FString,int>((FString *)local_38._0_8_,(int)local_38.Accessor);
  if ((FScriptContainerElement *)local_38._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_38._0_8_);
  }
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnShutdownAfterError,(_func___cdecl_void *)local_res8);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::AddStatic<>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnExit,(_func___cdecl_void *)local_res8);
  RegisterModularObjectsProcessing();
  pFVar2 = FModuleManager::Get();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar2->IsPackageLoaded,
             (FWriteAccessScope *)&local_38);
  local_20 = &(pFVar2->IsPackageLoaded).field_0x8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)local_20);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6A_NVFName___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = `InitUObject'::__l2::Local::IsPackageLoaded;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)
               CONCAT44(local_38.Accessor._4_4_,(int)local_38.Accessor),&local_38);
  }
  TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
  AddStatic<>((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
               *)&FCoreDelegates::NewFileAddedDelegate,(_func___cdecl_void_FString_ptr *)local_res8)
  ;
  this = FCoreDelegates::GetOnPakFileMounted2();
  TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::
  AddStatic<>((TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
               *)this,(_func___cdecl_void_IPakFile_ptr *)local_res8);
  StaticUObjectInit();
  if (FOverridableManager::OverridableManager == (FOverridableManager *)0x0) {
    FOverridableManager::OverridableManager = operator_new(0x78);
    if (FOverridableManager::OverridableManager == (FOverridableManager *)0x0) {
      FOverridableManager::OverridableManager = (FOverridableManager *)0x0;
    }
    else {
      *(undefined8 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x8 = 0
      ;
      *(undefined8 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x10 =
           0;
      *(undefined8 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x18 =
           0;
      *(undefined8 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x20 =
           0;
      *(undefined8 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x38 =
           0;
      *(undefined4 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x40 =
           0;
      *(undefined4 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x44 =
           0x80;
      *(undefined4 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x4c =
           0;
      *(undefined4 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x48 =
           0xffffffff;
      *(undefined8 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x58 =
           0;
      *(undefined4 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x60 =
           0;
      *(undefined2 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x70 =
           0;
      *(undefined8 *)
       &(FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation).field_0x68 =
           0;
      *(undefined ***)&FOverridableManager::OverridableManager->NeedsSubobjectTemplateInstantiation
           = &___7FUObjectAnnotationSparseBool__6B_;
    }
  }
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// IsPackageLoaded @ 1420ff9e0

bool __cdecl `InitUObject'::__l2::Local::IsPackageLoaded(FName param_1)

{
  FString *pFVar1;
  UPackage *pUVar2;
  wchar_t *pwVar3;
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = param_1;
  pFVar1 = ::FName::ToString(local_res8,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  pUVar2 = FindPackage((UObject *)0x0,pwVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pUVar2 != (UPackage *)0x0;
}

// MakeSharedTagMap @ 142101ed0

FAssetDataTagMapSharedView __cdecl
MakeSharedTagMap(TMap<FName,UObject::FAssetRegistryTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UObject::FAssetRegistryTag,0>_>
                 *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  FAssetDataTagMapSharedView FVar8;
  TTuple<FName,FString> *pTVar9;
  longlong lVar10;
  longlong *in_RDX;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  TBitArray<FDefaultBitArrayAllocator> *pTVar15;
  undefined1 local_res10 [8];
  int local_res18;
  FAssetDataTagMap local_b8;
  int iStack_98;
  uint uStack_94;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  uVar13 = (int)in_RDX[1] - *(int *)((longlong)in_RDX + 0x34);
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  iVar14 = 0;
  local_b8.RefCount.Counter = 0;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar13,(ForAnyElementType *)&local_b8,0,
               (int *)((longlong)&local_b8._padding_ + 4));
  }
  iVar3 = (int)in_RDX[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(in_RDX + 2);
  uStack_94 = 1;
  local_80 = 0;
  iStack_84 = local_80;
  if (iVar3 != 0) {
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)in_RDX[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)in_RDX[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar13 = *(uint *)(pTVar15->AllocatorInstance).InlineData;
    local_80 = 0;
    iVar14 = 0;
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar14;
      local_80 = local_80 + 0x20;
      iVar14 = iVar14 + 1;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_142101fbd;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uStack_94 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iStack_84 = local_80 + -1 + local_res18;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_142101fbd:
  uVar13 = *(uint *)(in_RDX + 5);
  uVar12 = uVar13 & 0xffffffe0;
  iStack_78 = (int)in_RDX[1] - *(int *)((longlong)in_RDX + 0x34);
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iVar14);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  iStack_98 = iVar14;
  local_90 = pTVar1;
  iStack_7c = iStack_84;
  local_70 = in_RDX;
  TStack_68.Array = pTVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    FVar8.field0_0x0 = (FAssetDataTagMapSharedView_u_0)(*pcVar5)();
    return (FAssetDataTagMapSharedView)FVar8.field0_0x0;
  }
  uVar4 = *(uint *)(in_RDX + 5);
  if (uVar13 != uVar4) {
    pTVar15 = (TBitArray<FDefaultBitArrayAllocator> *)in_RDX[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)in_RDX[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar15 = pTVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) &
             *(uint *)((pTVar15->AllocatorInstance).InlineData + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_1421020c1;
      uVar13 = *(uint *)((pTVar15->AllocatorInstance).InlineData + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1421020c1:
  while( true ) {
    plVar6 = local_70;
    if ((int)local_70[1] - *(int *)((longlong)local_70 + 0x34) != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<FName,UObject::FAssetRegistryTag>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) && (TStack_68.Array == pTVar1)) && (plVar6 == in_RDX)
       ) break;
    lVar10 = *plVar6 + (longlong)TStack_68.CurrentBitIndex * 0x30;
    if ((*(longlong *)(lVar10 + 8) != 0) && (1 < *(int *)(lVar10 + 0x18))) {
      pTVar9 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
               AllocateMemoryForEmplace<FName_const_&>
                         ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                          &local_b8,(FName *)(lVar10 + 8));
      *(undefined8 *)pTVar9 = *(undefined8 *)(lVar10 + 8);
      *(undefined8 *)&pTVar9->field_0x8 = 0;
      *(undefined8 *)&pTVar9->field_0x8 = *(undefined8 *)(lVar10 + 0x10);
      *(undefined8 *)(lVar10 + 0x10) = 0;
      *(undefined4 *)&pTVar9->field_0x10 = *(undefined4 *)(lVar10 + 0x18);
      *(undefined4 *)&pTVar9->field_0x14 = *(undefined4 *)(lVar10 + 0x1c);
      *(undefined8 *)(lVar10 + 0x18) = 0;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
            ((FAssetDataTagMapSharedView *)param_1,&local_b8);
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)local_b8._padding_,(int)local_b8._padding_);
  if ((TTuple<FName,FString> *)local_b8._padding_ != (TTuple<FName,FString> *)0x0) {
    FMemory::Free((void *)local_b8._padding_);
  }
  return (FAssetDataTagMapSharedView)(FAssetDataTagMapSharedView_u_0)param_1;
}

// ParseFunctionFlags @ 142105360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
ParseFunctionFlags(uint param_1,TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  undefined1 auStack_178 [32];
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  wchar_t *local_128 [4];
  wchar_t *local_108;
  wchar_t *local_100;
  wchar_t *local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  wchar_t *local_b0;
  wchar_t *local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  wchar_t *local_60;
  wchar_t *local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  wchar_t *local_40;
  wchar_t *local_38;
  wchar_t *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_128[0] = L"Final";
  pFVar7 = (FScriptContainerElement *)local_128;
  local_128[1] = L"0x00000002";
  uVar6 = 1;
  lVar8 = 0x20;
  local_128[2] = L"BlueprintAuthorityOnly";
  local_128[3] = L"BlueprintCosmetic";
  local_108 = L"0x00000010";
  local_100 = L"0x00000020";
  local_f8 = L"Net";
  local_f0 = L"NetReliable";
  local_e8 = L"NetRequest";
  local_e0 = L"Exec";
  local_d8 = L"Native";
  local_d0 = L"Event";
  local_c8 = L"NetResponse";
  local_c0 = L"Static";
  local_b8 = L"NetMulticast";
  local_b0 = L"0x00008000";
  local_a8 = L"MulticastDelegate";
  local_a0 = L"Public";
  local_98 = L"Private";
  local_90 = L"Protected";
  local_88 = L"Delegate";
  local_80 = L"NetServer";
  local_78 = L"HasOutParms";
  local_70 = L"HasDefaults";
  local_68 = L"NetClient";
  local_60 = L"DLLImport";
  local_58 = L"BlueprintCallable";
  local_50 = L"BlueprintEvent";
  local_48 = L"BlueprintPure";
  local_40 = L"0x20000000";
  local_38 = L"Const";
  local_30 = L"0x80000000";
  do {
    if ((param_1 & uVar6) != 0) {
      pFVar1 = (param_2->AllocatorInstance).Data;
      if ((pFVar1 <= pFVar7) && (pFVar7 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
        local_140 = (longlong)param_2->ArrayNum;
        local_138 = 8;
        local_158 = pFVar7;
        local_150 = pFVar1;
        local_148 = (longlong)param_2->ArrayMax;
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
      iVar5 = param_2->ArrayNum;
      if (iVar5 == param_2->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      uVar2 = *(undefined8 *)pFVar7;
      param_2->ArrayNum = iVar5 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = uVar2;
    }
    uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
    pFVar7 = pFVar7 + 8;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  return;
}

// ParsePropertyFlags @ 142105810

TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> * __cdecl
ParsePropertyFlags(TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
                  EPropertyFlags param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *pTVar5;
  wchar_t **ppwVar6;
  wchar_t *local_18 [2];
  
  ppwVar6 = PropertyFlags;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  do {
    local_18[0] = *ppwVar6;
    if ((param_1 & CPF_Edit) != CPF_None) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 <
          pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      *(wchar_t **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
           local_18[0];
    }
    param_1 = param_1 >> 1;
    ppwVar6 = ppwVar6 + 1;
  } while ((TMultiMap<unsigned_int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,1>_>
            *)ppwVar6 != &GComplexPathHashToId);
  return __return_storage_ptr__;
}

// PerformSetCommand @ 142105930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl PerformSetCommand(wchar_t *param_1,FOutputDevice *param_2,bool param_3)

{
  wchar_t wVar1;
  bool bVar2;
  size_t sVar3;
  UClass *pUVar4;
  FProperty *pFVar5;
  UObject *pUVar6;
  undefined1 auStackY_488 [32];
  TStringView<wchar_t> local_458;
  wchar_t *local_448 [2];
  wchar_t local_438 [256];
  wchar_t local_238 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_488;
  local_448[0] = param_1;
  bVar2 = FParse::Token(local_448,local_438,0x100,true,L'\0');
  if ((!bVar2) || (bVar2 = FParse::Token(local_448,local_238,0x100,true,L'\0'), !bVar2)) {
    if ((byte)LogExec._0_1_ < 3) {
      return;
    }
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              ((FLogScopedCategoryAndVerbosityOverride *)&local_458,(FName)LogExec._4_8_,Warning);
    FOutputDevice::Log(param_2,
                       L"Unexpected input); format is \'set [class or object name] [property name] [value]"
                      );
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
              ((FLogScopedCategoryAndVerbosityOverride *)&local_458);
    return;
  }
  local_458.DataPtr = local_438;
  sVar3 = wcslen(local_438);
  local_458.Size = (int)sVar3;
  pUVar4 = Z_Construct_UClass_UClass_NoRegister();
  pUVar4 = (UClass *)StaticFindFirstObject(pUVar4,&local_458,None,Warning,L"PerformSetCommand");
  if (pUVar4 == (UClass *)0x0) {
    local_458.DataPtr = local_438;
    sVar3 = wcslen(local_438);
    local_458.Size = (int)sVar3;
    pUVar4 = Z_Construct_UClass_UObject_NoRegister();
    pUVar6 = StaticFindFirstObject(pUVar4,&local_458,NativeFirst,Warning,L"PerformSetCommand");
    if (pUVar6 != (UObject *)0x0) {
      pFVar5 = FindFProperty<FProperty>(*(UStruct **)&pUVar6->field_0x10,local_238,Default);
      if (pFVar5 == (FProperty *)0x0) {
        return;
      }
      wVar1 = *local_448[0];
      while (wVar1 == L' ') {
        local_448[0] = local_448[0] + 1;
        wVar1 = *local_448[0];
      }
      FProperty::ImportText_InContainer(pFVar5,local_448[0],pUVar6,pUVar6,0,(FOutputDevice *)GWarn);
      return;
    }
    if ((byte)LogExec._0_1_ < 3) {
      return;
    }
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              ((FLogScopedCategoryAndVerbosityOverride *)&local_458,(FName)LogExec._4_8_,Warning);
    FOutputDevice::LogfImpl(param_2,L"Unrecognized class or object %s");
  }
  else {
    pFVar5 = FindFProperty<FProperty>((UStruct *)pUVar4,local_238,Default);
    if (pFVar5 != (FProperty *)0x0) {
      wVar1 = *local_448[0];
      while (wVar1 == L' ') {
        local_448[0] = local_448[0] + 1;
        wVar1 = *local_448[0];
      }
      GlobalSetProperty(local_448[0],pUVar4,pFVar5,param_3);
      return;
    }
    if ((byte)LogExec._0_1_ < 3) {
      return;
    }
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              ((FLogScopedCategoryAndVerbosityOverride *)&local_458,(FName)LogExec._4_8_,Warning);
    FOutputDevice::LogfImpl(param_2,L"Unrecognized property %s on class %s");
  }
  FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
  FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
            ((FLogScopedCategoryAndVerbosityOverride *)&local_458);
  return;
}

// PrivateDumpObjectFlags @ 142106d20

void __cdecl PrivateDumpObjectFlags(UObject *param_1,FOutputDevice *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    PrivateInitObjectFlagList(&SObjectFlagList);
    atexit(`PrivateDumpObjectFlags'::__l2::_dynamic_atexit_destructor_for__SObjectFlagList__);
    _Init_thread_footer(&_TSS0);
  }
  if (param_1 != (UObject *)0x0) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None);
    FString::PrintfImpl(&local_48,L"%s:\t");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    uVar4 = 0;
    if (0 < SObjectFlagList.ArrayNum) {
      lVar5 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar4 < SObjectFlagList.ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((*(uint *)&param_1->field_0x8 &
            *(uint *)(SObjectFlagList.AllocatorInstance.Data + lVar5)) != 0) {
          FString::PrintfImpl(&local_38,L"%s ");
          iVar6 = local_38.Data.ArrayNum + -1;
          if (local_38.Data.ArrayNum == 0) {
            iVar6 = 0;
          }
          FString::AppendChars(&local_48,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar6);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 0x10;
      } while ((int)uVar4 < SObjectFlagList.ArrayNum);
    }
    FOutputDevice::LogfImpl(param_2,L"%s");
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PrivateInitObjectFlagList @ 142106f30

TArray<FObjectFlag,TSizedDefaultAllocator<32>_> * __cdecl
PrivateInitObjectFlagList(TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined4 local_b8;
  undefined4 uStack_b4;
  wchar_t *pwStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  wchar_t *pwStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  wchar_t *pwStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  wchar_t *pwStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  wchar_t *pwStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  wchar_t *pwStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  wchar_t *pwStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  wchar_t *pwStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  wchar_t *pwStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  wchar_t *pwStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  wchar_t *pwStack_10;
  
  local_18 = 0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pwStack_10 = L"ClassDefaultObject";
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  local_b8 = 0x20;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_14,local_18);
  *(wchar_t **)(pFVar1 + 8) = pwStack_10;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pwStack_b0 = L"ArchetypeObject";
  if ((pFVar1 <= (FScriptContainerElement *)&local_b8) &&
     ((FScriptContainerElement *)&local_b8 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  local_a8 = 8;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_b4,local_b8);
  *(wchar_t **)(pFVar1 + 8) = pwStack_b0;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pwStack_a0 = L"Transactional";
  if ((pFVar1 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  local_98 = 1;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_a4,local_a8);
  *(wchar_t **)(pFVar1 + 8) = pwStack_a0;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pwStack_90 = L"Public";
  if ((pFVar1 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  local_88 = 0x100;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_94,local_98);
  *(wchar_t **)(pFVar1 + 8) = pwStack_90;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pwStack_80 = L"TagGarbageTemp";
  if ((pFVar1 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  local_78 = 0x400;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_84,local_88);
  *(wchar_t **)(pFVar1 + 8) = pwStack_80;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pwStack_70 = L"NeedLoad";
  if ((pFVar1 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  local_68 = 0x40;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_74,local_78);
  *(wchar_t **)(pFVar1 + 8) = pwStack_70;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pwStack_60 = L"Transient";
  if ((pFVar1 <= (FScriptContainerElement *)&local_68) &&
     ((FScriptContainerElement *)&local_68 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  local_58 = 2;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_64,local_68);
  *(wchar_t **)(pFVar1 + 8) = pwStack_60;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pwStack_50 = L"Standalone";
  if ((pFVar1 <= (FScriptContainerElement *)&local_58) &&
     ((FScriptContainerElement *)&local_58 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  local_48 = 0x8000;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_54,local_58);
  *(wchar_t **)(pFVar1 + 8) = pwStack_50;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pwStack_40 = L"BeginDestroyed";
  if ((pFVar1 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  local_38 = 0x10000;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_44,local_48);
  *(wchar_t **)(pFVar1 + 8) = pwStack_40;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pwStack_30 = L"FinishDestroyed";
  if ((pFVar1 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  local_28 = 0x1000;
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_34,local_38);
  *(wchar_t **)(pFVar1 + 8) = pwStack_30;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pwStack_20 = L"NeedPostLoad";
  if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 <
      pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TArray<FObjectFlag,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(ulonglong *)pFVar1 = CONCAT44(uStack_24,local_28);
  *(wchar_t **)(pFVar1 + 8) = pwStack_20;
  return __return_storage_ptr__;
}

// PrivateRecursiveDumpFlags @ 142107690

void __cdecl PrivateRecursiveDumpFlags(UStruct *param_1,void *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  FField *this;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  int iVar5;
  TFieldIterator<FProperty> local_28;
  
  if ((param_2 == (void *)0x0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Data != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x10ee,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  local_28.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  this = local_28.Field;
  do {
    if (this == (FField *)0x0) {
      return;
    }
    local_28.Field = this;
    pUVar3 = FField::GetOwnerClass(this);
    if (((pUVar3 != (UClass *)0x0) &&
        (pUVar3 = FField::GetOwnerClass(this), (int)pUVar3->_padding_ != 0x28)) &&
       (iVar5 = 0, 0 < (int)this[1]._padding_)) {
      do {
        if (((iVar5 < 0) || ((int)this[1]._padding_ <= iVar5)) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((param_2 == (void *)0x0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (this != (FField *)0x0) {
          if (((uint)(int)this->ClassPrivate->CastFlags >> 0x1a & 1) == 0) {
            if (((this != (FField *)0x0) &&
                (((uint)(int)this->ClassPrivate->CastFlags >> 0x14 & 1) != 0)) &&
               (this != (FField *)0x0)) {
              PrivateRecursiveDumpFlags
                        ((UStruct *)this[2].Owner.Container.Field,
                         (void *)((longlong)param_2 +
                                 (longlong)*(int *)((longlong)&this[1].Owner.Container + 4) +
                                 (longlong)iVar5 *
                                 (longlong)*(int *)((longlong)&this[1]._padding_ + 4)),param_3);
            }
          }
          else if (this != (FField *)0x0) {
            pUVar4 = (UObject *)(**(code **)(this->_padding_ + 0x1f8))(this);
            PrivateDumpObjectFlags(pUVar4,param_3);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)this[1]._padding_);
    }
    local_28.Field = this->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    this = local_28.Field;
  } while( true );
}

// ShowClasses @ 1421107f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl ShowClasses(UClass *param_1,FOutputDevice *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  ForAnyElementType _Src;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  uint uVar7;
  longlong lVar8;
  FName local_res8;
  FString local_68;
  TObjectIterator<UClass> local_58;
  TObjectIterator<UClass> local_40;
  
  local_res8 = (FName)param_1->_padding_;
  FName::ToString(&local_res8,&local_68);
  if ((0xff < (uint)param_3) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                         ,0x272,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FOutputDevice::LogfImpl(param_2,L"%s%s (%d)");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  local_40.Index = 0xffffffff;
  local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ObjectArray.ArrayNum = 0;
  local_40.ObjectArray.ArrayMax = 0;
  EVar4 = GetObjectIteratorDefaultInternalExclusionFlags(Borrowed);
  pUVar6 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar6,&local_40.ObjectArray,true,RF_ClassDefaultObject,EVar4);
  TObjectIterator<UClass>::Advance(&local_40);
  _Src.Data = local_40.ObjectArray.AllocatorInstance.Data;
  lVar8 = (longlong)local_40.ObjectArray.ArrayNum;
  local_58.ObjectArray.ArrayNum = local_40.ObjectArray.ArrayNum;
  local_58.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_40.ObjectArray.ArrayNum == 0) {
    local_58.ObjectArray.ArrayMax = 0;
    uVar2 = local_40.Index;
    uVar7 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_40.ObjectArray.ArrayNum,0,(ForAnyElementType *)&local_58,
               local_40.ObjectArray.ArrayNum,&local_58.ObjectArray.ArrayMax);
    memcpy(local_58.ObjectArray.AllocatorInstance.Data,_Src.Data,lVar8 << 3);
    uVar2 = local_40.Index;
    uVar7 = local_40.ObjectArray.ArrayNum;
  }
  while( true ) {
    local_58.Index = uVar2;
    if (uVar2 == uVar7) {
      if (local_58.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ObjectArray.AllocatorInstance.Data);
      }
      if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
      }
      return;
    }
    uVar5 = 0;
    if ((int)uVar2 < local_58.ObjectArray.ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    if ((UClass *)
        (*(UClass **)(local_58.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar2 * 8))->
        _padding_ == param_1) {
      ShowClasses(*(UClass **)
                   (local_58.ObjectArray.AllocatorInstance.Data + (longlong)(int)uVar2 * 8),param_2,
                  param_3 + 2);
    }
    TObjectIterator<UClass>::Advance(&local_58);
    uVar2 = local_58.Index;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ShowIntrinsicClasses @ 142110a10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl ShowIntrinsicClasses(FOutputDevice *param_1)

{
  FClassTree *pFVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  FClassTree *pFVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  TObjectIterator<UClass> local_a8;
  FClassTree local_88;
  FClassTree local_48;
  
  local_48.Class = Z_Construct_UClass_UObject_NoRegister();
  local_48.Parent = (FClassTree *)0x0;
  local_48.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Children.ArrayNum = 0;
  local_48.Children.ArrayMax = 0;
  local_48.Instances._padding_ = (longlong)&___7__TDoubleLinkedList_PEAVUObject____6B_;
  local_48.Instances.HeadNode = (TDoubleLinkedListNode *)0x0;
  local_48.Instances.TailNode = (TDoubleLinkedListNode *)0x0;
  local_48.Instances.ListSize = 0;
  if ((local_48.Class == (UClass *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Class",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ClassTree.h"
                         ,0x232,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_88.Class = Z_Construct_UClass_UObject_NoRegister();
  local_88.Parent = (FClassTree *)0x0;
  local_88.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Children.ArrayNum = 0;
  local_88.Children.ArrayMax = 0;
  local_88.Instances._padding_ = (longlong)&___7__TDoubleLinkedList_PEAVUObject____6B_;
  local_88.Instances.HeadNode = (TDoubleLinkedListNode *)0x0;
  local_88.Instances.TailNode = (TDoubleLinkedListNode *)0x0;
  local_88.Instances.ListSize = 0;
  if ((local_88.Class == (UClass *)0x0) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Class",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ClassTree.h"
                         ,0x232,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_a8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ObjectArray.ArrayNum = 0;
  local_a8.ObjectArray.ArrayMax = 0;
  local_a8.Index = 0xffffffff;
  EVar4 = GetObjectIteratorDefaultInternalExclusionFlags(Borrowed);
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  GetObjectsOfClass(pUVar7,&local_a8.ObjectArray,true,RF_ClassDefaultObject,EVar4);
  do {
    while( true ) {
      do {
        TObjectIterator<UClass>::Advance(&local_a8);
        lVar10 = (longlong)local_a8.Index;
        if ((local_a8.Index < 0) || (local_a8.ObjectArray.ArrayNum <= local_a8.Index)) {
          if (local_a8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.ObjectArray.AllocatorInstance.Data);
          }
          FClassTree::Num(&local_48);
          FOutputDevice::LogfImpl(param_1,L"INTRINSIC CLASSES WITH FLAG SET: %i classes");
          FClassTree::DumpClassTree(&local_48,0,param_1);
          FClassTree::Num(&local_88);
          FOutputDevice::LogfImpl(param_1,L"INTRINSIC CLASSES WITHOUT FLAG SET: %i classes");
          FClassTree::DumpClassTree(&local_88,0,param_1);
          FClassTree::~FClassTree(&local_88);
          FClassTree::~FClassTree(&local_48);
          return;
        }
        uVar5 = 0;
        if (local_a8.Index < local_a8.ObjectArray.ArrayNum) {
          uVar5 = (uint)~local_a8.Index >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
      } while ((*(byte *)(*(longlong *)(local_a8.ObjectArray.AllocatorInstance.Data + lVar10 * 8) +
                         0xd4) & 0x80) == 0);
      lVar10 = (longlong)local_a8.Index;
      uVar6 = 0;
      uVar5 = uVar6;
      if (local_a8.Index < local_a8.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_a8.Index >> 0x1f;
      }
      iVar9 = local_a8.ObjectArray.ArrayNum;
      if (uVar5 == 0) {
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = local_a8.ObjectArray.ArrayNum;
      }
      lVar11 = (longlong)local_a8.Index;
      if ((*(uint *)(*(longlong *)(local_a8.ObjectArray.AllocatorInstance.Data + lVar10 * 8) + 0xd4)
          & 0x10000000) != 0) break;
      if (local_a8.Index < iVar9) {
        uVar6 = (uint)~local_a8.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar7 = *(UClass **)(local_a8.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
      pFVar8 = &local_88;
      for (pFVar1 = local_88.Parent; pFVar1 != (FClassTree *)0x0; pFVar1 = pFVar1->Parent) {
        pFVar8 = pFVar1;
      }
LAB_142110ccc:
      FClassTree::AddChildClass(pFVar8,pUVar7);
    }
    if (local_a8.Index < iVar9) {
      uVar6 = (uint)~local_a8.Index >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = &local_48;
    pUVar7 = *(UClass **)(local_a8.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    pFVar1 = local_48.Parent;
    if (local_48.Parent == (FClassTree *)0x0) goto LAB_142110ccc;
    do {
      pFVar8 = pFVar1;
      pFVar1 = pFVar8->Parent;
    } while (pFVar1 != (FClassTree *)0x0);
    FClassTree::AddChildClass(pFVar8,pUVar7);
  } while( true );
}

// StaticExec @ 142110fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000142113ff7) */
/* WARNING: Removing unreachable block (ram,0x000142113d76) */
/* WARNING: Removing unreachable block (ram,0x000142113c5e) */
/* WARNING: Removing unreachable block (ram,0x000142113e92) */
/* WARNING: Removing unreachable block (ram,0x00014211415c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __cdecl StaticExec(UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *this;
  UObjectBase *this_00;
  UObjectBaseUtility *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  UField *pUVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  char cVar13;
  FBoolAnnotation FVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  size_t sVar21;
  UClass *pUVar22;
  UStruct *pUVar23;
  FProperty *pFVar24;
  void *pvVar25;
  void *pvVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  FProperty *this_01;
  wchar_t *pwVar29;
  FName *pFVar30;
  FProperty *pFVar31;
  FUObjectItem *pFVar32;
  UPackage *pUVar33;
  UPackage *pUVar34;
  undefined7 extraout_var;
  UObject *pUVar35;
  FString *pFVar36;
  FGCHistory *pFVar37;
  FGCSnapshot *pFVar38;
  uint uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  UObjectBaseUtility *pUVar42;
  FArchiveShowReferences *this_02;
  FScriptContainerElement *pFVar43;
  EReferenceChainSearchMode EVar44;
  ForAnyElementType FVar45;
  ulonglong uVar46;
  FProperty *pFVar47;
  FProperty *pFVar48;
  FOutputDevice *pFVar49;
  UPackage *pUVar50;
  UPackage *pUVar51;
  uint uVar52;
  longlong lVar53;
  FField *pFVar54;
  ulonglong uVar55;
  uint uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  int iVar59;
  FScriptContainerElement *pFVar60;
  undefined1 auStackY_3f18 [32];
  wchar_t *local_3ec8;
  char local_3ec0;
  ForAnyElementType local_3eb8;
  undefined8 local_3eb0;
  FOutputDevice *local_3ea8;
  ForAnyElementType local_3ea0;
  undefined8 local_3e98;
  uint local_3e90;
  int local_3e8c;
  undefined1 local_3e88;
  char local_3e87;
  char local_3e86;
  undefined1 local_3e85;
  undefined1 local_3e84;
  FBoolAnnotation local_3e83;
  FBoolAnnotation local_3e82;
  bool local_3e81;
  UStruct *local_3e80;
  FString local_3e78;
  uint local_3e68;
  uint local_3e64;
  FString local_3e60;
  uint local_3e50;
  FString local_3e48;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_3e38;
  undefined1 local_3e28;
  undefined1 local_3e27 [4];
  undefined1 local_3e23 [3];
  UStruct *local_3e20;
  FProperty *local_3e18;
  FWeakObjectPtr local_3e10;
  FString local_3e08;
  FString local_3df8;
  FString local_3de8;
  FString local_3dd8;
  FString local_3dc8;
  FString local_3db8;
  UPackage *local_3da8;
  UPackage *local_3da0;
  ulonglong local_3d98;
  TFieldIterator<FProperty> local_3d90;
  FString local_3d78;
  void *local_3d68;
  undefined8 local_3d60;
  TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> local_3d58;
  UObject *local_3d48;
  FName local_3d40;
  FWeakObjectPtr local_3d38;
  UClass *local_3d30;
  FName local_3d28;
  FString local_3d20;
  FString local_3d10;
  UClass *local_3d00;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> local_3cf8;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_3ce8;
  TFieldIterator<UFunction> local_3cd8;
  TFieldIterator<UFunction> local_3cc0;
  TObjectPtr<UField>_u_0 local_3ca8;
  void *local_3ca0;
  undefined4 local_3c98;
  undefined2 local_3c94;
  undefined1 local_3c92;
  TObjectPtr<UField>_u_0 local_3c90;
  void *local_3c88;
  undefined4 local_3c80;
  undefined2 local_3c7c;
  undefined1 local_3c7a;
  TFieldIterator<FProperty> local_3c78;
  FString local_3c60;
  FString local_3c50;
  FString local_3c40;
  FString local_3c30;
  undefined1 *local_3c20;
  UClass *local_3c18;
  UObject *local_3c10;
  ulonglong local_3c08;
  undefined8 local_3c00;
  UClass *local_3bf8;
  UClass *local_3bf0;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> local_3be8;
  FString local_3bd8;
  FString local_3bc8;
  FString local_3bb8;
  FString local_3ba8;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> local_3b98;
  FString local_3b88;
  FString local_3b78;
  FString local_3b68;
  FString local_3b58;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> local_3b48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b38;
  longlong *local_3b18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3b10;
  undefined4 local_3af0;
  undefined4 local_3aec;
  FName local_3ae8;
  FName local_3ae0;
  FName local_3ad8;
  FName local_3ad0;
  FName local_3ac8;
  FName local_3ac0;
  FName local_3ab8;
  FName local_3ab0;
  FName local_3aa8;
  FName local_3aa0;
  FName local_3a98;
  UObject *local_3a90;
  UObject *local_3a88;
  UObject *local_3a80;
  UObject *local_3a78;
  FName local_3a70;
  FName local_3a68;
  FName local_3a60;
  FName local_3a58;
  FString local_3a50;
  wchar_t *local_3a40;
  int iStack_3a38;
  undefined4 uStack_3a34;
  FString local_3a30;
  FString local_3a20;
  FString local_3a10;
  FString local_3a00;
  FString local_39f0;
  FString local_39e0;
  wchar_t *local_39d0;
  int iStack_39c8;
  undefined4 uStack_39c4;
  FString local_39c0;
  FString local_39b0;
  FString local_39a0;
  FString local_3990;
  FString local_3980;
  FString local_3970;
  FString local_3960;
  FString local_3950;
  FString local_3940;
  FString local_3930;
  TFieldIterator<FProperty> local_3920;
  TObjectIteratorBase<1> local_3908;
  wchar_t *local_38e0;
  int iStack_38d8;
  undefined4 uStack_38d4;
  FString local_38d0;
  wchar_t *local_38c0;
  int iStack_38b8;
  undefined4 uStack_38b4;
  wchar_t *local_38b0;
  int iStack_38a8;
  undefined4 uStack_38a4;
  FString local_38a0;
  FString local_3890;
  wchar_t *local_3878;
  int iStack_3870;
  undefined4 uStack_386c;
  wchar_t *local_3868;
  int iStack_3860;
  undefined4 uStack_385c;
  wchar_t *local_3858;
  int iStack_3850;
  undefined4 uStack_384c;
  FLogScopedCategoryAndVerbosityOverride local_3848;
  FLogScopedCategoryAndVerbosityOverride local_3838;
  FLogScopedCategoryAndVerbosityOverride local_3828;
  FLogScopedCategoryAndVerbosityOverride local_3818;
  FLogScopedCategoryAndVerbosityOverride local_3808;
  FLogScopedCategoryAndVerbosityOverride local_37f8;
  TObjectIteratorBase<1> local_37e8;
  FString local_37c0;
  FString local_37b0;
  FString local_37a0;
  FString local_3790;
  TStringView<wchar_t> local_3778;
  TStringView<wchar_t> local_3768;
  FString local_3758;
  FString local_3748;
  FString local_3738;
  FString local_3728;
  FString local_3718;
  FString local_3708;
  FString local_36f8;
  FString local_36e8;
  FString local_36d8;
  FString local_36c8;
  FString local_36b8;
  FString local_36a8;
  FString local_3698;
  FString local_3688;
  FString local_3678;
  TStringView<wchar_t> local_3668;
  FString local_3658;
  FString local_3648;
  FString local_3638;
  TStringView<wchar_t> local_3628;
  TStringView<wchar_t> local_3618;
  FString local_3608;
  FString local_35f8;
  FName local_35e8 [2];
  TStringView<wchar_t> local_35d8;
  TStringView<wchar_t> local_35c8;
  TStringView<wchar_t> local_35b8;
  FString local_35a8;
  FString local_3598;
  undefined1 **local_3588;
  FScriptArrayHelper local_3580;
  FName local_3560;
  FString local_3558;
  FString local_3548;
  TObjectIteratorBase<1> local_3538;
  TObjectIteratorBase<1> local_3510;
  TObjectIteratorBase<1> local_34e8;
  TObjectIteratorBase<1> local_34c0;
  TObjectIteratorBase<1> local_3498;
  TObjectIterator<UObject> local_3470;
  TObjectIteratorBase<1> local_3448;
  longlong *local_3420;
  longlong lStack_3418;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3410;
  uint uStack_3408;
  int iStack_3404;
  int iStack_3400;
  undefined4 uStack_33fc;
  wchar_t *local_33f0;
  undefined8 uStack_33e8;
  wchar_t *local_33e0;
  undefined8 uStack_33d8;
  undefined4 local_33c4;
  undefined4 local_33b4;
  wchar_t *local_33b0;
  undefined8 uStack_33a8;
  FArchiveCountMem local_3398;
  FArchiveShowReferences local_32f8;
  FArchiveShowReferences local_3228;
  FArchiveDescribeReference local_3158;
  undefined1 local_30a8 [64];
  void *local_3068;
  undefined4 local_3060;
  undefined1 local_3058 [64];
  void *local_3018;
  undefined4 local_3010;
  ForAnyElementType local_3008;
  undefined8 local_3000;
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_2ff8;
  ForElementType<FSetElementId> local_2fb8;
  int local_2fb0;
  ForAnyElementType local_2fa8;
  undefined8 local_2fa0;
  undefined1 local_2f98 [64];
  void *local_2f58;
  undefined4 local_2f50;
  int local_2f48;
  ForAnyElementType local_2f40;
  undefined8 local_2f38;
  ForAnyElementType local_2f30;
  undefined8 local_2f28;
  ForAnyElementType local_2f20;
  undefined8 local_2f18;
  FArchiveState local_2f08;
  undefined1 local_2e78 [32];
  ForElementType<unsigned_int> local_2e58;
  int local_2e50;
  int local_2e4c;
  int local_2e48;
  int local_2e44;
  ForElementType<FSetElementId> local_2e38;
  int local_2e30;
  UClass *local_2e28;
  FReferenceChainSearch local_2e18;
  FReferenceChainSearch local_2d38;
  wchar_t local_2c58 [256];
  wchar_t local_2a58 [256];
  wchar_t local_2858 [256];
  wchar_t local_2658 [256];
  wchar_t local_2458 [256];
  wchar_t local_2258 [256];
  wchar_t local_2058 [256];
  wchar_t local_1e58 [256];
  wchar_t local_1c58 [256];
  wchar_t local_1a58 [256];
  wchar_t local_1858 [1024];
  wchar_t local_1058 [1024];
  wchar_t local_858 [1024];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_3f18;
  local_3ec8 = param_2;
  local_3ea8 = param_3;
  bVar9 = FParse::Command(&local_3ec8,L"GET",true);
  if (!bVar9) {
    bVar9 = FParse::Command(&local_3ec8,L"LISTPROPS",true);
    if (!bVar9) {
      bVar9 = FParse::Command(&local_3ec8,L"GETALL",true);
      if (bVar9) {
        pFVar24 = (FProperty *)0x0;
        bVar9 = FParse::Token(&local_3ec8,local_2658,0x100,true,L'\0');
        if (bVar9) {
          local_38c0 = local_2658;
          sVar21 = wcslen(local_2658);
          pwVar27 = local_38c0;
          iStack_38b8 = (int)sVar21;
          uVar4._4_4_ = uStack_38b4;
          uVar4._0_4_ = iStack_38b8;
          local_33e0 = local_38c0;
          uStack_33d8 = uVar4;
          pUVar22 = Z_Construct_UClass_UClass_NoRegister();
          local_35b8.DataPtr = pwVar27;
          local_35b8._8_8_ = uVar4;
          pUVar23 = (UStruct *)
                    StaticFindFirstObject(pUVar22,&local_35b8,None,Warning,L"StaticExec GETALL");
          local_3e80 = pUVar23;
          if (pUVar23 != (UStruct *)0x0) {
            FParse::Token(&local_3ec8,local_1e58,0x100,true,L'\0');
            this_01 = FindFProperty<FProperty>(pUVar23,local_1e58,Default);
            local_3d48 = (UObject *)0x0;
            local_3e18 = this_01;
            pwVar29 = TCString<wchar_t>::Strifind(local_3ec8,L"OUTER=",false);
            pwVar27 = local_3ec8;
            pUVar22 = Z_Construct_UClass_UObject_NoRegister();
            ParseObject(pwVar27,L"OUTER=",pUVar22,&local_3d48,(UObject *)0x0,Find,(bool *)0x0);
            local_3af0 = 0;
            local_3d40.ComparisonIndex.Value = 0;
            local_3d40.Number = 0;
            bVar9 = FParse::Value(local_3ec8,L"NAME=",local_1c58,0x100,true,(wchar_t **)0x0);
            if (bVar9) {
              pFVar30 = FName::FName(local_35e8,local_1c58);
              local_3d40 = *pFVar30;
            }
            if ((pwVar29 != (wchar_t *)0x0) && (local_3d48 == (UObject *)0x0)) {
              if ((byte)LogExec._0_1_ < 3) {
                return true;
              }
              FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                        (&local_3828,(FName)LogExec._4_8_,Warning);
              TCString<wchar_t>::Strifind(local_3ec8,L"OUTER=",false);
              FOutputDevice::LogfImpl(local_3ea8,L"Failed to find outer %s");
              FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
              FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride
                        (&local_3828);
              return true;
            }
            cVar12 = FParse::Command(&local_3ec8,L"SHOWDEFAULTS",true);
            local_3e86 = cVar12;
            local_3e87 = FParse::Command(&local_3ec8,L"SHOWPENDINGKILLS",true);
            cVar13 = FParse::Command(&local_3ec8,L"DETAILED",true);
            local_3ec0 = cVar13;
            pUVar22 = Z_Construct_UClass_UObject_NoRegister();
            TObjectIteratorBase<1>::TObjectIteratorBase<1>
                      (&local_3908,pUVar22,false,RF_NoFlags,Borrowed);
            pFVar31 = pFVar24;
            lVar28 = local_3908._padding_;
joined_r0x0001421121a5:
            do {
              if (lVar28 == 0) {
                LeaveCriticalSection((LPCRITICAL_SECTION)(local_3908._padding_ + 0x30));
                return true;
              }
              pUVar42 = *(UObjectBaseUtility **)(lVar28 + 8);
              if (((local_3d48 == (UObject *)0x0) ||
                  (bVar9 = UObjectBaseUtility::IsIn(pUVar42,local_3d48), bVar9)) &&
                 ((bVar9 = UObjectBaseUtility::IsTemplate(pUVar42,RF_ClassDefaultObject), !bVar9 ||
                  (cVar12 != '\0')))) {
                local_3aec = 0;
                local_3c00 = 0;
                if ((local_3d40 == (FName)0x0) ||
                   (local_3560.ComparisonIndex.Value = *(uint *)&pUVar42->field_0x18,
                   local_3560.Number = *(uint *)&pUVar42->field_0x1c, local_3560 == local_3d40)) {
                  if (local_3e87 == '\0') {
                    if ((pUVar42 == (UObjectBaseUtility *)0x0) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("Test",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                                           ,0x760,L""), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    if ((*(uint *)&pUVar42->field_0x8 >> 0x1e & 1) != 0) goto LAB_142112850;
                  }
                  iVar18 = (int)pUVar23->_padding_;
                  if ((iVar18 <= *(int *)(*(longlong *)&pUVar42->field_0x10 + 0x38)) &&
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)&pUVar42->field_0x10 + 0x30) +
                       (longlong)iVar18 * 8) == &pUVar23->_padding_)) {
                    iVar18 = (int)pFVar31;
                    if (this_01 == (FProperty *)0x0) {
                      if (cVar13 == '\0') {
                        pFVar31 = (FProperty *)(ulonglong)(iVar18 + 1);
                        UObjectBaseUtility::GetFullName(pUVar42,&local_3558,(UObject *)0x0,None);
                        FOutputDevice::LogfImpl(local_3ea8,L"%i) %s");
                        if (local_3558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(local_3558.Data.AllocatorInstance.Data);
                        }
                      }
                      else {
                        UObject::GetDetailedInfo((UObject *)pUVar42,&local_3598);
                        UObjectBaseUtility::GetFullName(pUVar42,&local_35a8,(UObject *)0x0,None);
                        pFVar31 = (FProperty *)(ulonglong)(iVar18 + 1);
                        FOutputDevice::LogfImpl(local_3ea8,L"%i) %s %s");
                        if (local_35a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(local_35a8.Data.AllocatorInstance.Data);
                        }
                        if (local_3598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(local_3598.Data.AllocatorInstance.Data);
                        }
                      }
                    }
                    else if ((this_01->ArrayDim < 2) &&
                            ((*(uint *)(this_01->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
                      local_3d78.Data.ArrayMax = 0;
                      local_3d78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_3d78.Data.ArrayNum = 0;
                      pFVar31 = pFVar24;
                      if (0 < this_01->ArrayDim) {
                        do {
                          iVar59 = (int)pFVar31;
                          pvVar25 = FProperty::ContainerPtrToValuePtrForDefaults<void>
                                              (this_01,(UStruct *)0x0,pUVar42,iVar59);
                          pvVar26 = FProperty::ContainerVoidPtrToValuePtrInternal
                                              (this_01,pUVar42,iVar59);
                          FProperty::ExportText_Direct
                                    (this_01,&local_3d78,pvVar26,pvVar25,(UObject *)pUVar42,0x20000,
                                     (UObject *)0x0);
                          pFVar31 = (FProperty *)(ulonglong)(iVar59 + 1U);
                        } while ((int)(iVar59 + 1U) < this_01->ArrayDim);
                      }
                      if (cVar13 == '\0') {
                        bVar9 = IsThisNotNull(this_01,"FField::GetName");
                        if (bVar9) {
                          FName::ToString((FName *)&this_01->_padding_,&local_3bb8);
                        }
                        else {
                          FString::FString(&local_3bb8,L"None");
                        }
                        UObjectBaseUtility::GetFullName(pUVar42,&local_37b0,(UObject *)0x0,None);
                        FOutputDevice::LogfImpl(local_3ea8,L"%i) %s.%s = %s");
                        FVar45.Data = local_3bb8.Data.AllocatorInstance.Data;
                        if (local_37b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(local_37b0.Data.AllocatorInstance.Data);
                          FVar45.Data = local_3bb8.Data.AllocatorInstance.Data;
                        }
                      }
                      else {
                        UObject::GetDetailedInfo((UObject *)pUVar42,&local_37c0);
                        bVar9 = IsThisNotNull(this_01,"FField::GetName");
                        if (bVar9) {
                          FName::ToString((FName *)&this_01->_padding_,&local_3ba8);
                        }
                        else {
                          FString::FString(&local_3ba8,L"None");
                        }
                        UObjectBaseUtility::GetFullName(pUVar42,&local_3548,(UObject *)0x0,None);
                        FOutputDevice::LogfImpl(local_3ea8,L"%i) %s.%s = %s %s");
                        if (local_3548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(local_3548.Data.AllocatorInstance.Data);
                        }
                        FVar45.Data = local_37c0.Data.AllocatorInstance.Data;
                        if (local_3ba8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(local_3ba8.Data.AllocatorInstance.Data);
                          FVar45.Data = local_37c0.Data.AllocatorInstance.Data;
                        }
                      }
                      pFVar31 = (FProperty *)(ulonglong)(iVar18 + 1);
                      if (FVar45.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(FVar45.Data);
                      }
                      pUVar23 = local_3e80;
                      if (local_3d78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_3d78.Data.AllocatorInstance.Data);
                        pUVar23 = local_3e80;
                      }
                    }
                    else {
                      pFVar31 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                          (this_01,(UObject *)pUVar42,0);
                      bVar9 = IsThisNotNull(this_01,"FField::GetName");
                      if (bVar9) {
                        FName::ToString((FName *)&this_01->_padding_,&local_3bc8);
                      }
                      else {
                        FString::FString(&local_3bc8,L"None");
                      }
                      UObjectBaseUtility::GetFullName(pUVar42,&local_37a0,(UObject *)0x0,None);
                      local_3e90 = iVar18 + 1;
                      FOutputDevice::LogfImpl(local_3ea8,L"%i) %s.%s =");
                      if (local_37a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_37a0.Data.AllocatorInstance.Data);
                      }
                      if (local_3bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_3bc8.Data.AllocatorInstance.Data);
                      }
                      iVar18 = this_01->ArrayDim;
                      pFVar48 = this_01;
                      if (iVar18 == 1) {
                        pFVar48 = pFVar24;
                        if ((*(uint *)(this_01->_padding_ + 0x18) >> 0x15 & 1) != 0) {
                          pFVar48 = this_01;
                        }
                        lVar28 = pFVar48[1]._padding_;
                        uVar19 = (**(code **)(*(longlong *)pFVar48[1]._padding_ + 0x168))();
                        FScriptArrayHelper::FScriptArrayHelper
                                  (&local_3580,Internal,(FProperty *)pFVar48[1]._padding_,pFVar31,
                                   ((FProperty *)pFVar48[1]._padding_)->ElementSize,uVar19,
                                   (EArrayPropertyFlags)lVar28);
                        pFVar31 = pFVar24;
                        if ((((local_3580.field1_0x8.FreezableArray)->ArrayNum != 0) &&
                            (pFVar31 = (FProperty *)
                                       (local_3580.field1_0x8.FreezableArray)->_padding_,
                            (local_3580.ArrayFlags & UsesMemoryImageAllocator) != None)) &&
                           (((ulonglong)pFVar31 & 1) != 0)) {
                          pFVar31 = (FProperty *)
                                    (&(local_3580.field1_0x8.HeapArray)->field_0x0 +
                                    ((longlong)pFVar31 >> 0x18));
                        }
                        iVar18 = (local_3580.field1_0x8.FreezableArray)->ArrayNum;
                        pFVar48 = (FProperty *)pFVar48[1]._padding_;
                      }
                      if (0 < iVar18) {
                        iVar59 = pFVar48->ElementSize;
                        pFVar47 = pFVar24;
                        do {
                          local_3d68 = (void *)0x0;
                          local_3d60 = 0;
                          (**(code **)(pFVar48->_padding_ + 0xe0))(pFVar48,&local_3d68,pFVar31,0);
                          if (local_3ec0 == '\0') {
                            FOutputDevice::LogfImpl(local_3ea8,L"\t%i: %s");
                          }
                          else {
                            UObject::GetDetailedInfo((UObject *)pUVar42,&local_3790);
                            FOutputDevice::LogfImpl(local_3ea8,L"\t%i: %s %s");
                            if (local_3790.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_3790.Data.AllocatorInstance.Data);
                            }
                          }
                          if (local_3d68 != (void *)0x0) {
                            FMemory::Free(local_3d68);
                          }
                          uVar19 = (int)pFVar47 + 1;
                          pFVar47 = (FProperty *)(ulonglong)uVar19;
                          pFVar31 = (FProperty *)((longlong)&pFVar31->_padding_ + (longlong)iVar59);
                          this_01 = local_3e18;
                        } while ((int)uVar19 < iVar18);
                      }
                      pFVar31 = (FProperty *)(ulonglong)local_3e90;
                      pUVar23 = local_3e80;
                    }
                  }
                }
              }
LAB_142112850:
              do {
                do {
                  bVar9 = FUObjectArray::TIterator::Advance((TIterator *)&local_3908);
                  lVar28 = local_3908._padding_;
                  cVar12 = local_3e86;
                  cVar13 = local_3ec0;
                  if (!bVar9) goto joined_r0x0001421121a5;
                  pFVar48 = pFVar24;
                  if (local_3908._padding_ != 0) {
                    pFVar48 = *(FProperty **)(local_3908._padding_ + 8);
                  }
                } while ((local_3908.ExclusionFlags & (EObjectFlags)pFVar48->_padding_) !=
                         RF_NoFlags);
                pUVar22 = Z_Construct_UClass_UObject_NoRegister();
                if (local_3908.Class != pUVar22) {
                  iVar18 = (int)(local_3908.Class)->_padding_;
                  if ((*(int *)(pFVar48->_padding_ + 0x38) < iVar18) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(pFVar48->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
                      &(local_3908.Class)->_padding_)) goto LAB_142112850;
                }
                pFVar32 = FUObjectArray::IndexToObject
                                    (&GUObjectArray,*(int *)((longlong)&pFVar48->_padding_ + 4));
                cVar12 = local_3e86;
                cVar13 = local_3ec0;
              } while ((local_3908.InternalExclusionFlags &
                       (EInternalObjectFlags)
                       ((ulonglong)(pFVar32->field0_0x0).FlagsAndRefCount >> 0x20)) != Borrowed);
            } while( true );
          }
        }
        if ((byte)LogExec._0_1_ < 3) {
          return true;
        }
        FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                  (&local_3838,(FName)LogExec._4_8_,Warning);
        FOutputDevice::LogfImpl(param_3,L"Unrecognized class %s");
        FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
        FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_3838)
        ;
        return true;
      }
      bVar9 = FParse::Command(&local_3ec8,L"SET",true);
      bVar10 = true;
      if (!bVar9) {
        bVar9 = FParse::Command(&local_3ec8,L"SETNOPEC",true);
        if (!bVar9) {
          bVar9 = FParse::Command(&local_3ec8,L"LISTFUNCS",true);
          if (bVar9) {
            bVar9 = FParse::Token(&local_3ec8,local_2c58,0x100,true,L'\0');
            if (!bVar9) {
              return false;
            }
            sVar21 = wcslen(local_2c58);
            local_39d0 = local_2c58;
            iStack_39c8 = (int)sVar21;
            uStack_39c4 = local_33b4;
            pUVar22 = Z_Construct_UClass_UClass_NoRegister();
            local_3778._12_4_ = uStack_39c4;
            local_3778.Size = iStack_39c8;
            local_3778.DataPtr = local_39d0;
            pUVar23 = (UStruct *)
                      StaticFindFirstObject
                                (pUVar22,&local_3778,None,Warning,L"StaticExec LISTFUNCS");
            if (pUVar23 != (UStruct *)0x0) {
              FOutputDevice::LogfImpl
                        (param_3,L"Listing functions introduced in class %s (class flags = 0x%08X)")
              ;
              local_3cd8.Field = (pUVar23->Children).field0_0x0.DebugPtr;
              local_3cd8.InterfaceIndex = -1;
              local_3cd8.bIncludeSuper = true;
              local_3cd8.bIncludeDeprecated = true;
              local_3cd8.bIncludeInterface = false;
              local_3cd8.Struct = pUVar23;
              TFieldIterator<UFunction>::IterateToNext(&local_3cd8);
              if (local_3cd8.Field == (UField *)0x0) {
                return false;
              }
              do {
                pUVar8 = local_3cd8.Field;
                local_3ac8 = (FName)(local_3cd8.Field)->_padding_;
                FName::ToString(&local_3ac8,&local_39c0);
                FOutputDevice::LogfImpl(param_3,L"Function %s");
                if (local_39c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_39c0.Data.AllocatorInstance.Data);
                }
                local_3cd8.Field = (pUVar8->Next).field0_0x0.DebugPtr;
                TFieldIterator<UFunction>::IterateToNext(&local_3cd8);
              } while (local_3cd8.Field != (UField *)0x0);
              return false;
            }
            FOutputDevice::LogfImpl(param_3,L"Could not find any classes named %s");
            return false;
          }
          bVar9 = FParse::Command(&local_3ec8,L"LISTFUNC",true);
          if (bVar9) {
            uVar19 = 0;
            bVar9 = FParse::Token(&local_3ec8,local_2058,0x100,true,L'\0');
            if (!bVar9) {
              return true;
            }
            bVar9 = FParse::Token(&local_3ec8,local_1a58,0x100,true,L'\0');
            if (!bVar9) {
              return true;
            }
            local_38b0 = local_2058;
            sVar21 = wcslen(local_2058);
            pwVar27 = local_38b0;
            iStack_38a8 = (int)sVar21;
            uVar5._4_4_ = uStack_38a4;
            uVar5._0_4_ = iStack_38a8;
            local_33b0 = local_38b0;
            uStack_33a8 = uVar5;
            pUVar22 = Z_Construct_UClass_UClass_NoRegister();
            local_3768.DataPtr = pwVar27;
            local_3768._8_8_ = uVar5;
            local_3cc0.Struct =
                 (UStruct *)
                 StaticFindFirstObject(pUVar22,&local_3768,None,Warning,L"StaticExec LISTFUNC");
            if (local_3cc0.Struct == (UStruct *)0x0) {
              return true;
            }
            FName::FName(&local_3ac0,local_1a58,FNAME_Find);
            if (local_3ac0 == (FName)0x0) {
              return true;
            }
            local_3cc0.Field = ((local_3cc0.Struct)->Children).field0_0x0.DebugPtr;
            local_3cc0.InterfaceIndex = -1;
            local_3cc0.bIncludeSuper = true;
            local_3cc0.bIncludeDeprecated = true;
            local_3cc0.bIncludeInterface = false;
            TFieldIterator<UFunction>::IterateToNext(&local_3cc0);
            if (local_3cc0.Field == (UField *)0x0) {
              return true;
            }
            while (pUVar8 = local_3cc0.Field, (FName)(local_3cc0.Field)->_padding_ != local_3ac0) {
              local_3cc0.Field = ((local_3cc0.Field)->Next).field0_0x0.DebugPtr;
              TFieldIterator<UFunction>::IterateToNext(&local_3cc0);
              if (local_3cc0.Field == (UField *)0x0) {
                return true;
              }
            }
            if (local_3cc0.Field == (UField *)0x0) {
              return true;
            }
            local_3ab8 = (FName)(local_3cc0.Field)->_padding_;
            FName::ToString(&local_3ab8,&local_39b0);
            FOutputDevice::LogfImpl(param_3,L"Processing function %s");
            if (local_39b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_39b0.Data.AllocatorInstance.Data);
            }
            if (pUVar8[1]._padding_ != 0) {
              FOutputDevice::Log(param_3,L"  Has super function (overrides a base class function)");
            }
            local_3cf8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3cf8.ArrayNum = 0;
            local_3cf8.ArrayMax = 0;
            ParseFunctionFlags((uint)pUVar8[3]._padding_,&local_3cf8);
            if (0 < local_3cf8.ArrayNum) {
              do {
                uVar16 = 0;
                if ((int)uVar19 < local_3cf8.ArrayNum) {
                  uVar16 = ~uVar19 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar9 = FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar2 = (code *)swi(3);
                  uVar11 = (*pcVar2)();
                  return (bool)uVar11;
                }
                FOutputDevice::LogfImpl(param_3,L"  Flag %s");
                uVar19 = uVar19 + 1;
              } while ((int)uVar19 < local_3cf8.ArrayNum);
            }
            FOutputDevice::LogfImpl
                      (param_3,L"  %d parameters taking up %d bytes, with return value at offset %d"
                      );
            local_3ca0 = (void *)pUVar8[1]._padding_;
            local_3ca8.DebugPtr = pUVar8;
            local_3c98 = 0xffffffff;
            local_3c94 = 0x101;
            local_3c92 = 0;
            TFieldIterator<FProperty>::IterateToNext
                      ((TFieldIterator<FProperty> *)&local_3ca8.ObjectPtr);
            pvVar25 = local_3ca0;
            while (local_3ca0 = pvVar25, pvVar25 != (void *)0x0) {
              if ((*(byte *)((longlong)pvVar25 + 0x38) & 0x80) != 0) {
                FName::ToString(*(FName **)((longlong)pvVar25 + 8),&local_3990);
                bVar9 = IsThisNotNull(pvVar25,"FField::GetName");
                if (bVar9) {
                  FName::ToString((FName *)((longlong)pvVar25 + 0x20),&local_3bd8);
                }
                else {
                  FString::FString(&local_3bd8,L"None");
                }
                FString::PrintfImpl(&local_39a0,L"%s at offset %d; %dx %d bytes of type %s");
                param_3 = local_3ea8;
                FOutputDevice::LogfImpl(local_3ea8,L"    Parameter %s");
                if (local_39a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_39a0.Data.AllocatorInstance.Data);
                }
                if (local_3bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3bd8.Data.AllocatorInstance.Data);
                }
                if (local_3990.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3990.Data.AllocatorInstance.Data);
                }
                ParsePropertyFlags(&local_3be8,*(EPropertyFlags *)((longlong)pvVar25 + 0x38));
                iVar18 = local_3be8.ArrayNum;
                uVar41 = (ulonglong)local_3be8.ArrayNum;
                pFVar60 = local_3be8.AllocatorInstance.Data + uVar41 * 8;
                FVar45.Data = local_3be8.AllocatorInstance.Data;
                while( true ) {
                  if ((uint)uVar41 != iVar18) {
                    `TCheckedPointerIterator<wchar_t_const_*,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_3e28);
                  }
                  if (FVar45.Data == pFVar60) break;
                  FOutputDevice::LogfImpl(param_3,L"      Flag %s");
                  uVar41 = (ulonglong)(uint)local_3be8.ArrayNum;
                  FVar45.Data = FVar45.Data + 8;
                }
                if (local_3be8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3be8.AllocatorInstance.Data);
                }
              }
              local_3ca0 = *(void **)((longlong)pvVar25 + 0x18);
              TFieldIterator<FProperty>::IterateToNext
                        ((TFieldIterator<FProperty> *)&local_3ca8.ObjectPtr);
              pvVar25 = local_3ca0;
            }
            FOutputDevice::LogfImpl(param_3,L"  Total stack size %d bytes");
            local_3c88 = (void *)pUVar8[1]._padding_;
            local_3c90.DebugPtr = pUVar8;
            local_3c80 = 0xffffffff;
            local_3c7c = 0x101;
            local_3c7a = 0;
            TFieldIterator<FProperty>::IterateToNext
                      ((TFieldIterator<FProperty> *)&local_3c90.ObjectPtr);
            local_3a50.Data.AllocatorInstance.Data = local_3cf8.AllocatorInstance.Data;
            pvVar25 = local_3c88;
            while (local_3cf8.AllocatorInstance.Data = local_3a50.Data.AllocatorInstance.Data,
                  local_3c88 = pvVar25, pvVar25 != (void *)0x0) {
              if ((*(byte *)((longlong)pvVar25 + 0x38) & 0x80) == 0) {
                FName::ToString(*(FName **)((longlong)pvVar25 + 8),&local_3970);
                bVar9 = IsThisNotNull(pvVar25,"FField::GetName");
                if (bVar9) {
                  FName::ToString((FName *)((longlong)pvVar25 + 0x20),&local_3b58);
                }
                else {
                  FString::FString(&local_3b58,L"None");
                }
                FString::PrintfImpl(&local_3980,L"%s at offset %d; %dx %d bytes of type %s");
                param_3 = local_3ea8;
                FOutputDevice::LogfImpl(local_3ea8,L"    Local %s");
                if (local_3980.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3980.Data.AllocatorInstance.Data);
                }
                if (local_3b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b58.Data.AllocatorInstance.Data);
                }
                if (local_3970.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3970.Data.AllocatorInstance.Data);
                }
                ParsePropertyFlags(&local_3b48,*(EPropertyFlags *)((longlong)pvVar25 + 0x38));
                iVar18 = local_3b48.ArrayNum;
                uVar41 = (ulonglong)local_3b48.ArrayNum;
                pFVar60 = local_3b48.AllocatorInstance.Data + uVar41 * 8;
                FVar45.Data = local_3b48.AllocatorInstance.Data;
                while( true ) {
                  if ((uint)uVar41 != iVar18) {
                    `TCheckedPointerIterator<wchar_t_const_*,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_3e23);
                  }
                  if (FVar45.Data == pFVar60) break;
                  FOutputDevice::LogfImpl(param_3,L"      Flag %s");
                  uVar41 = (ulonglong)(uint)local_3b48.ArrayNum;
                  FVar45.Data = FVar45.Data + 8;
                }
                if (local_3b48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b48.AllocatorInstance.Data);
                }
              }
              local_3c88 = *(void **)((longlong)pvVar25 + 0x18);
              TFieldIterator<FProperty>::IterateToNext
                        ((TFieldIterator<FProperty> *)&local_3c90.ObjectPtr);
              local_3a50.Data.AllocatorInstance.Data = local_3cf8.AllocatorInstance.Data;
              pvVar25 = local_3c88;
            }
            if (0 < (int)pUVar8[2]._padding_) {
              FOutputDevice::LogfImpl(param_3,L"  Has %d bytes of script bytecode");
              local_3a50.Data.AllocatorInstance.Data = local_3cf8.AllocatorInstance.Data;
            }
          }
          else {
            bVar9 = FParse::Command(&local_3ec8,L"OBJ",true);
            if (bVar9) {
              bVar9 = FParse::Command(&local_3ec8,L"CYCLES",true);
              if (bVar9) {
                uVar55 = 0;
                uVar19 = 0;
                local_30a8._44_4_ = 0x80;
                local_30a8._0_8_ = 0;
                local_30a8._8_8_ = 0;
                local_30a8._32_8_ = 0;
                local_30a8._40_4_ = 0;
                local_30a8._52_4_ = 0;
                local_3068 = (void *)0x0;
                local_3060 = 0;
                local_3058._0_8_ = 0;
                local_3058._8_8_ = 0;
                local_3058._32_8_ = 0;
                local_3058._40_4_ = 0;
                local_3058._52_4_ = 0;
                local_3018 = (void *)0x0;
                local_3010 = 0;
                local_3008.Data = (FScriptContainerElement *)0x0;
                local_3000._0_4_ = 0;
                local_3000._4_4_ = 0;
                local_2ff8._0_8_ = 0;
                local_2ff8._8_8_ = 0;
                local_2ff8._32_8_ = 0;
                local_2ff8._40_4_ = 0;
                local_2ff8._52_4_ = 0;
                local_2fb8 = (ForElementType<FSetElementId>)0x0;
                local_2fb0 = 0;
                local_2fa8.Data = (FScriptContainerElement *)0x0;
                local_2fa0._0_4_ = 0;
                local_2fa0._4_4_ = 0;
                local_2f98._0_8_ = 0;
                local_2f98._8_8_ = 0;
                local_2f98._32_8_ = 0;
                local_2f98._40_4_ = 0;
                local_2f98._52_4_ = 0;
                local_2f58 = (void *)0x0;
                local_2f50 = 0;
                local_2f40.Data = (FScriptContainerElement *)0x0;
                local_2f38._0_4_ = 0;
                local_2f38._4_4_ = 0;
                local_2f30.Data = (FScriptContainerElement *)0x0;
                local_2f28._0_4_ = 0;
                local_2f28._4_4_ = 0;
                local_2f20.Data = (FScriptContainerElement *)0x0;
                local_2f18._0_4_ = 0;
                local_2f18._4_4_ = 0;
                local_30a8._48_4_ = 0xffffffff;
                local_3058._44_4_ = 0x80;
                local_3058._48_4_ = 0xffffffff;
                local_2ff8._44_4_ = 0x80;
                local_2ff8._48_4_ = 0xffffffff;
                local_2f98._44_4_ = 0x80;
                local_2f98._48_4_ = 0xffffffff;
                local_2f48 = 1;
                FFindStronglyConnected::FindAllCycles((FFindStronglyConnected *)local_30a8);
                local_3e50 = 0;
                local_3e68 = 0;
                local_3e64 = 0;
                uVar40 = uVar55;
                uVar46 = uVar55;
                uVar57 = uVar55;
                uVar58 = uVar55;
                uVar41 = uVar55;
                iVar18 = (int)local_2f28;
                if (0 < (int)local_2f28) {
                  do {
                    uVar17 = (uint)uVar40;
                    uVar16 = 0;
                    if ((int)uVar17 < iVar18) {
                      uVar16 = ~uVar17 >> 0x1f;
                    }
                    if (uVar16 == 0) {
                      bVar9 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar9) {
                        pcVar2 = (code *)swi(3);
                        uVar11 = (*pcVar2)();
                        return (bool)uVar11;
                      }
                      uVar58 = (ulonglong)local_3e64;
                      uVar57 = (ulonglong)local_3e68;
                      iVar18 = (int)local_2f28;
                    }
                    uVar16 = *(uint *)(local_2f30.Data + uVar46 + 8);
                    if ((int)uVar41 < (int)uVar16) {
                      uVar41 = (ulonglong)uVar16;
                    }
                    if (1 < (int)uVar16) {
                      local_3e68 = (int)uVar57 + uVar16;
                      uVar57 = (ulonglong)local_3e68;
                      local_3e64 = (int)uVar58 + 1;
                      uVar58 = (ulonglong)local_3e64;
                    }
                    uVar40 = (ulonglong)(uVar17 + 1);
                    uVar46 = uVar46 + 0x10;
                  } while ((int)(uVar17 + 1) < iVar18);
                  local_3e50 = (uint)uVar41;
                }
                uVar16 = local_3e50;
                uVar17 = (uint)uVar41;
                do {
                  if ((int)uVar17 < 2) {
                    local_3e50 = uVar16;
                    FOutputDevice::Log(param_3,
                                       L"------------------------------------------------------------------------"
                                      );
                    FOutputDevice::LogfImpl(param_3,L"%d total objects, %d total edges.");
                    FOutputDevice::LogfImpl
                              (param_3,
                               L"Non-permanent: %d objects, %d edges, %d strongly connected components, %d objects are included in cycles."
                              );
                    DestructItems<TArray<UObject_*,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)local_2f20.Data,
                               (int)local_2f18);
                    if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)local_2f20.Data !=
                        (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_2f20.Data);
                    }
                    DestructItems<TArray<UObject_*,TSizedDefaultAllocator<32>_>,int>
                              ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)local_2f30.Data,
                               (int)local_2f28);
                    if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)local_2f30.Data !=
                        (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
                      FMemory::Free(local_2f30.Data);
                    }
                    if (local_2f40.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2f40.Data);
                    }
                    local_2f50 = 0;
                    if (local_2f58 != (void *)0x0) {
                      FMemory::Free(local_2f58);
                    }
                    TSparseArray<TSparseSetElement<TTuple<UObject_*,FFindStronglyConnected::NodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::
                    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,FFindStronglyConnected::NodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,FFindStronglyConnected::NodeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_2f98);
                    if (local_2fa8.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_2fa8.Data);
                    }
                    local_2fb0 = 0;
                    if (local_2fb8 != (ForElementType<FSetElementId>)0x0) {
                      FMemory::Free((void *)local_2fb8);
                    }
                    TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::
                    ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              (&local_2ff8);
                    if (local_3008.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3008.Data);
                    }
                    local_3010 = 0;
                    if (local_3018 != (void *)0x0) {
                      FMemory::Free(local_3018);
                    }
                    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::
                    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_3058);
                    local_3060 = 0;
                    if (local_3068 != (void *)0x0) {
                      FMemory::Free(local_3068);
                    }
                    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::
                    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)local_30a8);
                    return true;
                  }
                  local_3e50 = (uint)uVar41;
                  local_3e90 = 0;
                  if (0 < iVar18) {
                    local_3e20 = (UStruct *)0x0;
                    uVar41 = uVar55;
                    local_3e50 = uVar16;
                    do {
                      pUVar23 = local_3e20;
                      uVar17 = (uint)uVar41;
                      uVar56 = 0;
                      uVar16 = uVar56;
                      if ((int)uVar17 < iVar18) {
                        uVar16 = ~uVar17 >> 0x1f;
                      }
                      if (uVar16 == 0) {
                        bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          );
                        if (bVar9) {
                          pcVar2 = (code *)swi(3);
                          uVar11 = (*pcVar2)();
                          return (bool)uVar11;
                        }
                        iVar18 = (int)local_2f28;
                      }
                      pFVar60 = local_2f30.Data + (longlong)pUVar23;
                      if (*(uint *)(pFVar60 + 8) == local_3e50) {
                        FOutputDevice::Log(local_3ea8,
                                           L"------------------------------------------------------------------------"
                                          );
                        pFVar49 = local_3ea8;
                        iVar18 = *(int *)(pFVar60 + 8);
                        uVar41 = uVar55;
                        uVar40 = uVar55;
                        uVar16 = uVar17;
                        if (0 < iVar18) {
                          do {
                            uVar52 = (uint)uVar41;
                            uVar16 = uVar56;
                            if ((int)uVar52 < iVar18) {
                              uVar16 = ~uVar52 >> 0x1f;
                            }
                            if ((uVar16 == 0) &&
                               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar9)) {
                              pcVar2 = (code *)swi(3);
                              uVar11 = (*pcVar2)();
                              return (bool)uVar11;
                            }
                            UObjectBaseUtility::GetFullName
                                      (*(UObjectBaseUtility **)(*(longlong *)pFVar60 + uVar40),
                                       &local_3758,(UObject *)0x0,None);
                            FOutputDevice::LogfImpl(pFVar49,L"%s");
                            if (local_3758.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_3758.Data.AllocatorInstance.Data);
                            }
                            iVar18 = *(int *)(pFVar60 + 8);
                            uVar41 = (ulonglong)(uVar52 + 1);
                            pUVar23 = local_3e20;
                            uVar40 = uVar40 + 8;
                            uVar16 = local_3e90;
                          } while ((int)(uVar52 + 1) < iVar18);
                        }
                        FOutputDevice::Log(local_3ea8,L"    simple cycle ------------------");
                        uVar52 = uVar56;
                        if ((int)uVar16 < (int)local_2f18) {
                          uVar52 = ~uVar17 >> 0x1f;
                        }
                        if ((uVar52 == 0) &&
                           (bVar9 = FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar9)) {
                          pcVar2 = (code *)swi(3);
                          uVar11 = (*pcVar2)();
                          return (bool)uVar11;
                        }
                        pFVar60 = local_2f20.Data + (longlong)pUVar23;
                        iVar18 = *(int *)(pFVar60 + 8);
                        uVar17 = uVar16;
                        if (0 < iVar18) {
                          local_3e18 = (FProperty *)0x0;
                          local_3c08 = 1;
                          uVar41 = uVar55;
                          do {
                            pFVar24 = local_3e18;
                            uVar16 = (uint)uVar41;
                            uVar17 = uVar16 + 1;
                            local_3e80 = (UStruct *)CONCAT44(local_3e80._4_4_,uVar17);
                            local_3d98 = local_3c08;
                            if (iVar18 <= (int)uVar17) {
                              uVar17 = uVar19;
                              local_3d98 = uVar55;
                            }
                            uVar52 = uVar56;
                            if ((int)uVar16 < iVar18) {
                              uVar52 = ~uVar16 >> 0x1f;
                            }
                            if ((uVar52 == 0) &&
                               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar9)) {
                              pcVar2 = (code *)swi(3);
                              uVar11 = (*pcVar2)();
                              return (bool)uVar11;
                            }
                            UObjectBaseUtility::GetFullName
                                      (*(UObjectBaseUtility **)
                                        ((longlong)pFVar24 + *(longlong *)pFVar60),&local_3738,
                                       (UObject *)0x0,None);
                            uVar52 = uVar19;
                            if ((int)uVar17 < *(int *)(pFVar60 + 8)) {
                              uVar52 = ~uVar17 >> 0x1f;
                            }
                            if ((uVar52 == 0) &&
                               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar9)) {
                              pcVar2 = (code *)swi(3);
                              uVar11 = (*pcVar2)();
                              return (bool)uVar11;
                            }
                            local_3d98 = local_3d98 * 8;
                            UObjectBaseUtility::GetFullName
                                      (*(UObjectBaseUtility **)(*(longlong *)pFVar60 + local_3d98),
                                       &local_3748,(UObject *)0x0,None);
                            FOutputDevice::LogfImpl(local_3ea8,L"    %s -> %s");
                            if (local_3748.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_3748.Data.AllocatorInstance.Data);
                            }
                            if (local_3738.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_3738.Data.AllocatorInstance.Data);
                            }
                            uVar52 = uVar19;
                            if ((int)uVar16 < *(int *)(pFVar60 + 8)) {
                              uVar52 = ~uVar16 >> 0x1f;
                            }
                            if ((uVar52 == 0) &&
                               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar9)) {
                              pcVar2 = (code *)swi(3);
                              uVar11 = (*pcVar2)();
                              return (bool)uVar11;
                            }
                            pFVar24 = local_3e18;
                            pUVar35 = *(UObject **)((longlong)local_3e18 + *(longlong *)pFVar60);
                            uVar16 = uVar19;
                            if ((int)uVar17 < *(int *)(pFVar60 + 8)) {
                              uVar16 = ~uVar17 >> 0x1f;
                            }
                            if ((uVar16 == 0) &&
                               (bVar9 = FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar9)) {
                              pcVar2 = (code *)swi(3);
                              uVar11 = (*pcVar2)();
                              return (bool)uVar11;
                            }
                            FArchiveDescribeReference::FArchiveDescribeReference
                                      (&local_3158,*(UObject **)(*(longlong *)pFVar60 + local_3d98),
                                       pUVar35,local_3ea8);
                            FArchive::~FArchive((FArchive *)&local_3158);
                            local_3e18 = (FProperty *)((longlong)pFVar24 + 8);
                            uVar41 = (ulonglong)local_3e80 & 0xffffffff;
                            local_3c08 = local_3c08 + 1;
                            iVar18 = *(int *)(pFVar60 + 8);
                            uVar17 = local_3e90;
                          } while ((int)local_3e80 < iVar18);
                        }
                        pUVar23 = local_3e20;
                        iVar18 = (int)local_2f28;
                      }
                      local_3e90 = uVar17 + 1;
                      uVar41 = (ulonglong)local_3e90;
                      local_3e20 = (UStruct *)((longlong)pUVar23 + 0x10);
                    } while ((int)local_3e90 < iVar18);
                  }
                  uVar16 = local_3e50 - 1;
                  uVar41 = (ulonglong)uVar16;
                  param_3 = local_3ea8;
                  uVar17 = uVar16;
                } while( true );
              }
              bVar9 = FParse::Command(&local_3ec8,L"VERIFYCOMPONENTS",true);
              if (bVar9) {
                FOutputDevice::Log(param_3,
                                   L"------------------------------------------------------------------------------"
                                  );
                pUVar22 = Z_Construct_UClass_UObject_NoRegister();
                TObjectIteratorBase<1>::TObjectIteratorBase<1>
                          (&local_3538,pUVar22,false,RF_NoFlags,Borrowed);
                pUVar34 = GObjTransientPkg;
                do {
                  GObjTransientPkg = pUVar34;
                  if (local_3538._padding_ == 0) {
                    LeaveCriticalSection((LPCRITICAL_SECTION)(local_3538._padding_ + 0x30));
                    FOutputDevice::Log(param_3,
                                       L"------------------------------------------------------------------------------"
                                      );
                    return true;
                  }
                  this_00 = *(UObjectBase **)(local_3538._padding_ + 8);
                  pUVar33 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
                  if (((pUVar33 != pUVar34) &&
                      (-1 < (int)((this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr)->ClassFlags
                      )) && ((this_00->ObjectFlags >> 0x1e & 1) == 0)) {
                    local_3ce8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_3ce8.ArrayNum = 0;
                    local_3ce8.ArrayMax = 0;
                    GetObjectsWithOuter(this_00,&local_3ce8,true,RF_NoFlags,Borrowed);
                    uVar40 = (ulonglong)local_3ce8.ArrayNum;
                    local_3eb8.Data = (FScriptContainerElement *)0x0;
                    local_3eb0 = 0;
                    local_3e80 = (UStruct *)CONCAT44(local_3e80._4_4_,local_3ce8.ArrayNum);
                    pFVar24 = (FProperty *)(local_3ce8.AllocatorInstance.Data + uVar40 * 8);
                    uVar41 = uVar40;
                    FVar45.Data = local_3ce8.AllocatorInstance.Data;
                    local_3e18 = pFVar24;
                    while( true ) {
                      if ((int)uVar40 != (int)uVar41) {
                        local_3e85 = 0;
                        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(&local_3e85);
                      }
                      if ((FProperty *)FVar45.Data == pFVar24) break;
                      pUVar42 = *(UObjectBaseUtility **)FVar45.Data;
                      local_3ab0.ComparisonIndex.Value = *(uint *)&pUVar42->field_0x18;
                      local_3ab0.Number = *(uint *)&pUVar42->field_0x1c;
                      pUVar1 = *(UObjectBaseUtility **)&pUVar42->field_0x10;
                      FName::ToString(&local_3ab0,&local_3e08);
                      if ((*(uint *)&pUVar42->field_0x8 >> 0x1e & 1) == 0) {
                        if (*(int *)&pUVar1[5].field_0xc < 0) {
                          FString::PrintfImpl(&local_3df8,L"  - %s has a stale class");
                          if (((local_3eb8.Data <= (FScriptContainerElement *)&local_3df8) &&
                              ((FScriptContainerElement *)&local_3df8 <
                               local_3eb8.Data + (longlong)local_3eb0._4_4_ * 0x10)) &&
                             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar9)) {
                            pcVar2 = (code *)swi(3);
                            uVar11 = (*pcVar2)();
                            return (bool)uVar11;
                          }
                          if ((int)local_3eb0 == local_3eb0._4_4_) {
                            iVar18 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x810,&local_3eb8,(int *)((longlong)&local_3eb0 + 4)
                                               );
                            pFVar60 = local_3eb8.Data + (longlong)iVar18 * 0x10;
                            local_3eb0 = CONCAT44(local_3eb0._4_4_,iVar18 + 1);
                          }
                          else {
                            pFVar60 = local_3eb8.Data + (longlong)(int)local_3eb0 * 0x10;
                            local_3eb0 = CONCAT44(local_3eb0._4_4_,(int)local_3eb0 + 1);
                          }
                          *(undefined8 *)pFVar60 = 0;
                          *(FScriptContainerElement **)pFVar60 =
                               local_3df8.Data.AllocatorInstance.Data;
                          local_3df8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          *(int *)(pFVar60 + 8) = local_3df8.Data.ArrayNum;
                          *(int *)(pFVar60 + 0xc) = local_3df8.Data.ArrayMax;
                          local_3df8.Data.ArrayNum = 0;
                          local_3df8.Data.ArrayMax = 0;
                        }
                        pUVar34 = GObjTransientPkg;
                        pUVar33 = UObjectBaseUtility::GetOutermost(pUVar1);
                        if (pUVar33 == pUVar34) {
                          FString::PrintfImpl(&local_3de8,
                                              L"  - %s has a class in the transient package");
                          if (((local_3eb8.Data <= (FScriptContainerElement *)&local_3de8) &&
                              ((FScriptContainerElement *)&local_3de8 <
                               local_3eb8.Data + (longlong)local_3eb0._4_4_ * 0x10)) &&
                             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar9)) {
                            pcVar2 = (code *)swi(3);
                            uVar11 = (*pcVar2)();
                            return (bool)uVar11;
                          }
                          if ((int)local_3eb0 == local_3eb0._4_4_) {
                            iVar18 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x810,&local_3eb8,(int *)((longlong)&local_3eb0 + 4)
                                               );
                            pFVar60 = local_3eb8.Data + (longlong)iVar18 * 0x10;
                            local_3eb0 = CONCAT44(local_3eb0._4_4_,iVar18 + 1);
                          }
                          else {
                            pFVar60 = local_3eb8.Data + (longlong)(int)local_3eb0 * 0x10;
                            local_3eb0 = CONCAT44(local_3eb0._4_4_,(int)local_3eb0 + 1);
                          }
                          *(undefined8 *)pFVar60 = 0;
                          *(FScriptContainerElement **)pFVar60 =
                               local_3de8.Data.AllocatorInstance.Data;
                          local_3de8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          *(int *)(pFVar60 + 8) = local_3de8.Data.ArrayNum;
                          *(int *)(pFVar60 + 0xc) = local_3de8.Data.ArrayMax;
                          local_3de8.Data.ArrayNum = 0;
                          local_3de8.Data.ArrayMax = 0;
                        }
                        pUVar34 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
                        pUVar33 = UObjectBaseUtility::GetOutermost(pUVar42);
                        if (pUVar33 != pUVar34) {
                          FString::PrintfImpl(&local_3dd8,
                                              L"  - %s has a different outer than its parent");
                          if (((local_3eb8.Data <= (FScriptContainerElement *)&local_3dd8) &&
                              ((FScriptContainerElement *)&local_3dd8 <
                               local_3eb8.Data + (longlong)local_3eb0._4_4_ * 0x10)) &&
                             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar9)) {
                            pcVar2 = (code *)swi(3);
                            uVar11 = (*pcVar2)();
                            return (bool)uVar11;
                          }
                          if ((int)local_3eb0 == local_3eb0._4_4_) {
                            iVar18 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x810,&local_3eb8,(int *)((longlong)&local_3eb0 + 4)
                                               );
                            pFVar60 = local_3eb8.Data + (longlong)iVar18 * 0x10;
                            local_3eb0 = CONCAT44(local_3eb0._4_4_,iVar18 + 1);
                          }
                          else {
                            pFVar60 = local_3eb8.Data + (longlong)(int)local_3eb0 * 0x10;
                            local_3eb0 = CONCAT44(local_3eb0._4_4_,(int)local_3eb0 + 1);
                          }
                          *(undefined8 *)pFVar60 = 0;
                          *(FScriptContainerElement **)pFVar60 =
                               local_3dd8.Data.AllocatorInstance.Data;
                          local_3dd8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          *(int *)(pFVar60 + 8) = local_3dd8.Data.ArrayNum;
                          *(int *)(pFVar60 + 0xc) = local_3dd8.Data.ArrayMax;
                          local_3dd8.Data.ArrayNum = 0;
                          local_3dd8.Data.ArrayMax = 0;
                        }
                        local_3aa8.ComparisonIndex.Value = *(uint *)&pUVar42->field_0x18;
                        local_3aa8.Number = *(uint *)&pUVar42->field_0x1c;
                        FName::ToString(&local_3aa8,&local_38a0);
                        iVar18 = FString::Find(&local_38a0,L"TRASH_",6,IgnoreCase,FromStart,-1);
                        if (local_38a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(local_38a0.Data.AllocatorInstance.Data);
                        }
                        if (iVar18 != -1) {
                          FString::PrintfImpl(&local_3dc8,L"  - %s is TRASH\'d");
                          if (((local_3eb8.Data <= (FScriptContainerElement *)&local_3dc8) &&
                              ((FScriptContainerElement *)&local_3dc8 <
                               local_3eb8.Data + (longlong)local_3eb0._4_4_ * 0x10)) &&
                             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar9)) {
                            pcVar2 = (code *)swi(3);
                            uVar11 = (*pcVar2)();
                            return (bool)uVar11;
                          }
                          if ((int)local_3eb0 == local_3eb0._4_4_) {
                            iVar18 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x810,&local_3eb8,(int *)((longlong)&local_3eb0 + 4)
                                               );
                            pFVar60 = local_3eb8.Data + (longlong)iVar18 * 0x10;
                            local_3eb0 = CONCAT44(local_3eb0._4_4_,iVar18 + 1);
                          }
                          else {
                            pFVar60 = local_3eb8.Data + (longlong)(int)local_3eb0 * 0x10;
                            local_3eb0 = CONCAT44(local_3eb0._4_4_,(int)local_3eb0 + 1);
                          }
                          *(undefined8 *)pFVar60 = 0;
                          *(FScriptContainerElement **)pFVar60 =
                               local_3dc8.Data.AllocatorInstance.Data;
                          local_3dc8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          *(int *)(pFVar60 + 8) = local_3dc8.Data.ArrayNum;
                          *(int *)(pFVar60 + 0xc) = local_3dc8.Data.ArrayMax;
                          local_3dc8.Data.ArrayNum = 0;
                          local_3dc8.Data.ArrayMax = 0;
                        }
                        local_3aa0.ComparisonIndex.Value = *(uint *)&pUVar42->field_0x18;
                        local_3aa0.Number = *(uint *)&pUVar42->field_0x1c;
                        FName::ToString(&local_3aa0,&local_3890);
                        iVar18 = FString::Find(&local_3890,L"REINST_",7,IgnoreCase,FromStart,-1);
                        if (local_3890.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(local_3890.Data.AllocatorInstance.Data);
                        }
                        if (iVar18 != -1) {
                          FString::PrintfImpl(&local_3db8,L"  - %s is a REINST");
                          if (((local_3eb8.Data <= (FScriptContainerElement *)&local_3db8) &&
                              ((FScriptContainerElement *)&local_3db8 <
                               local_3eb8.Data + (longlong)local_3eb0._4_4_ * 0x10)) &&
                             (bVar9 = FDebug::CheckVerifyFailedImpl2
                                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                 ,
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x7a5,
                                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                ), bVar9)) {
                            pcVar2 = (code *)swi(3);
                            uVar11 = (*pcVar2)();
                            return (bool)uVar11;
                          }
                          if ((int)local_3eb0 == local_3eb0._4_4_) {
                            iVar18 = UE::Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x810,&local_3eb8,(int *)((longlong)&local_3eb0 + 4)
                                               );
                            pFVar60 = local_3eb8.Data + (longlong)iVar18 * 0x10;
                            local_3eb0 = CONCAT44(local_3eb0._4_4_,iVar18 + 1);
                          }
                          else {
                            pFVar60 = local_3eb8.Data + (longlong)(int)local_3eb0 * 0x10;
                            local_3eb0 = CONCAT44(local_3eb0._4_4_,(int)local_3eb0 + 1);
                          }
                          *(undefined8 *)pFVar60 = 0;
                          *(FScriptContainerElement **)pFVar60 =
                               local_3db8.Data.AllocatorInstance.Data;
                          local_3db8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          *(int *)(pFVar60 + 8) = local_3db8.Data.ArrayNum;
                          *(int *)(pFVar60 + 0xc) = local_3db8.Data.ArrayMax;
                          local_3db8.Data.ArrayNum = 0;
                          local_3db8.Data.ArrayMax = 0;
                        }
                        pFVar24 = local_3e18;
                        if (local_3e08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(local_3e08.Data.AllocatorInstance.Data);
                          pFVar24 = local_3e18;
                        }
LAB_142114173:
                        uVar40 = local_3ce8._8_8_ & 0xffffffff;
                        FVar45.Data = FVar45.Data + 8;
                        uVar41 = (ulonglong)local_3e80 & 0xffffffff;
                      }
                      else {
                        if (local_3e08.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0
                           ) goto LAB_142114173;
                        FMemory::Free(local_3e08.Data.AllocatorInstance.Data);
                        uVar40 = local_3ce8._8_8_ & 0xffffffff;
                        FVar45.Data = FVar45.Data + 8;
                        uVar41 = (ulonglong)local_3e80 & 0xffffffff;
                      }
                    }
                    if (0 < (int)local_3eb0) {
                      local_3a98 = (this_00->NamePrivate).Name;
                      FName::ToString(&local_3a98,&local_3960);
                      pFVar49 = local_3ea8;
                      FOutputDevice::LogfImpl(local_3ea8,L"Errors for %s");
                      if (local_3960.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_3960.Data.AllocatorInstance.Data);
                      }
                      iVar18 = (int)local_3eb0;
                      pFVar60 = local_3eb8.Data + (longlong)(int)local_3eb0 * 0x10;
                      FVar45.Data = local_3eb8.Data;
                      while( true ) {
                        if ((int)local_3eb0 != iVar18) {
                          local_3e84 = 0;
                          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::
                          operator()(&local_3e84);
                        }
                        if (FVar45.Data == pFVar60) break;
                        FOutputDevice::LogfImpl(pFVar49,L"  - %s");
                        FVar45.Data = FVar45.Data + 0x10;
                      }
                    }
                    DestructItems<FString,int>((FString *)local_3eb8.Data,(int)local_3eb0);
                    if (local_3eb8.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3eb8.Data);
                    }
                    if (local_3ce8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3ce8.AllocatorInstance.Data);
                    }
                  }
                  TObjectIteratorBase<1>::operator++(&local_3538);
                  param_3 = local_3ea8;
                  pUVar34 = GObjTransientPkg;
                } while( true );
              }
              bVar9 = FParse::Command(&local_3ec8,L"TRANSACTIONAL",true);
              if (bVar9) {
                pUVar22 = Z_Construct_UClass_UObject_NoRegister();
                TObjectIteratorBase<1>::TObjectIteratorBase<1>
                          (&local_3510,pUVar22,false,RF_NoFlags,Borrowed);
                while (local_3510._padding_ != 0) {
                  if (4 < (byte)LogObj._0_1_) {
                    pUVar42 = (UObjectBaseUtility *)0x0;
                    if (local_3510._padding_ != 0) {
                      pUVar42 = *(UObjectBaseUtility **)(local_3510._padding_ + 8);
                    }
                    UObjectBaseUtility::GetFullName(pUVar42,&local_3728,(UObject *)0x0,None);
                    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                    if (local_3728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3728.Data.AllocatorInstance.Data);
                    }
                  }
                  TObjectIteratorBase<1>::operator++(&local_3510);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)(local_3510._padding_ + 0x30));
                if ((byte)LogObj._0_1_ < 5) {
                  return true;
                }
                UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                return true;
              }
              bVar9 = FParse::Command(&local_3ec8,L"MARK",true);
              if (bVar9) {
                if (4 < (byte)LogObj._0_1_) {
                  UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                }
                pUVar22 = Z_Construct_UClass_UObject_NoRegister();
                TObjectIteratorBase<1>::TObjectIteratorBase<1>
                          (&local_34e8,pUVar22,false,RF_NoFlags,Borrowed);
                while (local_34e8._padding_ != 0) {
                  local_3e83.Mark = true;
                  FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation
                            ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)&DebugMarkAnnotation,
                             *(UObjectBase **)(local_34e8._padding_ + 8),&local_3e83);
                  TObjectIteratorBase<1>::operator++(&local_34e8);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)(local_34e8._padding_ + 0x30));
                return true;
              }
              bVar9 = FParse::Command(&local_3ec8,L"MARKCHECK",true);
              if (bVar9) {
                if (4 < (byte)LogObj._0_1_) {
                  UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                }
                pUVar22 = Z_Construct_UClass_UObject_NoRegister();
                TObjectIteratorBase<1>::TObjectIteratorBase<1>
                          (&local_34c0,pUVar22,false,RF_NoFlags,Borrowed);
                lVar28 = local_34c0._padding_;
                while (lVar28 != 0) {
                  local_34c0._padding_ = lVar28;
                  FVar14 = FUObjectAnnotationSparse<FBoolAnnotation,1>::GetAnnotation
                                     ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)
                                      &DebugMarkAnnotation,(UObjectBase *)local_3e27);
                  if ((*(char *)CONCAT71(extraout_var,FVar14.Mark) == '\0') &&
                     (4 < (byte)LogObj._0_1_)) {
                    pUVar42 = (UObjectBaseUtility *)0x0;
                    if (lVar28 != 0) {
                      pUVar42 = *(UObjectBaseUtility **)(lVar28 + 8);
                    }
                    UObjectBaseUtility::GetFullName(pUVar42,&local_3718,(UObject *)0x0,None);
                    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                    if (local_3718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_3718.Data.AllocatorInstance.Data);
                    }
                  }
                  TObjectIteratorBase<1>::operator++(&local_34c0);
                  lVar28 = local_34c0._padding_;
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)(local_34c0._padding_ + 0x30));
                return true;
              }
              bVar9 = FParse::Command(&local_3ec8,L"INVMARK",true);
              if (bVar9) {
                if (4 < (byte)LogObj._0_1_) {
                  UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                }
                DebugInvMarkWeakPtrs.ArrayNum = 0;
                if (DebugInvMarkWeakPtrs.ArrayMax != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,4,0,&DebugInvMarkWeakPtrs.AllocatorInstance,0,
                             &DebugInvMarkWeakPtrs.ArrayMax);
                }
                DestructItems<FString,int>
                          ((FString *)DebugInvMarkNames.AllocatorInstance.Data,
                           DebugInvMarkNames.ArrayNum);
                DebugInvMarkNames.ArrayNum = 0;
                if (DebugInvMarkNames.ArrayMax != 0) {
                  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,0,&DebugInvMarkNames.AllocatorInstance,0,
                             &DebugInvMarkNames.ArrayMax);
                }
                pUVar22 = Z_Construct_UClass_UObject_NoRegister();
                TObjectIteratorBase<1>::TObjectIteratorBase<1>
                          (&local_37e8,pUVar22,false,RF_NoFlags,Borrowed);
                lVar28 = local_37e8._padding_;
                while( true ) {
                  if (lVar28 == 0) {
                    LeaveCriticalSection((LPCRITICAL_SECTION)(local_37e8._padding_ + 0x30));
                    return true;
                  }
                  local_3a90 = *(UObject **)(lVar28 + 8);
                  local_37e8._padding_ = lVar28;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_3a90 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_3a90);
                  }
                  local_3e10.ObjectIndex = 0;
                  local_3e10.ObjectSerialNumber = 0;
                  local_3a88 = local_3a90;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_3a90 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(local_3a90);
                  }
                  FWeakObjectPtr::operator=(&local_3e10,(FObjectPtr)&local_3a88);
                  if (((DebugInvMarkWeakPtrs.AllocatorInstance.Data <= &local_3e10) &&
                      (&local_3e10 <
                       (FWeakObjectPtr *)
                       (DebugInvMarkWeakPtrs.AllocatorInstance.Data +
                       (longlong)DebugInvMarkWeakPtrs.ArrayMax * 8))) &&
                     (bVar9 = FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) break;
                  if (DebugInvMarkWeakPtrs.ArrayNum == DebugInvMarkWeakPtrs.ArrayMax) {
                    DebugInvMarkWeakPtrs.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&DebugInvMarkWeakPtrs.AllocatorInstance,
                                    &DebugInvMarkWeakPtrs.ArrayMax);
                  }
                  lVar53 = (longlong)DebugInvMarkWeakPtrs.ArrayNum;
                  DebugInvMarkWeakPtrs.ArrayNum = DebugInvMarkWeakPtrs.ArrayNum + 1;
                  *(FWeakObjectPtr *)(DebugInvMarkWeakPtrs.AllocatorInstance.Data + lVar53 * 8) =
                       local_3e10;
                  pUVar42 = (UObjectBaseUtility *)0x0;
                  if (lVar28 != 0) {
                    pUVar42 = *(UObjectBaseUtility **)(lVar28 + 8);
                  }
                  pFVar60 = (FScriptContainerElement *)
                            UObjectBaseUtility::GetFullName(pUVar42,&local_3708,(UObject *)0x0,None)
                  ;
                  if (((DebugInvMarkNames.AllocatorInstance.Data <= pFVar60) &&
                      (pFVar60 < DebugInvMarkNames.AllocatorInstance.Data +
                                 (longlong)DebugInvMarkNames.ArrayMax * 0x10)) &&
                     (bVar9 = FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar2 = (code *)swi(3);
                    uVar11 = (*pcVar2)();
                    return (bool)uVar11;
                  }
                  if (DebugInvMarkNames.ArrayNum == DebugInvMarkNames.ArrayMax) {
                    DebugInvMarkNames.ArrayNum =
                         UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&DebugInvMarkNames.AllocatorInstance,
                                    &DebugInvMarkNames.ArrayMax);
                    pFVar43 = DebugInvMarkNames.AllocatorInstance.Data +
                              (longlong)DebugInvMarkNames.ArrayNum * 0x10;
                  }
                  else {
                    pFVar43 = DebugInvMarkNames.AllocatorInstance.Data +
                              (longlong)DebugInvMarkNames.ArrayNum * 0x10;
                  }
                  DebugInvMarkNames.ArrayNum = DebugInvMarkNames.ArrayNum + 1;
                  *(undefined8 *)pFVar43 = 0;
                  *(undefined8 *)pFVar43 = *(undefined8 *)pFVar60;
                  *(undefined8 *)pFVar60 = 0;
                  *(undefined4 *)(pFVar43 + 8) = *(undefined4 *)(pFVar60 + 8);
                  *(undefined4 *)(pFVar43 + 0xc) = *(undefined4 *)(pFVar60 + 0xc);
                  *(undefined8 *)(pFVar60 + 8) = 0;
                  if (local_3708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3708.Data.AllocatorInstance.Data);
                  }
                  TObjectIteratorBase<1>::operator++(&local_37e8);
                  lVar28 = local_37e8._padding_;
                }
                pcVar2 = (code *)swi(3);
                uVar11 = (*pcVar2)();
                return (bool)uVar11;
              }
              bVar9 = FParse::Command(&local_3ec8,L"INVMARKCHECK",true);
              if (bVar9) {
                if (4 < (byte)LogObj._0_1_) {
                  UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                }
                uVar19 = 0;
                if (DebugInvMarkNames.ArrayNum < 1) {
                  return true;
                }
                do {
                  uVar17 = ~uVar19 >> 0x1f;
                  uVar16 = 0;
                  if ((int)uVar19 < DebugInvMarkWeakPtrs.ArrayNum) {
                    uVar16 = uVar17;
                  }
                  if ((uVar16 == 0) &&
                     (bVar9 = FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar2 = (code *)swi(3);
                    uVar11 = (*pcVar2)();
                    return (bool)uVar11;
                  }
                  lVar28 = (longlong)(int)uVar19;
                  pUVar35 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                                (DebugInvMarkWeakPtrs.AllocatorInstance.Data +
                                                lVar28 * 8));
                  if (pUVar35 == (UObject *)0x0) {
                    uVar56 = 0;
                    uVar16 = uVar56;
                    if ((int)uVar19 < DebugInvMarkWeakPtrs.ArrayNum) {
                      uVar16 = uVar17;
                    }
                    if ((uVar16 == 0) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    bVar9 = FWeakObjectPtr::IsStale
                                      ((FWeakObjectPtr *)
                                       (DebugInvMarkWeakPtrs.AllocatorInstance.Data + lVar28 * 8),
                                       true,false);
                    if ((!bVar9) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("DebugInvMarkWeakPtrs[Old].IsStale()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                                           ,0x1435,L""), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    uVar16 = uVar56;
                    if ((int)uVar19 < DebugInvMarkWeakPtrs.ArrayNum) {
                      uVar16 = uVar17;
                    }
                    if ((uVar16 == 0) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    bVar9 = FWeakObjectPtr::IsValid
                                      ((FWeakObjectPtr *)
                                       (DebugInvMarkWeakPtrs.AllocatorInstance.Data + lVar28 * 8));
                    if ((bVar9) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("!DebugInvMarkWeakPtrs[Old].IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                                           ,0x1436,L""), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    if (4 < (byte)LogObj._0_1_) {
                      if ((int)uVar19 < DebugInvMarkNames.ArrayNum) {
                        uVar56 = uVar17;
                      }
                      if ((uVar56 == 0) &&
                         (bVar9 = FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar9)) {
                        pcVar2 = (code *)swi(3);
                        uVar11 = (*pcVar2)();
                        return (bool)uVar11;
                      }
                      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                    }
                  }
                  else {
                    uVar56 = 0;
                    uVar16 = uVar56;
                    if ((int)uVar19 < DebugInvMarkWeakPtrs.ArrayNum) {
                      uVar16 = uVar17;
                    }
                    if ((uVar16 == 0) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    pFVar60 = DebugInvMarkWeakPtrs.AllocatorInstance.Data + lVar28 * 8;
                    local_3a80 = pUVar35;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable(pUVar35);
                    }
                    local_3d38.ObjectIndex = 0;
                    local_3d38.ObjectSerialNumber = 0;
                    local_3a78 = local_3a80;
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (local_3a80 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(local_3a80);
                    }
                    FWeakObjectPtr::operator=(&local_3d38,(FObjectPtr)&local_3a78);
                    bVar9 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                                      ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_3d38,
                                       (TWeakObjectPtr<UObject,FWeakObjectPtr> *)pFVar60);
                    if ((!bVar9) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("TWeakObjectPtr<>(Object) == DebugInvMarkWeakPtrs[Old]",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                                           ,0x142e,L""), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    uVar16 = uVar56;
                    if ((int)uVar19 < DebugInvMarkNames.ArrayNum) {
                      uVar16 = uVar17;
                    }
                    if ((uVar16 == 0) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    pFVar60 = DebugInvMarkNames.AllocatorInstance.Data + lVar28 * 0x10;
                    pFVar36 = UObjectBaseUtility::GetFullName
                                        ((UObjectBaseUtility *)pUVar35,&local_36f8,(UObject *)0x0,
                                         None);
                    bVar9 = FString::Equals(pFVar36,(FString *)pFVar60,IgnoreCase);
                    if (local_36f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_36f8.Data.AllocatorInstance.Data);
                    }
                    if ((!bVar9) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("Object->GetFullName() == DebugInvMarkNames[Old]",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                                           ,0x142f,L""), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    uVar16 = uVar56;
                    if ((int)uVar19 < DebugInvMarkWeakPtrs.ArrayNum) {
                      uVar16 = uVar17;
                    }
                    if ((uVar16 == 0) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    bVar9 = FWeakObjectPtr::IsStale
                                      ((FWeakObjectPtr *)
                                       (DebugInvMarkWeakPtrs.AllocatorInstance.Data + lVar28 * 8),
                                       true,false);
                    if ((bVar9) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("!DebugInvMarkWeakPtrs[Old].IsStale()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                                           ,0x1430,L""), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    if ((int)uVar19 < DebugInvMarkWeakPtrs.ArrayNum) {
                      uVar56 = uVar17;
                    }
                    if ((uVar56 == 0) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                    bVar9 = FWeakObjectPtr::IsValid
                                      ((FWeakObjectPtr *)
                                       (DebugInvMarkWeakPtrs.AllocatorInstance.Data + lVar28 * 8));
                    if ((!bVar9) &&
                       (bVar9 = FDebug::CheckVerifyFailedImpl2
                                          ("DebugInvMarkWeakPtrs[Old].IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                                           ,0x1431,L""), bVar9)) {
                      pcVar2 = (code *)swi(3);
                      uVar11 = (*pcVar2)();
                      return (bool)uVar11;
                    }
                  }
                  uVar19 = uVar19 + 1;
                  if (DebugInvMarkNames.ArrayNum <= (int)uVar19) {
                    return true;
                  }
                } while( true );
              }
              bVar9 = FParse::Command(&local_3ec8,L"SPIKEMARK",true);
              if (bVar9) {
                if (4 < (byte)LogObj._0_1_) {
                  UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                }
                FlushAsyncLoading(-1);
                FUObjectAnnotationSparse<FBoolAnnotation,1>::RemoveAllAnnotations
                          ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)&DebugSpikeMarkAnnotation)
                ;
                pUVar22 = Z_Construct_UClass_UObject_NoRegister();
                TObjectIteratorBase<1>::TObjectIteratorBase<1>
                          (&local_3498,pUVar22,false,RF_NoFlags,Borrowed);
                while (local_3498._padding_ != 0) {
                  local_3e82.Mark = true;
                  FUObjectAnnotationSparse<FBoolAnnotation,1>::AddAnnotation
                            ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)
                             &DebugSpikeMarkAnnotation,*(UObjectBase **)(local_3498._padding_ + 8),
                             &local_3e82);
                  TObjectIteratorBase<1>::operator++(&local_3498);
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)(local_3498._padding_ + 0x30));
                return true;
              }
              bVar9 = FParse::Command(&local_3ec8,L"SPIKEMARKCHECK",true);
              if (bVar9) {
                if (4 < (byte)LogObj._0_1_) {
                  UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                }
                iVar18 = DebugSpikeMarkNames.ArrayNum;
                pFVar60 = DebugSpikeMarkNames.AllocatorInstance.Data +
                          (longlong)DebugSpikeMarkNames.ArrayNum * 0x10;
                FVar45.Data = DebugSpikeMarkNames.AllocatorInstance.Data;
                while( true ) {
                  if (DebugSpikeMarkNames.ArrayNum != iVar18) {
                    `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_3e27 + 1);
                  }
                  if (FVar45.Data == pFVar60) break;
                  if (4 < (byte)LogObj._0_1_) {
                    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                  }
                  FVar45.Data = FVar45.Data + 0x10;
                }
                return true;
              }
              bVar9 = FParse::Command(&local_3ec8,L"REFS",true);
              if (bVar9) {
                bVar9 = ParseObject<UObject>
                                  (local_3ec8,L"NAME=",&local_3c10,(UObject *)0x0,(bool *)0x0);
                if (!bVar9) {
                  if ((byte)LogObj._0_1_ < 5) {
                    return true;
                  }
                  UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                  return true;
                }
                local_3e8c = 0;
                local_3e78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_3e78.Data.ArrayNum = 0;
                local_3e78.Data.ArrayMax = 0;
                EVar44 = PrintResults;
                bVar9 = FParse::Token(&local_3ec8,&local_3e78,false,L'\0');
                if (bVar9) {
                  do {
                    FVar45.Data = (FScriptContainerElement *)L"";
                    if (local_3e78.Data.ArrayNum != 0) {
                      FVar45.Data = local_3e78.Data.AllocatorInstance.Data;
                    }
                    iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar45.Data,L"shortest");
                    if (iVar18 == 0) {
                      if (((~(byte)(EVar44 >> 2) & 1) == 0) && (4 < (byte)LogObj._0_1_)) {
                        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                      }
                      EVar44 = EVar44 | Shortest;
                      iVar18 = local_3e8c;
                    }
                    else {
                      FVar45.Data = (FScriptContainerElement *)L"";
                      if (local_3e78.Data.ArrayNum != 0) {
                        FVar45.Data = local_3e78.Data.AllocatorInstance.Data;
                      }
                      iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar45.Data,L"longest");
                      if (iVar18 == 0) {
                        if (((~(byte)(EVar44 >> 1) & 1) == 0) && (4 < (byte)LogObj._0_1_)) {
                          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj)
                          ;
                        }
                        EVar44 = EVar44 | Longest;
                        iVar18 = local_3e8c;
                      }
                      else {
                        FVar45.Data = (FScriptContainerElement *)L"";
                        if (local_3e78.Data.ArrayNum != 0) {
                          FVar45.Data = local_3e78.Data.AllocatorInstance.Data;
                        }
                        iVar18 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar45.Data,L"all");
                        if (iVar18 == 0) {
                          EVar44 = EVar44 | PrintAllResults;
                          iVar18 = local_3e8c;
                        }
                        else {
                          FVar45.Data = (FScriptContainerElement *)L"";
                          if (local_3e78.Data.ArrayNum != 0) {
                            FVar45.Data = local_3e78.Data.AllocatorInstance.Data;
                          }
                          iVar18 = FGenericPlatformStricmp::Stricmp
                                             ((wchar_t *)FVar45.Data,L"external");
                          if (iVar18 == 0) {
                            EVar44 = EVar44 | ExternalOnly;
                            iVar18 = local_3e8c;
                          }
                          else {
                            FVar45.Data = (FScriptContainerElement *)L"";
                            if (local_3e78.Data.ArrayNum != 0) {
                              FVar45.Data = local_3e78.Data.AllocatorInstance.Data;
                            }
                            iVar18 = FGenericPlatformStricmp::Stricmp
                                               ((wchar_t *)FVar45.Data,L"direct");
                            if (iVar18 == 0) {
                              EVar44 = EVar44 | Direct;
                              iVar18 = local_3e8c;
                            }
                            else {
                              FVar45.Data = (FScriptContainerElement *)L"";
                              if (local_3e78.Data.ArrayNum != 0) {
                                FVar45.Data = local_3e78.Data.AllocatorInstance.Data;
                              }
                              iVar18 = FGenericPlatformStricmp::Stricmp
                                                 ((wchar_t *)FVar45.Data,L"full");
                              if (iVar18 == 0) {
                                EVar44 = EVar44 | FullChain;
                                iVar18 = local_3e8c;
                              }
                              else {
                                FVar45.Data = (FScriptContainerElement *)L"";
                                if (local_3e78.Data.ArrayNum != 0) {
                                  FVar45.Data = local_3e78.Data.AllocatorInstance.Data;
                                }
                                iVar18 = FGenericPlatformStricmp::Stricmp
                                                   ((wchar_t *)FVar45.Data,L"minimal");
                                if (iVar18 == 0) {
                                  EVar44 = EVar44 | Minimal;
                                  iVar18 = local_3e8c;
                                }
                                else {
                                  FVar45.Data = (FScriptContainerElement *)L"";
                                  if (local_3e78.Data.ArrayNum != 0) {
                                    FVar45.Data = local_3e78.Data.AllocatorInstance.Data;
                                  }
                                  iVar18 = FGenericPlatformStricmp::Stricmp
                                                     ((wchar_t *)FVar45.Data,L"gconly");
                                  if (iVar18 == 0) {
                                    EVar44 = EVar44 | GCOnly;
                                    iVar18 = local_3e8c;
                                  }
                                  else {
                                    bVar9 = FParse::Value(local_3ec8,L"history=",&local_3e8c);
                                    iVar18 = local_3e8c;
                                    if (bVar9) {
                                      pFVar37 = FGCHistory::Get();
                                      if ((pFVar37->Snapshots).ArrayNum < 1) {
                                        iVar18 = local_3e8c;
                                        if (local_3e8c != 0) {
                                          if (4 < (byte)LogObj._0_1_) {
                                            UE::Logging::Private::BasicLog<5>
                                                      (&LOG_Static,(FLogCategoryBase *)&LogObj);
                                          }
                                          local_3e8c = 0;
                                          iVar18 = local_3e8c;
                                        }
                                      }
                                      else {
                                        pFVar37 = FGCHistory::Get();
                                        iVar59 = (pFVar37->Snapshots).ArrayNum;
                                        iVar20 = -local_3e8c;
                                        if (-local_3e8c < 0) {
                                          iVar20 = local_3e8c;
                                        }
                                        iVar18 = local_3e8c;
                                        if ((iVar59 < iVar20) &&
                                           (iVar18 = iVar59, 4 < (byte)LogObj._0_1_)) {
                                          UE::Logging::Private::BasicLog<5>
                                                    (&LOG_Static,(FLogCategoryBase *)&LogObj);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    local_3e8c = iVar18;
                    bVar9 = FParse::Token(&local_3ec8,&local_3e78,false,L'\0');
                  } while (bVar9);
                }
                if (local_3e8c == 0) {
                  FReferenceChainSearch::FReferenceChainSearch(&local_2d38,local_3c10,EVar44,Log);
                  FReferenceChainSearch::~FReferenceChainSearch(&local_2d38);
                  local_3a50.Data.AllocatorInstance.Data = local_3e78.Data.AllocatorInstance.Data;
                }
                else {
                  FReferenceChainSearch::FReferenceChainSearch(&local_2e18,EVar44);
                  pFVar37 = FGCHistory::Get();
                  iVar18 = -local_3e8c;
                  if (-local_3e8c < 0) {
                    iVar18 = local_3e8c;
                  }
                  pFVar38 = FGCHistory::GetSnapshot(pFVar37,iVar18 + -1);
                  if (pFVar38 == (FGCSnapshot *)0x0) {
                    if (4 < (byte)LogObj._0_1_) {
                      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                    }
                    FReferenceChainSearch::~FReferenceChainSearch(&local_2e18);
                    local_3a50.Data.AllocatorInstance.Data = local_3e78.Data.AllocatorInstance.Data;
                  }
                  else {
                    FReferenceChainSearch::PerformSearchFromGCSnapshot
                              (&local_2e18,local_3c10,pFVar38);
                    FReferenceChainSearch::~FReferenceChainSearch(&local_2e18);
                    local_3a50.Data.AllocatorInstance.Data = local_3e78.Data.AllocatorInstance.Data;
                  }
                }
              }
              else {
                bVar9 = FParse::Command(&local_3ec8,L"SINGLEREF",true);
                if (bVar9) {
                  local_3d30 = (UClass *)0x0;
                  local_3ec0 = '\0';
                  local_3d20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3d20.Data.ArrayNum = 0;
                  local_3d20.Data.ArrayMax = 0;
                  bVar9 = ParseObject<UClass>(local_3ec8,L"CLASS=",&local_3c18,(UObject *)0x0,
                                              (bool *)0x0);
                  if (!bVar9) {
                    local_3c18 = Z_Construct_UClass_UObject_NoRegister();
                    local_3ec0 = '\x01';
                  }
                  bVar10 = ParseObject<UClass>(local_3ec8,L"REFCLASS=",&local_3d30,(UObject *)0x0,
                                               (bool *)0x0);
                  if (!bVar10) {
                    local_3d30 = (UClass *)0x0;
                  }
                  bVar10 = FParse::Value(local_3ec8,L"REFNAME=",local_858,0x400,true,(wchar_t **)0x0
                                        );
                  if (bVar10) {
                    FString::operator=(&local_3d20,local_858);
                  }
                  TObjectIterator<UObject>::TObjectIterator<UObject>
                            (&local_3470,RF_ClassDefaultObject,true,Borrowed);
                  cVar12 = !bVar9;
                  lVar28 = local_3470._16_8_;
                  while (lVar28 != 0) {
                    pUVar42 = *(UObjectBaseUtility **)(lVar28 + 8);
                    iVar18 = (int)local_3c18->_padding_;
                    local_3470._16_8_ = lVar28;
                    if ((((iVar18 <= *(int *)(*(longlong *)&pUVar42->field_0x10 + 0x38)) &&
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(*(longlong *)&pUVar42->field_0x10 + 0x30) +
                           (longlong)iVar18 * 8) == &local_3c18->_padding_)) &&
                        (bVar9 = UObjectBaseUtility::IsTemplate
                                           (pUVar42,RF_ArchetypeObject|RF_ClassDefaultObject),
                        !bVar9)) && ((*(uint *)&pUVar42->field_0x8 & 0x10) == 0)) {
                      local_3d58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_3d58.ArrayNum = 0;
                      local_3d58.ArrayMax = 0;
                      UObject::RetrieveReferencers
                                ((UObject *)pUVar42,
                                 (TArray<FReferencerInformation,TSizedDefaultAllocator<32>_> *)0x0,
                                 &local_3d58);
                      if ((local_3d58.ArrayNum == 1) &&
                         (pUVar1 = *(UObjectBaseUtility **)local_3d58.AllocatorInstance.Data,
                         pUVar1 != (UObjectBaseUtility *)0x0)) {
                        bVar9 = true;
                        if ((local_3d20.Data.ArrayNum != 0) && (0 < local_3d20.Data.ArrayNum + -1))
                        {
                          local_3a70.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
                          local_3a70.Number = *(uint *)&pUVar1->field_0x1c;
                          FName::ToString(&local_3a70,&local_3950);
                          if (local_3950.Data.ArrayNum == local_3d20.Data.ArrayNum) {
                            if (local_3950.Data.ArrayNum < 2) {
                              bVar10 = false;
                            }
                            else {
                              iVar18 = FGenericPlatformStricmp::Stricmp
                                                 ((wchar_t *)local_3950.Data.AllocatorInstance.Data,
                                                  (wchar_t *)local_3d20.Data.AllocatorInstance.Data)
                              ;
                              bVar10 = iVar18 != 0;
                            }
                          }
                          else {
                            bVar10 = local_3950.Data.ArrayNum + local_3d20.Data.ArrayNum != 1;
                          }
                          if (local_3950.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_3950.Data.AllocatorInstance.Data);
                          }
                          bVar9 = true;
                          if (bVar10) {
                            bVar9 = false;
                          }
                        }
                        if (local_3d30 != (UClass *)0x0) {
                          iVar18 = (int)local_3d30->_padding_;
                          if ((*(int *)(*(longlong *)&pUVar1->field_0x10 + 0x38) < iVar18) ||
                             ((longlong *)
                              *(undefined1 **)
                               (*(longlong *)(*(longlong *)&pUVar1->field_0x10 + 0x30) +
                               (longlong)iVar18 * 8) != &local_3d30->_padding_)) goto LAB_1421156ce;
                        }
                        if (bVar9) {
                          FArchiveCountMem::FArchiveCountMem(&local_3398,(UObject *)pUVar42,false);
                          pUVar35 = (UObject *)0x0;
                          if (lVar28 != 0) {
                            pUVar35 = *(UObject **)(lVar28 + 8);
                          }
                          UObject::GetResourceSizeBytes(pUVar35,EstimatedTotal);
                          pUVar35 = (UObject *)0x0;
                          if (lVar28 != 0) {
                            pUVar35 = *(UObject **)(lVar28 + 8);
                          }
                          UObject::GetResourceSizeBytes(pUVar35,Exclusive);
                          if (cVar12 == '\0') {
                            UObjectBaseUtility::GetPathName(pUVar42,&local_36d8,(UObject *)0x0);
                            pFVar49 = local_3ea8;
                            FOutputDevice::LogfImpl(local_3ea8,L"%64s, %8d,%8d,%8d,%8d");
                            FVar45.Data = local_36d8.Data.AllocatorInstance.Data;
                          }
                          else {
                            local_3e80 = (UStruct *)
                                         CONCAT44(local_3e80._4_4_,(undefined4)local_3398.Num);
                            UObjectBaseUtility::GetPathName(pUVar42,&local_36e8,(UObject *)0x0);
                            local_3a68 = *(FName *)(*(longlong *)&pUVar42->field_0x10 + 0x18);
                            FName::ToString(&local_3a68,&local_3940);
                            pFVar49 = local_3ea8;
                            FOutputDevice::LogfImpl(local_3ea8,L"%64s: %64s, %8d,%8d,%8d,%8d");
                            FVar45.Data = local_36e8.Data.AllocatorInstance.Data;
                            if (local_3940.Data.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_3940.Data.AllocatorInstance.Data);
                              FVar45.Data = local_36e8.Data.AllocatorInstance.Data;
                            }
                          }
                          if (FVar45.Data != (FScriptContainerElement *)0x0) {
                            FMemory::Free(FVar45.Data);
                          }
                          UObjectBaseUtility::GetPathName(pUVar1,&local_36c8,(UObject *)0x0);
                          FOutputDevice::LogfImpl(pFVar49,L"\t%s");
                          if (local_36c8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_36c8.Data.AllocatorInstance.Data);
                          }
                          FArchive::~FArchive((FArchive *)&local_3398);
                        }
                      }
LAB_1421156ce:
                      DestructItems<FReferencerInformation,int>
                                ((FReferencerInformation *)local_3d58.AllocatorInstance.Data,
                                 local_3d58.ArrayNum);
                      if ((FReferencerInformation *)local_3d58.AllocatorInstance.Data !=
                          (FReferencerInformation *)0x0) {
                        FMemory::Free(local_3d58.AllocatorInstance.Data);
                      }
                    }
                    TObjectIterator<UObject>::operator++(&local_3470);
                    cVar12 = local_3ec0;
                    lVar28 = local_3470._16_8_;
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)(local_3470._0_8_ + 0x30));
                  local_3a50.Data.AllocatorInstance.Data = local_3d20.Data.AllocatorInstance.Data;
                }
                else {
                  bVar9 = FParse::Command(&local_3ec8,L"CLASSES",true);
                  if (bVar9) {
                    pUVar22 = Z_Construct_UClass_UObject_NoRegister();
                    ShowClasses(pUVar22,param_3,0);
                    return true;
                  }
                  bVar9 = FParse::Command(&local_3ec8,L"INTRINSICCLASSES",true);
                  if (bVar9) {
                    ShowIntrinsicClasses(param_3);
                    return true;
                  }
                  bVar9 = FParse::Command(&local_3ec8,L"DEPENDENCIES",true);
                  pwVar27 = local_3ec8;
                  if (!bVar9) {
                    bVar9 = FParse::Command(&local_3ec8,L"BULK",true);
                    if (bVar9) {
                      FBulkData::DumpBulkDataUsage(param_3);
                      return true;
                    }
                    bVar9 = FParse::Command(&local_3ec8,L"LISTCONTENTREFS",true);
                    if (!bVar9) {
                      bVar9 = FParse::Command(&local_3ec8,L"FLAGS",true);
                      if (!bVar9) {
                        bVar9 = FParse::Command(&local_3ec8,L"REP",true);
                        if (!bVar9) {
                          return false;
                        }
                        bVar9 = ParseObject<UClass>(local_3ec8,L"CLASS=",&local_3bf8,(UObject *)0x0,
                                                    (bool *)0x0);
                        if (bVar9) {
                          local_3a60 = (FName)local_3bf8->_padding_;
                          FName::ToString(&local_3a60,&local_3930);
                          FOutputDevice::LogfImpl
                                    (param_3,L"=== Replicated properties for class: %s===");
                          if (local_3930.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_3930.Data.AllocatorInstance.Data);
                          }
                          TFieldIterator<FProperty>::TFieldIterator<FProperty>
                                    (&local_3920,(UStruct *)local_3bf8,Default);
                          pFVar54 = local_3920.Field;
                          while (pFVar54 != (FField *)0x0) {
                            if (((ulonglong)pFVar54[1].ClassPrivate & 0x20) != 0) {
                              local_3920.Field = pFVar54;
                              if (((ulonglong)pFVar54[1].ClassPrivate >> 0x20 & 1) == 0) {
                                FField::GetName(pFVar54,&local_3638);
                                FOutputDevice::LogfImpl(param_3,L"   %s");
                                FVar45.Data = local_3638.Data.AllocatorInstance.Data;
                              }
                              else {
                                FName::ToString((FName *)&pFVar54[2].ClassPrivate,&local_3648);
                                FField::GetName(pFVar54,&local_3658);
                                FOutputDevice::LogfImpl(param_3,L"   %s <%s>");
                                FVar45.Data = local_3648.Data.AllocatorInstance.Data;
                                if (local_3658.Data.AllocatorInstance.Data !=
                                    (FScriptContainerElement *)0x0) {
                                  FMemory::Free(local_3658.Data.AllocatorInstance.Data);
                                  FVar45.Data = local_3648.Data.AllocatorInstance.Data;
                                }
                              }
                              if (FVar45.Data != (FScriptContainerElement *)0x0) {
                                FMemory::Free(FVar45.Data);
                              }
                            }
                            local_3920.Field = pFVar54->Next;
                            TFieldIterator<FProperty>::IterateToNext(&local_3920);
                            pFVar54 = local_3920.Field;
                          }
                          return true;
                        }
                        if ((byte)LogExec._0_1_ < 3) {
                          return true;
                        }
                        FLogScopedCategoryAndVerbosityOverride::
                        FLogScopedCategoryAndVerbosityOverride
                                  (&local_3848,(FName)LogExec._4_8_,Warning);
                        FOutputDevice::LogfImpl
                                  (param_3,L"No class objects found using command \'%s\'");
                        FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
                        FLogScopedCategoryAndVerbosityOverride::
                        ~FLogScopedCategoryAndVerbosityOverride(&local_3848);
                        return true;
                      }
                      bVar9 = FParse::Token(&local_3ec8,local_1058,0x400,true,L'\0');
                      if (!bVar9) {
                        return true;
                      }
                      local_3878 = local_1058;
                      sVar21 = wcslen(local_1058);
                      iStack_3870 = (int)sVar21;
                      local_3668._12_4_ = uStack_386c;
                      local_3668.Size = iStack_3870;
                      local_3668.DataPtr = local_3878;
                      pUVar35 = FindFirstObject<UObject>(&local_3668,None,Warning,L"FLAGS command");
                      if (pUVar35 == (UObject *)0x0) {
                        return true;
                      }
                      PrivateDumpObjectFlags(pUVar35,param_3);
                      PrivateRecursiveDumpFlags(*(UStruct **)&pUVar35->field_0x10,pUVar35,param_3);
                      return true;
                    }
                    local_3d00 = (UClass *)0x0;
                    local_3bf0 = (UClass *)0x0;
                    ParseObject<UClass>(local_3ec8,L"CLASS=",&local_3d00,(UObject *)0x0,(bool *)0x0)
                    ;
                    ParseObject<UClass>(local_3ec8,L"LISTCLASS=",&local_3bf0,(UObject *)0x0,
                                        (bool *)0x0);
                    local_2e28 = local_3d00;
                    if (local_3d00 == (UClass *)0x0) {
                      return false;
                    }
                    FArchiveState::FArchiveState(&local_2f08);
                    local_2f08.ArIsObjectReferenceCollector = '\x01';
                    local_2f08._padding_ =
                         (longlong)&`StaticExec'::`905'::FArchiveListRefs::_vftable_;
                    local_2e78._0_8_ =
                         (TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)0x0;
                    local_2e78._8_8_ = 0;
                    local_2e58 = (ForElementType<unsigned_int>)0x0;
                    local_2e50 = 0;
                    local_2e4c = 0x80;
                    local_2e48 = -1;
                    local_2e44 = 0;
                    local_2e38 = (ForElementType<FSetElementId>)0x0;
                    local_2e30 = 0;
                    (**(code **)(local_2e28->_padding_ + 200))(local_2e28,&local_2f08);
                    bVar9 = FParse::Param(local_3ec8,L"CSV");
                    bVar10 = FParse::Param(local_3ec8,L"LISTSCRIPTREFS");
                    local_3c20 = local_3e27 + 2;
                    if (0 < local_2e78._8_4_ - local_2e44) {
                      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::Compact((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_2e78);
                      uVar4 = local_2e78._0_8_;
                      local_3588 = &local_3c20;
                      iVar18 = local_2e78._8_4_ - local_2e44;
                      if ((iVar18 < 0) &&
                         (bVar15 = FDebug::CheckVerifyFailedImpl2
                                             ("ArrayNum >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xfe,L""), bVar15)) {
                        pcVar2 = (code *)swi(3);
                        uVar11 = (*pcVar2)();
                        return (bool)uVar11;
                      }
                      AlgoImpl::
                      IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::FElementCompareClass<_StaticExec_::__l905::FSortUObjectByClassName>_>_>
                                ((TSparseArrayElementOrFreeListLink<TAlignedBytes<16,8>_> *)uVar4,
                                 iVar18,local_3e27[3],
                                 (FElementCompareClass<_bool___cdecl_StaticExec(UWorld_*,wchar_t_const_*,FOutputDevice_&)_::_905_::FSortUObjectByClassName>
                                  *)&local_3c20);
                    }
                    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Rehash
                              ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)
                               local_2e78);
                    if (bVar9) {
                      if (4 < (byte)LogObj._0_1_) {
                        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                      }
                    }
                    else if (4 < (byte)LogObj._0_1_) {
                      UObjectBaseUtility::GetFullName
                                ((UObjectBaseUtility *)local_3d00,&local_35f8,(UObject *)0x0,None);
                      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                      if (local_35f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_35f8.Data.AllocatorInstance.Data);
                      }
                    }
                    local_3b38.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_2e78 + 0x10);
                    local_3b38._padding_._0_4_ = 0;
                    local_3b38._padding_._4_4_ = 1;
                    local_3b38.UnvisitedBitMask = 0xffffffff;
                    local_3b38.CurrentBitIndex = 0;
                    local_3b38.BaseBitIndex = 0;
                    if (local_2e50 != 0) {
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b38);
                    }
                    local_3b18 = (longlong *)local_2e78;
                    TStack_3b10._padding_ =
                         CONCAT44(local_3b38._padding_._4_4_,(undefined4)local_3b38._padding_);
                    pTStack_3410 = local_3b38.Array;
                    uStack_3408 = local_3b38.UnvisitedBitMask;
                    iStack_3404 = local_3b38.CurrentBitIndex;
                    iStack_3400 = local_3b38.BaseBitIndex;
                    uStack_33fc = local_3b38._28_4_;
                    TStack_3b10.UnvisitedBitMask = local_3b38.UnvisitedBitMask;
                    TStack_3b10.CurrentBitIndex = local_3b38.CurrentBitIndex;
                    TStack_3b10.BaseBitIndex = local_3b38.BaseBitIndex;
                    TStack_3b10._28_4_ = local_3b38._28_4_;
                    TStack_3b10.Array = local_3b38.Array;
                    local_3420 = local_3b18;
                    lStack_3418 = TStack_3b10._padding_;
                    if (local_3b38.CurrentBitIndex < (local_3b38.Array)->NumBits) {
                      do {
                        pUVar42 = *(UObjectBaseUtility **)
                                   (*local_3b18 + (longlong)TStack_3b10.CurrentBitIndex * 0x10);
                        if ((((local_3bf0 == (UClass *)0x0) ||
                             (*(UClass **)&pUVar42->field_0x10 == local_3bf0)) &&
                            ((bVar10 ||
                             (pUVar34 = UObjectBaseUtility::GetOutermost(pUVar42),
                             ((uint)pUVar34->PackageFlagsPrivate >> 0x15 & 1) == 0)))) &&
                           (pUVar34 = GObjTransientPkg,
                           pUVar33 = UObjectBaseUtility::GetOutermost(pUVar42), pUVar33 != pUVar34))
                        {
                          if (bVar9) {
                            if (4 < (byte)LogObj._0_1_) {
                              UObjectBaseUtility::GetPathName(pUVar42,&local_3688,(UObject *)0x0);
                              UObjectBaseUtility::GetPathName
                                        (*(UObjectBaseUtility **)&pUVar42->field_0x10,&local_3698,
                                         (UObject *)0x0);
                              UE::Logging::Private::BasicLog<5>
                                        (&LOG_Static,(FLogCategoryBase *)&LogObj);
                              FVar45.Data = local_3688.Data.AllocatorInstance.Data;
                              if (local_3698.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_3698.Data.AllocatorInstance.Data);
                                FVar45.Data = local_3688.Data.AllocatorInstance.Data;
                              }
LAB_142115f47:
                              if (FVar45.Data != (FScriptContainerElement *)0x0) {
                                FMemory::Free(FVar45.Data);
                              }
                            }
                          }
                          else if (4 < (byte)LogObj._0_1_) {
                            UObjectBaseUtility::GetFullName(pUVar42,&local_3678,(UObject *)0x0,None)
                            ;
                            UE::Logging::Private::BasicLog<5>
                                      (&LOG_Static,(FLogCategoryBase *)&LogObj);
                            FVar45.Data = local_3678.Data.AllocatorInstance.Data;
                            goto LAB_142115f47;
                          }
                        }
                        TStack_3b10.UnvisitedBitMask =
                             TStack_3b10.UnvisitedBitMask & ~TStack_3b10._padding_._4_4_;
                        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                  (&TStack_3b10);
                      } while (TStack_3b10.CurrentBitIndex < (TStack_3b10.Array)->NumBits);
                    }
                    `StaticExec'::__l905::FArchiveListRefs::~FArchiveListRefs(&local_2f08);
                    return false;
                  }
                  pUVar22 = Z_Construct_UClass_UPackage_NoRegister();
                  pUVar34 = (UPackage *)0x0;
                  bVar9 = ParseObject(pwVar27,L"PACKAGE=",pUVar22,(UObject **)&local_3da0,
                                      (UObject *)0x0,Find,(bool *)0x0);
                  if (!bVar9) {
                    if ((byte)LogObj._0_1_ < 5) {
                      return true;
                    }
                    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogObj);
                    return true;
                  }
                  local_3e38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3e38.ArrayNum = 0;
                  local_3e38.ArrayMax = 0;
                  pUVar33 = pUVar34;
                  do {
                    memset(local_1858,0,0x800);
                    TCString<wchar_t>::SprintfImpl(local_1858,L"EXCLUDE%i=");
                    local_3d28.ComparisonIndex.Value = 0;
                    local_3d28.Number = 0;
                    bVar9 = FParse::Value(local_3ec8,local_1858,&local_3d28);
                    if (bVar9) {
                      pFVar36 = FName::ToString(&local_3d28,&local_36b8);
                      if ((pFVar36->Data).ArrayNum == 0) {
                        pwVar27 = L"";
                      }
                      else {
                        pwVar27 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
                      }
                      local_3da8 = CreatePackage(pwVar27);
                      if (((local_3e38.AllocatorInstance.Data <=
                            (FScriptContainerElement *)&local_3da8) &&
                          ((FScriptContainerElement *)&local_3da8 <
                           local_3e38.AllocatorInstance.Data + (longlong)local_3e38.ArrayMax * 8))
                         && (bVar9 = FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar9)) {
                        pcVar2 = (code *)swi(3);
                        uVar11 = (*pcVar2)();
                        return (bool)uVar11;
                      }
                      iVar18 = local_3e38.ArrayNum;
                      if (local_3e38.ArrayNum == local_3e38.ArrayMax) {
                        iVar18 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,&local_3e38.AllocatorInstance,&local_3e38.ArrayMax
                                           );
                      }
                      local_3e38.ArrayNum = iVar18 + 1;
                      *(UPackage **)(local_3e38.AllocatorInstance.Data + (longlong)iVar18 * 8) =
                           local_3da8;
                      if (local_36b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_36b8.Data.AllocatorInstance.Data);
                      }
                    }
                    uVar19 = (int)pUVar33 + 1;
                    pUVar33 = (UPackage *)(ulonglong)uVar19;
                  } while ((int)uVar19 < 0x10);
                  UObjectBaseUtility::GetPathName
                            ((UObjectBaseUtility *)local_3da0,&local_36a8,(UObject *)0x0);
                  FOutputDevice::LogfImpl(param_3,L"Dependencies of %s:");
                  if (local_36a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_36a8.Data.AllocatorInstance.Data);
                  }
                  local_3e81 = false;
                  bVar9 = FParse::Bool(local_3ec8,L"RECURSE",&local_3e81);
                  pUVar22 = Z_Construct_UClass_UObject_NoRegister();
                  TObjectIteratorBase<1>::TObjectIteratorBase<1>
                            (&local_3448,pUVar22,false,RF_NoFlags,Borrowed);
                  lVar28 = local_3448._padding_;
                  while (lVar28 != 0) {
                    local_3448._padding_ = lVar28;
                    bVar10 = UObjectBaseUtility::IsIn
                                       (*(UObjectBaseUtility **)(lVar28 + 8),local_3da0);
                    if (bVar10) {
                      pUVar33 = pUVar34;
                      if (lVar28 != 0) {
                        pUVar33 = *(UPackage **)(lVar28 + 8);
                      }
                      if ((UPackage *)pUVar33->_padding_ == local_3da0) {
                        pUVar33 = pUVar34;
                        if (lVar28 != 0) {
                          pUVar33 = *(UPackage **)(lVar28 + 8);
                        }
                        FArchiveShowReferences::FArchiveShowReferences
                                  (&local_32f8,param_3,(UObject *)local_3da0,(UObject *)pUVar33,
                                   &local_3e38);
                        if (local_32f8.Found.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_32f8.Found.AllocatorInstance.Data);
                        }
                        this_02 = &local_32f8;
LAB_142115ab0:
                        FArchive::~FArchive((FArchive *)this_02);
                      }
                      else if (bVar9) {
                        pUVar50 = pUVar34;
                        pUVar33 = pUVar34;
                        if (lVar28 != 0) {
                          pUVar50 = *(UPackage **)(lVar28 + 8);
                          pUVar33 = *(UPackage **)(lVar28 + 8);
                        }
                        pUVar50 = (UPackage *)pUVar50->_padding_;
                        if (pUVar33 != (UPackage *)0x0) {
                          while( true ) {
                            pUVar51 = pUVar50;
                            if ((pUVar51 == (UPackage *)0x0) ||
                               (pUVar22 = Z_Construct_UClass_UPackage_NoRegister(),
                               (UClass *)pUVar33->_padding_ == pUVar22)) goto LAB_142115ab5;
                            pUVar22 = Z_Construct_UClass_UPackage_NoRegister();
                            if ((UClass *)pUVar51->_padding_ == pUVar22) break;
                            pUVar50 = (UPackage *)pUVar51->_padding_;
                            pUVar33 = pUVar51;
                          }
                          if (pUVar51 != local_3da0) {
                            FArchiveShowReferences::FArchiveShowReferences
                                      (&local_3228,param_3,(UObject *)pUVar51,(UObject *)pUVar33,
                                       &local_3e38);
                            if (local_3228.Found.AllocatorInstance.Data !=
                                (FScriptContainerElement *)0x0) {
                              FMemory::Free(local_3228.Found.AllocatorInstance.Data);
                            }
                            this_02 = &local_3228;
                            goto LAB_142115ab0;
                          }
                        }
                      }
                    }
LAB_142115ab5:
                    TObjectIteratorBase<1>::operator++(&local_3448);
                    lVar28 = local_3448._padding_;
                  }
                  LeaveCriticalSection((LPCRITICAL_SECTION)(local_3448._padding_ + 0x30));
                  local_3a50.Data.AllocatorInstance.Data = local_3e38.AllocatorInstance.Data;
                }
              }
            }
            else {
              bVar9 = FParse::Command(&local_3ec8,L"RELOADCONFIG",true);
              if ((!bVar9) && (bVar9 = FParse::Command(&local_3ec8,L"RELOADCFG",true), !bVar9)) {
                bVar9 = FSelfRegisteringExec::StaticExec(param_1,param_2,param_3);
                if (bVar9) {
                  return true;
                }
                return false;
              }
              bVar9 = FParse::Token(&local_3ec8,local_2a58,0x100,true,L'\0');
              if (!bVar9) {
                return true;
              }
              local_3868 = local_2a58;
              sVar21 = wcslen(local_2a58);
              iStack_3860 = (int)sVar21;
              local_3628._12_4_ = uStack_385c;
              local_3628.Size = iStack_3860;
              local_3628.DataPtr = local_3868;
              pUVar22 = FindFirstObject<UClass>(&local_3628,None,Warning,L"StaticExec RELOADCONFIG")
              ;
              if (pUVar22 == (UClass *)0x0) {
                local_3858 = local_2a58;
                sVar21 = wcslen(local_2a58);
                iStack_3850 = (int)sVar21;
                local_3618._12_4_ = uStack_384c;
                local_3618.Size = iStack_3850;
                local_3618.DataPtr = local_3858;
                pUVar35 = FindFirstObject<UObject>
                                    (&local_3618,None,Warning,L"StaticExec RELOADCONFIG");
              }
              else {
                pUVar35 = UClass::GetDefaultObject(pUVar22,true);
              }
              if (pUVar35 == (UObject *)0x0) {
                return true;
              }
              pUVar22 = *(UClass **)&pUVar35->field_0x10;
              if ((pUVar22->ClassFlags >> 2 & 1) != 0) {
                pFVar36 = UClass::GetConfigName(pUVar22,&local_3608);
                if ((pFVar36->Data).ArrayNum == 0) {
                  pwVar27 = L"";
                }
                else {
                  pwVar27 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
                }
                FConfigCacheIni::SafeUnloadBranch(GConfig,pwVar27);
                if (local_3608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3608.Data.AllocatorInstance.Data);
                }
                UObject::LoadConfig(pUVar35,(UClass *)0x0,(wchar_t *)0x0,9,(FProperty *)0x0,
                                    (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                                     *)0x0);
                return true;
              }
              local_3a58 = (FName)pUVar22->_padding_;
              FName::ToString(&local_3a58,&local_3a50);
              FOutputDevice::LogfImpl(param_3,L"Class %s is not a config-enabled class.");
            }
          }
          goto LAB_142116416;
        }
        bVar10 = false;
      }
      PerformSetCommand(local_3ec8,param_3,bVar10);
      return true;
    }
    uVar41 = 0;
    local_3e48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e48.Data.ArrayNum = 0;
    local_3e48.Data.ArrayMax = 0;
    bVar9 = FParse::Token(&local_3ec8,local_2258,0x100,true,L'\0');
    if (bVar9) {
      local_38e0 = local_2258;
      sVar21 = wcslen(local_2258);
      pwVar27 = local_38e0;
      iStack_38d8 = (int)sVar21;
      uVar3._4_4_ = uStack_38d4;
      uVar3._0_4_ = iStack_38d8;
      local_33f0 = local_38e0;
      uStack_33e8 = uVar3;
      pUVar22 = Z_Construct_UClass_UClass_NoRegister();
      local_35c8.DataPtr = pwVar27;
      local_35c8._8_8_ = uVar3;
      local_3e20 = (UStruct *)
                   StaticFindFirstObject(pUVar22,&local_35c8,None,Warning,L"StaticExec LISTPROPS");
      if ((local_3e20 != (UStruct *)0x0) &&
         (bVar9 = FParse::Token(&local_3ec8,&local_3e48,true,L'\0'), bVar9)) {
        local_3ea0.Data = (FScriptContainerElement *)0x0;
        local_3e98 = 0;
        do {
          uVar56 = 0;
          uVar16 = FString::Find(&local_3e48,L"*",1,IgnoreCase,FromStart,-1);
          uVar17 = FString::Find(&local_3e48,L"?",1,IgnoreCase,FromStart,-1);
          uVar19 = 0;
          if (uVar16 == 0xffffffff) {
            if (uVar17 == 0xffffffff) goto code_r0x000142111378;
LAB_1421113fc:
            uVar16 = local_3e48.Data.ArrayNum - 1;
            if (local_3e48.Data.ArrayNum == 0) {
              uVar16 = uVar56;
            }
            if ((int)uVar17 < (int)uVar16) {
              uVar16 = uVar17;
            }
            uVar52 = uVar56;
            if (0 < (int)uVar16) {
              uVar52 = uVar16;
            }
            FVar45.Data = (FScriptContainerElement *)L"";
            if (local_3e48.Data.ArrayNum != 0) {
              FVar45.Data = local_3e48.Data.AllocatorInstance.Data;
            }
            FString::ConstructFromPtrSize(&local_38d0,(wchar_t *)FVar45.Data,uVar52);
            iVar18 = (int)local_3e98;
            if ((int)local_3e98 == local_3e98._4_4_) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_3ea0,(int *)((longlong)&local_3e98 + 4));
            }
            local_3e98 = CONCAT44(local_3e98._4_4_,iVar18 + 1);
            pFVar60 = local_3ea0.Data + (longlong)iVar18 * 0x18;
            FString::FString((FString *)pFVar60,&local_38d0);
            pFVar60[0x10] = (FScriptContainerElement)0x0;
            if (local_38d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_38d0.Data.AllocatorInstance.Data);
            }
            uVar16 = local_3e48.Data.ArrayNum - 1;
            if (local_3e48.Data.ArrayNum == 0) {
              uVar16 = uVar56;
            }
            uVar16 = (uVar16 - uVar17) - 1;
            if (local_3e48.Data.ArrayNum != 0) {
              uVar56 = local_3e48.Data.ArrayNum - 1;
            }
          }
          else {
            if ((uVar17 != 0xffffffff) && ((int)uVar17 <= (int)uVar16)) goto LAB_1421113fc;
            uVar17 = local_3e48.Data.ArrayNum - 1;
            if (local_3e48.Data.ArrayNum == 0) {
              uVar17 = uVar19;
            }
            if ((int)uVar16 < (int)uVar17) {
              uVar17 = uVar16;
            }
            uVar52 = uVar19;
            if (0 < (int)uVar17) {
              uVar52 = uVar17;
            }
            FVar45.Data = (FScriptContainerElement *)L"";
            if (local_3e48.Data.ArrayNum != 0) {
              FVar45.Data = local_3e48.Data.AllocatorInstance.Data;
            }
            FString::ConstructFromPtrSize(&local_3b68,(wchar_t *)FVar45.Data,uVar52);
            iVar18 = (int)local_3e98;
            if ((int)local_3e98 == local_3e98._4_4_) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x818,&local_3ea0,(int *)((longlong)&local_3e98 + 4));
            }
            FVar45.Data = local_3b68.Data.AllocatorInstance.Data;
            lVar28 = (longlong)iVar18;
            local_3e98 = CONCAT44(local_3e98._4_4_,iVar18 + 1);
            *(undefined8 *)&local_3ea0.Data[lVar28 * 0x18].field_0x0 = 0;
            lVar53 = (longlong)local_3b68.Data.ArrayNum;
            *(int *)(local_3ea0.Data + lVar28 * 0x18 + 8) = local_3b68.Data.ArrayNum;
            pFVar60 = local_3ea0.Data + lVar28 * 0x18;
            if (local_3b68.Data.ArrayNum == 0) {
              *(int *)(pFVar60 + 0xc) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_3b68.Data.ArrayNum,0,(ForAnyElementType *)pFVar60,
                         local_3b68.Data.ArrayNum,(int *)(pFVar60 + 0xc));
              memcpy(*(FScriptContainerElement **)&pFVar60->field_0x0,FVar45.Data,lVar53 * 2);
            }
            pFVar60[0x10] = (FScriptContainerElement)0x1;
            if (local_3b68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b68.Data.AllocatorInstance.Data);
            }
            uVar17 = local_3e48.Data.ArrayNum - 1;
            if (local_3e48.Data.ArrayNum == 0) {
              uVar17 = uVar19;
            }
            uVar16 = (uVar17 - uVar16) - 1;
            if (local_3e48.Data.ArrayNum != 0) {
              uVar56 = local_3e48.Data.ArrayNum - 1;
            }
          }
          uVar17 = uVar56;
          if ((int)uVar16 < (int)uVar56) {
            uVar17 = uVar16;
          }
          if (0 < (int)uVar17) {
            uVar19 = uVar17;
          }
          FString::RemoveAt(&local_3e48,0,uVar56 - uVar19,No);
        } while( true );
      }
    }
    local_3a50.Data.AllocatorInstance.Data = local_3e48.Data.AllocatorInstance.Data;
    if (2 < (byte)LogExec._0_1_) {
      FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
                (&local_3818,(FName)LogExec._4_8_,Warning);
      FOutputDevice::Log(param_3,L"ListProps: expected format is \'ListProps [class] [wildcard]");
      FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
      FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_3818);
      local_3a50.Data.AllocatorInstance.Data = local_3e48.Data.AllocatorInstance.Data;
    }
    goto LAB_142116416;
  }
  bVar9 = FParse::Token(&local_3ec8,local_2858,0x100,true,L'\0');
  if (!bVar9) {
LAB_1421111e6:
    if ((byte)LogExec._0_1_ < 3) {
      return true;
    }
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_3808,(FName)LogExec._4_8_,Warning);
    FOutputDevice::LogfImpl(param_3,L"Unrecognized class %s");
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_3808);
    return true;
  }
  sVar21 = wcslen(local_2858);
  local_3a40 = local_2858;
  iStack_3a38 = (int)sVar21;
  uStack_3a34 = local_33c4;
  pUVar22 = Z_Construct_UClass_UClass_NoRegister();
  local_35d8._12_4_ = uStack_3a34;
  local_35d8.Size = iStack_3a38;
  local_35d8.DataPtr = local_3a40;
  pUVar23 = (UStruct *)StaticFindFirstObject(pUVar22,&local_35d8,None,Warning,L"StaticExec GET");
  if (pUVar23 == (UStruct *)0x0) goto LAB_1421111e6;
  bVar9 = FParse::Token(&local_3ec8,local_2458,0x100,true,L'\0');
  if ((!bVar9) ||
     (pFVar24 = FindFProperty<FProperty>(pUVar23,local_2458,Default), pFVar24 == (FProperty *)0x0))
  {
    if ((byte)LogExec._0_1_ < 3) {
      return true;
    }
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_37f8,(FName)LogExec._4_8_,Warning);
    FOutputDevice::LogfImpl(param_3,L"Unrecognized property %s");
    FLogCategoryBase::PostTrigger((FLogCategoryBase *)&LogExec,Warning);
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_37f8);
    return true;
  }
  local_3c40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3c40.Data.ArrayNum = 0;
  local_3c40.Data.ArrayMax = 0;
  if ((pUVar23[1].Script.AllocatorInstance.Data == (FScriptContainerElement *)0x0) ||
     (pUVar23->PropertiesSize == 0)) {
LAB_142111170:
    pwVar27 = L"";
  }
  else {
    pFVar60 = pUVar23[1].Script.AllocatorInstance.Data;
    pvVar25 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar24,pFVar60,0);
    pvVar26 = FProperty::ContainerVoidPtrToValuePtrInternal(pFVar24,pFVar60,0);
    FProperty::ExportText_Direct
              (pFVar24,&local_3c40,pvVar26,pvVar25,(UObject *)pUVar23,0x20000,(UObject *)0x0);
    pwVar27 = (wchar_t *)local_3c40.Data.AllocatorInstance.Data;
    if (local_3c40.Data.ArrayNum == 0) goto LAB_142111170;
  }
  FOutputDevice::Log(param_3,pwVar27);
  local_3a50.Data.AllocatorInstance.Data = local_3c40.Data.AllocatorInstance.Data;
  goto LAB_142116416;
code_r0x000142111378:
  if (local_3e48.Data.ArrayNum == 0) {
    bVar9 = false;
  }
  else {
    bVar9 = 0 < local_3e48.Data.ArrayNum + -1;
    if (0 < local_3e48.Data.ArrayNum + -1) {
      iVar18 = (int)local_3e98;
      if ((int)local_3e98 == local_3e98._4_4_) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&local_3ea0,(int *)((longlong)&local_3e98 + 4));
      }
      local_3e98 = CONCAT44(local_3e98._4_4_,iVar18 + 1);
      *(undefined8 *)&local_3ea0.Data[(longlong)iVar18 * 0x18].field_0x0 = 0;
      this = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
             (local_3ea0.Data + (longlong)iVar18 * 0x18);
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                (this,(wchar_t *)local_3e48.Data.AllocatorInstance.Data,local_3e48.Data.ArrayNum,0);
      *(undefined1 *)&this[1].AllocatorInstance.Data = 0;
    }
  }
  pUVar23 = local_3e20;
  local_3c78.Struct = local_3e20;
  local_3c78.InterfaceIndex = -1;
  local_3c78.bIncludeSuper = true;
  local_3c78.bIncludeDeprecated = true;
  local_3c78.Field = local_3e20->ChildProperties;
  local_3c78.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_3c78);
  local_3d90.Struct = pUVar23;
  pFVar54 = local_3c78.Field;
  while (local_3c78.Field = pFVar54, pFVar54 != (FField *)0x0) {
    FName::ToString(&pFVar54->ClassPrivate->Name,&local_3a20);
    bVar10 = IsThisNotNull(pFVar54,"FField::GetName");
    if (bVar10) {
      FName::ToString(&pFVar54->NamePrivate,&local_3b88);
    }
    else {
      FString::FString(&local_3b88,L"None");
    }
    FString::PrintfImpl(&local_3a30,L"%s at offset %d; %dx %d bytes of type %s");
    pFVar49 = local_3ea8;
    FOutputDevice::LogfImpl(local_3ea8,L"    Prop %s");
    if (local_3a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a30.Data.AllocatorInstance.Data);
    }
    if (local_3b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b88.Data.AllocatorInstance.Data);
    }
    if (local_3a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a20.Data.AllocatorInstance.Data);
    }
    ParsePropertyFlags(&local_3b98,(EPropertyFlags)pFVar54[1].ClassPrivate);
    iVar18 = local_3b98.ArrayNum;
    uVar40 = (ulonglong)local_3b98.ArrayNum;
    pFVar60 = local_3b98.AllocatorInstance.Data + uVar40 * 8;
    FVar45.Data = local_3b98.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar40 != iVar18) {
        local_3e88 = 0;
        `TCheckedPointerIterator<wchar_t_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_3e88);
      }
      if (FVar45.Data == pFVar60) break;
      FOutputDevice::LogfImpl(pFVar49,L"      Flag %s");
      uVar40 = (ulonglong)(uint)local_3b98.ArrayNum;
      FVar45.Data = FVar45.Data + 8;
    }
    if (local_3b98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b98.AllocatorInstance.Data);
    }
    local_3c78.Field = pFVar54->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_3c78);
    local_3d90.Struct = local_3e20;
    pFVar54 = local_3c78.Field;
  }
  local_3d90.Field = (local_3d90.Struct)->ChildProperties;
  local_3d90.InterfaceIndex = -1;
  local_3d90.bIncludeSuper = true;
  local_3d90.bIncludeDeprecated = true;
  local_3d90.bIncludeInterface = false;
  TFieldIterator<FProperty>::IterateToNext(&local_3d90);
  uVar40 = uVar41;
  if (local_3d90.Field == (FField *)0x0) {
LAB_142111ea5:
    FOutputDevice::Log(local_3ea8,L"- No matches");
  }
  else {
    do {
      pFVar54 = local_3d90.Field;
      bVar10 = IsThisNotNull(local_3d90.Field,"FField::GetName");
      if (bVar10) {
        FName::ToString(&pFVar54->NamePrivate,&local_3d10);
      }
      else {
        FString::FString(&local_3d10,L"None");
      }
      uVar46 = uVar41;
      uVar57 = uVar41;
      iVar18 = (int)local_3e98;
      if (0 < (int)local_3e98) {
        do {
          uVar17 = (uint)uVar46;
          uVar52 = ~uVar17 >> 0x1f;
          uVar16 = uVar19;
          if ((int)uVar17 < iVar18) {
            uVar16 = uVar52;
          }
          if (uVar16 == 0) {
            bVar10 = FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar2 = (code *)swi(3);
              uVar11 = (*pcVar2)();
              return (bool)uVar11;
            }
            iVar18 = (int)local_3e98;
          }
          if ((*(int *)(local_3ea0.Data + uVar57 + 8) != 0) &&
             (0 < *(int *)(local_3ea0.Data + uVar57 + 8) + -1)) {
            uVar16 = uVar19;
            if ((int)uVar17 < iVar18) {
              uVar16 = uVar52;
            }
            if ((uVar16 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar2 = (code *)swi(3);
              uVar11 = (*pcVar2)();
              return (bool)uVar11;
            }
            if (*(int *)(local_3ea0.Data + uVar57 + 8) == 0) {
              pwVar27 = L"";
              uVar16 = uVar19;
            }
            else {
              pwVar27 = *(wchar_t **)(local_3ea0.Data + uVar57);
              uVar16 = *(int *)(local_3ea0.Data + uVar57 + 8) - 1;
            }
            iVar18 = FString::Find(&local_3d10,pwVar27,uVar16,IgnoreCase,FromStart,-1);
            pFVar54 = local_3d90.Field;
            if (iVar18 == -1) goto LAB_142111e68;
            if (uVar17 == 0) {
              bVar10 = iVar18 == 0;
LAB_14211199d:
              pFVar54 = local_3d90.Field;
              if (!bVar10) goto LAB_142111e68;
            }
            else if (0 < (int)uVar17) {
              uVar16 = uVar19;
              if ((int)(uVar17 - 1) < (int)local_3e98) {
                uVar16 = ~(uVar17 - 1) >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar10 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar2 = (code *)swi(3);
                uVar11 = (*pcVar2)();
                return (bool)uVar11;
              }
              if (local_3ea0.Data[uVar57 - 8] == (FScriptContainerElement)0x0) {
                bVar10 = iVar18 == 1;
                goto LAB_14211199d;
              }
            }
            uVar16 = uVar19;
            if ((int)uVar17 < (int)local_3e98) {
              uVar16 = uVar52;
            }
            if ((uVar16 == 0) &&
               (bVar10 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar2 = (code *)swi(3);
              uVar11 = (*pcVar2)();
              return (bool)uVar11;
            }
            uVar16 = local_3d10.Data.ArrayNum - 1;
            if (local_3d10.Data.ArrayNum == 0) {
              uVar16 = uVar19;
            }
            uVar52 = *(int *)(local_3ea0.Data + uVar57 + 8) - 1;
            if (*(int *)(local_3ea0.Data + uVar57 + 8) == 0) {
              uVar52 = uVar19;
            }
            uVar52 = (uVar16 - uVar52) - iVar18;
            uVar16 = uVar56;
            if (local_3d10.Data.ArrayNum != 0) {
              uVar16 = local_3d10.Data.ArrayNum - 1;
            }
            uVar39 = uVar16;
            if ((int)uVar52 < (int)uVar16) {
              uVar39 = uVar52;
            }
            uVar52 = uVar19;
            if (0 < (int)uVar39) {
              uVar52 = uVar39;
            }
            FString::RemoveAt(&local_3d10,0,uVar16 - uVar52,No);
            iVar18 = (int)local_3e98;
          }
          uVar46 = (ulonglong)(uVar17 + 1);
          pFVar54 = local_3d90.Field;
          uVar57 = uVar57 + 0x18;
        } while ((int)(uVar17 + 1) < iVar18);
      }
      if (bVar9) {
        if (local_3d10.Data.ArrayNum == 0) {
          bVar10 = true;
        }
        else {
          bVar10 = local_3d10.Data.ArrayNum == 1;
        }
LAB_142111b05:
        if (bVar10) goto LAB_142111b10;
      }
      else {
        uVar16 = uVar19;
        if ((int)(iVar18 - 1U) < iVar18) {
          uVar16 = ~(iVar18 - 1U) >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar10 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar2 = (code *)swi(3);
            uVar11 = (*pcVar2)();
            return (bool)uVar11;
          }
          iVar18 = (int)local_3e98;
        }
        if (local_3ea0.Data[(longlong)(iVar18 + -1) * 0x18 + 0x10] == (FScriptContainerElement)0x0)
        {
          uVar16 = uVar56;
          if (local_3d10.Data.ArrayNum != 0) {
            uVar16 = local_3d10.Data.ArrayNum - 1;
          }
          bVar10 = uVar16 == 1;
          goto LAB_142111b05;
        }
LAB_142111b10:
        local_3e60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_3e60.Data.ArrayNum = 0;
        local_3e60.Data.ArrayMax = 0;
        if (pFVar54 == (FField *)0x0) {
LAB_142111d88:
          FName::ToString(&pFVar54->ClassPrivate->Name,&local_3c50);
          if (local_3e60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e60.Data.AllocatorInstance.Data);
          }
          local_3e60.Data.AllocatorInstance.Data = local_3c50.Data.AllocatorInstance.Data;
          local_3e60.Data.ArrayNum = local_3c50.Data.ArrayNum;
          local_3e60.Data.ArrayMax = local_3c50.Data.ArrayMax;
          local_3c50.Data.ArrayNum = 0;
          local_3c50.Data.ArrayMax = 0;
          local_3c50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        else {
          if (((uint)(int)pFVar54->ClassPrivate->CastFlags >> 0x14 & 1) != 0) {
            if (pFVar54 != (FField *)0x0) {
              local_3ae8 = (FName)(pFVar54[2].Owner.Container.Field)->Next;
              FName::ToString(&local_3ae8,&local_3a10);
              FVar45.Data = (FScriptContainerElement *)L"";
              if (local_3a10.Data.ArrayNum != 0) {
                FVar45.Data = local_3a10.Data.AllocatorInstance.Data;
              }
              FString::operator=(&local_3e60,(wchar_t *)FVar45.Data);
              if (local_3a10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3a10.Data.AllocatorInstance.Data);
              }
              goto LAB_142111dd1;
            }
            goto LAB_142111d88;
          }
          if (pFVar54 == (FField *)0x0) goto LAB_142111d88;
          if (((uint)(int)pFVar54->ClassPrivate->CastFlags >> 10 & 1) != 0) {
            if (pFVar54 != (FField *)0x0) {
              local_3ae0 = (FName)(pFVar54[2].Next)->Next;
              FName::ToString(&local_3ae0,&local_3a00);
              FString::PrintfImpl(&local_3c30,L"SubclassOf<%s>");
              if (local_3e60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3e60.Data.AllocatorInstance.Data);
              }
              local_3e60.Data.AllocatorInstance.Data = local_3c30.Data.AllocatorInstance.Data;
              uVar6._0_4_ = local_3c30.Data.ArrayNum;
              uVar6._4_4_ = local_3c30.Data.ArrayMax;
              local_3e60.Data.ArrayNum = local_3c30.Data.ArrayNum;
              local_3e60.Data.ArrayMax = local_3c30.Data.ArrayMax;
              local_3c30.Data.ArrayNum = 0;
              local_3c30.Data.ArrayMax = 0;
              local_3c30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              if (local_3a00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                local_3e60.Data._8_8_ = uVar6;
                FMemory::Free(local_3a00.Data.AllocatorInstance.Data);
              }
              goto LAB_142111dd1;
            }
            goto LAB_142111d88;
          }
          if (pFVar54 == (FField *)0x0) goto LAB_142111d88;
          if ((pFVar54->ClassPrivate->CastFlags >> 0x21 & 1) == 0) {
            if (((pFVar54 == (FField *)0x0) ||
                (((uint)(int)pFVar54->ClassPrivate->CastFlags >> 0x1a & 1) == 0)) ||
               (pFVar54 == (FField *)0x0)) goto LAB_142111d88;
            local_3ad0 = (FName)(pFVar54[2].Owner.Container.Field)->Next;
            FName::ToString(&local_3ad0,&local_39e0);
            FVar45.Data = (FScriptContainerElement *)L"";
            if (local_39e0.Data.ArrayNum != 0) {
              FVar45.Data = local_39e0.Data.AllocatorInstance.Data;
            }
            FString::operator=(&local_3e60,(wchar_t *)FVar45.Data);
            if (local_39e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_39e0.Data.AllocatorInstance.Data);
            }
          }
          else {
            if (pFVar54 == (FField *)0x0) goto LAB_142111d88;
            local_3ad8 = (FName)(pFVar54[2].Next)->Next;
            FName::ToString(&local_3ad8,&local_39f0);
            FString::PrintfImpl(&local_3c60,L"SoftClassPtr<%s>");
            if (local_3e60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e60.Data.AllocatorInstance.Data);
            }
            local_3e60.Data.AllocatorInstance.Data = local_3c60.Data.AllocatorInstance.Data;
            uVar7._0_4_ = local_3c60.Data.ArrayNum;
            uVar7._4_4_ = local_3c60.Data.ArrayMax;
            local_3e60.Data.ArrayNum = local_3c60.Data.ArrayNum;
            local_3e60.Data.ArrayMax = local_3c60.Data.ArrayMax;
            local_3c60.Data.ArrayNum = 0;
            local_3c60.Data.ArrayMax = 0;
            local_3c60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_39f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              local_3e60.Data._8_8_ = uVar7;
              FMemory::Free(local_39f0.Data.AllocatorInstance.Data);
            }
          }
        }
LAB_142111dd1:
        bVar10 = IsThisNotNull(pFVar54,"FField::GetName");
        if (bVar10) {
          FName::ToString(&pFVar54->NamePrivate,&local_3b78);
        }
        else {
          FString::FString(&local_3b78,L"None");
        }
        FOutputDevice::LogfImpl(local_3ea8,L"%i) %s (%s)");
        if (local_3b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b78.Data.AllocatorInstance.Data);
        }
        uVar40 = (ulonglong)((int)uVar40 + 1);
        if (local_3e60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3e60.Data.AllocatorInstance.Data);
        }
      }
LAB_142111e68:
      if (local_3d10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d10.Data.AllocatorInstance.Data);
      }
      local_3d90.Field = pFVar54->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_3d90);
    } while (local_3d90.Field != (FField *)0x0);
    if ((int)uVar40 == 0) goto LAB_142111ea5;
  }
  DestructItems<FListPropsWildcardPiece,int>
            ((FListPropsWildcardPiece *)local_3ea0.Data,(int)local_3e98);
  local_3a50.Data.AllocatorInstance.Data = local_3e48.Data.AllocatorInstance.Data;
  if ((FListPropsWildcardPiece *)local_3ea0.Data != (FListPropsWildcardPiece *)0x0) {
    FMemory::Free(local_3ea0.Data);
    local_3a50.Data.AllocatorInstance.Data = local_3e48.Data.AllocatorInstance.Data;
  }
LAB_142116416:
  if (local_3a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a50.Data.AllocatorInstance.Data);
  }
  return true;
}

// StaticExit @ 142116460

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl StaticExit(void)

{
  bool bVar1;
  FUObjectItem *this;
  
  bVar1 = UObjectInitialized();
  if (bVar1) {
    DeleteLoaders();
    if (GObjTransientPkg != (UPackage *)0x0) {
      this = FUObjectArray::IndexToObject
                       (&GUObjectArray,*(int *)((longlong)&GObjTransientPkg->_padding_ + 4));
      FUObjectItem::ClearRootFlags(this,RootSet);
      GObjTransientPkg = (UPackage *)0x0;
    }
    PurgeAllUObjectsOnExit();
    ShutdownGarbageCollection();
    UObjectBaseShutdown();
    FDeferredMessageLog::Cleanup();
    CleanupLinkerAnnotations();
    CleanupCachedArchetypes();
    UE::RemoteObject::Private::ShutdownRemoteObjects();
    if (4 < (byte)LogExit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogExit);
      return;
    }
  }
  return;
}

// StaticShutdownAfterError @ 142116550

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl StaticShutdownAfterError(void)

{
  bool bVar1;
  TIterator local_28;
  
  bVar1 = UObjectInitialized();
  if ((bVar1) && (bShutdown == false)) {
    bShutdown = true;
    if (4 < (byte)LogExit._0_1_) {
      UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogExit);
    }
    local_28.Index = -1;
    local_28.Array = &GUObjectArray;
    local_28.CurrentObject = (FUObjectItem *)0x0;
    FUObjectArray::TIterator::Advance(&local_28);
    while (local_28.CurrentObject != (FUObjectItem *)0x0) {
      (**(code **)((((local_28.CurrentObject)->field1_0x8).Object)->_padding_ + 0xd0))();
      FUObjectArray::TIterator::Advance(&local_28);
    }
  }
  return;
}

// StaticUObjectInit @ 1421165f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl StaticUObjectInit(void)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  FUObjectItem *this;
  wchar_t *pwVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined *puVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  FString local_190;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined1 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160;
  undefined8 local_15c;
  undefined1 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined1 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_124;
  undefined1 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  FName local_f0;
  undefined1 local_e8 [12];
  undefined1 local_dc [12];
  undefined1 local_d0 [12];
  undefined1 local_c4 [12];
  undefined1 local_b8 [16];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  UObjectBaseInit();
  pFVar6 = FName::FName(&local_f0,L"/Engine/Transient");
  FVar1 = *pFVar6;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)0x0,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = (UObject *)0x0;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_a8._24_4_ = RF_Transient;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_a8._16_8_ = FVar1;
  pUVar8 = (UPackage *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar10 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  GObjTransientPkg = pUVar8;
  this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar8->_padding_ + 4));
  FUObjectItem::SetRootFlags(this,RootSet);
  pwVar9 = FCommandLine::Get();
  bVar3 = FParse::Param(pwVar9,L"VERIFYGC");
  pwVar9 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar9,L"NOVERIFYGC");
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar10 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"gc.VerifyAssumptions",1);
  if (plVar10 != (longlong *)0x0) {
    if (bVar3) {
      lVar13 = *plVar10;
      local_1b8 = 0;
      local_180 = 0xd000000;
      local_17c = 0;
      local_178 = 0;
      local_170 = 0;
      local_16c = 0xf000000;
      local_168 = 0x1000000;
      uVar11 = (**(code **)(lVar13 + 0xa8))(plVar10,local_e8,&local_180);
      puVar12 = &u_1;
    }
    else {
      if (!bVar4) goto LAB_142116817;
      lVar13 = *plVar10;
      local_1b0 = 0;
      local_164 = 0xd000000;
      local_160 = 0;
      local_15c = 0;
      local_154 = 0;
      local_150 = 0xf000000;
      local_14c = 0x1000000;
      uVar11 = (**(code **)(lVar13 + 0xa8))(plVar10,local_dc,&local_164);
      puVar12 = &u_0;
    }
    (**(code **)(lVar13 + 0xb0))(plVar10,puVar12,uVar11);
  }
LAB_142116817:
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar10 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"gc.VerifyAssumptionsOnFullPurge",1);
  if (plVar10 != (longlong *)0x0) {
    if (bVar3) {
      lVar13 = *plVar10;
      local_1a8 = 0;
      local_140 = 0;
      local_148 = 0xd000000;
      local_144 = 0;
      local_138 = 0;
      local_134 = 0xf000000;
      local_130 = 0x1000000;
      uVar11 = (**(code **)(lVar13 + 0xa8))(plVar10,local_d0,&local_148);
      puVar12 = &u_1;
    }
    else {
      if (!bVar4) goto LAB_142116916;
      lVar13 = *plVar10;
      local_1a0 = 0;
      local_12c = 0xd000000;
      local_128 = 0;
      local_124 = 0;
      local_11c = 0;
      local_118 = 0xf000000;
      local_114 = 0x1000000;
      uVar11 = (**(code **)(lVar13 + 0xa8))(plVar10,local_c4,&local_12c);
      puVar12 = &u_0;
    }
    (**(code **)(lVar13 + 0xb0))(plVar10,puVar12,uVar11);
  }
LAB_142116916:
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  plVar10 = (longlong *)
            (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                      (IConsoleManager::Singleton,L"gc.VerifyAssumptionsChance",1);
  if ((plVar10 != (longlong *)0x0) && (bVar4)) {
    local_198 = 0;
    local_108 = 0;
    local_110 = 0xd000000;
    local_10c = 0;
    local_100 = 0;
    local_fc = 0xf000000;
    local_f8 = 0x1000000;
    FString::PrintfImpl(&local_190,L"%g");
    lVar13 = *plVar10;
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar14.Data = local_190.Data.AllocatorInstance.Data;
    }
    uVar11 = (**(code **)(lVar13 + 0xa8))(plVar10,local_b8,&local_110);
    (**(code **)(lVar13 + 0xb0))(plVar10,FVar14.Data,uVar11);
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  UE::RemoteObject::Private::InitRemoteObjects();
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  return;
}

// UsesPerObjectConfig @ 142118ec0

bool __cdecl UsesPerObjectConfig(UObject *param_1)

{
  if (((*(uint *)(*(longlong *)&param_1->field_0x10 + 0xd4) & 0x400) != 0) &&
     ((*(uint *)&param_1->field_0x8 & 0x10) == 0)) {
    return true;
  }
  return false;
}

// Z_Construct_UClass_UDEPRECATED_MetaData_NoRegister @ 142119170

UClass * __cdecl Z_Construct_UClass_UDEPRECATED_MetaData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDEPRECATED_MetaData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"MetaData",
               &Z_Registration_Info_UClass_UDEPRECATED_MetaData.InnerSingleton,
               UDEPRECATED_MetaData::StaticRegisterNativesUDEPRECATED_MetaData,200,8,
               CLASS_Intrinsic|CLASS_Deprecated,CASTCLASS_None,L"Engine",
               InternalConstructor<UDEPRECATED_MetaData>,
               InternalVTableHelperCtorCaller<UDEPRECATED_MetaData>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDEPRECATED_MetaData.InnerSingleton;
}

// Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister @ 142119180

UClass * __cdecl Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LinkerPlaceholderClass",
               &Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton,
               ULinkerPlaceholderClass::StaticRegisterNativesULinkerPlaceholderClass,0x3c8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULinkerPlaceholderClass>
               ,InternalVTableHelperCtorCaller<ULinkerPlaceholderClass>,local_res8,
               UClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderClass.InnerSingleton;
}

// Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister @ 142119240

UClass * __cdecl Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LinkerPlaceholderExportObject",
               &Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.InnerSingleton,
               ULinkerPlaceholderExportObject::StaticRegisterNativesULinkerPlaceholderExportObject,
               0xf8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULinkerPlaceholderExportObject>,
               InternalVTableHelperCtorCaller<ULinkerPlaceholderExportObject>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderExportObject.InnerSingleton;
}

// Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister @ 142119250

UClass * __cdecl Z_Construct_UClass_ULinkerPlaceholderFunction_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_ULinkerPlaceholderFunction.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UStruct::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"LinkerPlaceholderFunction",
               &Z_Registration_Info_UClass_ULinkerPlaceholderFunction.InnerSingleton,
               ULinkerPlaceholderFunction::StaticRegisterNativesULinkerPlaceholderFunction,0x2a8,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULinkerPlaceholderFunction>,
               InternalVTableHelperCtorCaller<ULinkerPlaceholderFunction>,aFStackX_8,
               UFunction::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULinkerPlaceholderFunction.InnerSingleton;
}

// Z_Construct_UClass_UObjectRedirector @ 142119260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UClass * __cdecl Z_Construct_UClass_UObjectRedirector(void)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *this;
  FSchemaView FVar4;
  undefined1 auStack_228 [32];
  FName local_208;
  FName local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  initializer_list<UE::GC::FMemberDeclaration> local_1e8;
  undefined1 local_1d8 [8];
  FMemberDeclaration local_1d0;
  FSchemaBuilder local_1b8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_228;
  if (Z_Registration_Info_UClass_UObjectRedirector.OuterSingleton == (UClass *)0x0) {
    pUVar3 = Z_Construct_UClass_UObject();
    this = UObjectRedirector::StaticClass();
    UObjectForceRegistration((UObjectBase *)this,true);
    if (((UClass *)this->_padding_ != pUVar3) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Class->GetSuperClass() == SuperClass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectRedirector.cpp"
                           ,0x74,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UClass *)(*pcVar1)();
      return pUVar3;
    }
    FName::FName(&local_208,"DestinationObject");
    local_200 = local_208;
    local_1e8._First = &local_1d0;
    uStack_1f8 = 0x28;
    local_1e8._Last = (FMemberDeclaration *)&local_1b8;
    uStack_1f4 = CONCAT31(uStack_1f4._1_3_,2);
    local_1d0._12_4_ = uStack_1f4;
    local_1d0.Offset = 0x28;
    local_1f0 = 0;
    local_1d0.DebugName = local_208;
    local_1d0.ExtraWord.ObjectARO = (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
    UE::GC::FSchemaBuilder::FSchemaBuilder(&local_1b8,0x30,&local_1e8);
    FVar4 = UE::GC::FSchemaBuilder::Build
                      (&local_1b8,
                       (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)local_1d8);
                    /* WARNING: Load size is inaccurate */
    UE::GC::DeclareIntrinsicSchema(this,(FSchemaView)*FVar4.Handle);
    UE::GC::FSchemaBuilder::~FSchemaBuilder(&local_1b8);
    UStruct::StaticLink((UStruct *)this,false);
    Z_Registration_Info_UClass_UObjectRedirector.OuterSingleton = this;
  }
  if (((Z_Registration_Info_UClass_UObjectRedirector.OuterSingleton)->_padding_ == 0) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Z_Registration_Info_UClass_UObjectRedirector.OuterSingleton->GetClass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ObjectRedirector.cpp"
                         ,0x74,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UClass *)(*pcVar1)();
    return pUVar3;
  }
  return Z_Registration_Info_UClass_UObjectRedirector.OuterSingleton;
}

// Z_Construct_UEnum_CoreUObject_EAppMsgCategory @ 1421193e0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EAppMsgCategory(void)

{
  if (Z_Registration_Info_UEnum_EAppMsgCategory.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAppMsgCategory.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EAppMsgCategory_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAppMsgCategory.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EAppMsgType @ 142119420

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EAppMsgType(void)

{
  if (Z_Registration_Info_UEnum_EAppMsgType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAppMsgType.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EAppMsgType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAppMsgType.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EAppReturnType @ 142119460

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EAppReturnType(void)

{
  if (Z_Registration_Info_UEnum_EAppReturnType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAppReturnType.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EAppReturnType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAppReturnType.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EAxis @ 1421194a0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EAxis(void)

{
  if (Z_Registration_Info_UEnum_EAxis.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAxis.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EAxis_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAxis.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EAxisList @ 1421194e0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EAxisList(void)

{
  if (Z_Registration_Info_UEnum_EAxisList.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAxisList.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EAxisList_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAxisList.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EDataValidationResult @ 142119520

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EDataValidationResult(void)

{
  if (Z_Registration_Info_UEnum_EDataValidationResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EDataValidationResult.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EDataValidationResult_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EDataValidationResult.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EInputDeviceAnalogStickMask @ 142119560

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EInputDeviceAnalogStickMask(void)

{
  if (Z_Registration_Info_UEnum_EInputDeviceAnalogStickMask.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputDeviceAnalogStickMask.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EInputDeviceAnalogStickMask_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputDeviceAnalogStickMask.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EInputDeviceMappingPolicy @ 1421195a0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EInputDeviceMappingPolicy(void)

{
  if (Z_Registration_Info_UEnum_EInputDeviceMappingPolicy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputDeviceMappingPolicy.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EInputDeviceMappingPolicy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputDeviceMappingPolicy.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EInputDeviceTriggerMask @ 1421195e0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EInputDeviceTriggerMask(void)

{
  if (Z_Registration_Info_UEnum_EInputDeviceTriggerMask.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EInputDeviceTriggerMask.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EInputDeviceTriggerMask_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EInputDeviceTriggerMask.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_ELogTimes @ 142119620

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_ELogTimes(void)

{
  if (Z_Registration_Info_UEnum_ELogTimes.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ELogTimes.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_ELogTimes_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ELogTimes.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EMouseCursor @ 142119660

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EMouseCursor(void)

{
  if (Z_Registration_Info_UEnum_EMouseCursor.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMouseCursor.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EMouseCursor_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMouseCursor.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EOverriddenState @ 1421196a0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EOverriddenState(void)

{
  if (Z_Registration_Info_UEnum_EOverriddenState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EOverriddenState.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EOverriddenState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EOverriddenState.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EPixelFormat @ 1421196e0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EPixelFormat(void)

{
  if (Z_Registration_Info_UEnum_EPixelFormat.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPixelFormat.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EPixelFormat_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPixelFormat.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_ESearchCase @ 142119720

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_ESearchCase(void)

{
  if (Z_Registration_Info_UEnum_ESearchCase.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESearchCase.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_ESearchCase_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESearchCase.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_ESearchDir @ 142119760

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_ESearchDir(void)

{
  if (Z_Registration_Info_UEnum_ESearchDir.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESearchDir.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_ESearchDir_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESearchDir.InnerSingleton;
}

// Z_Construct_UEnum_CoreUObject_EUnit @ 1421197a0

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EUnit(void)

{
  if (Z_Registration_Info_UEnum_EUnit.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EUnit.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EUnit_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EUnit.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAutomationExecutionEntry @ 1421197e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAutomationExecutionEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,
               &Z_Construct_UScriptStruct_FAutomationExecutionEntry_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FBox2D @ 142119860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBox2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FBox2D_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FBox2f @ 1421198e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBox2f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FBox2f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FBox3d @ 142119960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBox3d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FBox3d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FBox3f @ 1421199e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBox3f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FBox3f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FBox @ 142119a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBox(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FBox_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FBoxSphereBounds3d @ 142119ae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoxSphereBounds3d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FBoxSphereBounds3d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FBoxSphereBounds3f @ 142119b60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoxSphereBounds3f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FBoxSphereBounds3f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FBoxSphereBounds @ 142119be0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoxSphereBounds(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FBoxSphereBounds_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FColor @ 142119c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FColor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FColor_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FDoubleRange @ 142119ce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FDoubleRange(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FDoubleRange_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FFallbackStruct @ 142119d60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFallbackStruct(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FFallbackStruct_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FFloatInterval @ 142119de0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFloatInterval(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FFloatInterval_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FFloatRange @ 142119e60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFloatRange(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FFloatRange_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FFrameNumberRange @ 142119ee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FFrameNumberRange(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FFrameNumberRange_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInputDeviceId @ 142119f60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInputDeviceId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInputDeviceId_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt32Interval @ 142119fe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt32Interval(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt32Interval_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt32Range @ 14211a060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt32Range(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt32Range_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt32Rect @ 14211a0e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt32Rect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt32Rect_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt32Vector2 @ 14211a160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt32Vector2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt32Vector2_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt32Vector4 @ 14211a1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt32Vector4(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt32Vector4_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt32Vector @ 14211a260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt32Vector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt32Vector_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt64Rect @ 14211a2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt64Rect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt64Rect_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt64Vector2 @ 14211a360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt64Vector2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt64Vector2_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt64Vector4 @ 14211a3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt64Vector4(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt64Vector4_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInt64Vector @ 14211a460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInt64Vector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInt64Vector_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FIntRect @ 14211a4e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIntRect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FIntRect_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FIntVector2 @ 14211a560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIntVector2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FIntVector2_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FIntVector4 @ 14211a5e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIntVector4(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FIntVector4_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FIntVector @ 14211a660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FIntVector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FIntVector_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurveFloat @ 14211a6e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurveFloat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInterpCurveFloat_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurveLinearColor @ 14211a760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurveLinearColor(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,
               &Z_Construct_UScriptStruct_FInterpCurveLinearColor_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurveQuat @ 14211a7e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurveQuat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInterpCurveQuat_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurveTwoVectors @ 14211a860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurveTwoVectors(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInterpCurveTwoVectors_Statics::StructParams
              );
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurveVector2D @ 14211a8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurveVector2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInterpCurveVector2D_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FInterpCurveVector @ 14211a960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FInterpCurveVector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FInterpCurveVector_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FMatrix44d @ 14211a9e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMatrix44d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FMatrix44d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FMatrix44f @ 14211aa60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMatrix44f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FMatrix44f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FMatrix @ 14211aae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMatrix(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FMatrix_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FMusicalTime @ 14211ab60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMusicalTime(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FMusicalTime_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FOrientedBox @ 14211abe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOrientedBox(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FOrientedBox_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FOverriddenPropertySet @ 14211ac60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FOverriddenPropertySet(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertySet.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FOverriddenPropertySet.InnerSingleton,
               &Z_Construct_UScriptStruct_FOverriddenPropertySet_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FOverriddenPropertySet.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FOverriddenPropertySet.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPackedNormal @ 14211ace0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPackedNormal(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FPackedNormal_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FPackedRGB10A2N @ 14211ad60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPackedRGB10A2N(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FPackedRGB10A2N_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FPackedRGBA16N @ 14211ade0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPackedRGBA16N(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FPackedRGBA16N_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FPlatformInputDeviceState @ 14211ae60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPlatformInputDeviceState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,
               &Z_Construct_UScriptStruct_FPlatformInputDeviceState_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FPolyglotTextData @ 14211aee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPolyglotTextData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FPolyglotTextData_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FQualifiedFrameTime @ 14211af60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FQualifiedFrameTime(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FQualifiedFrameTime_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRandomStream @ 14211afe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRandomStream(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRandomStream_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRay3d @ 14211b060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRay3d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRay3d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRay3f @ 14211b0e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRay3f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRay3f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRay @ 14211b160

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRay(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRay_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRemoteObjectData @ 14211b1e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRemoteObjectData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRemoteObjectData_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRemoteObjectPathName @ 14211b260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRemoteObjectPathName(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRemoteObjectPathName_Statics::StructParams)
    ;
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRemoteObjectReference @ 14211b2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRemoteObjectReference(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRemoteObjectReference_Statics::StructParams
              );
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRemoteTransactionId @ 14211b360

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRemoteTransactionId(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRemoteTransactionId_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRemoteWorkPriority @ 14211b3e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRemoteWorkPriority(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRemoteWorkPriority_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRotator3d @ 14211b460

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRotator3d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRotator3d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRotator3f @ 14211b4e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRotator3f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRotator3f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FRotator @ 14211b560

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FRotator(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FRotator_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FSphere3d @ 14211b5e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSphere3d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FSphere3d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FSphere3f @ 14211b660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSphere3f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FSphere3f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FSphere @ 14211b6e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSphere(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FSphere_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FTimecode @ 14211b760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTimecode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FTimecode_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FTimespan @ 14211b7e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTimespan(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FTimespan_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FTransform3d @ 14211b860

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransform3d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FTransform3d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FTransform3f @ 14211b8e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransform3f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FTransform3f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FTransform @ 14211b960

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransform(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FTransform_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUint32Rect @ 14211b9e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUint32Rect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUint32Rect_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUint32Vector2 @ 14211ba60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUint32Vector2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUint32Vector2_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUint32Vector4 @ 14211bae0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUint32Vector4(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUint32Vector4_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUint32Vector @ 14211bb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUint32Vector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUint32Vector_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUint64Rect @ 14211bbe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUint64Rect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUint64Rect_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUint64Vector2 @ 14211bc60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUint64Vector2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUint64Vector2_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUint64Vector4 @ 14211bce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUint64Vector4(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUint64Vector4_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUint64Vector @ 14211bd60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUint64Vector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUint64Vector_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUintRect @ 14211bde0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUintRect(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUintRect_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUintVector2 @ 14211be60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUintVector2(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUintVector2_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUintVector4 @ 14211bee0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUintVector4(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUintVector4_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FUintVector @ 14211bf60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FUintVector(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FUintVector_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FVector4 @ 14211bfe0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector4(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FVector4_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FVector4d @ 14211c060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector4d(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FVector4d_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// Z_Construct_UScriptStruct_FVector4f @ 14211c0e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVector4f(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FVector4f_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
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

// KeyRedirectMap'' @ 15034fe90

void __cdecl `dynamic_atexit_destructor_for_'UDEPRECATED_MetaData::KeyRedirectMap__(void)

{
  UDEPRECATED_MetaData::KeyRedirectMap._72_4_ = 0;
  if (UDEPRECATED_MetaData::KeyRedirectMap._64_8_ != 0) {
    FMemory::Free((void *)UDEPRECATED_MetaData::KeyRedirectMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&UDEPRECATED_MetaData::KeyRedirectMap);
  return;
}

// PackagesToScriptSHAMap'' @ 15034fed0

void __cdecl `dynamic_atexit_destructor_for_'FLinkerSave::PackagesToScriptSHAMap__(void)

{
  FLinkerSave::PackagesToScriptSHAMap._72_4_ = 0;
  if (FLinkerSave::PackagesToScriptSHAMap._64_8_ != 0) {
    FMemory::Free((void *)FLinkerSave::PackagesToScriptSHAMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FLinkerSave::PackagesToScriptSHAMap);
  return;
}

// RootNodeID'' @ 15034ff10

void __cdecl `dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data;
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data !=
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

// `dynamic_atexit_destructor_for_'CVarGarbageEliminationEnabled'' @ 15034ff30

void __cdecl _dynamic_atexit_destructor_for__CVarGarbageEliminationEnabled__(void)

{
  CVarGarbageEliminationEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGarbageEliminationEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPrematureConfigLoadErrorLevel'' @ 15034ff50

void __cdecl
`anonymous_namespace'::_dynamic_atexit_destructor_for__CVarPrematureConfigLoadErrorLevel__(void)

{
  CVarPrematureConfigLoadErrorLevel._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPrematureConfigLoadErrorLevel);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseNewPropertySaving'' @ 15034ff70

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__CVarUseNewPropertySaving__(void)

{
  CVarUseNewPropertySaving._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseNewPropertySaving);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseObjectVisibilityFilterForAsyncLoading'' @ 15034ff90

void __cdecl _dynamic_atexit_destructor_for__CVarUseObjectVisibilityFilterForAsyncLoading__(void)

{
  CVarUseObjectVisibilityFilterForAsyncLoading._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUseObjectVisibilityFilterForAsyncLoading);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_bEnableSubObjectsShadowSerialization'' @ 15034ffb0

void __cdecl
Private::_dynamic_atexit_destructor_for__CVar_bEnableSubObjectsShadowSerialization__(void)

{
  CVar_bEnableSubObjectsShadowSerialization._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_bEnableSubObjectsShadowSerialization);
  return;
}

// `dynamic_atexit_destructor_for_'CVar_bT3DOverrideSerializationEnabled'' @ 15034ffd0

void __cdecl Private::_dynamic_atexit_destructor_for__CVar_bT3DOverrideSerializationEnabled__(void)

{
  CVar_bT3DOverrideSerializationEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVar_bT3DOverrideSerializationEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'DebugBeginDestroyed'' @ 15034fff0

void __cdecl _dynamic_atexit_destructor_for__DebugBeginDestroyed__(void)

{
  ForElementType<UObject_*> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData == (ForElementType<UObject_*>)0x0) {
    return;
  }
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DebugFinishDestroyed'' @ 150350010

void __cdecl _dynamic_atexit_destructor_for__DebugFinishDestroyed__(void)

{
  ForElementType<UObject_*> FVar1;
  FLowLevelMemTracker *this;
  
  FVar1 = DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData == (ForElementType<UObject_*>)0x0) {
    return;
  }
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)FVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1);
  }
  return;
}

// `dynamic_atexit_destructor_for_'DebugInvMarkNames'' @ 150350030

void __cdecl _dynamic_atexit_destructor_for__DebugInvMarkNames__(void)

{
  DestructItems<FString,int>
            ((FString *)DebugInvMarkNames.AllocatorInstance.Data,DebugInvMarkNames.ArrayNum);
  if (DebugInvMarkNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(DebugInvMarkNames.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DebugInvMarkWeakPtrs'' @ 150350070

void __cdecl _dynamic_atexit_destructor_for__DebugInvMarkWeakPtrs__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = DebugInvMarkWeakPtrs.AllocatorInstance.Data;
  if (DebugInvMarkWeakPtrs.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (DebugInvMarkWeakPtrs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'DebugMarkAnnotation'' @ 150350090

void __cdecl _dynamic_atexit_destructor_for__DebugMarkAnnotation__(void)

{
  FUObjectAnnotationSparse<FBoolAnnotation,1>::~FUObjectAnnotationSparse<FBoolAnnotation,1>
            ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)&DebugMarkAnnotation);
  return;
}

// `dynamic_atexit_destructor_for_'DebugSpikeMarkAnnotation'' @ 1503500b0

void __cdecl _dynamic_atexit_destructor_for__DebugSpikeMarkAnnotation__(void)

{
  FUObjectAnnotationSparse<FBoolAnnotation,1>::~FUObjectAnnotationSparse<FBoolAnnotation,1>
            ((FUObjectAnnotationSparse<FBoolAnnotation,1> *)&DebugSpikeMarkAnnotation);
  return;
}

// `dynamic_atexit_destructor_for_'DebugSpikeMarkNames'' @ 1503500d0

void __cdecl _dynamic_atexit_destructor_for__DebugSpikeMarkNames__(void)

{
  DestructItems<FString,int>
            ((FString *)DebugSpikeMarkNames.AllocatorInstance.Data,DebugSpikeMarkNames.ArrayNum);
  if (DebugSpikeMarkNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(DebugSpikeMarkNames.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyVersions'' @ 150350110

void __cdecl
`UPackage::GetLinkerCustomVersions'::__l2::_dynamic_atexit_destructor_for__EmptyVersions__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = `public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
               ::__l2::EmptyVersions.Versions.AllocatorInstance.Data;
  if (`public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
      ::__l2::EmptyVersions.Versions.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (`public:_class_FCustomVersionContainer_const&___ptr64___cdecl_UPackage::GetLinkerCustomVersions(void)const___ptr64'
      ::__l2::EmptyVersions.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'GAssetRegistryTagsObjectsBeingForwarded'' @ 150350130

void __cdecl _dynamic_atexit_destructor_for__GAssetRegistryTagsObjectsBeingForwarded__(void)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xcc8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
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

// `dynamic_atexit_destructor_for_'GComplexPathHashToId'' @ 150350160

void __cdecl _dynamic_atexit_destructor_for__GComplexPathHashToId__(void)

{
  GComplexPathHashToId._72_4_ = 0;
  if (GComplexPathHashToId._64_8_ != 0) {
    FMemory::Free((void *)GComplexPathHashToId._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GComplexPathHashToId);
  return;
}

// `dynamic_atexit_destructor_for_'GComplexPathLock'' @ 1503501a0

void __cdecl _dynamic_atexit_destructor_for__GComplexPathLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001503501a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GComplexPathLock);
  return;
}

// `dynamic_atexit_destructor_for_'GComplexPaths'' @ 1503501c0

void __cdecl _dynamic_atexit_destructor_for__GComplexPaths__(void)

{
  DestructItems<UE::CoreUObject::Private::FStoredObjectPath,int>
            ((FStoredObjectPath *)GComplexPaths.AllocatorInstance.Data,GComplexPaths.ArrayNum);
  if (GComplexPaths.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GComplexPaths.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'GDedicatedClientExclusionList'' @ 150350200

void __cdecl _dynamic_atexit_destructor_for__GDedicatedClientExclusionList__(void)

{
  FClassExclusionData::~FClassExclusionData(&GDedicatedClientExclusionList);
  return;
}

// `dynamic_atexit_destructor_for_'GDedicatedServerExclusionList'' @ 150350220

void __cdecl _dynamic_atexit_destructor_for__GDedicatedServerExclusionList__(void)

{
  FClassExclusionData::~FClassExclusionData(&GDedicatedServerExclusionList);
  return;
}

// `dynamic_atexit_destructor_for_'LogMetaData'' @ 150350240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMetaData__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMetaData);
  return;
}

// `dynamic_atexit_destructor_for_'LogObj'' @ 150350260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogObj__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogObj);
  return;
}

// `dynamic_atexit_destructor_for_'LogOverridableObject'' @ 150350280

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOverridableObject__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOverridableObject);
  return;
}

// `dynamic_atexit_destructor_for_'MissingSections'' @ 1503502a0

void __cdecl `CheckMissingSection'::__l2::_dynamic_atexit_destructor_for__MissingSections__(void)

{
  void *pvVar1;
  code *pcVar2;
  BOOLEAN BVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar6 = 0x1f;
  puVar5 = (undefined8 *)&NoData.field_0x40;
  do {
    lVar6 = lVar6 + -1;
    *(undefined4 *)(puVar5 + -10) = 0;
    pvVar1 = (void *)puVar5[-0xb];
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(puVar5 + -0x13));
    BVar3 = TryAcquireSRWLockExclusive((PSRWLOCK)(puVar5 + -0x14));
    if (BVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                         ,0x48,L"Destroying a lock that is still held!");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar5 + -0x14));
    }
    puVar5 = puVar5 + -0xb;
  } while (lVar6 != 0);
  return;
}

// `dynamic_atexit_destructor_for_'NoData'' @ 150350350

void __cdecl `FLinkerSave::GetArchives'::__l2::_dynamic_atexit_destructor_for__NoData__(void)

{
  NoData._72_4_ = 0;
  if (NoData._64_8_ != 0) {
    FMemory::Free((void *)NoData._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FBulkDataCookedIndex,TUniquePtr<TFileRegionArchive<FLargeMemoryWriter>,TDefaultDelete<TFileRegionArchive<FLargeMemoryWriter>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&NoData);
  return;
}

// `dynamic_atexit_destructor_for_'ReportedClasses'' @ 150350390

void __cdecl
`UObject::GetWorldChecked'::__l5::_dynamic_atexit_destructor_for__ReportedClasses__(void)

{
  ReportedClasses.HashSize = 0;
  if (ReportedClasses.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)ReportedClasses.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ReportedClasses.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'ReportedClassesLock'' @ 1503503d0

void __cdecl
`UObject::GetWorldChecked'::__l5::_dynamic_atexit_destructor_for__ReportedClassesLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&ReportedClassesLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001503503f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&ReportedClassesLock);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SObjectFlagList'' @ 150350430

void __cdecl `PrivateDumpObjectFlags'::__l2::_dynamic_atexit_destructor_for__SObjectFlagList__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SObjectFlagList.AllocatorInstance.Data;
  if (SObjectFlagList.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SObjectFlagList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'SavedPreEditContainers'' @ 150350450

void __cdecl
`FOverriddenPropertySet::NotifyPropertyChange'::__l2::
_dynamic_atexit_destructor_for__SavedPreEditContainers__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = SavedPreEditContainers.Data.AllocatorInstance.Data;
  if (SavedPreEditContainers.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (SavedPreEditContainers.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

