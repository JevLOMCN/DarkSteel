// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 658

// AssetSearchRootsVirtualPath'' @ 1410dd0f0

void __cdecl `dynamic_initializer_for_'UAssetManager::AssetSearchRootsVirtualPath__(void)

{
  ::FString::FString(&UAssetManager::AssetSearchRootsVirtualPath,L"$AssetSearchRoots");
  atexit(`dynamic_atexit_destructor_for_'UAssetManager::AssetSearchRootsVirtualPath__);
  return;
}

// DefaultGroupName'' @ 1410dd120

void __cdecl `dynamic_initializer_for_'FAnimSlotGroup::DefaultGroupName__(void)

{
  ::FName::FName(&FAnimSlotGroup::DefaultGroupName,L"DefaultGroup");
  return;
}

// DefaultSlotName'' @ 1410dd140

void __cdecl `dynamic_initializer_for_'FAnimSlotGroup::DefaultSlotName__(void)

{
  ::FName::FName(&FAnimSlotGroup::DefaultSlotName,L"DefaultSlot");
  return;
}

// DynamicSearchRootsVirtualPath'' @ 1410dd160

void __cdecl `dynamic_initializer_for_'UAssetManager::DynamicSearchRootsVirtualPath__(void)

{
  ::FString::FString(&UAssetManager::DynamicSearchRootsVirtualPath,L"$DynamicSearchRoots");
  atexit(`dynamic_atexit_destructor_for_'UAssetManager::DynamicSearchRootsVirtualPath__);
  return;
}

// InvalidHandle'' @ 1410dd190

void __cdecl `dynamic_initializer_for_'FPrimaryAssetLoadState::InvalidHandle__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FPrimaryAssetLoadState::InvalidHandle__);
  return;
}

// MapType'' @ 1410dd1b0

void __cdecl `dynamic_initializer_for_'UAssetManager::MapType__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"Map");
  UAssetManager::MapType.Name = *pFVar1;
  return;
}

// OnAssetManagerCreatedDelegate'' @ 1410dd1e0

void __cdecl `dynamic_initializer_for_'UAssetManager::OnAssetManagerCreatedDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UAssetManager::OnAssetManagerCreatedDelegate__);
  return;
}

// OnCompletedInitialScanDelegate'' @ 1410dd200

void __cdecl `dynamic_initializer_for_'UAssetManager::OnCompletedInitialScanDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UAssetManager::OnCompletedInitialScanDelegate__);
  return;
}

// OnPickOverrideSkinWeightProfile'' @ 1410dd220

void __cdecl
`dynamic_initializer_for_'FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile__)
  ;
  return;
}

// PackageChunkType'' @ 1410dd240

void __cdecl `dynamic_initializer_for_'UAssetManager::PackageChunkType__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"PackageChunk");
  UAssetManager::PackageChunkType.Name = *pFVar1;
  return;
}

// PrimaryAssetLabelType'' @ 1410dd270

void __cdecl `dynamic_initializer_for_'UAssetManager::PrimaryAssetLabelType__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"PrimaryAssetLabel");
  UAssetManager::PrimaryAssetLabelType.Name = *pFVar1;
  return;
}

// SuppressionType'' @ 1410dd2a0

void __cdecl `dynamic_initializer_for_'UAssetManager::SuppressionType__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,L"__Suppressed__");
  UAssetManager::SuppressionType.Name = *pFVar1;
  return;
}

// TypeName'' @ 1410dd2d0

void __cdecl `dynamic_initializer_for_'UE::Anim::FAnimNotifyMirrorContext::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FAnimNotifyMirrorContext::TypeName,L"UE::Anim::FAnimNotifyMirrorContext"
                );
  return;
}

// TypeName'' @ 1410dd2f0

void __cdecl `dynamic_initializer_for_'UE::Anim::FMirrorSyncScope::TypeName__(void)

{
  ::FName::FName(&UE::Anim::FMirrorSyncScope::TypeName,L"UE::Anim::FMirrorSyncScope");
  return;
}

// WorldManagers'' @ 1410dd310

void __cdecl `dynamic_initializer_for_'FSkinWeightProfileManager::WorldManagers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSkinWeightProfileManager::WorldManagers__);
  return;
}

// `dynamic_initializer_for_'CHandleDelayedLoads'' @ 1410dd330

void __cdecl _dynamic_initializer_for__CHandleDelayedLoads__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CHandleDelayedLoads,L"SkinWeightProfileManager.HandleDelayedLoads",
             &GHandleDelayedLoads,
             L"Whether or not to handle skeletal meshes that are severely delayed in loading",1);
  atexit(_dynamic_atexit_destructor_for__CHandleDelayedLoads__);
  return;
}

// `dynamic_initializer_for_'CVarAllowAudioSpatializationCVar'' @ 1410dd380

void __cdecl _dynamic_initializer_for__CVarAllowAudioSpatializationCVar__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowAudioSpatializationCVar,L"au.AllowAudioSpatialization",
             &AllowAudioSpatializationCVar,
             L"Controls if we allow spatialization of audio, normally this is enabled.  If disabled all audio won\'t be spatialized, but will have attenuation.\n0: Disable, >0: Enable"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowAudioSpatializationCVar__);
  return;
}

// `dynamic_initializer_for_'CVarAllowCPU'' @ 1410dd3d0

void __cdecl _dynamic_initializer_for__CVarAllowCPU__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarAllowCPU,L"SkinWeightProfileManager.AllowCPU",&GAllowCPU,
             L"Whether or not to allow cpu buffer generation",1);
  atexit(_dynamic_atexit_destructor_for__CVarAllowCPU__);
  return;
}

// `dynamic_initializer_for_'CVarAllowIncompatibleSkeletalMeshMerge'' @ 1410dd420

void __cdecl _dynamic_initializer_for__CVarAllowIncompatibleSkeletalMeshMerge__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarAllowIncompatibleSkeletalMeshMerge,
             L"a.Skeleton.AllowIncompatibleSkeletalMeshMerge",local_res8,
             L"When importing or otherwise merging in skeletal mesh bones, allow \'incompatible\' hierarchies with bone insertions."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarAllowIncompatibleSkeletalMeshMerge__);
  return;
}

// `dynamic_initializer_for_'CVarBypassPlayWhenSilent'' @ 1410dd470

void __cdecl _dynamic_initializer_for__CVarBypassPlayWhenSilent__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarBypassPlayWhenSilent,L"au.BypassPlayWhenSilent",&BypassPlayWhenSilentCVar,
             L"When set to 1, ignores the Play When Silent flag for non-procedural sources.\n0: Honor the Play When Silent flag, 1: stop all silent non-procedural sources."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBypassPlayWhenSilent__);
  return;
}

// `dynamic_initializer_for_'CVarDisableStereoSpread'' @ 1410dd4c0

void __cdecl _dynamic_initializer_for__CVarDisableStereoSpread__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarDisableStereoSpread,L"au.DisableStereoSpread",&DisableStereoSpreadCvar,
             L"When set to 1, ignores the 3D Stereo Spread property in attenuation settings and instead renders audio from a singular point.\n0: Not Disabled, 1: Disabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableStereoSpread__);
  return;
}

// `dynamic_initializer_for_'CVarDumpAssetRegistryInfo'' @ 1410dd510

void __cdecl _dynamic_initializer_for__CVarDumpAssetRegistryInfo__(void)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = UAssetManager::DumpAssetRegistryInfo;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDumpAssetRegistryInfo,L"AssetManager.DumpAssetRegistryInfo",
             L"Dumps extended info about asset registry to log",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CVarDumpAssetRegistryInfo__);
  return;
}

// `dynamic_initializer_for_'CVarDumpAssetTypeSummary'' @ 1410dd650

void __cdecl _dynamic_initializer_for__CVarDumpAssetTypeSummary__(void)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = UAssetManager::DumpAssetTypeSummary;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDumpAssetTypeSummary,L"AssetManager.DumpTypeSummary",
             L"Shows a summary of types known about by the asset manager",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CVarDumpAssetTypeSummary__);
  return;
}

// `dynamic_initializer_for_'CVarDumpBundlesForAsset'' @ 1410dd790

void __cdecl _dynamic_initializer_for__CVarDumpBundlesForAsset__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UAssetManager::DumpBundlesForAsset;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDumpBundlesForAsset,L"AssetManager.DumpBundlesForAsset",
             L"Shows a list of all bundles for the specified primary asset by primary asset id (i.e. Map:Entry)"
             ,(TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
               *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CVarDumpBundlesForAsset__);
  return;
}

// `dynamic_initializer_for_'CVarDumpLoadedAssetState'' @ 1410dd8d0

void __cdecl _dynamic_initializer_for__CVarDumpLoadedAssetState__(void)

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
    *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar1[3] = UAssetManager::DumpLoadedAssetState;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDumpLoadedAssetState,L"AssetManager.DumpLoadedAssets",
             L"Shows a list of all loaded primary assets and bundles",
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CVarDumpLoadedAssetState__);
  return;
}

// `dynamic_initializer_for_'CVarDumpReferencersForPackage'' @ 1410dda10

void __cdecl _dynamic_initializer_for__CVarDumpReferencersForPackage__(void)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = UAssetManager::DumpReferencersForPackage;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&CVarDumpReferencersForPackage,L"AssetManager.DumpReferencersForPackage",
             L"Generates a graph viz and log file of all references to a specified package",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,1);
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
  atexit(_dynamic_atexit_destructor_for__CVarDumpReferencersForPackage__);
  return;
}

// `dynamic_initializer_for_'CVarForceSkinWeightProfileManagerAsyncTaskOnGT'' @ 1410ddb50

void __cdecl _dynamic_initializer_for__CVarForceSkinWeightProfileManagerAsyncTaskOnGT__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarForceSkinWeightProfileManagerAsyncTaskOnGT,
             L"SkinWeightProfileManager.ForceSkinWeightProfileManagerAsyncTaskOnGT",local_res8,L"",
             0x20);
  atexit(_dynamic_atexit_destructor_for__CVarForceSkinWeightProfileManagerAsyncTaskOnGT__);
  return;
}

// `dynamic_initializer_for_'CVarLoadPrimaryAssetsWithType'' @ 1410ddba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CVarLoadPrimaryAssetsWithType__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_26>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"AssetManager.LoadPrimaryAssetsWithType",
                      L"Loads all assets of a given type",&local_58,1);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarLoadPrimaryAssetsWithType,pIVar5);
  CVarLoadPrimaryAssetsWithType._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CVarLoadPrimaryAssetsWithType__);
  return;
}

// `dynamic_initializer_for_'CVarMinVolumeThreshold'' @ 1410ddd40

void __cdecl _dynamic_initializer_for__CVarMinVolumeThreshold__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarMinVolumeThreshold,L"au.WaveInstanceMinVolume",&WaveInstanceMinVolumeThresholdCVar
             ,
             L"Sets the minimum volume for a wave instance to be considered active\nDefault is 0.0001 (-80 dB)"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMinVolumeThreshold__);
  return;
}

// `dynamic_initializer_for_'CVarMotionTrajectoryDebug'' @ 1410ddd90

void __cdecl _dynamic_initializer_for__CVarMotionTrajectoryDebug__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMotionTrajectoryDebug,L"a.MotionTrajectory.Debug",local_res8,
             L"Turn on debug drawing for motion trajectory",0);
  atexit(_dynamic_atexit_destructor_for__CVarMotionTrajectoryDebug__);
  return;
}

// `dynamic_initializer_for_'CVarMotionTrajectoryDebugOptions'' @ 1410ddde0

void __cdecl _dynamic_initializer_for__CVarMotionTrajectoryDebugOptions__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 0;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMotionTrajectoryDebugOptions,L"a.MotionTrajectory.Options",local_res8,
             L"Toggle motion trajectory sample information:\n 0. Disable Text\n 1. Index\n2. Accumulated Time\n 3. Position\n 4. Velocity\n 5. Acceleration"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarMotionTrajectoryDebugOptions__);
  return;
}

// `dynamic_initializer_for_'CVarMotionTrajectoryDebugStride'' @ 1410dde30

void __cdecl _dynamic_initializer_for__CVarMotionTrajectoryDebugStride__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarMotionTrajectoryDebugStride,L"a.MotionTrajectory.Stride",local_res8,
             L"Configure the sample stride when displaying information",0);
  atexit(_dynamic_atexit_destructor_for__CVarMotionTrajectoryDebugStride__);
  return;
}

// `dynamic_initializer_for_'CVarOcclusionFilterScaleEnabled'' @ 1410dde80

void __cdecl _dynamic_initializer_for__CVarOcclusionFilterScaleEnabled__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarOcclusionFilterScaleEnabled,L"au.EnableOcclusionFilterScale",
             &OcclusionFilterScaleEnabledCVar,
             L"Whether or not we scale occlusion by 0.25f to compensate for change in filter cutoff frequencies in audio mixer. \n0: Not Enabled, 1: Enabled"
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarOcclusionFilterScaleEnabled__);
  return;
}

// `dynamic_initializer_for_'CVarSkinWeightProfilesAllowedFromLOD'' @ 1410dded0

void __cdecl _dynamic_initializer_for__CVarSkinWeightProfilesAllowedFromLOD__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnDefaultProfileCVarsChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkinWeightProfilesAllowedFromLOD,L"a.SkinWeightProfile.AllowedFromLOD",
             &GSkinWeightProfilesAllowedFromLOD,
             L"Override LOD index from which on the Skin Weight Profile can be applied",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0x40
            );
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
  atexit(_dynamic_atexit_destructor_for__CVarSkinWeightProfilesAllowedFromLOD__);
  return;
}

// `dynamic_initializer_for_'CVarSkinWeightProfilesDefaultLODOverride'' @ 1410de020

void __cdecl _dynamic_initializer_for__CVarSkinWeightProfilesDefaultLODOverride__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnDefaultProfileCVarsChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkinWeightProfilesDefaultLODOverride,L"a.SkinWeightProfile.DefaultLODOverride",
             &GSkinWeightProfilesDefaultLODOverride,
             L"Override LOD index from which on the default Skin Weight Profile should override the Skeletal Mesh\'s default Skin Weights"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,
             0x40);
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
  atexit(_dynamic_atexit_destructor_for__CVarSkinWeightProfilesDefaultLODOverride__);
  return;
}

// `dynamic_initializer_for_'CVarSkinWeightsLoadByDefaultMode'' @ 1410de170

void __cdecl _dynamic_initializer_for__CVarSkinWeightsLoadByDefaultMode__(void)

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
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = OnDefaultProfileCVarsChanged;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkinWeightsLoadByDefaultMode,L"a.SkinWeightProfile.LoadByDefaultMode",
             &GSkinWeightProfilesLoadByDefaultMode,
             L"Enables/disables run-time optimization to override the original skin weights with a profile designated as the default to replace it. Can be used to optimize memory for specific platforms or devices-1 = disabled0 = static disabled1 = static enabled2 = dynamic disabled3 = dynamic enabled"
             ,(TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
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
  atexit(_dynamic_atexit_destructor_for__CVarSkinWeightsLoadByDefaultMode__);
  return;
}

// `dynamic_initializer_for_'CVarSkipHasPendingInitOrStreamingSkeletalMesh'' @ 1410de2b0

void __cdecl _dynamic_initializer_for__CVarSkipHasPendingInitOrStreamingSkeletalMesh__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipHasPendingInitOrStreamingSkeletalMesh,
             L"SkinWeightProfileManager.SkipHasPendingInitOrStreamingSkeletalMesh",
             &GSkipHasPendingInitOrStreamingSkeletalMesh,L"",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSkipHasPendingInitOrStreamingSkeletalMesh__);
  return;
}

// `dynamic_initializer_for_'CVarSkipLODWithoutDataOrStreamingRequest'' @ 1410de300

void __cdecl _dynamic_initializer_for__CVarSkipLODWithoutDataOrStreamingRequest__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSkipLODWithoutDataOrStreamingRequest,
             L"SkinWeightProfileManager.SkipLODWithoutDataOrStreamingRequest",
             &GSkipLODWithoutDataOrStreamingRequest,L"",0x20);
  atexit(_dynamic_atexit_destructor_for__CVarSkipLODWithoutDataOrStreamingRequest__);
  return;
}

// `dynamic_initializer_for_'CVarUnloadPrimaryAssetsWithType'' @ 1410de350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__CVarUnloadPrimaryAssetsWithType__(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  IConsoleObject *pIVar5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar3[3] = <lambda_27>::<lambda_invoker_cdecl>;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar5 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x90))
                     (IConsoleManager::Singleton,L"AssetManager.UnloadPrimaryAssetsWithType",
                      L"Unloads all assets of a given type",&local_58,1);
  FAutoConsoleObject::FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarUnloadPrimaryAssetsWithType,pIVar5);
  CVarUnloadPrimaryAssetsWithType._0_8_ = &___7FAutoConsoleCommandWithWorldAndArgs__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  atexit(_dynamic_atexit_destructor_for__CVarUnloadPrimaryAssetsWithType__);
  return;
}

// `dynamic_initializer_for_'DefaultMapping'' @ 1410de4f0

void __cdecl UE::Anim::_dynamic_initializer_for__DefaultMapping__(void)

{
  atexit(_dynamic_atexit_destructor_for__DefaultMapping__);
  return;
}

// `dynamic_initializer_for_'GInitialBulkScanStopper'' @ 1410de510

void __cdecl _dynamic_initializer_for__GInitialBulkScanStopper__(void)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_20 = <lambda_25>::<lambda_invoker_cdecl>;
  local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  FDelayedAutoRegisterHelper::FDelayedAutoRegisterHelper
            (&GInitialBulkScanStopper,StartOfEnginePreInit,(TFunction<void___cdecl(void)> *)local_38
             ,false);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_AssetCompilation'' @ 1410de570

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_AssetCompilation__(void)

{
  FName FVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_AssetCompilationSummaryLLM> FVar4;
  FThreadSafeStaticStat<FStat_STAT_AssetCompilationLLM> FVar5;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  FVar4 = StatPtr_STAT_AssetCompilationSummaryLLM;
  if (StatPtr_STAT_AssetCompilationSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_AssetCompilationSummaryLLM>)0x0) {
    pFVar3 = FName::FName(&local_res8,"STAT_AssetCompilationSummaryLLM");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_AssetCompilationSummaryLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AssetCompilationSummaryLLM,*pFVar3
                       ,L"AssetCompilation","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,
                       false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  local_res8.ComparisonIndex.Value = (uint)*(undefined8 *)FVar4;
  local_res8.Number = (uint)((ulonglong)*(undefined8 *)FVar4 >> 0x20);
  FVar5 = StatPtr_STAT_AssetCompilationLLM;
  if (StatPtr_STAT_AssetCompilationLLM == (FThreadSafeStaticStat<FStat_STAT_AssetCompilationLLM>)0x0
     ) {
    pFVar3 = FName::FName(&local_res10,"STAT_AssetCompilationLLM");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_AssetCompilationLLM>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AssetCompilationLLM,*pFVar3,
                       L"AssetCompilation","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,
                       false,ST_int64,false,false,MCR_PhysicalLLM);
  }
  FVar1 = *(FName *)FVar5;
  local_res10.ComparisonIndex = FVar1.ComparisonIndex.Value;
  local_res10.Number = FVar1.Number;
  local_res18 = 0;
  local_res20 = 0;
  FVar2.Number = local_res8.Number;
  FVar2.ComparisonIndex.Value = local_res8.ComparisonIndex.Value;
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_AssetCompilation,L"AssetCompilation",(FName)0x0,(FName)0x0,FVar1,
             FVar2,None);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_AssetManager'' @ 1410de6e0

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_AssetManager__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_AssetManager,L"AssetManager",(FName)0x0,(FName)0x0,(FName)0x0,
             (FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LogAssetManager'' @ 1410de730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAssetManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAssetManager,L"LogAssetManager",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAssetManager__);
  return;
}

// `dynamic_initializer_for_'LogAsyncCompilation'' @ 1410de770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAsyncCompilation__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAsyncCompilation,L"LogAsyncCompilation",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAsyncCompilation__);
  return;
}

// `dynamic_initializer_for_'LogAudio'' @ 1410de7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudio__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAudio,L"LogAudio",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAudio__);
  return;
}

// `dynamic_initializer_for_'LogAudioDebug'' @ 1410de7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAudioDebug__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogAudioDebug,L"LogAudioDebug",Display,All);
  atexit(_dynamic_atexit_destructor_for__LogAudioDebug__);
  return;
}

// `dynamic_initializer_for_'LogSkinWeightProfileManager'' @ 1410de830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSkinWeightProfileManager__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSkinWeightProfileManager,L"LogSkinWeightProfileManager",Warning
             ,Display);
  atexit(_dynamic_atexit_destructor_for__LogSkinWeightProfileManager__);
  return;
}

// `dynamic_initializer_for_'ModuleName'' @ 1410de870

void __cdecl AssetRegistryConstants::_dynamic_initializer_for__ModuleName__(void)

{
  ::FName::FName(&ModuleName,"AssetRegistry");
  return;
}

// `dynamic_initializer_for_'SkeletalMeshAttributeVertexBufferName'' @ 1410de890

void __cdecl
SkeletalMeshResourceNames::_dynamic_initializer_for__SkeletalMeshAttributeVertexBufferName__(void)

{
  ::FName::FName(&SkeletalMeshAttributeVertexBufferName,
                 L"FSkeletalMeshVertexAttributeRenderData.FSkeletalMeshAttributeVertexBuffer");
  return;
}

// `dynamic_initializer_for_'SmartNameRWLock'' @ 1410de8b0

void __cdecl `anonymous_namespace'::_dynamic_initializer_for__SmartNameRWLock__(void)

{
  atexit(_dynamic_atexit_destructor_for__SmartNameRWLock__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_ActiveSounds'' @ 1410de8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_ActiveSounds__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_ActiveSounds == (FThreadSafeStaticStat<FStat_STAT_ActiveSounds>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_ActiveSounds");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ActiveSounds,*pFVar1,L"Active Sounds",
               "STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AssetCompilationLLM'' @ 1410de960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AssetCompilationLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AssetCompilationLLM == (FThreadSafeStaticStat<FStat_STAT_AssetCompilationLLM>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_AssetCompilationLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AssetCompilationLLM,*pFVar1,
               L"AssetCompilation","STATGROUP_LLMFULL","STATCAT_Advanced",L"LLM FULL",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AssetCompilationSummaryLLM'' @ 1410de9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AssetCompilationSummaryLLM__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AssetCompilationSummaryLLM ==
      (FThreadSafeStaticStat<FStat_STAT_AssetCompilationSummaryLLM>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AssetCompilationSummaryLLM");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AssetCompilationSummaryLLM,*pFVar1,
               L"AssetCompilation","STATGROUP_LLM","STATCAT_Advanced",L"LLM Summary",true,false,
               ST_int64,false,false,MCR_PhysicalLLM);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudibleWavesDroppedDueToPriority'' @ 1410dea80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudibleWavesDroppedDueToPriority__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudibleWavesDroppedDueToPriority ==
      (FThreadSafeStaticStat<FStat_STAT_AudibleWavesDroppedDueToPriority>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudibleWavesDroppedDueToPriority");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudibleWavesDroppedDueToPriority,*pFVar1,
               L"Audible Wave Instances Dropped","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,
               true,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioBufferTime'' @ 1410deb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioBufferTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioBufferTime == (FThreadSafeStaticStat<FStat_STAT_AudioBufferTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioBufferTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioBufferTime,*pFVar1,
               L"Audio Buffer Time","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,false,NumBits
               ,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioBufferTimeChannels'' @ 1410deba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioBufferTimeChannels__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioBufferTimeChannels ==
      (FThreadSafeStaticStat<FStat_STAT_AudioBufferTimeChannels>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioBufferTimeChannels");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioBufferTimeChannels,*pFVar1,
               L"Audio Buffer Time (w/ Channels)","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true
               ,false,NumBits,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioDecompressTime'' @ 1410dec30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioDecompressTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioDecompressTime == (FThreadSafeStaticStat<FStat_STAT_AudioDecompressTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioDecompressTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioDecompressTime,*pFVar1,
               L"Decompress Audio","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioEvaluateConcurrency'' @ 1410decc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioEvaluateConcurrency__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioEvaluateConcurrency ==
      (FThreadSafeStaticStat<FStat_STAT_AudioEvaluateConcurrency>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioEvaluateConcurrency");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioEvaluateConcurrency,*pFVar1,
               L"Audio Evaluate Concurrency","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true
               ,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioFindNearestLocation'' @ 1410ded50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioFindNearestLocation__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioFindNearestLocation ==
      (FThreadSafeStaticStat<FStat_STAT_AudioFindNearestLocation>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioFindNearestLocation");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioFindNearestLocation,*pFVar1,
               L"Finding Nearest Location","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioFinishedDelegates'' @ 1410dede0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioFinishedDelegates__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioFinishedDelegates ==
      (FThreadSafeStaticStat<FStat_STAT_AudioFinishedDelegates>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioFinishedDelegates");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioFinishedDelegates,*pFVar1,
               L"Finished delegates time","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioFinishedDelegatesCalled'' @ 1410dee70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioFinishedDelegatesCalled__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioFinishedDelegatesCalled ==
      (FThreadSafeStaticStat<FStat_STAT_AudioFinishedDelegatesCalled>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioFinishedDelegatesCalled");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioFinishedDelegatesCalled,*pFVar1,
               L"Finished delegates called","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioGatherWaveInstances'' @ 1410def00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioGatherWaveInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioGatherWaveInstances ==
      (FThreadSafeStaticStat<FStat_STAT_AudioGatherWaveInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioGatherWaveInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioGatherWaveInstances,*pFVar1,
               L"Gathering WaveInstances","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMaxChannels'' @ 1410def90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMaxChannels__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMaxChannels == (FThreadSafeStaticStat<FStat_STAT_AudioMaxChannels>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMaxChannels");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMaxChannels,*pFVar1,L"Max Channels",
               "STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMaxStoppingSources'' @ 1410df020

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMaxStoppingSources__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMaxStoppingSources ==
      (FThreadSafeStaticStat<FStat_STAT_AudioMaxStoppingSources>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMaxStoppingSources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMaxStoppingSources,*pFVar1,
               L"Max Stopping Sources","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioMemorySize'' @ 1410df0b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioMemorySize__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioMemorySize == (FThreadSafeStaticStat<FStat_STAT_AudioMemorySize>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioMemorySize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioMemorySize,*pFVar1,
               L"Audio Memory Used","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,false,
               ST_int64,false,false,MCR_Physical);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioPrepareDecompressionTime'' @ 1410df140

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioPrepareDecompressionTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioPrepareDecompressionTime ==
      (FThreadSafeStaticStat<FStat_STAT_AudioPrepareDecompressionTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioPrepareDecompressionTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioPrepareDecompressionTime,*pFVar1,
               L"Prepare Audio Decompression","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,
               true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioResourceCreationTime'' @ 1410df1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioResourceCreationTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioResourceCreationTime ==
      (FThreadSafeStaticStat<FStat_STAT_AudioResourceCreationTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioResourceCreationTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioResourceCreationTime,*pFVar1,
               L"Buffer Creation","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioSourceCreateTime'' @ 1410df260

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioSourceCreateTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioSourceCreateTime ==
      (FThreadSafeStaticStat<FStat_STAT_AudioSourceCreateTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioSourceCreateTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSourceCreateTime,*pFVar1,
               L"Source Create","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioSourceInitTime'' @ 1410df2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioSourceInitTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioSourceInitTime == (FThreadSafeStaticStat<FStat_STAT_AudioSourceInitTime>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioSourceInitTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSourceInitTime,*pFVar1,L"Source Init"
               ,"STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioSources'' @ 1410df380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioSources__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioSources == (FThreadSafeStaticStat<FStat_STAT_AudioSources>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioSources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSources,*pFVar1,L"Audio Sources",
               "STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioStartSources'' @ 1410df410

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioStartSources__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioStartSources == (FThreadSafeStaticStat<FStat_STAT_AudioStartSources>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioStartSources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStartSources,*pFVar1,
               L"Processing Sources","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioStreamedDecompressTime'' @ 1410df4a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioStreamedDecompressTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioStreamedDecompressTime ==
      (FThreadSafeStaticStat<FStat_STAT_AudioStreamedDecompressTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioStreamedDecompressTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioStreamedDecompressTime,*pFVar1,
               L"Decompress Streamed","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,
               ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioSubmitBuffersTime'' @ 1410df530

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioSubmitBuffersTime__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioSubmitBuffersTime ==
      (FThreadSafeStaticStat<FStat_STAT_AudioSubmitBuffersTime>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioSubmitBuffersTime");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioSubmitBuffersTime,*pFVar1,
               L"Submit Buffers","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioUpdateEffects'' @ 1410df5c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioUpdateEffects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioUpdateEffects == (FThreadSafeStaticStat<FStat_STAT_AudioUpdateEffects>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_AudioUpdateEffects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateEffects,*pFVar1,
               L"Updating Effects","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioUpdateSources'' @ 1410df650

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioUpdateSources__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioUpdateSources == (FThreadSafeStaticStat<FStat_STAT_AudioUpdateSources>)0x0)
  {
    pFVar1 = FName::FName(local_res8,"STAT_AudioUpdateSources");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioUpdateSources,*pFVar1,
               L"Updating Sources","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,
               true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_AudioVirtualLoops'' @ 1410df6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_AudioVirtualLoops__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_AudioVirtualLoops == (FThreadSafeStaticStat<FStat_STAT_AudioVirtualLoops>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_AudioVirtualLoops");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AudioVirtualLoops,*pFVar1,
               L"Virtualized Loops","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64
               ,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WaveInstances'' @ 1410df770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WaveInstances__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WaveInstances == (FThreadSafeStaticStat<FStat_STAT_WaveInstances>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WaveInstances");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaveInstances,*pFVar1,L"Wave Instances",
               "STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,ST_int64,false,false,
               MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_WavesDroppedDueToPriority'' @ 1410df800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_WavesDroppedDueToPriority__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_WavesDroppedDueToPriority ==
      (FThreadSafeStaticStat<FStat_STAT_WavesDroppedDueToPriority>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_WavesDroppedDueToPriority");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WavesDroppedDueToPriority,*pFVar1,
               L"Wave Instances Dropped","STATGROUP_Audio","STATCAT_Advanced",L"Audio",true,true,
               ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'VirtualBonePrefix'' @ 1410df890

void __cdecl VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  ::FString::FString(&VirtualBonePrefix,L"VB ");
  atexit(_dynamic_atexit_destructor_for__VirtualBonePrefix__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h__Script_Engine_1004411392'' @ 1410df8c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h__Script_Engine_1004411392__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimBlueprint_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h__Script_Engine_1170712366'' @ 1410df910

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h__Script_Engine_1170712366__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h__Script_Engine_Statics
             ::ScriptStructInfo,2,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_MirrorDataTable_h__Script_Engine_Statics
             ::EnumInfo,2);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h__Script_Engine_3452348776'' @ 1410df960

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h__Script_Engine_3452348776__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h__Script_Engine_Statics
             ::ScriptStructInfo,4,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h__Script_Engine_3970413226'' @ 1410df9b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h__Script_Engine_3970413226__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h__Script_Engine_355160710'' @ 1410df9f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h__Script_Engine_355160710__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SkeletalMeshActor_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h__Script_Engine_155787000'' @ 1410dfa30

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h__Script_Engine_155787000__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h__Script_Engine_Statics
             ::ScriptStructInfo,7,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h__Script_Engine_3832393442'' @ 1410dfa80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h__Script_Engine_3832393442__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_SmartName_h__Script_Engine_Statics
             ::ScriptStructInfo,3,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h__Script_Engine_4022745677'' @ 1410dfac0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h__Script_Engine_4022745677__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_TimeStretchCurve_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h__Script_Engine_2495843520'' @ 1410dfb10

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h__Script_Engine_2495843520__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_VariableFrameStrippingSettings_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h__Script_Engine_3050143702'' @ 1410dfb50

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h__Script_Engine_3050143702__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h__Script_Engine_527392564'' @ 1410dfb90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h__Script_Engine_527392564__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFog_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h__Script_Engine_2907687763'' @ 1410dfbd0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h__Script_Engine_2907687763__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h__Script_Engine_Statics
             ::ScriptStructInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManagerTypes_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h__Script_Engine_1806110030'' @ 1410dfc20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h__Script_Engine_1806110030__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetManager_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h__Script_Engine_3164640733'' @ 1410dfc60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h__Script_Engine_3164640733__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_AssetUserData_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h__Script_Engine_269485644'' @ 1410dfca0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h__Script_Engine_269485644__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Attenuation_h__Script_Engine_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h__Script_Engine_1589501364'' @ 1410dfcf0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h__Script_Engine_1589501364__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PreviewMeshCollection_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h__Script_Engine_1907256244'' @ 1410dfd40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h__Script_Engine_1907256244__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Private_AsyncActionLoadPrimaryAsset_h__Script_Engine_Statics
             ::ClassInfo,6,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MeshDeformerCollection_h__Script_Engine_3240136715'' @ 1410dfd80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MeshDeformerCollection_h__Script_Engine_3240136715__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MeshDeformerCollection_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h__Script_Engine_34566753'' @ 1410dfdc0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h__Script_Engine_34566753__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_MotionTrajectoryTypes_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h__Script_Engine_666718824'' @ 1410dfe00

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h__Script_Engine_666718824__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h__Script_Engine_3594708718'' @ 1410dfe40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h__Script_Engine_3594708718__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h__Script_Engine_1091992042'' @ 1410dfe90

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h__Script_Engine_1091992042__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_PreviewCollectionInterface_h__Script_Engine_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h__Script_Engine_1516653213'' @ 1410dfed0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h__Script_Engine_1516653213__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h__Script_Engine_Statics
             ::ScriptStructInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkeletalMeshVertexAttribute_h__Script_Engine_Statics
             ::EnumInfo,1);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfileManager_h__Script_Engine_1856925418'' @ 1410dff20

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfileManager_h__Script_Engine_1856925418__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfileManager_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h__Script_Engine_2611617267'' @ 1410dff60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h__Script_Engine_2611617267__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h__Script_Engine_1974076153'' @ 1410dffa0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h__Script_Engine_1974076153__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h__Script_Engine_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_TrajectoryTypes_h__Script_Engine_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetCompilingManager_h__Script_Engine_2666106900'' @ 1410dfff0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetCompilingManager_h__Script_Engine_2666106900__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Engine",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_AssetCompilingManager_h__Script_Engine_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// NewProp_NewSunDisk_SetBit @ 147586e40

void __cdecl
Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::NewProp_NewSunDisk_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 147586ef0

void * __cdecl Z_Construct_UScriptStruct_FMirrorTableRow_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMirrorTableRow,&UE::CoreUObject::Private::Construct<FMirrorTableRow>,&UE::CoreUObject::Private::ConstructForTests<FMirrorTableRow>,&UE::CoreUObject::Private::Destruct<FMirrorTableRow>,&UE::CoreUObject::Private::Copy<FMirrorTableRow>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EBoneTranslationRetargetingMode_StaticEnum @ 147586f30

UEnum * __cdecl EBoneTranslationRetargetingMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode,(UObject *)pUVar1,
                       L"EBoneTranslationRetargetingMode");
  }
  return Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.OuterSingleton;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk @ 147586f70

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147586fb0

void * __cdecl Z_Construct_UScriptStruct_FBoneNode_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBoneNode,&UE::CoreUObject::Private::Construct<FBoneNode>,&UE::CoreUObject::Private::ConstructForTests<FBoneNode>,&UE::CoreUObject::Private::Destruct<FBoneNode>,&UE::CoreUObject::Private::Copy<FBoneNode>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale @ 147586ff0

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness @ 147587030

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor @ 147587130

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147587170

void * __cdecl Z_Construct_UScriptStruct_FReferencePose_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FReferencePose,&UE::CoreUObject::Private::Construct<FReferencePose>,&UE::CoreUObject::Private::ConstructForTests<FReferencePose>,&UE::CoreUObject::Private::Destruct<FReferencePose>,&UE::CoreUObject::Private::Copy<FReferencePose>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 1475872b0

void * __cdecl Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FMirrorFindReplaceExpression,&UE::CoreUObject::Private::Construct<FMirrorFindReplaceExpression>,&UE::CoreUObject::Private::ConstructForTests<FMirrorFindReplaceExpression>,&UE::CoreUObject::Private::Destruct<FMirrorFindReplaceExpression>,&UE::CoreUObject::Private::Copy<FMirrorFindReplaceExpression>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier @ 147587300

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset @ 1475874b0

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 147587520

void * __cdecl Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBoneReductionSetting,&UE::CoreUObject::Private::Construct<FBoneReductionSetting>,&UE::CoreUObject::Private::ConstructForTests<FBoneReductionSetting>,&UE::CoreUObject::Private::Destruct<FBoneReductionSetting>,&UE::CoreUObject::Private::Copy<FBoneReductionSetting>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset @ 147587560

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bMirrorRootMotion_SetBit @ 1475875a0

void __cdecl
Z_Construct_UClass_UMirrorDataTable_Statics::NewProp_bMirrorRootMotion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc9) = 1;
  return;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale @ 1475875b0

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAssetManager @ 1475875f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAssetManager(void)

{
  if (Z_Registration_Info_UClass_UAssetManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAssetManager.OuterSingleton,
               &Z_Construct_UClass_UAssetManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAssetManager.OuterSingleton;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier @ 147587630

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 147587670

void * __cdecl Z_Construct_UScriptStruct_FNameMapping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNameMapping,&UE::CoreUObject::Private::Construct<FNameMapping>,&UE::CoreUObject::Private::ConstructForTests<FNameMapping>,&UE::CoreUObject::Private::Destruct<FNameMapping>,&UE::CoreUObject::Private::Copy<FNameMapping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsGlobalAsyncScanEnvironment_SetBit @ 1475876b0

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsGlobalAsyncScanEnvironment_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x390) = 1;
  return;
}

// NewProp_bShouldGuessTypeAndName_SetBit @ 1475876c0

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldGuessTypeAndName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x391) = 1;
  return;
}

// NewProp_bShouldUseSynchronousLoad_SetBit @ 1475876d0

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldUseSynchronousLoad_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x392) = 1;
  return;
}

// NewProp_bIsLoadingFromPakFiles_SetBit @ 1475876e0

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsLoadingFromPakFiles_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x393) = 1;
  return;
}

// NewProp_bShouldAcquireMissingChunksOnLoad_SetBit @ 1475876f0

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bShouldAcquireMissingChunksOnLoad_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x394) = 1;
  return;
}

// Z_Construct_UClass_UAssetUserData_NoRegister @ 147587700

UClass * __cdecl Z_Construct_UClass_UAssetUserData_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetUserData",
               &Z_Registration_Info_UClass_UAssetUserData.InnerSingleton,
               UAssetUserData::StaticRegisterNativesUAssetUserData,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAssetUserData>,InternalVTableHelperCtorCaller<UAssetUserData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetUserData.InnerSingleton;
}

// NewProp_bOnlyCookProductionAssets_SetBit @ 1475877b0

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bOnlyCookProductionAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x395) = 1;
  return;
}

// NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit @ 1475877c0

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsPrimaryAssetDirectoryCurrent_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39c) = 1;
  return;
}

// NewProp_bIsManagementDatabaseCurrent_SetBit @ 1475877d0

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bIsManagementDatabaseCurrent_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39d) = 1;
  return;
}

// NewProp_bUpdateManagementDatabaseAfterScan_SetBit @ 1475877e0

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bUpdateManagementDatabaseAfterScan_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39e) = 1;
  return;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams @ 1475877f0

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIncludeOnlyOnDiskAssets_SetBit @ 147587830

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39f) = 1;
  return;
}

// NewProp_bHasCompletedInitialScan_SetBit @ 147587840

void __cdecl
Z_Construct_UClass_UAssetManager_Statics::NewProp_bHasCompletedInitialScan_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a0) = 1;
  return;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance @ 147587850

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewStructOps @ 147587890

void * __cdecl Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimSlotGroup,&UE::CoreUObject::Private::Construct<FAnimSlotGroup>,&UE::CoreUObject::Private::ConstructForTests<FAnimSlotGroup>,&UE::CoreUObject::Private::Destruct<FAnimSlotGroup>,&UE::CoreUObject::Private::Copy<FAnimSlotGroup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier @ 147587a10

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_ASkeletalMeshActor @ 147587ad0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_ASkeletalMeshActor(void)

{
  if (Z_Registration_Info_UClass_ASkeletalMeshActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_ASkeletalMeshActor.OuterSingleton,
               &Z_Construct_UClass_ASkeletalMeshActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_ASkeletalMeshActor.OuterSingleton;
}

// Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0 @ 147587b10

UFunction * __cdecl Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147587b50

void * __cdecl Z_Construct_UScriptStruct_FVirtualBone_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FVirtualBone,&UE::CoreUObject::Private::Construct<FVirtualBone>,&UE::CoreUObject::Private::ConstructForTests<FVirtualBone>,&UE::CoreUObject::Private::Destruct<FVirtualBone>,&UE::CoreUObject::Private::Copy<FVirtualBone>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1 @ 147587b90

UFunction * __cdecl Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh @ 147587bd0

UFunction * __cdecl Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset @ 147587c10

UFunction * __cdecl Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bShouldDoAnimNotifies_SetBit @ 147587c50

void __cdecl
Z_Construct_UClass_ASkeletalMeshActor_Statics::NewProp_bShouldDoAnimNotifies_SetBit(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x2c0) = *(uint *)((longlong)param_1 + 0x2c0) | 1;
  return;
}

// Z_Construct_UClass_UMeshDeformerCollection @ 147587c60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMeshDeformerCollection(void)

{
  if (Z_Registration_Info_UClass_UMeshDeformerCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMeshDeformerCollection.OuterSingleton,
               &Z_Construct_UClass_UMeshDeformerCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMeshDeformerCollection.OuterSingleton;
}

// Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton @ 147587ca0

UFunction * __cdecl Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USkeleton_AddCompatibleSkeleton_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft @ 147587da0

UFunction * __cdecl Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_USkeleton_AddCompatibleSkeletonSoft_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_USkeleton_GetBlendProfile @ 147587de0

UFunction * __cdecl Z_Construct_UFunction_USkeleton_GetBlendProfile(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_USkeleton_GetBlendProfile_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_Engine_EAttenuationDistanceModel @ 147587e20

UEnum * __cdecl Z_Construct_UEnum_Engine_EAttenuationDistanceModel(void)

{
  if (Z_Registration_Info_UEnum_EAttenuationDistanceModel.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAttenuationDistanceModel.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAttenuationDistanceModel_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAttenuationDistanceModel.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EAttenuationShape @ 147587e60

UEnum * __cdecl Z_Construct_UEnum_Engine_EAttenuationShape(void)

{
  if (Z_Registration_Info_UEnum_EAttenuationShape.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAttenuationShape.InnerSingleton,
               &Z_Construct_UEnum_Engine_EAttenuationShape_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAttenuationShape.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode @ 147587ea0

UEnum * __cdecl Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode(void)

{
  if (Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.InnerSingleton;
}

// EAttenuationDistanceModel_StaticEnum @ 147587ee0

UEnum * __cdecl EAttenuationDistanceModel_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAttenuationDistanceModel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAttenuationDistanceModel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAttenuationDistanceModel,(UObject *)pUVar1,
                       L"EAttenuationDistanceModel");
  }
  return Z_Registration_Info_UEnum_EAttenuationDistanceModel.OuterSingleton;
}

// NewProp_bUseRetargetModesFromCompatibleSkeleton_SetBit @ 147587fe0

void __cdecl
Z_Construct_UClass_USkeleton_Statics::NewProp_bUseRetargetModesFromCompatibleSkeleton_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x1a0) = 1;
  return;
}

// EAttenuationShape_StaticEnum @ 147587ff0

UEnum * __cdecl EAttenuationShape_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAttenuationShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAttenuationShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAttenuationShape,(UObject *)pUVar1,
                       L"EAttenuationShape");
  }
  return Z_Registration_Info_UEnum_EAttenuationShape.OuterSingleton;
}

// ENaturalSoundFalloffMode_StaticEnum @ 1475880e0

UEnum * __cdecl ENaturalSoundFalloffMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode,(UObject *)pUVar1,
                       L"ENaturalSoundFalloffMode");
  }
  return Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.OuterSingleton;
}

// Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles @ 1475882d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles(void)

{
  if (Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.OuterSingleton,
               &Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.OuterSingleton;
}

// Z_Construct_UClass_UAsyncActionLoadPrimaryAsset @ 147588310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncActionLoadPrimaryAsset(void)

{
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.OuterSingleton,
               &Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.OuterSingleton;
}

// Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase @ 147588350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase(void)

{
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.OuterSingleton,
               &Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.OuterSingleton;
}

// Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass @ 147588390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass(void)

{
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClass.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClass.OuterSingleton,
               &Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClass.OuterSingleton;
}

// Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList @ 1475883d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList(void)

{
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.OuterSingleton,
               &Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.OuterSingleton;
}

// Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList @ 147588450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList(void)

{
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.OuterSingleton,
               &Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.OuterSingleton;
}

// Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature @ 147588490

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetBundlesChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature @ 1475884d0

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassListLoaded__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature @ 147588510

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetClassLoaded__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature @ 147588550

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetListLoaded__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature @ 147588590

UFunction * __cdecl
Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_Engine_OnPrimaryAssetLoaded__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147588610

void * __cdecl Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FBaseAttenuationSettings,&UE::CoreUObject::Private::Construct<FBaseAttenuationSettings>,&UE::CoreUObject::Private::ConstructForTests<FBaseAttenuationSettings>,&UE::CoreUObject::Private::Destruct<FBaseAttenuationSettings>,&UE::CoreUObject::Private::Copy<FBaseAttenuationSettings>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 147588650

void * __thiscall FMirrorTableRow::_scalar_deleting_destructor_(FMirrorTableRow *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FTableRowBase__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset @ 1475888e0

UFunction * __cdecl Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncActionLoadPrimaryAsset_AsyncLoadPrimaryAsset_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass @ 147588a20

UFunction * __cdecl
Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClass_AsyncLoadPrimaryAssetClass_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UVariableFrameStrippingSettings @ 147588a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UVariableFrameStrippingSettings(void)

{
  if (Z_Registration_Info_UClass_UVariableFrameStrippingSettings.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UVariableFrameStrippingSettings.OuterSingleton,
               &Z_Construct_UClass_UVariableFrameStrippingSettings_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UVariableFrameStrippingSettings.OuterSingleton;
}

// Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList @ 147588d80

UFunction * __cdecl
Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetList_AsyncLoadPrimaryAssetList_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_USkeleton_NoRegister @ 147588dc0

UClass * __cdecl Z_Construct_UClass_USkeleton_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeleton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Skeleton",&Z_Registration_Info_UClass_USkeleton.InnerSingleton,
               USkeleton::StaticRegisterNativesUSkeleton,0x388,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USkeleton>,InternalVTableHelperCtorCaller<USkeleton>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeleton.InnerSingleton;
}

// Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList @ 147589120

UFunction * __cdecl
Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncActionLoadPrimaryAssetClassList_AsyncLoadPrimaryAssetClassList_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets @ 147589290

UFunction * __cdecl
Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForMatchingPrimaryAssets_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147589460

void * __cdecl Z_Construct_UScriptStruct_FSmartNameMapping_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSmartNameMapping,&UE::CoreUObject::Private::Construct<FSmartNameMapping>,&UE::CoreUObject::Private::ConstructForTests<FSmartNameMapping>,&UE::CoreUObject::Private::Destruct<FSmartNameMapping>,&UE::CoreUObject::Private::Copy<FSmartNameMapping>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList @ 1475894a0

UFunction * __cdecl
Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAsyncActionChangePrimaryAssetBundles_AsyncChangeBundleStateForPrimaryAssetList_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 147589710

void * __cdecl Z_Construct_UScriptStruct_FSmartNameContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSmartNameContainer,&UE::CoreUObject::Private::Construct<FSmartNameContainer>,&UE::CoreUObject::Private::ConstructForTests<FSmartNameContainer>,&UE::CoreUObject::Private::Destruct<FSmartNameContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPoseAsset @ 147589750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPoseAsset(void)

{
  if (Z_Registration_Info_UClass_UPoseAsset.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPoseAsset.OuterSingleton,
               &Z_Construct_UClass_UPoseAsset_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPoseAsset.OuterSingleton;
}

// NewStructOps @ 147589790

void * __cdecl Z_Construct_UScriptStruct_FSmartName_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSmartName,&UE::CoreUObject::Private::Construct<FSmartName>,&UE::CoreUObject::Private::ConstructForTests<FSmartName>,&UE::CoreUObject::Private::Destruct<FSmartName>,&UE::CoreUObject::Private::SerializeArchive<FSmartName>,&UE::CoreUObject::Private::Copy<FSmartName>,&UE::CoreUObject::Private::Identical<FSmartName>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UScriptStruct_FPoseAssetInfluence @ 1475897d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseAssetInfluence(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseAssetInfluence.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseAssetInfluence.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseAssetInfluence.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPoseAssetInfluence.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseAssetInfluences @ 147589850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseAssetInfluences(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseAssetInfluences.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseAssetInfluences.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseAssetInfluences.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FPoseAssetInfluences.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseData @ 1475898d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseData.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPoseDataContainer @ 147589950

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPoseDataContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPoseDataContainer.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPoseDataContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FPoseDataContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPoseDataContainer.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPoseDataContainer.InnerSingleton;
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

// NewStructOps @ 1475899d0

void * __cdecl Z_Construct_UScriptStruct_FPoseData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseData,&UE::CoreUObject::Private::Construct<FPoseData>,&UE::CoreUObject::Private::ConstructForTests<FPoseData>,&UE::CoreUObject::Private::Destruct<FPoseData>,&UE::CoreUObject::Private::Copy<FPoseData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147589ab0

void * __cdecl Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseAssetInfluence,&UE::CoreUObject::Private::Construct<FPoseAssetInfluence>,&UE::CoreUObject::Private::ConstructForTests<FPoseAssetInfluence>,&UE::CoreUObject::Private::Destruct<FPoseAssetInfluence>,&UE::CoreUObject::Private::Copy<FPoseAssetInfluence>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147589bb0

void * __cdecl Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseAssetInfluences,&UE::CoreUObject::Private::Construct<FPoseAssetInfluences>,&UE::CoreUObject::Private::ConstructForTests<FPoseAssetInfluences>,&UE::CoreUObject::Private::Destruct<FPoseAssetInfluences>,&UE::CoreUObject::Private::Copy<FPoseAssetInfluences>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147589c80

void * __cdecl Z_Construct_UScriptStruct_FPoseDataContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPoseDataContainer,&UE::CoreUObject::Private::Construct<FPoseDataContainer>,&UE::CoreUObject::Private::ConstructForTests<FPoseDataContainer>,&UE::CoreUObject::Private::Destruct<FPoseDataContainer>,&UE::CoreUObject::Private::SerializeArchive<FPoseDataContainer>,&UE::CoreUObject::Private::PostSerialize<FPoseDataContainer>,&UE::CoreUObject::Private::Copy<FPoseDataContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 147589cc0

void * __cdecl Z_Construct_UScriptStruct_FTrajectorySample_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTrajectorySample,&UE::CoreUObject::Private::Construct<FTrajectorySample>,&UE::CoreUObject::Private::ConstructForTests<FTrajectorySample>,&UE::CoreUObject::Private::Destruct<FTrajectorySample>,&UE::CoreUObject::Private::Copy<FTrajectorySample>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bAdditivePose_SetBit @ 147589e50

void __cdecl Z_Construct_UClass_UPoseAsset_Statics::NewProp_bAdditivePose_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
  return;
}

// NewStructOps @ 14758a220

void * __cdecl Z_Construct_UScriptStruct_FAssetCompileData_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAssetCompileData,&UE::CoreUObject::Private::Construct<FAssetCompileData>,&UE::CoreUObject::Private::ConstructForTests<FAssetCompileData>,&UE::CoreUObject::Private::Destruct<FAssetCompileData>,&UE::CoreUObject::Private::Copy<FAssetCompileData>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary @ 14758a660

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTransformTrajectory @ 14758a6a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformTrajectory(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformTrajectory.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformTrajectory.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformTrajectory_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformTrajectory.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FTransformTrajectory.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTransformTrajectorySample @ 14758a720

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformTrajectorySample(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformTrajectorySample.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformTrajectorySample.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformTrajectorySample_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformTrajectorySample.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransformTrajectorySample.InnerSingleton;
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

// NewStructOps @ 14758a7a0

void * __cdecl Z_Construct_UScriptStruct_FTransformTrajectorySample_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformTrajectorySample,&UE::CoreUObject::Private::Construct<FTransformTrajectorySample>,&UE::CoreUObject::Private::ConstructForTests<FTransformTrajectorySample>,&UE::CoreUObject::Private::Destruct<FTransformTrajectorySample>,&UE::CoreUObject::Private::Copy<FTransformTrajectorySample>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14758a820

void * __cdecl Z_Construct_UScriptStruct_FTransformTrajectory_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformTrajectory,&UE::CoreUObject::Private::Construct<FTransformTrajectory>,&UE::CoreUObject::Private::ConstructForTests<FTransformTrajectory>,&UE::CoreUObject::Private::Destruct<FTransformTrajectory>,&UE::CoreUObject::Private::Copy<FTransformTrajectory>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UTransformTrajectoryBlueprintLibrary_DebugDrawTrajectory @ 14758a8a0

UFunction * __cdecl
Z_Construct_UFunction_UTransformTrajectoryBlueprintLibrary_DebugDrawTrajectory(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UTransformTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FPreviewAttachedObjectPair @ 14758ad70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPreviewAttachedObjectPair(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPreviewAttachedObjectPair.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPreviewAttachedObjectPair.InnerSingleton,
               &Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPreviewAttachedObjectPair.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPreviewAttachedObjectPair.InnerSingleton;
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

// NewStructOps @ 14758adf0

void * __cdecl Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPreviewAttachedObjectPair,&UE::CoreUObject::Private::Construct<FPreviewAttachedObjectPair>,&UE::CoreUObject::Private::ConstructForTests<FPreviewAttachedObjectPair>,&UE::CoreUObject::Private::Destruct<FPreviewAttachedObjectPair>,&UE::CoreUObject::Private::Copy<FPreviewAttachedObjectPair>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNodeMappingContainer @ 14758ae60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNodeMappingContainer(void)

{
  if (Z_Registration_Info_UClass_UNodeMappingContainer.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNodeMappingContainer.OuterSingleton,
               &Z_Construct_UClass_UNodeMappingContainer_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNodeMappingContainer.OuterSingleton;
}

// Z_Construct_UScriptStruct_FNodeItem @ 14758aea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNodeItem(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNodeItem.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNodeItem.InnerSingleton,
               &Z_Construct_UScriptStruct_FNodeItem_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNodeItem.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNodeItem.InnerSingleton;
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

// Z_Construct_UClass_UAnimBlueprint_NoRegister @ 14758af20

UClass * __cdecl Z_Construct_UClass_UAnimBlueprint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimBlueprint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimBlueprint",
               &Z_Registration_Info_UClass_UAnimBlueprint.InnerSingleton,
               UAnimBlueprint::StaticRegisterNativesUAnimBlueprint,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimBlueprint>,InternalVTableHelperCtorCaller<UAnimBlueprint>,
               local_res8,UBlueprint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimBlueprint.InnerSingleton;
}

// NewStructOps @ 14758b060

void * __cdecl
Z_Construct_UScriptStruct_FSkinWeightProfileManagerTickFunction_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSkinWeightProfileManagerTickFunction,&UE::CoreUObject::Private::Construct<FSkinWeightProfileManagerTickFunction>,&UE::CoreUObject::Private::ConstructForTests<FSkinWeightProfileManagerTickFunction>,&UE::CoreUObject::Private::Destruct<FSkinWeightProfileManagerTickFunction>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14758b160

void * __cdecl Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPreviewAssetAttachContainer,&UE::CoreUObject::Private::Construct<FPreviewAssetAttachContainer>,&UE::CoreUObject::Private::ConstructForTests<FPreviewAssetAttachContainer>,&UE::CoreUObject::Private::Destruct<FPreviewAssetAttachContainer>,&UE::CoreUObject::Private::Copy<FPreviewAssetAttachContainer>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UNodeMappingProviderInterface @ 14758b1f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UNodeMappingProviderInterface(void)

{
  if (Z_Registration_Info_UClass_UNodeMappingProviderInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UNodeMappingProviderInterface.OuterSingleton,
               &Z_Construct_UClass_UNodeMappingProviderInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UNodeMappingProviderInterface.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EPrimaryAssetCookRule @ 14758b270

UEnum * __cdecl Z_Construct_UEnum_Engine_EPrimaryAssetCookRule(void)

{
  if (Z_Registration_Info_UEnum_EPrimaryAssetCookRule.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPrimaryAssetCookRule.InnerSingleton,
               &Z_Construct_UEnum_Engine_EPrimaryAssetCookRule_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPrimaryAssetCookRule.InnerSingleton;
}

// Z_Construct_UScriptStruct_FPrimaryAssetRules @ 14758b2b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPrimaryAssetRules(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetRules.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPrimaryAssetRules.InnerSingleton,
               &Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetRules.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPrimaryAssetRules.InnerSingleton;
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

// NewStructOps @ 14758b330

void * __cdecl Z_Construct_UScriptStruct_FNodeItem_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FNodeItem,&UE::CoreUObject::Private::Construct<FNodeItem>,&UE::CoreUObject::Private::ConstructForTests<FNodeItem>,&UE::CoreUObject::Private::Destruct<FNodeItem>,&UE::CoreUObject::Private::Copy<FNodeItem>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// EPrimaryAssetCookRule_StaticEnum @ 14758b370

UEnum * __cdecl EPrimaryAssetCookRule_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule,(UObject *)pUVar1,
                       L"EPrimaryAssetCookRule");
  }
  return Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton;
}

// NewProp_bApplyRecursively_SetBit @ 14758b3f0

void __cdecl
Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewProp_bApplyRecursively_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// NewStructOps @ 14758b400

void * __cdecl Z_Construct_UScriptStruct_FPrimaryAssetRules_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPrimaryAssetRules,&UE::CoreUObject::Private::Construct<FPrimaryAssetRules>,&UE::CoreUObject::Private::ConstructForTests<FPrimaryAssetRules>,&UE::CoreUObject::Private::Destruct<FPrimaryAssetRules>,&UE::CoreUObject::Private::Copy<FPrimaryAssetRules>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAnimBlueprint @ 14758b480

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAnimBlueprint(void)

{
  if (Z_Registration_Info_UClass_UAnimBlueprint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAnimBlueprint.OuterSingleton,
               &Z_Construct_UClass_UAnimBlueprint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAnimBlueprint.OuterSingleton;
}

// Z_Construct_UScriptStruct_FAnimGroupInfo @ 14758b4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimGroupInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimGroupInfo.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimGroupInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimGroupInfo.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimGroupInfo.InnerSingleton;
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

// NewStructOps @ 14758b580

void * __cdecl Z_Construct_UScriptStruct_FAnimGroupInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimGroupInfo,&UE::CoreUObject::Private::Construct<FAnimGroupInfo>,&UE::CoreUObject::Private::ConstructForTests<FAnimGroupInfo>,&UE::CoreUObject::Private::Destruct<FAnimGroupInfo>,&UE::CoreUObject::Private::Copy<FAnimGroupInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasBlueprintClasses_SetBit @ 14758b680

void __cdecl
Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bHasBlueprintClasses_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bIsEditorOnly_SetBit @ 14758b690

void __cdecl
Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsEditorOnly_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewProp_bIsDynamicAsset_SetBit @ 14758b6b0

void __cdecl
Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewProp_bIsDynamicAsset_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x80) = 1;
  return;
}

// NewStructOps @ 14758b700

void * __cdecl Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x88;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPrimaryAssetTypeInfo,&UE::CoreUObject::Private::Construct<FPrimaryAssetTypeInfo>,&UE::CoreUObject::Private::ConstructForTests<FPrimaryAssetTypeInfo>,&UE::CoreUObject::Private::Destruct<FPrimaryAssetTypeInfo>,&UE::CoreUObject::Private::Copy<FPrimaryAssetTypeInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14758b780

void * __cdecl Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAnimParentNodeAssetOverride,&UE::CoreUObject::Private::Construct<FAnimParentNodeAssetOverride>,&UE::CoreUObject::Private::ConstructForTests<FAnimParentNodeAssetOverride>,&UE::CoreUObject::Private::Destruct<FAnimParentNodeAssetOverride>,&UE::CoreUObject::Private::Copy<FAnimParentNodeAssetOverride>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UPreviewCollectionInterface @ 14758b900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPreviewCollectionInterface(void)

{
  if (Z_Registration_Info_UClass_UPreviewCollectionInterface.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPreviewCollectionInterface.OuterSingleton,
               &Z_Construct_UClass_UPreviewCollectionInterface_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPreviewCollectionInterface.OuterSingleton;
}

// EPreviewAnimationBlueprintApplicationMethod_StaticEnum @ 14758b940

UEnum * __cdecl EPreviewAnimationBlueprintApplicationMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod,
                       (UObject *)pUVar1,L"EPreviewAnimationBlueprintApplicationMethod");
  }
  return Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton;
}

// NewProp_bHasBlueprintClasses_SetBit @ 14758b9e0

void __cdecl
Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bHasBlueprintClasses_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bForceSynchronousScan_SetBit @ 14758b9f0

void __cdecl
Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bForceSynchronousScan_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewProp_bSkipVirtualPathExpansion_SetBit @ 14758ba00

void __cdecl
Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipVirtualPathExpansion_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
  return;
}

// NewProp_bSkipManagerIncludeCheck_SetBit @ 14758ba10

void __cdecl
Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewProp_bSkipManagerIncludeCheck_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3b) = 1;
  return;
}

// NewStructOps @ 14758ba20

void * __cdecl Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAssetManagerSearchRules,&UE::CoreUObject::Private::Construct<FAssetManagerSearchRules>,&UE::CoreUObject::Private::ConstructForTests<FAssetManagerSearchRules>,&UE::CoreUObject::Private::Destruct<FAssetManagerSearchRules>,&UE::CoreUObject::Private::Copy<FAssetManagerSearchRules>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bIsTemplate_SetBit @ 14758bac0

void __cdecl Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bIsTemplate_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 200) = 1;
  return;
}

// NewProp_bUseMultiThreadedAnimationUpdate_SetBit @ 14758bad0

void __cdecl
Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bUseMultiThreadedAnimationUpdate_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc9) = 1;
  return;
}

// NewProp_bWarnAboutBlueprintUsage_SetBit @ 14758bae0

void __cdecl
Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bWarnAboutBlueprintUsage_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xca) = 1;
  return;
}

// NewProp_bEnableLinkedAnimLayerInstanceSharing_SetBit @ 14758baf0

void __cdecl
Z_Construct_UClass_UAnimBlueprint_Statics::NewProp_bEnableLinkedAnimLayerInstanceSharing_SetBit
          (void *param_1)

{
  *(byte *)((longlong)param_1 + 0xcb) = *(byte *)((longlong)param_1 + 0xcb) | 1;
  return;
}

// Z_Construct_UScriptStruct_FTimeStretchCurveMarker @ 14758bce0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTimeStretchCurveMarker(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTimeStretchCurveMarker.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTimeStretchCurveMarker.InnerSingleton,
               &Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTimeStretchCurveMarker.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTimeStretchCurveMarker.InnerSingleton;
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

// ETimeStretchCurveMapping_StaticEnum @ 14758bd60

UEnum * __cdecl ETimeStretchCurveMapping_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETimeStretchCurveMapping.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETimeStretchCurveMapping.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETimeStretchCurveMapping,(UObject *)pUVar1,
                       L"ETimeStretchCurveMapping");
  }
  return Z_Registration_Info_UEnum_ETimeStretchCurveMapping.OuterSingleton;
}

// NewStructOps @ 14758bde0

void * __cdecl Z_Construct_UScriptStruct_FTimeStretchCurveMarker_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTimeStretchCurveMarker,&UE::CoreUObject::Private::Construct<FTimeStretchCurveMarker>,&UE::CoreUObject::Private::ConstructForTests<FTimeStretchCurveMarker>,&UE::CoreUObject::Private::Destruct<FTimeStretchCurveMarker>,&UE::CoreUObject::Private::Copy<FTimeStretchCurveMarker>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14758bf50

void * __cdecl Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTimeStretchCurve,&UE::CoreUObject::Private::Construct<FTimeStretchCurve>,&UE::CoreUObject::Private::ConstructForTests<FTimeStretchCurve>,&UE::CoreUObject::Private::Destruct<FTimeStretchCurve>,&UE::CoreUObject::Private::Copy<FTimeStretchCurve>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bHasValidData_SetBit @ 14758c170

void __cdecl
Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewProp_bHasValidData_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14758c180

void * __cdecl Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTimeStretchCurveInstance,&UE::CoreUObject::Private::Construct<FTimeStretchCurveInstance>,&UE::CoreUObject::Private::ConstructForTests<FTimeStretchCurveInstance>,&UE::CoreUObject::Private::Destruct<FTimeStretchCurveInstance>,&UE::CoreUObject::Private::Copy<FTimeStretchCurveInstance>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAssetUserData @ 14758c1c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAssetUserData(void)

{
  if (Z_Registration_Info_UClass_UAssetUserData.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAssetUserData.OuterSingleton,
               &Z_Construct_UClass_UAssetUserData_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAssetUserData.OuterSingleton;
}

// Z_Construct_UClass_UAtmosphericFogComponent_NoRegister @ 14758c200

UClass * __cdecl Z_Construct_UClass_UAtmosphericFogComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAtmosphericFogComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AtmosphericFogComponent",
               &Z_Registration_Info_UClass_UAtmosphericFogComponent.InnerSingleton,
               UAtmosphericFogComponent::StaticRegisterNativesUAtmosphericFogComponent,0x360,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAtmosphericFogComponent>,
               InternalVTableHelperCtorCaller<UAtmosphericFogComponent>,local_res8,
               USkyAtmosphereComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAtmosphericFogComponent.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType @ 14758c300

UEnum * __cdecl Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType(void)

{
  if (Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.InnerSingleton == (UEnum *)0x0)
  {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.InnerSingleton,
               &Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.InnerSingleton;
}

// ESkeletalMeshVertexAttributeDataType_StaticEnum @ 14758c340

UEnum * __cdecl ESkeletalMeshVertexAttributeDataType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType,
                       (UObject *)pUVar1,L"ESkeletalMeshVertexAttributeDataType");
  }
  return Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.OuterSingleton;
}

// NewStructOps @ 14758c440

void * __cdecl
Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSkeletalMeshVertexAttributeInfo,&UE::CoreUObject::Private::Construct<FSkeletalMeshVertexAttributeInfo>,&UE::CoreUObject::Private::ConstructForTests<FSkeletalMeshVertexAttributeInfo>,&UE::CoreUObject::Private::Destruct<FSkeletalMeshVertexAttributeInfo>,&UE::CoreUObject::Private::Copy<FSkeletalMeshVertexAttributeInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister @ 14758c5c0

UClass * __cdecl Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAsset",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.InnerSingleton,
               UAsyncActionLoadPrimaryAsset::StaticRegisterNativesUAsyncActionLoadPrimaryAsset,0x90,
               8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAsyncActionLoadPrimaryAsset>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAsset>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.InnerSingleton;
}

// Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister @ 14758c680

UClass * __cdecl Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAssetClass",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClass.InnerSingleton,
               UAsyncActionLoadPrimaryAssetClass::
               StaticRegisterNativesUAsyncActionLoadPrimaryAssetClass,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionLoadPrimaryAssetClass>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetClass>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClass.InnerSingleton;
}

// Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister @ 14758c740

UClass * __cdecl Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAssetList",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.InnerSingleton,
               UAsyncActionLoadPrimaryAssetList::
               StaticRegisterNativesUAsyncActionLoadPrimaryAssetList,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionLoadPrimaryAssetList>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetList>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.InnerSingleton;
}

// Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister @ 14758c800

UClass * __cdecl Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAssetClassList",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.InnerSingleton,
               UAsyncActionLoadPrimaryAssetClassList::
               StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionLoadPrimaryAssetClassList>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetClassList>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.InnerSingleton;
}

// Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister @ 14758c8c0

UClass * __cdecl Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionChangePrimaryAssetBundles",
               &Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.InnerSingleton,
               UAsyncActionChangePrimaryAssetBundles::
               StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionChangePrimaryAssetBundles>,
               InternalVTableHelperCtorCaller<UAsyncActionChangePrimaryAssetBundles>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.InnerSingleton;
}

// Z_Construct_UClass_UPreviewMeshCollection @ 14758cb60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UPreviewMeshCollection(void)

{
  if (Z_Registration_Info_UClass_UPreviewMeshCollection.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UPreviewMeshCollection.OuterSingleton,
               &Z_Construct_UClass_UPreviewMeshCollection_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UPreviewMeshCollection.OuterSingleton;
}

// Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry @ 14758cba0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPreviewMeshCollectionEntry.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPreviewMeshCollectionEntry.InnerSingleton,
               &Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPreviewMeshCollectionEntry.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPreviewMeshCollectionEntry.InnerSingleton;
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

// NewStructOps @ 14758cc20

void * __cdecl Z_Construct_UScriptStruct_FPreviewMeshCollectionEntry_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FPreviewMeshCollectionEntry,&UE::CoreUObject::Private::Construct<FPreviewMeshCollectionEntry>,&UE::CoreUObject::Private::ConstructForTests<FPreviewMeshCollectionEntry>,&UE::CoreUObject::Private::Destruct<FPreviewMeshCollectionEntry>,&UE::CoreUObject::Private::Copy<FPreviewMeshCollectionEntry>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_UMeshDeformerCollection_NoRegister @ 14758cf30

UClass * __cdecl Z_Construct_UClass_UMeshDeformerCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDeformerCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MeshDeformerCollection",
               &Z_Registration_Info_UClass_UMeshDeformerCollection.InnerSingleton,
               UMeshDeformerCollection::StaticRegisterNativesUMeshDeformerCollection,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UMeshDeformerCollection>
               ,InternalVTableHelperCtorCaller<UMeshDeformerCollection>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDeformerCollection.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14758d0f0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`<lambda_25>::operator()'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_AAtmosphericFog @ 14758d290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AAtmosphericFog(void)

{
  if (Z_Registration_Info_UClass_AAtmosphericFog.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AAtmosphericFog.OuterSingleton,
               &Z_Construct_UClass_AAtmosphericFog_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AAtmosphericFog.OuterSingleton;
}

// Z_Construct_UClass_UMirrorDataTable @ 14758d2d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMirrorDataTable(void)

{
  if (Z_Registration_Info_UClass_UMirrorDataTable.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMirrorDataTable.OuterSingleton,
               &Z_Construct_UClass_UMirrorDataTable_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UMirrorDataTable.OuterSingleton;
}

// Z_Construct_UClass_USkeleton @ 14758d310

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USkeleton(void)

{
  if (Z_Registration_Info_UClass_USkeleton.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USkeleton.OuterSingleton,
               &Z_Construct_UClass_USkeleton_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USkeleton.OuterSingleton;
}

// Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod @ 14758d350

UEnum * __cdecl Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod(void)

{
  if (Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EMirrorRowType @ 14758d390

UEnum * __cdecl Z_Construct_UEnum_Engine_EMirrorRowType(void)

{
  if (Z_Registration_Info_UEnum_EMirrorRowType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EMirrorRowType.InnerSingleton,
               &Z_Construct_UEnum_Engine_EMirrorRowType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EMirrorRowType.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode @ 14758d3d0

UEnum * __cdecl Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode(void)

{
  if (Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.InnerSingleton,
               &Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FMirrorFindReplaceExpression @ 14758d410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMirrorFindReplaceExpression(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMirrorFindReplaceExpression.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMirrorFindReplaceExpression.InnerSingleton,
               &Z_Construct_UScriptStruct_FMirrorFindReplaceExpression_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMirrorFindReplaceExpression.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMirrorFindReplaceExpression.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAnimSlotGroup @ 14758d490

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimSlotGroup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimSlotGroup.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimSlotGroup.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimSlotGroup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimSlotGroup.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimSlotGroup.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBoneNode @ 14758d510

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoneNode(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBoneNode.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBoneNode.InnerSingleton,
               &Z_Construct_UScriptStruct_FBoneNode_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBoneNode.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBoneNode.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSmartNameContainer @ 14758d590

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSmartNameContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSmartNameContainer.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSmartNameContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FSmartNameContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSmartNameContainer.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FSmartNameContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FVirtualBone @ 14758d610

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FVirtualBone(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FVirtualBone.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FVirtualBone.InnerSingleton,
               &Z_Construct_UScriptStruct_FVirtualBone_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FVirtualBone.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FVirtualBone.InnerSingleton;
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

// NewStructOps @ 14758d6f0

void * __cdecl Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSkeletonToMeshLinkup,&UE::CoreUObject::Private::Construct<FSkeletonToMeshLinkup>,&UE::CoreUObject::Private::ConstructForTests<FSkeletonToMeshLinkup>,&UE::CoreUObject::Private::Destruct<FSkeletonToMeshLinkup>,&UE::CoreUObject::Private::Copy<FSkeletonToMeshLinkup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// EMirrorRowType_StaticEnum @ 14758d730

UEnum * __cdecl EMirrorRowType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMirrorRowType,(UObject *)pUVar1,L"EMirrorRowType");
  }
  return Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton;
}

// Z_Construct_UClass_UAtmosphericFogComponent @ 14758d770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAtmosphericFogComponent(void)

{
  if (Z_Registration_Info_UClass_UAtmosphericFogComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAtmosphericFogComponent.OuterSingleton,
               &Z_Construct_UClass_UAtmosphericFogComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAtmosphericFogComponent.OuterSingleton;
}

// NewProp_NewGroundScattering_SetBit @ 14758d8d0

void __cdecl
Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::
NewProp_NewGroundScattering_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// EMirrorFindReplaceMethod_StaticEnum @ 14758d8e0

UEnum * __cdecl EMirrorFindReplaceMethod_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod,(UObject *)pUVar1,
                       L"EMirrorFindReplaceMethod");
  }
  return Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton;
}

// NewStructOps @ 14758d9c0

void * __cdecl Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FSkinWeightProfileInfo,&UE::CoreUObject::Private::Construct<FSkinWeightProfileInfo>,&UE::CoreUObject::Private::ConstructForTests<FSkinWeightProfileInfo>,&UE::CoreUObject::Private::Destruct<FSkinWeightProfileInfo>,&UE::CoreUObject::Private::Copy<FSkinWeightProfileInfo>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering @ 14758da70

UFunction * __cdecl Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// <lambda_invoker_cdecl> @ 14758dac0

void __cdecl <lambda_25>::<lambda_invoker_cdecl>(void)

{
  <lambda_1> local_res8 [32];
  
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddLambda<_<lambda_25>::operator()_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,local_res8);
  return;
}

// <lambda_invoker_cdecl> @ 14758daf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
<lambda_26>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  <lambda_26> local_res18 [16];
  
  operator()(local_res18,param_1,param_2);
  return;
}

// <lambda_invoker_cdecl> @ 14758db10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
<lambda_27>::<lambda_invoker_cdecl>
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  <lambda_27> local_res18 [16];
  
  operator()(local_res18,param_1,param_2);
  return;
}

// operator<<<unsigned_short,FName> @ 14758de00

FArchive * __cdecl
operator<<<unsigned_short,FName>(FArchive *param_1,TTuple<unsigned_short,FName> *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined2 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(ushort *)param_2);
    }
  }
  else {
    *(undefined2 *)param_2 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&param_2->field_0x4);
  return param_1;
}

// operator<<<unsigned_int,unsigned_int> @ 14758de80

FArchive * __cdecl
operator<<<unsigned_int,unsigned_int>(FArchive *param_1,TTuple<unsigned_int,unsigned_int> *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar1 = &param_2->field_0x4;
  puVar2 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)puVar1);
  return param_1;
}

// operator<<<TTuple<unsigned_short,FName>,TDefaultMapHashableKeyFuncs<unsigned_short,FName,0>,FDefaultSetAllocator> @ 14758df50

FArchive * __cdecl
operator<<<TTuple<unsigned_short,FName>,TDefaultMapHashableKeyFuncs<unsigned_short,FName,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned_short,FName>,TDefaultMapHashableKeyFuncs<unsigned_short,FName,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> FVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<unsigned_short,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar6 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar12 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((int)uVar7 < 1) {
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
  uVar7 = uVar12;
  if (uVar12 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a16be;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_1475a16be:
  uVar10 = (ulonglong)uVar12;
  uVar8 = uVar6;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar5 = FVar2;
    }
    uVar4 = uVar8 & (longlong)(int)uVar12 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar5 + uVar4 * 4) = 0xffffffff;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar11 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)TStack_50.Array;
      }
      uVar12 = *puVar11;
      uVar8 = uVar6;
      while (uVar12 == 0) {
        iVar9 = (int)uVar6;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar6 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1475a179b;
        uVar12 = puVar11[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar12 & uVar12;
      uVar6 = (ulonglong)uStack_74 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      uStack_64 = (int)lVar3 + -1 + uStack_60;
      uVar6 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1475a179b:
        uVar6 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar6 < (int)uVar7) {
      do {
        iVar9 = (int)uVar6;
        lVar3 = *(longlong *)&param_2->Elements + (longlong)iVar9 * 0x14;
        uVar7 = *piVar1 - 1U &
                (uint)*(ushort *)(*(longlong *)&param_2->Elements + (longlong)iVar9 * 0x14);
        *(uint *)(lVar3 + 0x10) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (ulonglong)uVar7;
        *(undefined4 *)(lVar3 + 0xc) = *(undefined4 *)((longlong)FVar5 + uVar6 * 4);
        *(int *)((longlong)FVar5 + uVar6 * 4) = iVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar6 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator> @ 14758df60

FArchive * __cdecl
operator<<<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
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
  
  operator<<<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a195e;
    uVar6 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar6,4);
LAB_1475a195e:
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
        goto LAB_1475a1a3b;
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
LAB_1475a1a3b:
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
        puVar11 = (uint *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&param_2->Elements);
        uVar6 = *piVar1 - 1U & *puVar11;
        puVar11[3] = uVar6;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar5 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar5 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        puVar11[2] = *(uint *)((longlong)FVar5 + uVar7 * 4);
        *(int *)((longlong)FVar5 + uVar7 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator> @ 14758df70

FArchive * __cdecl
operator<<<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a1bfe;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_1475a1bfe:
  uVar12 = (ulonglong)uVar11;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar11 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar13;
      uVar9 = uVar7;
      while (uVar11 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1475a1cdb;
        uVar11 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_1475a1cdb:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x14);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x14;
        uVar8 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar8 = *piVar1 - 1U & uVar8 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar4 + 0x10) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator> @ 14758df80

FArchive * __cdecl
operator<<<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar8 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar8) {
    uVar9 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar8 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar8 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a1ebe;
    uVar8 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar8,4);
LAB_1475a1ebe:
  uVar12 = (ulonglong)uVar11;
  uVar9 = uVar7;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar9 & (longlong)(int)uVar11 - 1U;
    uVar9 = uVar9 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar12 = uVar12 - 1;
  } while (uVar12 != 0);
  if (*piVar1 != 0) {
    uVar8 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar8 != 0) {
      puVar13 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar13;
      uVar9 = uVar7;
      while (uVar11 == 0) {
        iVar10 = (int)uVar7;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        uStack_78 = iVar10 + 1;
        uVar7 = (ulonglong)uStack_78;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1475a1f9b;
        uVar11 = puVar13[(longlong)iVar10 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar7 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar7 = (ulonglong)uStack_64;
      if ((int)uVar8 < (int)uStack_64) {
LAB_1475a1f9b:
        uVar7 = (ulonglong)uVar8;
        uStack_64 = uVar8;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar7 < (int)uVar8) {
      do {
        iVar10 = (int)uVar7;
        uVar3 = *(undefined8 *)(*(longlong *)&param_2->Elements + (longlong)iVar10 * 0x28);
        lVar4 = *(longlong *)&param_2->Elements + (longlong)iVar10 * 0x28;
        uVar8 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar8 = *piVar1 - 1U & uVar8 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar4 + 0x24) = uVar8;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar4 + 0x20) = *(undefined4 *)((longlong)FVar6 + uVar7 * 4);
        *(int *)((longlong)FVar6 + uVar7 * 4) = iVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar7 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator> @ 14758df90

FArchive * __cdecl
operator<<<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FGuid>,TDefaultMapHashableKeyFuncs<FName,FGuid,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a217e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_1475a217e:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1475a225b;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1475a225b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x1c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 3) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator> @ 14758dfa0

FArchive * __cdecl
operator<<<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a242e;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_1475a242e:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1475a250b;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1475a250b:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x88 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x84) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator> @ 14758dfb0

FArchive * __cdecl
operator<<<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
          (FArchive *param_1,
          TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
          *param_2)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  operator<<<TSparseSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1,&param_2->Elements);
  if (((param_1->field_0x28 & 1) == 0) &&
     (((param_1->field_0x2b & 2) == 0 || ((param_1->field_0x28 & 4) != 0)))) {
    return param_1;
  }
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar10 = 0;
  param_2->HashSize = 0;
  piVar1 = &param_2->HashSize;
  uVar11 = 1;
  uVar7 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
  if (3 < uVar7) {
    uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar11 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((int)uVar7 < 1) {
    return param_1;
  }
  if ((int)uVar11 < 1) {
    return param_1;
  }
  *piVar1 = uVar11;
  if ((param_2->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,0,4);
  }
  uVar7 = uVar11;
  if (uVar11 < 2) {
    if ((param_2->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1475a26ee;
    uVar7 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(param_2->Hash).SecondaryData,0,uVar7,4);
LAB_1475a26ee:
  uVar13 = (ulonglong)uVar11;
  uVar8 = uVar10;
  do {
    FVar2 = (param_2->Hash).SecondaryData;
    FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FVar6 = FVar2;
    }
    uVar5 = uVar8 & (longlong)(int)uVar11 - 1U;
    uVar8 = uVar8 + 1;
    *(undefined4 *)((longlong)FVar6 + uVar5 * 4) = 0xffffffff;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  if (*piVar1 != 0) {
    uVar7 = *(uint *)&(param_2->Elements).field_0x28;
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->Elements).field_0x10;
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar7 != 0) {
      puVar14 = *(uint **)&(param_2->Elements).field_0x20;
      if (puVar14 == (uint *)0x0) {
        puVar14 = (uint *)TStack_50.Array;
      }
      uVar11 = *puVar14;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_1475a27cb;
        uVar11 = puVar14[(longlong)iVar9 + 1];
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (int)lVar4 + -1 + uStack_60;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar7 < (int)uStack_64) {
LAB_1475a27cb:
        uVar10 = (ulonglong)uVar7;
        uStack_64 = uVar7;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    if ((int)uVar10 < (int)uVar7) {
      do {
        puVar12 = (undefined8 *)((longlong)(int)uVar10 * 0x80 + *(longlong *)&param_2->Elements);
        uVar3 = *puVar12;
        uVar7 = GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar7 = *piVar1 - 1U & uVar7 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar12 + 0x7c) = uVar7;
        FVar2 = (param_2->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&param_2->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar2;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar12 + 0xf) = *(undefined4 *)((longlong)FVar6 + uVar8 * 4);
        *(int *)((longlong)FVar6 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return param_1;
}

// operator<<<FMeshBoneInfo,TSizedDefaultAllocator<32>_> @ 14758dfc0

FArchive * __cdecl
operator<<<FMeshBoneInfo,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FMeshBoneInfo *pFVar2;
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
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
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
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x155556)) {
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
              operator<<(param_1,(FMeshBoneInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_>::Empty(param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FMeshBoneInfo *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<FMeshBoneInfo,int>(pFVar2,1);
              operator<<(param_1,pFVar2);
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

// operator<<<FTransformTrajectorySample,TSizedDefaultAllocator<32>_> @ 14758dfd0

FArchive * __cdecl
operator<<<FTransformTrajectorySample,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FTransformTrajectorySample,TSizedDefaultAllocator<32>_> *param_2
          )

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
  FTransformTrajectorySample *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
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
                (0x40,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x40001)) {
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
              operator<<(param_1,(FTransformTrajectorySample *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FTransformTrajectorySample,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1040,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FTransformTrajectorySample *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
              DefaultConstructItems<FTransformTrajectorySample,int>(pFVar10,1);
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

// operator<<<TSparseSetElement<TTuple<unsigned_short,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14758dfe0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<unsigned_short,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<unsigned_short,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<unsigned_short,FName> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<unsigned_short,FName> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<unsigned_short,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x14,(longlong)*(int *)&param_2->field_0xc * 0x14);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
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
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14758e2dc;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_14758e2dc:
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
        operator<<<unsigned_short,FName>
                  (param_1,(TTuple<unsigned_short,FName> *)
                           (*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x14));
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
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<unsigned_short,FName> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x14,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x14);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x14) = 0xffffffff;
          }
        }
        TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<unsigned_short,FName> *)0x0;
        if (local_78.Pointer != (TTuple<unsigned_short,FName> *)0x0) {
          *(undefined2 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 4) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0xc) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<unsigned_short,FName>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<unsigned_short,FName> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14758e350

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<unsigned_int,unsigned_int> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<unsigned_int,unsigned_int> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 4,(longlong)*(int *)&param_2->field_0xc << 4);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
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
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14758e63c;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_14758e63c:
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
        operator<<<unsigned_int,unsigned_int>
                  (param_1,(TTuple<unsigned_int,unsigned_int> *)
                           ((longlong)local_50.CurrentBitIndex * 0x10 + *(longlong *)local_58));
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
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<unsigned_int,unsigned_int> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x10);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x10) = 0xffffffff;
          }
        }
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<unsigned_int,unsigned_int> *)0x0;
        if (local_78.Pointer != (TTuple<unsigned_int,unsigned_int> *)0x0) {
          *(TTuple<unsigned_int,unsigned_int> *)local_78.Pointer =
               (TTuple<unsigned_int,unsigned_int>)0x0;
          *(undefined4 *)((longlong)local_78.Pointer + 8) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<unsigned_int,unsigned_int>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<unsigned_int,unsigned_int> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14758e6b0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  TTuple<FName,int> *pTVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  TTuple<FName,int> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x14,(longlong)*(int *)&param_2->field_0xc * 0x14);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
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
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar10 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar10 = local_78.Pointer;
      }
      uVar11 = *puVar10;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar11 == 0) {
        lVar9 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14758e9ac;
        uVar11 = puVar10[lVar9 + 1];
      }
      local_78._4_4_ = -uVar11 & uVar11;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar9;
      if (iVar6 < iStack_64) {
LAB_14758e9ac:
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
        operator<<<FName,int>
                  (param_1,(TTuple<FName,int> *)
                           (*(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x14));
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
    uVar11 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar11 = uVar11 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar11) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar11) {
        uVar7 = uVar11;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<FName,int> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x14,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar4 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar6 * 0x14);
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar4 * 0x14) = 0xffffffff;
          }
        }
        TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar8 = (TTuple<FName,int> *)0x0;
        if (local_78.Pointer != (TTuple<FName,int> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0xc) = 0xffffffff;
          pTVar8 = local_78.Pointer;
        }
        operator<<<FName,int>(param_1,pTVar8);
        uVar11 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<FName,int> *)(ulonglong)uVar11;
      } while ((int)uVar11 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14758ea20

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x28,(longlong)*(int *)&param_2->field_0xc * 0x28);
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
    iVar7 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar7 != 0) {
      puVar12 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar12 = local_78.Pointer;
      }
      uVar9 = *puVar12;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14758ed3c;
        uVar9 = puVar12[lVar8 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar10 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar7 < iStack_64) {
LAB_14758ed3c:
        iStack_64 = iVar7;
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
    if (iStack_64 < iVar7) {
      do {
        lVar8 = *(longlong *)local_58 + (longlong)local_50.CurrentBitIndex * 0x28;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar8);
        operator<<(param_1,(FCurveMetaData *)(lVar8 + 8));
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
    TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar9,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar6 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar6;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar13 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x28,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar7 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)(*(longlong *)param_2 + 4 + (longlong)iVar7 * 0x28);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(*(longlong *)param_2 + (longlong)iVar3 * 0x28) = 0xffffffff;
          }
        }
        TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar7);
        pvVar5 = local_78.Pointer;
        puVar11 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          FCurveMetaData::FCurveMetaData((FCurveMetaData *)((longlong)local_78.Pointer + 8));
          *(undefined4 *)((longlong)pvVar5 + 0x20) = 0xffffffff;
          puVar11 = pvVar5;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar11);
        operator<<(param_1,(FCurveMetaData *)(puVar11 + 1));
        uVar9 = (int)puVar13 + 1;
        puVar13 = (undefined8 *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14758edc0

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,FGuid>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 5,(longlong)*(int *)&param_2->field_0xc << 5);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
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
      uVar9 = *puVar11;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar9 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14758f0cc;
        uVar9 = puVar11[lVar8 + 1];
      }
      local_78._4_4_ = -uVar9 & uVar9;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_14758f0cc:
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
        lVar8 = (longlong)local_50.CurrentBitIndex * 0x20 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar8);
        operator<<(param_1,(FGuid *)(lVar8 + 8));
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
    uVar9 = local_res8[0];
    if ((int)local_res8[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res8[0]);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != local_res8[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,4,local_res8[0],(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar9 = uVar9 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar9) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar7 = 0x80;
      if (0x80 < (int)uVar9) {
        uVar7 = uVar9;
      }
      *(uint *)&param_2->field_0x2c = uVar7;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    puVar12 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,4,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)((longlong)iVar6 * 0x20 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar4 * 0x20 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar10 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x18) = 0xffffffff;
          puVar10 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar10);
        operator<<(param_1,(FGuid *)(puVar10 + 1));
        uVar9 = (int)puVar12 + 1;
        puVar12 = (undefined8 *)(ulonglong)uVar9;
      } while ((int)uVar9 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14758f150

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  TTuple<FName,FRuntimeSkinWeightProfileData> *pTVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  TTuple<FName,FRuntimeSkinWeightProfileData> *pTVar12;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 * 0x88,(longlong)*(int *)&param_2->field_0xc * 0x88);
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
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar8 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14758f4ac;
        uVar10 = puVar9[lVar8 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar11 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar8 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar8;
      if (iVar6 < iStack_64) {
LAB_14758f4ac:
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
        operator<<<FName,FRuntimeSkinWeightProfileData>
                  (param_1,(TTuple<FName,FRuntimeSkinWeightProfileData> *)
                           ((longlong)local_50.CurrentBitIndex * 0x88 + *(longlong *)local_58));
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
    uVar10 = local_res8[0];
    uVar11 = (ulonglong)local_res8[0];
    TSparseArray<TSparseSetElement<TTuple<FName,FRuntimeSkinWeightProfileData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(param_2,0,*(int *)puVar2);
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar11);
    }
    *(undefined4 *)puVar2 = 0;
    if (*(uint *)&param_2->field_0xc != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x88,8,uVar10,(ForAnyElementType *)param_2,0,(int *)&param_2->field_0xc);
    }
    *(undefined4 *)&param_2->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_2->field_0x34 = 0;
    uVar10 = uVar10 + 0x1f & 0xffffffe0;
    *(undefined4 *)&param_2->field_0x28 = 0;
    if ((*(int *)&param_2->field_0x2c < (int)uVar10) || (0x80 < *(int *)&param_2->field_0x2c)) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar10) {
        uVar5 = uVar10;
      }
      *(uint *)&param_2->field_0x2c = uVar5;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,0);
    }
    pTVar12 = (TTuple<FName,FRuntimeSkinWeightProfileData> *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x88,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          iVar3 = *(int *)((longlong)iVar6 * 0x88 + 4 + *(longlong *)param_2);
          *(int *)&param_2->field_0x30 = iVar3;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar3 * 0x88 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<136,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        pTVar7 = (TTuple<FName,FRuntimeSkinWeightProfileData> *)0x0;
        if (local_78.Pointer != (TTuple<FName,FRuntimeSkinWeightProfileData> *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x28) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x38) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x40) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x48) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x50) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x58) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x60) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x68) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x70) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x78) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x28) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x48) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x50) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x54) = 0x80;
          *(undefined4 *)((longlong)local_78.Pointer + 0x58) = 0xffffffff;
          *(undefined4 *)((longlong)local_78.Pointer + 0x5c) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x68) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x70) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x80) = 0xffffffff;
          pTVar7 = local_78.Pointer;
        }
        operator<<<FName,FRuntimeSkinWeightProfileData>(param_1,pTVar7);
        uVar10 = (int)pTVar12 + 1;
        pTVar12 = (TTuple<FName,FRuntimeSkinWeightProfileData> *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<TSparseSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14758f520

FArchive * __cdecl
operator<<<TSparseSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (FArchive *param_1,
          TSparseArray<TSparseSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint local_res8 [2];
  FSparseArrayAllocationInfo local_78;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<TSparseSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  undefined8 *puVar11;
  
  puVar2 = &param_2->field_0x8;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)puVar2 << 7,(longlong)*(int *)&param_2->field_0xc << 7);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&param_2->field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&param_2->field_0x2c + 0x1fU >> 5) << 2);
  plVar5 = *(longlong **)&param_1->field_0x8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = *(int *)puVar2 - *(int *)&param_2->field_0x34;
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
    iVar6 = *(int *)&param_2->field_0x28;
    local_78.Pointer = &param_2->field_0x10;
    local_78._4_4_ = 1;
    local_78.Index = 0;
    iStack_64 = 0;
    iStack_60 = 0;
    if (iVar6 != 0) {
      puVar9 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar9 = local_78.Pointer;
      }
      uVar10 = *puVar9;
      iStack_60 = 0;
      local_78.Index = 0;
      while (uVar10 == 0) {
        lVar7 = (longlong)local_78.Index;
        iStack_60 = iStack_60 + 0x20;
        local_78.Index = local_78.Index + 1;
        if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78.Index)
        goto LAB_14758f7ec;
        uVar10 = puVar9[lVar7 + 1];
      }
      local_78._4_4_ = -uVar10 & uVar10;
      uVar3 = (ulonglong)(uint)local_78._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_64 = iStack_60 + -1 + (int)lVar7;
      if (iVar6 < iStack_64) {
LAB_14758f7ec:
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
        lVar7 = (longlong)local_50.CurrentBitIndex * 0x80 + *(longlong *)local_58;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar7);
        FSmartNameMapping::Serialize((FSmartNameMapping *)(lVar7 + 8),param_1);
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
    TSparseArray<TSparseSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(param_2,local_res8[0]);
    puVar11 = (undefined8 *)0x0;
    if (0 < (int)local_res8[0]) {
      do {
        if (*(int *)&param_2->field_0x34 == 0) {
          iVar6 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x80,8,1,(ForAnyElementType *)param_2,(int *)puVar2,
                             (int *)&param_2->field_0xc);
          TBitArray<FDefaultBitArrayAllocator>::Add
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10,false);
        }
        else {
          iVar6 = *(int *)&param_2->field_0x30;
          iVar4 = *(int *)((longlong)iVar6 * 0x80 + 4 + *(longlong *)param_2);
          iVar1 = *(int *)&param_2->field_0x34 + -1;
          *(int *)&param_2->field_0x30 = iVar4;
          *(int *)&param_2->field_0x34 = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)((longlong)iVar4 * 0x80 + *(longlong *)param_2) = 0xffffffff;
          }
        }
        TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<128,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_2,&local_78,iVar6);
        puVar8 = (undefined8 *)0x0;
        if (local_78.Pointer != (undefined8 *)0x0) {
          *(undefined8 *)local_78.Pointer = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 8) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x10) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x18) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x20) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x28) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x30) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x48) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x50) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x54) = 0x80;
          *(undefined4 *)((longlong)local_78.Pointer + 0x58) = 0xffffffff;
          *(undefined4 *)((longlong)local_78.Pointer + 0x5c) = 0;
          *(undefined8 *)((longlong)local_78.Pointer + 0x68) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x70) = 0;
          *(undefined4 *)((longlong)local_78.Pointer + 0x78) = 0xffffffff;
          puVar8 = local_78.Pointer;
        }
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,puVar8);
        FSmartNameMapping::Serialize((FSmartNameMapping *)(puVar8 + 1),param_1);
        uVar10 = (int)puVar11 + 1;
        puVar11 = (undefined8 *)(ulonglong)uVar10;
      } while ((int)uVar10 < (int)local_res8[0]);
    }
  }
  return param_1;
}

// operator<<<FName,int> @ 14758f870

FArchive * __cdecl operator<<<FName,int>(FArchive *param_1,TTuple<FName,int> *param_2)

{
  undefined4 *puVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x178))();
  puVar1 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
  if (puVar1 + 1 <= (undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *(undefined4 *)&param_2->field_0x8 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x8,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->field_0x8);
  return param_1;
}

// operator<<<FName,FRuntimeSkinWeightProfileData> @ 14758f900

FArchive * __cdecl
operator<<<FName,FRuntimeSkinWeightProfileData>
          (FArchive *param_1,TTuple<FName,FRuntimeSkinWeightProfileData> *param_2)

{
  undefined1 *puVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x178))();
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_2->field_0x8);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&param_2->field_0x18);
  puVar1 = (undefined1 *)**(undefined8 **)&param_1->field_0x8;
  if ((undefined1 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->field_0x78,1);
  }
  else {
    param_2->field_0x78 = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                      *)&param_2->field_0x28);
  return param_1;
}

// operator<<<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> @ 14758f990

FArchive * __cdecl
operator<<<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<FName> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<FName> FVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
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
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar12 = 0;
          uVar10 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              pcVar4 = *(code **)(*(longlong *)param_1 + 0x178);
              uVar7 = 0;
              if ((int)uVar12 < (int)uVar10) {
                uVar7 = ~uVar12 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<FName>)param_2;
              if (FVar3 != (ForElementType<FName>)0x0) {
                FVar9 = FVar3;
              }
              (*pcVar4)(param_1,(longlong)FVar9 + (longlong)(int)uVar12 * 8);
              uVar10 = param_2->ArrayNum;
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)uVar10);
          }
        }
        else {
          TArray<FName,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              pcVar4 = *(code **)(*(longlong *)param_1 + 0x178);
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                                  (0x408,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<FName>)param_2;
              if (FVar3 != (ForElementType<FName>)0x0) {
                FVar9 = FVar3;
              }
              *(undefined8 *)((longlong)FVar9 + (longlong)iVar6 * 8) = 0;
              (*pcVar4)(param_1);
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

// operator()<`FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes'::__l2::<lambda_1>_&> @ 14758fe80

void __thiscall
`FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes'::__l2::<lambda_1>::
operator()<_FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes_::__l2::<lambda_1>_&>
          (void *this,FElement *param_1,<lambda_1> *param_2)

{
  int *piVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  <lambda_1> *this_00;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  <lambda_1> *local_res18;
  
  local_res18 = param_2;
  if (param_1->Parent != (FElement *)0x0) {
    uVar11 = param_1->Parent->RawIndex;
    lVar13 = *(longlong *)((longlong)this + 8);
    if (((int)uVar11 < 0) || (*(int *)(lVar13 + 0x18) <= (int)uVar11)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(longlong *)(lVar13 + 0x10) != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x10);
    }
    if ((*(uint *)(lVar13 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar11 & 0x1f) & 1) == 0) {
      operator()<_FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes_::__l2::<lambda_1>_&>
                (param_2,param_1->Parent,param_2);
    }
  }
  uVar11 = param_1->RawIndex;
  lVar13 = *(longlong *)((longlong)this + 8);
  if (((int)uVar11 < 0) || (*(int *)(lVar13 + 0x18) <= (int)uVar11)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (*(longlong *)(lVar13 + 0x10) != 0) {
    lVar13 = *(longlong *)(lVar13 + 0x10);
  }
  if ((*(uint *)(lVar13 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
       (uVar11 & 0x1f) & 1) == 0) {
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
    if (((FElement *)pFVar4->Data <= param_1) &&
       (param_1 < (FElement *)
                  (&((FElement *)pFVar4->Data)->RawIndex + *(int *)((longlong)&pFVar4[1].Data + 4)))
       ) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = *(int *)&pFVar4[1].Data;
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,pFVar4,piVar1);
    }
    *(int *)&pFVar4[1].Data = iVar8 + 1;
    *(int *)(pFVar4->Data + (longlong)iVar8 * 4) = param_1->RawIndex;
    iVar8 = param_1->RawIndex;
    lVar13 = *(longlong *)((longlong)this + 8);
    if ((iVar8 < 0) || (*(int *)(lVar13 + 0x18) <= iVar8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(longlong *)(lVar13 + 0x10) != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x10);
    }
    puVar2 = (uint *)(lVar13 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)iVar8 & 0x1f);
  }
  pFVar12 = (param_1->Children).AllocatorInstance.Data;
  iVar8 = (param_1->Children).ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar8 * 8;
  while( true ) {
    if ((param_1->Children).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FReferenceSkeletonLocals::FElement_*_const,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    this_00 = local_res18;
    if (pFVar12 == pFVar3) break;
    pFVar5 = *(FScriptContainerElement **)pFVar12;
    lVar13 = *(longlong *)((longlong)this + 8);
    uVar11 = *(uint *)pFVar5;
    if (((int)uVar11 < 0) || (*(int *)(lVar13 + 0x18) <= (int)uVar11)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(longlong *)(lVar13 + 0x10) != 0) {
      lVar13 = *(longlong *)(lVar13 + 0x10);
    }
    uVar10 = uVar11 & 0x1f;
    if ((int)uVar11 < 0) {
      uVar11 = uVar11 + 0x1f;
    }
    if ((*(uint *)(lVar13 + (longlong)((int)uVar11 >> 5) * 4) >> uVar10 & 1) == 0) {
      pFVar4 = *(ForAnyElementType **)((longlong)this + 0x10);
      if ((pFVar4->Data <= pFVar5) &&
         (pFVar5 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = *(int *)&pFVar4[1].Data;
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar9 + 1;
      *(uint *)(pFVar4->Data + (longlong)iVar9 * 4) = *(uint *)pFVar5;
      uVar11 = *(uint *)pFVar5;
      lVar13 = *(longlong *)((longlong)this + 8);
      if (((int)uVar11 < 0) || (*(int *)(lVar13 + 0x18) <= (int)uVar11)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (*(longlong *)(lVar13 + 0x10) != 0) {
        lVar13 = *(longlong *)(lVar13 + 0x10);
      }
      uVar10 = uVar11;
      if ((int)uVar11 < 0) {
        uVar10 = uVar11 + 0x1f;
      }
      puVar2 = (uint *)(lVar13 + (longlong)((int)uVar10 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)uVar11 & 0x1f);
    }
    pFVar12 = pFVar12 + 8;
  }
  pFVar12 = (param_1->Children).AllocatorInstance.Data;
  iVar8 = (param_1->Children).ArrayNum;
  pFVar3 = pFVar12 + (longlong)iVar8 * 8;
  while( true ) {
    if ((param_1->Children).ArrayNum != iVar8) {
      `TCheckedPointerIterator<FReferenceSkeletonLocals::FElement_*_const,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res10);
    }
    if (pFVar12 == pFVar3) break;
    operator()<_FReferenceSkeletonLocals::FHierarchy::GetNewToOldIndexes_::__l2::<lambda_1>_&>
              (this_00,*(FElement **)pFVar12,this_00);
    pFVar12 = pFVar12 + 8;
  }
  return;
}

// operator()<`FReferenceSkeletonLocals::FHierarchy::FHierarchy'::__l5::<lambda_1>_&> @ 147590250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
`FReferenceSkeletonLocals::FHierarchy::FHierarchy'::__l5::<lambda_1>::
operator()<_FReferenceSkeletonLocals::FHierarchy::FHierarchy_::__l5::<lambda_1>_&>
          (void *this,TTransform<double> *__return_storage_ptr__,FElement *param_1,
          <lambda_1> *param_2)

{
  uint *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  TTransform<double> *pTVar17;
  uint uVar18;
  TTransform<double> *pTVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 in_XMM2 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar22 = param_1->RawIndex;
  lVar5 = *(longlong *)((longlong)this + 8);
  if (((int)uVar22 < 0) || (*(int *)(lVar5 + 0x18) <= (int)uVar22)) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Index>=0 && Index<NumBits",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x5be,L"");
    if (bVar16) {
      pcVar6 = (code *)swi(3);
      pTVar17 = (TTransform<double> *)(*pcVar6)();
      return pTVar17;
    }
  }
  lVar20 = *(longlong *)(lVar5 + 0x10);
  if (*(longlong *)(lVar5 + 0x10) == 0) {
    lVar20 = lVar5;
  }
  if ((*(uint *)(lVar20 + (longlong)((int)(uVar22 + ((int)uVar22 >> 0x1f & 0x1fU)) >> 5) * 4) >>
       (uVar22 & 0x1f) & 1) == 0) {
    uVar22 = 0;
    if (param_1->Parent != (FElement *)0x0) {
      pTVar17 = operator()<_FReferenceSkeletonLocals::FHierarchy::FHierarchy_::__l5::<lambda_1>_&>
                          (param_2,&local_b8,param_1->Parent,param_2);
      uVar21 = param_1->RawIndex;
      lVar5 = *(longlong *)this;
      iVar4 = *(int *)(lVar5 + 0x18);
      uVar18 = uVar22;
      if ((int)uVar21 < iVar4) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      if (uVar18 == 0) {
        local_c8 = (longlong)(int)uVar21;
        local_c0 = (longlong)iVar4;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TTransform<double> *)(*pcVar6)();
          return pTVar17;
        }
      }
      pTVar19 = (TTransform<double> *)((longlong)(int)uVar21 * 0x60 + *(longlong *)(lVar5 + 0x10));
      UE::Math::TTransform<double>::Multiply(pTVar19,pTVar19,pTVar17);
      uVar21 = param_1->RawIndex;
      lVar5 = *(longlong *)this;
      iVar4 = *(int *)(lVar5 + 0x18);
      uVar18 = uVar22;
      if ((int)uVar21 < iVar4) {
        uVar18 = ~uVar21 >> 0x1f;
      }
      if (uVar18 == 0) {
        local_c8 = (longlong)(int)uVar21;
        local_c0 = (longlong)iVar4;
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar16) {
          pcVar6 = (code *)swi(3);
          pTVar17 = (TTransform<double> *)(*pcVar6)();
          return pTVar17;
        }
      }
      lVar5 = *(longlong *)(lVar5 + 0x10);
      lVar20 = (longlong)(int)uVar21 * 0x60;
      dVar12 = *(double *)(lVar20 + lVar5);
      dVar13 = ((double *)(lVar20 + lVar5))[1];
      pdVar2 = (double *)(lVar20 + 0x10 + lVar5);
      dVar14 = *pdVar2;
      dVar15 = pdVar2[1];
      dVar9 = dVar14 * dVar14 + dVar12 * dVar12;
      dVar10 = dVar15 * dVar15 + dVar13 * dVar13;
      auVar27._8_4_ = SUB84(dVar10,0);
      auVar27._0_8_ = dVar9;
      auVar27._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      auVar28._0_8_ = auVar27._8_8_ + dVar9;
      auVar28._8_8_ = dVar9 + dVar10;
      auVar35 = sqrtpd(in_XMM2,auVar28);
      uVar23 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar28._0_8_)
      ;
      uVar25 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar28._8_8_)
      ;
      uVar24 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar28._0_8_)
      ;
      uVar26 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar28._8_8_)
      ;
      auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar35);
      auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar35);
      auVar30._0_8_ = uVar24 & (ulonglong)(auVar29._0_8_ * dVar12);
      uVar11 = uVar26 & (ulonglong)(auVar29._8_8_ * dVar13);
      auVar30._8_4_ = (undefined4)uVar11;
      auVar30._12_4_ = (undefined4)(uVar11 >> 0x20);
      auVar36._0_8_ = uVar23 & (ulonglong)(auVar35._0_8_ * dVar14);
      uVar11 = uVar25 & (ulonglong)(auVar35._8_8_ * dVar15);
      auVar36._8_4_ = (undefined4)uVar11;
      auVar36._12_4_ = (undefined4)(uVar11 >> 0x20);
      auVar35._4_4_ =
           ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar35._0_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar35._8_4_ = ~(uint)uVar26 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar35._12_4_ =
           ~(uint)(uVar26 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      uVar21 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      uVar18 = GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      uVar7 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      uVar8 = GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(lVar20 + lVar5) = auVar30 | auVar35;
      auVar29._4_4_ = ~(uint)(uVar23 >> 0x20) & uVar18;
      auVar29._0_4_ = ~(uint)uVar23 & uVar21;
      auVar29._8_4_ = ~(uint)uVar25 & uVar7;
      auVar29._12_4_ = ~(uint)(uVar25 >> 0x20) & uVar8;
      *(undefined1 (*) [16])(lVar20 + 0x10 + lVar5) = auVar36 | auVar29;
    }
    iVar4 = param_1->RawIndex;
    lVar5 = *(longlong *)((longlong)this + 8);
    if ((iVar4 < 0) || (*(int *)(lVar5 + 0x18) <= iVar4)) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L"");
      if (bVar16) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TTransform<double> *)(*pcVar6)();
        return pTVar17;
      }
    }
    lVar20 = *(longlong *)(lVar5 + 0x10);
    if (*(longlong *)(lVar5 + 0x10) == 0) {
      lVar20 = lVar5;
    }
    puVar1 = (uint *)(lVar20 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
    uVar21 = param_1->RawIndex;
    lVar5 = *(longlong *)this;
    iVar4 = *(int *)(lVar5 + 0x18);
    local_c0 = (longlong)iVar4;
    if ((int)uVar21 < iVar4) {
      uVar22 = ~uVar21 >> 0x1f;
    }
    if (uVar22 == 0) {
      local_c8 = (longlong)(int)uVar21;
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TTransform<double> *)(*pcVar6)();
        return pTVar17;
      }
    }
    lVar5 = *(longlong *)(lVar5 + 0x10);
    lVar20 = (longlong)(int)uVar21 * 0x60;
    dVar9 = ((double *)(lVar20 + lVar5))[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar20 + lVar5);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
    pdVar2 = (double *)(lVar20 + 0x10 + lVar5);
    dVar9 = pdVar2[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *pdVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
    pdVar2 = (double *)(lVar20 + 0x20 + lVar5);
    dVar9 = pdVar2[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *pdVar2;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
    pdVar2 = (double *)(lVar20 + 0x30 + lVar5);
    dVar9 = pdVar2[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *pdVar2;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar9;
    pdVar2 = (double *)(lVar20 + 0x40 + lVar5);
    dVar9 = pdVar2[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *pdVar2;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
    puVar3 = (undefined4 *)(lVar20 + 0x50 + lVar5);
    uVar31 = *puVar3;
    uVar32 = puVar3[1];
    uVar33 = puVar3[2];
    uVar34 = puVar3[3];
  }
  else {
    uVar22 = param_1->RawIndex;
    lVar5 = *(longlong *)this;
    iVar4 = *(int *)(lVar5 + 0x18);
    local_c0 = (longlong)iVar4;
    uVar21 = 0;
    if ((int)uVar22 < iVar4) {
      uVar21 = ~uVar22 >> 0x1f;
    }
    if (uVar21 == 0) {
      local_c8 = (longlong)(int)uVar22;
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar6 = (code *)swi(3);
        pTVar17 = (TTransform<double> *)(*pcVar6)();
        return pTVar17;
      }
    }
    lVar5 = *(longlong *)(lVar5 + 0x10);
    lVar20 = (longlong)(int)uVar22 * 0x60;
    dVar9 = ((double *)(lVar20 + lVar5))[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar20 + lVar5);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar9;
    pdVar2 = (double *)(lVar20 + 0x10 + lVar5);
    dVar9 = pdVar2[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *pdVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar9;
    pdVar2 = (double *)(lVar20 + 0x20 + lVar5);
    dVar9 = pdVar2[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *pdVar2;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar9;
    pdVar2 = (double *)(lVar20 + 0x30 + lVar5);
    dVar9 = pdVar2[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *pdVar2;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar9;
    pdVar2 = (double *)(lVar20 + 0x40 + lVar5);
    dVar9 = pdVar2[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *pdVar2;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar9;
    puVar3 = (undefined4 *)(lVar20 + 0x50 + lVar5);
    uVar31 = *puVar3;
    uVar32 = puVar3[1];
    uVar33 = puVar3[2];
    uVar34 = puVar3[3];
  }
  *(undefined4 *)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = uVar31;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 4) = uVar32;
  *(undefined4 *)((__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 1) = uVar33;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Scale3D).ZW.m128d_f64 + 0xc) = uVar34;
  return __return_storage_ptr__;
}

// AddLambda<`<lambda_25>::operator()'::__l2::<lambda_1>_> @ 147590610

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_<lambda_25>::operator()_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  uVar5 = 0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`<lambda_25>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(undefined8 *)param_1 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      uVar5 = *puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    *(undefined8 *)param_1 = uVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// ApplyAfter<`UAssetManager::PostInitProperties'::__l16::<lambda_1>_&,FString_const_&> @ 147591640

int __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int>_>::
ApplyAfter<_UAssetManager::PostInitProperties_::__l16::<lambda_1>_&,FString_const_&>
          (TTupleBase<TIntegerSequence<unsigned_int>_> *this,<lambda_1> *param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  wchar_t *pwVar5;
  
  iVar1 = (param_2->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar5 = L"";
    iVar3 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar3 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                      *)param_1,uVar2,param_2);
  if (iVar3 == -1) {
    return -1;
  }
  piVar4 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::
           FindChecked((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                        *)param_1,param_2);
  return *piVar4;
}

// BuildLinearUnfiltered<`FPoseDataContainer::GetPoseCurve'::__l5::<lambda_1>,`FPoseDataContainer::GetPoseCurve'::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1475916c0

void __cdecl
UE::Anim::FCurveUtils::
BuildLinearUnfiltered<_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_1>,_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,int param_2,
          <lambda_1> param_3,<lambda_2> *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  FPoseDataContainer *pFVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong local_58;
  
  iVar11 = *(int *)((longlong)&param_1->_padding_ + 4);
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (iVar11 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar1);
  }
  *(undefined1 *)&param_1->_padding_ = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar1 < param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int)param_1->_padding_,piVar1);
  }
  uVar13 = 0;
  if (0 < param_2) {
    local_58 = 0;
    do {
      pFVar3 = param_4->__this;
      pTVar4 = param_4->CurveValues;
      uVar9 = 0;
      if ((int)uVar13 < (pFVar3->SortedCurveIndices).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = *(uint *)((pFVar3->SortedCurveIndices).AllocatorInstance.Data + local_58);
      uVar10 = 0;
      if ((int)uVar9 < pTVar4->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar2 = *(undefined4 *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar9 * 4);
      uVar9 = 0;
      if ((int)uVar13 < ((param_3.__this)->SortedCurveIndices).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = *(uint *)(((param_3.__this)->SortedCurveIndices).AllocatorInstance.Data + local_58);
      uVar10 = 0;
      if ((int)uVar9 < ((param_3.__this)->Curves).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (int)param_1->_padding_;
      uVar5 = *(undefined8 *)
               (((param_3.__this)->Curves).AllocatorInstance.Data + (longlong)(int)uVar9 * 0xc);
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                           (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar1);
      }
      *(int *)&param_1->_padding_ = iVar11 + 1;
      lVar12 = (longlong)iVar11;
      local_58 = local_58 + 4;
      lVar6 = param_1->_padding_;
      uVar13 = uVar13 + 1;
      *(undefined8 *)(lVar6 + lVar12 * 0x10) = uVar5;
      *(undefined4 *)(lVar6 + 8 + lVar12 * 0x10) = uVar2;
      *(undefined1 *)(lVar6 + 0xc + lVar12 * 0x10) = 0;
    } while ((int)uVar13 < param_2);
  }
  return;
}

// BuildSortedFiltered<`FPoseDataContainer::GetPoseCurve'::__l5::<lambda_1>,`FPoseDataContainer::GetPoseCurve'::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 147591970

void __cdecl
UE::Anim::FCurveUtils::
BuildSortedFiltered<_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_1>,_FPoseDataContainer::GetPoseCurve_::__l5::<lambda_2>,TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,int param_2,
          <lambda_1> param_3,<lambda_2> *param_4,FCurveFilter *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  ECurveFilterMode EVar3;
  longlong lVar4;
  longlong lVar5;
  FPoseDataContainer *pFVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined8 uVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FName FVar14;
  byte bVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  int *piVar23;
  float fVar24;
  FPoseDataContainer *local_res18;
  <lambda_2> *local_res20;
  longlong local_70;
  undefined1 local_50 [24];
  
  lVar18 = (longlong)param_2;
  local_res18 = param_3.__this;
  local_res20 = param_4;
  if (param_5->FilterMode == DisallowAll) {
    iVar13 = *(int *)((longlong)&param_1->_padding_ + 4);
    *(undefined4 *)&param_1->_padding_ = 0;
    if (iVar13 < 0) {
      Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,
                 (int *)((longlong)&param_1->_padding_ + 4));
    }
    *(undefined1 *)&param_1->_padding_ = 0;
    return;
  }
  plVar1 = &param_5->_padding_;
  if ((char)param_5->_padding_ == '\0') {
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveFilterElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveFilterElement>::FElementSortPredicate>
              ((FCurveFilterElement *)param_5->_padding_,(int)*plVar1,param_5._0_1_,
               (FElementSortPredicate)param_5._0_1_);
    *(undefined1 *)&param_5->_padding_ = 1;
  }
  iVar13 = *(int *)((longlong)&param_1->_padding_ + 4);
  piVar23 = (int *)((longlong)&param_1->_padding_ + 4);
  *(undefined4 *)&param_1->_padding_ = 0;
  if (iVar13 < 0) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)param_1,0,piVar23);
  }
  *(undefined1 *)&param_1->_padding_ = 0;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (*piVar23 < param_2) {
    Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,param_2,(ForElementType<UE::Anim::FCurveElement> *)param_1,
               (int)param_1->_padding_,piVar23);
  }
  lVar16 = (longlong)(int)*plVar1;
  uVar19 = 0;
  uVar20 = 0;
  lVar22 = 0;
  lVar21 = 0;
  local_70 = 0;
  do {
    piVar23 = (int *)((longlong)&param_1->_padding_ + 4);
    while( true ) {
      pFVar6 = local_res18;
      if (lVar18 <= lVar22) {
        if (lVar16 <= lVar21) {
          return;
        }
        if ((lVar22 == lVar18) && (lVar21 < lVar16)) {
          return;
        }
      }
      if ((lVar21 == lVar16) && (lVar22 < lVar18)) {
        iVar13 = (int)param_1->_padding_;
        uVar20 = (iVar13 - uVar19) + param_2;
        if (-1 < (int)uVar20) {
          if (*(int *)((longlong)&param_1->_padding_ + 4) < (int)uVar20) {
            Core::Private::
            ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                      (0x10,4,uVar20,(ForElementType<UE::Anim::FCurveElement> *)param_1,iVar13,
                       piVar23);
          }
          for (; (int)uVar19 < param_2; uVar19 = uVar19 + 1) {
            EVar3 = param_5->FilterMode;
            if ((EVar3 == None) ||
               (((EVar3 != DisallowAll && (EVar3 != AllowOnlyFiltered)) &&
                (EVar3 == DisallowFiltered)))) {
              fVar24 = `FPoseDataContainer::GetPoseCurve'::__l5::<lambda_2>::operator()
                                 (local_res20,uVar19);
              FVar14 = `FPoseDataContainer::GetPoseCurve'::__l5::<lambda_1>::operator()
                                 (&local_res18,(int)local_50);
              iVar13 = (int)param_1->_padding_;
              if (iVar13 == *(int *)((longlong)&param_1->_padding_ + 4)) {
                iVar13 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                                   (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar23
                                   );
              }
              lVar16 = (longlong)iVar13;
              *(int *)&param_1->_padding_ = iVar13 + 1;
              lVar18 = param_1->_padding_;
              uVar8 = *(undefined8 *)FVar14;
              *(float *)(lVar18 + 8 + lVar16 * 0x10) = fVar24;
              *(undefined8 *)(lVar18 + lVar16 * 0x10) = uVar8;
              *(undefined1 *)(lVar18 + 0xc + lVar16 * 0x10) = 0;
            }
          }
          return;
        }
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
      }
      uVar11 = 0;
      if ((int)uVar19 < (local_res18->SortedCurveIndices).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar11 = *(uint *)((pFVar6->SortedCurveIndices).AllocatorInstance.Data + lVar22 * 4);
      uVar12 = 0;
      if ((int)uVar11 < (pFVar6->Curves).ArrayNum) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar4 = *(longlong *)((pFVar6->Curves).AllocatorInstance.Data + (longlong)(int)uVar11 * 0xc);
      uVar11 = 0;
      if ((int)uVar20 < (int)*plVar1) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar5 = *(longlong *)(local_70 + param_5->_padding_);
      if (lVar4 == lVar5) break;
      iVar13 = (int)lVar4 - (int)lVar5;
      if (iVar13 == 0) {
        iVar13 = (int)((ulonglong)lVar4 >> 0x20) - (int)((ulonglong)lVar5 >> 0x20);
      }
      if (-1 < iVar13) goto LAB_147591d68;
      EVar3 = param_5->FilterMode;
      if ((EVar3 == None) ||
         (((EVar3 != DisallowAll && (EVar3 != AllowOnlyFiltered)) && (EVar3 == DisallowFiltered))))
      {
        fVar24 = `FPoseDataContainer::GetPoseCurve'::__l5::<lambda_2>::operator()
                           (local_res20,uVar19);
        iVar13 = (int)param_1->_padding_;
        if (iVar13 == *piVar23) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar23);
        }
        *(int *)&param_1->_padding_ = iVar13 + 1;
        lVar17 = (longlong)iVar13;
        lVar5 = param_1->_padding_;
        *(float *)(lVar5 + 8 + lVar17 * 0x10) = fVar24;
        *(longlong *)(lVar5 + lVar17 * 0x10) = lVar4;
        *(undefined1 *)(lVar5 + 0xc + lVar17 * 0x10) = 0;
      }
      uVar19 = uVar19 + 1;
      lVar22 = lVar22 + 1;
    }
    bVar15 = *(byte *)(local_70 + 8 + param_5->_padding_);
    if ((bVar15 & 1) == 0) {
      EVar3 = param_5->FilterMode;
      if (EVar3 == None) {
LAB_147591c74:
        pFVar6 = local_res20->__this;
        pTVar7 = local_res20->CurveValues;
        uVar11 = 0;
        if ((int)uVar19 < (pFVar6->SortedCurveIndices).ArrayNum) {
          uVar11 = ~uVar19 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar11 = *(uint *)((pFVar6->SortedCurveIndices).AllocatorInstance.Data + lVar22 * 4);
        uVar12 = 0;
        if ((int)uVar11 < pTVar7->ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        piVar23 = (int *)((longlong)&param_1->_padding_ + 4);
        uVar2 = *(undefined4 *)((pTVar7->AllocatorInstance).Data + (longlong)(int)uVar11 * 4);
        iVar13 = (int)param_1->_padding_;
        if (iVar13 == *piVar23) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                             (0x410,(ForElementType<UE::Anim::FCurveElement> *)param_1,piVar23);
        }
        *(int *)&param_1->_padding_ = iVar13 + 1;
        lVar17 = (longlong)iVar13;
        lVar5 = param_1->_padding_;
        *(undefined4 *)(lVar5 + 8 + lVar17 * 0x10) = uVar2;
        *(longlong *)(lVar5 + lVar17 * 0x10) = lVar4;
        *(undefined1 *)(lVar5 + 0xc + lVar17 * 0x10) = 0;
      }
      else if (EVar3 != DisallowAll) {
        if (EVar3 == AllowOnlyFiltered) {
          bVar15 = bVar15 >> 1;
        }
        else {
          if (EVar3 != DisallowFiltered) goto LAB_147591d63;
          bVar15 = ~(bVar15 >> 1);
        }
        if ((bVar15 & 1) != 0) goto LAB_147591c74;
      }
    }
LAB_147591d63:
    uVar19 = uVar19 + 1;
    lVar22 = lVar22 + 1;
LAB_147591d68:
    uVar20 = uVar20 + 1;
    lVar21 = lVar21 + 1;
    local_70 = local_70 + 0xc;
  } while( true );
}

// ConstructItems<FCurveMetaData,FCurveMetaData,int> @ 147591f30

void __cdecl
ConstructItems<FCurveMetaData,FCurveMetaData,int>(void *param_1,FCurveMetaData *param_2,int param_3)

{
  FAnimCurveType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  uchar *puVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    puVar4 = &param_2->MaxLOD;
    lVar5 = (longlong)param_1 + (-0x10 - (longlong)param_2);
    do {
      *(undefined8 *)(puVar4 + lVar5) = 0;
      iVar2 = *(int *)(puVar4 + -8);
      _Src = (((FCurveMetaData *)(puVar4 + -0x10))->LinkedBones).AllocatorInstance.Data;
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,iVar2,0,(ForAnyElementType *)(puVar4 + lVar5),iVar2,piVar3);
        memcpy(*(FScriptContainerElement **)(puVar4 + lVar5),_Src,(longlong)iVar2 << 4);
      }
      *(uchar *)(piVar3 + 1) = *puVar4;
      pFVar1 = (FAnimCurveType *)(puVar4 + 1);
      puVar4 = puVar4 + 0x18;
      *(FAnimCurveType *)((longlong)piVar3 + 5) = *pFVar1;
      piVar3 = piVar3 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FDirectoryPath,FDirectoryPath,int> @ 147592020

void __cdecl
ConstructItems<FDirectoryPath,FDirectoryPath,int>(void *param_1,FDirectoryPath *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_1 - (longlong)param_2;
    do {
      FString::FString((FString *)(lVar1 + (longlong)param_2),&param_2->Path);
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPoseAssetInfluences,FPoseAssetInfluences,int> @ 147592070

void __cdecl
ConstructItems<FPoseAssetInfluences,FPoseAssetInfluences,int>
          (void *param_1,FPoseAssetInfluences *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      ((ForAnyElementType *)param_1)->Data = (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&((ForAnyElementType *)((longlong)param_1 + 8))->Data + 4);
      iVar2 = *(int *)(lVar3 + 8 + (longlong)param_1);
      _Src = *(void **)(lVar3 + (longlong)param_1);
      *(int *)&((ForAnyElementType *)((longlong)param_1 + 8))->Data = iVar2;
      if (iVar2 == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar2,0,param_1,iVar2,piVar1);
        memcpy(((ForAnyElementType *)param_1)->Data,_Src,(longlong)iVar2 << 3);
      }
      param_1 = (void *)((longlong)param_1 + 0x10);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPoseData,FPoseData,int> @ 147592120

void __cdecl ConstructItems<FPoseData,FPoseData,int>(void *param_1,FPoseData *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  void *_Src_00;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    piVar3 = (int *)((longlong)param_1 + 0xc);
    piVar4 = &(param_2->LocalSpacePose).ArrayNum;
    lVar5 = (longlong)param_1 + (-8 - (longlong)param_2);
    do {
      *(undefined8 *)((longlong)piVar4 + lVar5) = 0;
      pFVar1 = (ForAnyElementType *)((longlong)piVar4 + lVar5);
      iVar2 = *piVar4;
      _Src = (((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(piVar4 + -2))->
             AllocatorInstance).Data;
      piVar3[-1] = iVar2;
      if (iVar2 == 0) {
        *piVar3 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar2,0,pFVar1,iVar2,piVar3);
        memcpy(pFVar1->Data,_Src,(longlong)iVar2 * 0x60);
      }
      piVar3[1] = 0;
      piVar3[2] = 0;
      iVar2 = piVar4[4];
      _Src_00 = *(void **)(piVar4 + 2);
      piVar3[3] = iVar2;
      if (iVar2 == 0) {
        piVar3[4] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,0,(ForAnyElementType *)(piVar3 + 1),iVar2,piVar3 + 4);
        memcpy(((ForAnyElementType *)(piVar3 + 1))->Data,_Src_00,(longlong)iVar2 << 2);
      }
      piVar3 = piVar3 + 8;
      piVar4 = piVar4 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<FPreviewAttachedObjectPair,FPreviewAttachedObjectPair,int> @ 147592260

void __cdecl
ConstructItems<FPreviewAttachedObjectPair,FPreviewAttachedObjectPair,int>
          (void *param_1,FPreviewAttachedObjectPair *param_2,int param_3)

{
  FName FVar1;
  FName *pFVar2;
  FName *pFVar3;
  
  if (param_3 != 0) {
    pFVar2 = (FName *)((longlong)param_1 + 0x28);
    pFVar3 = &param_2->AttachedTo;
    do {
      pFVar2[-5] = *(FName *)((longlong)pFVar2 + (longlong)param_2 + (-0x28 - (longlong)param_1));
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(pFVar2 + -4),(FSoftObjectPath *)(pFVar3 + -4));
      FVar1 = *pFVar3;
      pFVar3 = pFVar3 + 6;
      *pFVar2 = FVar1;
      pFVar2 = pFVar2 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// ConstructItems<TSubclassOf<UObject>,TSubclassOf<UObject>,int> @ 1475922e0

void __cdecl
ConstructItems<TSubclassOf<UObject>,TSubclassOf<UObject>,int>
          (void *param_1,TSubclassOf<UObject> *param_2,int param_3)

{
  UClass *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = (param_2->Class).field0_0x0.DebugPtr;
      *(UClass **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// CubicCRSplineInterpSafe<UE::Math::TVector<double>_> @ 147592500

TVector<double> * __cdecl
`anonymous_namespace'::CubicCRSplineInterpSafe<UE::Math::TVector<double>_>
          (TVector<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2
          ,TVector<double> *param_3,TVector<double> *param_4,float param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 extraout_var [12];
  
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  dVar10 = dVar1 - (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar14 = dVar2 - (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  auVar11._0_8_ = dVar10 * dVar10;
  auVar11._8_8_ = 0;
  dVar6 = dVar3 - (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = dVar2 - dVar10;
  dVar5 = (param_3->field0_0x0)._s_0.Z;
  dVar3 = dVar3 - dVar4;
  dVar10 = dVar10 - (param_4->field0_0x0)._s_0.X;
  dVar4 = dVar4 - (param_4->field0_0x0)._s_0.Y;
  dVar1 = dVar1 - dVar5;
  dVar5 = dVar5 - (param_4->field0_0x0)._s_0.Z;
  auVar15 = ZEXT416((uint)param_6);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar6 * dVar6 + dVar14 * dVar14 + auVar11._0_8_;
  auVar12 = sqrtpd(auVar11,auVar12);
  fVar8 = powf((float)auVar12._0_8_,param_6);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
  auVar12 = sqrtpd(auVar15,auVar7);
  auVar13._0_4_ = powf((float)auVar12._0_8_,param_6);
  auVar13._4_12_ = extraout_var;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar4 * dVar4 + dVar10 * dVar10 + dVar5 * dVar5;
  auVar12 = sqrtpd(auVar13,auVar15);
  fVar9 = powf((float)auVar12._0_8_,param_6);
  FMath::CubicCRSplineInterpSafe<UE::Math::TVector<double>_>
            (__return_storage_ptr__,param_1,param_2,param_3,param_4,0.0,fVar8,auVar13._0_4_ + fVar8,
             fVar9 + auVar13._0_4_ + fVar8,auVar13._0_4_ * param_5 + fVar8);
  return __return_storage_ptr__;
}

// DefaultConstructItems<FBoneNode,int> @ 147592ac0

void __cdecl DefaultConstructItems<FBoneNode,int>(void *param_1,int param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)(uint)param_2);
    return;
  }
  return;
}

// DefaultConstructItems<FCurveMetaData,int> @ 147592ae0

void __cdecl DefaultConstructItems<FCurveMetaData,int>(void *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FCurveMetaData::FCurveMetaData(param_1);
    param_1 = (void *)((longlong)param_1 + 0x18);
  }
  return;
}

// DefaultConstructItems<FMeshBoneInfo,int> @ 147592b20

void __cdecl DefaultConstructItems<FMeshBoneInfo,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DefaultConstructItems<FTransformTrajectorySample,int> @ 147592b50

void __cdecl DefaultConstructItems<FTransformTrajectorySample,int>(void *param_1,int param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined4 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined4 *)((longlong)param_1 + 0x38);
    do {
      dVar2 = UE::Math::TQuat<double>::Identity.Y;
      *(double *)(puVar3 + -0xe) = UE::Math::TQuat<double>::Identity.X;
      *(double *)(puVar3 + -0xc) = dVar2;
      dVar2 = UE::Math::TQuat<double>::Identity.W;
      *(double *)(puVar3 + -10) = UE::Math::TQuat<double>::Identity.Z;
      *(double *)(puVar3 + -8) = dVar2;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      *(double *)(puVar3 + -6) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(puVar3 + -4) = uVar1;
      *(double *)(puVar3 + -2) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      *puVar3 = 0;
      param_2 = param_2 + -1;
      puVar3 = puVar3 + 0x10;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<UMeshDeformer>,int> @ 147592c60

void __cdecl
DestructItems<TSoftObjectPtr<UMeshDeformer>,int>(TSoftObjectPtr<UMeshDeformer> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSoftObjectPtr<USkeleton>,int> @ 147592ca0

void __cdecl
DestructItems<TSoftObjectPtr<USkeleton>,int>(TSoftObjectPtr<USkeleton> *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SoftObjectPtr).field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FAnimSlotGroup,int> @ 147592ce0

void __cdecl DestructItems<FAnimSlotGroup,int>(FAnimSlotGroup *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->SlotNames).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = (FAnimSlotGroup *)(&param_1->SlotNames + 1);
  }
  return;
}

// DestructItems<FCurveMetaData,int> @ 147592d20

void __cdecl DestructItems<FCurveMetaData,int>(FCurveMetaData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->LinkedBones).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FReferenceSkeletonLocals::FElement,int> @ 147592d60

void __cdecl DestructItems<FReferenceSkeletonLocals::FElement,int>(FElement *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FReferenceSkeletonLocals::FElement_*,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->Children;
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

// DestructItems<`UAssetManager::DumpLoadedAssetState'::__l31::FLoadedInfo,int> @ 147592da0

void __cdecl
DestructItems<_UAssetManager::DumpLoadedAssetState_::__l31::FLoadedInfo,int>
          (FLoadedInfo *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  
  if (param_2 != 0) {
    pFVar2 = &param_1->BundleState;
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

// DestructItems<UAssetManager::FPendingChunkInstall,int> @ 147592de0

void __cdecl
DestructItems<UAssetManager::FPendingChunkInstall,int>(FPendingChunkInstall *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->StalledStreamableHandle).SharedReferenceCount;
    do {
      TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar1 + 1));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      if (pFVar1[-3].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[-3].ReferenceController);
      }
      if (pFVar1[-5].ReferenceController != (void *)0x0) {
        FMemory::Free(pFVar1[-5].ReferenceController);
      }
      pFVar1 = pFVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPoseAssetInfluences,int> @ 147592e40

void __cdecl DestructItems<FPoseAssetInfluences,int>(FPoseAssetInfluences *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->Influences).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPoseData,int> @ 147592e80

void __cdecl DestructItems<FPoseData,int>(FPoseData *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->CurveData).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->LocalSpacePose).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<FPreviewAttachedObjectPair,int> @ 147592ed0

void __cdecl
DestructItems<FPreviewAttachedObjectPair,int>(FPreviewAttachedObjectPair *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->AttachedObject).SoftObjectPtr.field_0x18;
    do {
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPreviewMeshCollectionEntry,int> @ 147592f10

void __cdecl
DestructItems<FPreviewMeshCollectionEntry,int>(FPreviewMeshCollectionEntry *param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)&(param_1->SkeletalMesh).SoftObjectPtr.field_0x18;
    do {
      if ((void *)puVar1[5] != (void *)0x0) {
        FMemory::Free((void *)puVar1[5]);
      }
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
      puVar1 = puVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FSetProfileRequest,int> @ 147592f60

void __cdecl DestructItems<FSetProfileRequest,int>(FSetProfileRequest *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)&(param_1->Callback).field_0x28;
    do {
      if (plVar2[-5] != 0) {
        plVar1 = plVar2 + -3;
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          plVar1 = (longlong *)*plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      if ((void *)plVar2[-7] != (void *)0x0) {
        FMemory::Free((void *)plVar2[-7]);
      }
      plVar2 = plVar2 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FSkeletonRemapping,1>,int> @ 147592fc0

void __cdecl
DestructItems<TSharedPtr<FSkeletonRemapping,1>,int>
          (TSharedPtr<FSkeletonRemapping,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FStreamableHandle,1>,int> @ 147593000

void __cdecl
DestructItems<TSharedPtr<FStreamableHandle,1>,int>
          (TSharedPtr<FStreamableHandle,1> *param_1,int param_2)

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

// Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::EnqueueDataReadback'::__l5::TSTR_FSkinWeightProfilesData_EnqueueDataReadback687>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147596da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::EnqueueDataReadback_::__l5::TSTR_FSkinWeightProfilesData_EnqueueDataReadback687>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkinWeightProfilesData::EnqueueDataReadback'::__l5::TSTR_FSkinWeightProfilesData_EnqueueDataReadback687>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147596ef1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1475970e5;
  }
LAB_147596ef1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_147596fcf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147596fcf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1475970e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l8::TSTR_FSkinWeightProfilesData_EnqueueGPUReadback635>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 147597120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::EnqueueGPUReadback_::__l8::TSTR_FSkinWeightProfilesData_EnqueueGPUReadback635>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l8::TSTR_FSkinWeightProfilesData_EnqueueGPUReadback635>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_147597271;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_147597465;
  }
LAB_147597271:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_14759734f:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14759734f;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_147597465:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l13::TSTR_FSkinWeightProfilesData_EnqueueGPUReadback655>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_> @ 1475974a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::EnqueueGPUReadback_::__l13::TSTR_FSkinWeightProfilesData_EnqueueGPUReadback655>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
          (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *param_1)

{
  int *piVar1;
  int iVar2;
  TStatIdData *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FRenderCommandTag *pFVar10;
  FRHICommandListImmediate *pFVar11;
  undefined8 uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  longlong *plVar13;
  FName FVar14;
  FColor_u_0 FVar15;
  FNameEntryId FVar16;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FConstructor local_res20;
  undefined8 *local_68;
  LARGE_INTEGER local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar10 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l13::TSTR_FSkinWeightProfilesData_EnqueueGPUReadback655>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar10->SpecId,pFVar10->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar10->SpecId);
  }
  bVar8 = IsInRenderingThread();
  if (!bVar8) {
    if (GIsThreadedRendering == false) {
      bVar8 = IsInGameThread();
      if (bVar8) goto LAB_1475975f1;
    }
    if (GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) {
      bVar8 = IsInGameThread();
      if (bVar8) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2708370973442179152>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                           ,0x50,
                           "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                          );
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (GRenderCommandPipeMode == None) {
      local_res20.Prerequisites =
           (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            *)0x0;
      TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>_>
      ::FConstructor::
      ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>,FRenderCommandTag_const_&>
                (&local_res20,(TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)&local_68
                 ,(FRenderCommandTag *)param_1);
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
    }
    else {
      EnqueueAndLaunch(&Instance,param_1,pFVar10);
    }
    goto LAB_1475977e5;
  }
LAB_1475975f1:
  pTVar3 = (pFVar10->StatId).StatIdPtr;
  FVar16.Value = 0;
  bVar8 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar14 = *(FName *)&pTVar3->Name;
  FVar15.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar15.Bits == 0) && (uVar9 == 0)) {
LAB_1475976cf:
    bVar5 = false;
    FVar14 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar15.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1475976cf;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar9;
    local_58 = FVar14;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
    FVar16.Value = local_58.ComparisonIndex.Value;
  }
  pFVar11 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar4 = *(code **)param_1;
  plVar13 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar13 = *(longlong **)&param_1->field_0x28;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar4)(uVar12,pFVar11);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_60);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_60.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_60.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_60.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_60.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
LAB_1475977e5:
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_> @ 147597820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseBuffer_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseBuffer_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseBuffer_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::__l2::<lambda_1>_> @ 147597aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseBuffer_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseBuffer_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar18;
  undefined8 uVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar20;
  longlong *plVar21;
  FTaskBase *this_02;
  FName FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::`8'::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::`8'::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar20 = local_40 + 2;
      *ppcVar20 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar20 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar20 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar20 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar20 = local_40;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    goto LAB_147597f41;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar24.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar22 = *(FName *)&pTVar4->Name;
  FVar23 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_147597e2f:
    bVar7 = false;
    FVar22 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147597e2f;
    local_a0.ComparisonIndex.Value = FVar23.Value;
    local_a0.Number = uVar16;
    local_98 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_98.ComparisonIndex.Value;
  }
  pFVar18 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar21 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar21 = plVar5;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar19,pFVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_147597f41:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_> @ 147597f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FRenderCommandDispatcher::
Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseResources_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>
          (FRenderCommandPipe *param_1,TUniqueFunction<void___cdecl(FRHICommandList_&)> *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  longlong lVar3;
  bool bVar4;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [48];
  undefined1 local_88 [48];
  byte local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    if ((GRenderCommandPipeMode == All) && (param_1 != (FRenderCommandPipe *)0x0)) {
      bVar4 = UE::RenderCommandPipe::IsReplaying(param_1);
      if (bVar4) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>
                 ::Get();
        FRenderCommandPipe::ExecuteCommand(param_1,param_2,pFVar5);
        return;
      }
      plVar6 = &param_1->_padding_;
      if ((plVar6 == (longlong *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      LOCK();
      bVar4 = (char)*plVar6 == '\0';
      if (bVar4) {
        *(undefined1 *)plVar6 = 1;
      }
      UNLOCK();
      if (!bVar4) {
        UE::FMutex::LockSlow((FMutex *)plVar6);
      }
      if ((param_1->RecordTask).Pimpl.Reference != (FTaskBase *)0x0) {
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>
                 ::Get();
        FRenderCommandPipe::EnqueueAndLaunch(param_1,param_2,pFVar5);
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) == 0) {
          return;
        }
        UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        return;
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        lVar3 = *plVar6;
        *(char *)plVar6 = (char)*plVar6 + -1;
        UNLOCK();
        if ((lVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)plVar6);
        }
      }
    }
    local_48._0_8_ = *(undefined8 *)param_2;
    local_48._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_48._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_48._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_48._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_48._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseResources_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseResources_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>_::__l2::<lambda_1>_>
              ((<lambda_1> *)local_48);
    if (local_48._0_8_ == 0) {
      return;
    }
    puVar2 = local_48;
    plVar6 = (longlong *)local_48._40_8_;
  }
  else {
    this_00 = FRenderCommandList::Get(this,param_1);
    local_88._0_8_ = *(undefined8 *)param_2;
    local_88._40_8_ = *(undefined8 *)&param_2->field_0x28;
    *(undefined8 *)&param_2->field_0x28 = 0;
    local_88._32_8_ = *(undefined8 *)&param_2->field_0x20;
    local_88._16_8_ = *(undefined8 *)&param_2->field_0x10;
    local_88._24_8_ = *(undefined8 *)&param_2->field_0x18;
    if (local_88._0_8_ != 0) {
      *(undefined8 *)param_2 = 0;
    }
    local_58 = 1;
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar5);
    uVar8 = (ulonglong)local_58;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8] !=
        UE::Core::Private::TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandList_&)>_>::
        Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar8])(local_88);
      return;
    }
    if (local_88._0_8_ == 0) {
      return;
    }
    puVar2 = local_88;
    plVar6 = (longlong *)local_88._40_8_;
  }
  plVar7 = (longlong *)(puVar2 + 0x10);
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  (**(code **)(*plVar7 + 0x10))();
  return;
}

// Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>,`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::__l2::<lambda_1>_> @ 147598210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FRenderThreadCommandPipe::
Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseResources_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>,_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseResources_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>_::__l2::<lambda_1>_>
          (<lambda_1> *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  TStatIdData *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  uint uVar16;
  FRenderCommandTag *pFVar17;
  FTaskBase *this;
  FRHICommandListImmediate *pFVar18;
  undefined8 uVar19;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  code **ppcVar20;
  longlong *plVar21;
  FTaskBase *this_02;
  FName FVar22;
  FNameEntryId FVar23;
  FNameEntryId FVar24;
  undefined1 auStackY_d8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  FColor_u_0 local_a4;
  FName local_a0;
  FName local_98;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar17 = (FRenderCommandTag *)
            TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>
            ::Get();
  if ((CpuChannel->Enabled < 0) || (RenderCommandsChannel->Enabled < 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
    FCpuProfilerTrace::GetOrCreateSpecId
              (&pFVar17->SpecId,pFVar17->Name,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
               ,0x255);
    FCpuProfilerTrace::OutputBeginEvent(pFVar17->SpecId);
  }
  bVar15 = IsInRenderingThread();
  if ((!bVar15) && ((GIsThreadedRendering != false || (bVar15 = IsInGameThread(), !bVar15)))) {
    if ((GMainThreadBlockedOnRenderThread != (TAtomic<bool>)0x0) &&
       ((bVar15 = IsInGameThread(), bVar15 &&
        (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2708370973442179152>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                             ,0x50,
                             "!GMainThreadBlockedOnRenderThread.Load(EMemoryOrder::Relaxed) || !IsInGameThread()"
                            ), bVar15)))) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (GRenderCommandPipeMode == None) {
      this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,0x10);
      this_02 = (FTaskBase *)0x0;
      if (this != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this->_padding_ =
             (longlong)
             &TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::`8'::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::`2'::<lambda_1>_>_>
              ::_vftable_;
        this_02 = this;
      }
      this_02[1]._padding_ = (longlong)pFVar17;
      this_02[1]._padding_ = *(longlong *)&param_1->Function;
      uVar10 = (param_1->Function).field_0x2c;
      uVar11 = (param_1->Function).field_0x2d;
      uVar12 = *(undefined2 *)&(param_1->Function).field_0x2e;
      this_02[1].StateChangeEvent =
           (TEventCount<unsigned_int>)*(undefined4 *)&(param_1->Function).field_0x28;
      this_02[1].ExtendedPriority = uVar10;
      this_02[1].TaskTriggered = (atomic<bool>)uVar11;
      this_02[1]._padding_ = uVar12;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      uVar13 = *(undefined4 *)&(param_1->Function).field_0x18;
      uVar14 = *(undefined4 *)&(param_1->Function).field_0x1c;
      this_02[1]._padding_ = *(longlong *)&(param_1->Function).field_0x10;
      this_02[1].RefCount = (atomic<unsigned_int>)uVar13;
      this_02[1].NumLocks = (atomic<unsigned_int>)uVar14;
      this_02[1].Pipe = *(FPipe **)&(param_1->Function).field_0x20;
      if (this_02[1]._padding_ != 0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (((GIsThreadedRendering != false) &&
          (ENamedThreads::FRenderThreadStatics::RenderThread == (TAtomic<ENamedThreads::Type>)0x1))
         && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("!GIsThreadedRendering || ENamedThreads::GetRenderThread() != ENamedThreads::GameThread"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                                 ,0x21d,L""), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Tasks::Private::TranslatePriority
                ((Type)ENamedThreads::FRenderThreadStatics::RenderThread,local_a7,&local_a8);
      UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_a7[0],local_a8,None);
      if (this_02 == (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x120);
      }
      else {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
        UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0x120);
        LOCK();
        paVar1 = &this_02->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_02->_padding_)(this_02,1);
        }
      }
    }
    else {
      local_68[0] = (code *)0x0;
      local_40 = FMemory::Malloc(0x40,0x10);
      *local_40 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::`8'::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      ppcVar20 = local_40 + 2;
      *ppcVar20 = *(code **)&param_1->Function;
      local_40[7] = *(code **)&(param_1->Function).field_0x28;
      *(undefined8 *)&(param_1->Function).field_0x28 = 0;
      pcVar6 = *(code **)&(param_1->Function).field_0x18;
      local_40[4] = *(code **)&(param_1->Function).field_0x10;
      local_40[5] = pcVar6;
      local_40[6] = *(code **)&(param_1->Function).field_0x20;
      if (*ppcVar20 != (code *)0x0) {
        *(undefined8 *)&param_1->Function = 0;
      }
      if (ppcVar20 != (code **)0x0) {
        local_68[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      EnqueueAndLaunch(&Instance,
                       (TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_68,pFVar17
                      );
      if (local_68[0] != (code *)0x0) {
        ppcVar20 = local_68 + 2;
        if (local_40 != (code **)0x0) {
          ppcVar20 = local_40;
        }
        (**(code **)(*ppcVar20 + 0x10))();
      }
    }
    goto LAB_1475986b1;
  }
  pTVar4 = (pFVar17->StatId).StatIdPtr;
  FVar24.Value = 0;
  bVar15 = false;
  bVar9 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar22 = *(FName *)&pTVar4->Name;
  FVar23 = FVar22.ComparisonIndex.Value;
  uVar16 = FVar22.Number;
  if ((FVar23.Value == 0) && (uVar16 == 0)) {
LAB_14759859f:
    bVar7 = false;
    FVar22 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a4._s_0,(pTVar4->StatDescriptionAnsi).Ptr);
      bVar15 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar23.Value;
        local_a0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar4->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderingThread.h"
                   ,0x266);
        bVar15 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14759859f;
    local_a0.ComparisonIndex.Value = FVar23.Value;
    local_a0.Number = uVar16;
    local_98 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar7 = true;
    FVar24.Value = local_98.ComparisonIndex.Value;
  }
  pFVar18 = GetImmediateCommandList_ForRenderCommand();
  UE::Core::Private::Function::CheckCallable(*(void **)&param_1->Function);
  plVar5 = *(longlong **)&(param_1->Function).field_0x28;
  pcVar6 = *(code **)&param_1->Function;
  plVar21 = (longlong *)&(param_1->Function).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar21 = plVar5;
  }
  uVar19 = (**(code **)(*plVar21 + 8))();
  (*pcVar6)(uVar19,pFVar18);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar24.Value;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
LAB_1475986b1:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FindByPredicate<`FSkinWeightProfileManager::DoTick'::__l24::<lambda_1>_> @ 147598700

FSetProfileRequest * __thiscall
TArray<FSetProfileRequest,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
FindByPredicate<_FSkinWeightProfileManager::DoTick_::__l24::<lambda_1>_>
          (TArray<FSetProfileRequest,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this
          ,<lambda_1> *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  longlong *plVar4;
  ForElementType<FSetProfileRequest> FVar5;
  ForElementType<FSetProfileRequest> FVar6;
  
  FVar6 = (this->AllocatorInstance).SecondaryData;
  FVar5 = (ForElementType<FSetProfileRequest>)this;
  if (FVar6 != (ForElementType<FSetProfileRequest>)0x0) {
    FVar5 = FVar6;
  }
  FVar6 = (ForElementType<FSetProfileRequest>)((longlong)this->ArrayNum * 0x70 + (longlong)FVar5);
  while( true ) {
    if (FVar5 == FVar6) {
      if (*(longlong *)&(param_1->Request).Callback != 0) {
        plVar1 = *(longlong **)&(param_1->Request).Callback.field_0x28;
        plVar4 = (longlong *)&(param_1->Request).Callback.field_0x10;
        if (plVar1 != (longlong *)0x0) {
          plVar4 = plVar1;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      pFVar2 = (param_1->Request).LODIndices.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      return (FSetProfileRequest *)0x0;
    }
    bVar3 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                      (&(param_1->Request).IdentifyingObject,
                       (TWeakObjectPtr<UObject,FWeakObjectPtr> *)((longlong)FVar5 + 0x50));
    if ((((bVar3) &&
         (bVar3 = TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
                            (&(param_1->Request).WeakSkeletalMesh,
                             (TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *)
                             ((longlong)FVar5 + 0x58)), bVar3)) &&
        ((param_1->Request).ProfileStack.Layers.Elements[0] == *(FName *)FVar5)) &&
       ((param_1->Request).ProfileStack.Layers.Elements[1] == *(FName *)((longlong)FVar5 + 8)))
    break;
    FVar5 = (ForElementType<FSetProfileRequest>)((longlong)FVar5 + 0x70);
  }
  if (*(longlong *)&(param_1->Request).Callback != 0) {
    plVar1 = *(longlong **)&(param_1->Request).Callback.field_0x28;
    plVar4 = (longlong *)&(param_1->Request).Callback.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar2 = (param_1->Request).LODIndices.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (FSetProfileRequest *)FVar5;
}

// ForEachElement<`UPoseAsset::GetAnimationCurveOnly'::__l23::<lambda_1>_> @ 147598ea0

void __thiscall
UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
ForEachElement<_UPoseAsset::GetAnimationCurveOnly_::__l23::<lambda_1>_>
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this,<lambda_1> *param_1
          )

{
  int iVar1;
  undefined4 uVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FCurveElement *pFVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FCurveElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FCurveElement *pFVar12;
  undefined1 local_res8 [8];
  
  pFVar12 = (this->Elements).AllocatorInstance.Data;
  iVar1 = (this->Elements).ArrayNum;
  pFVar10 = pFVar12 + iVar1;
  pFVar11 = (FScriptContainerElement *)&pFVar12->Value;
  while( true ) {
    if ((this->Elements).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Anim::FCurveElement,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar12 == pFVar10) break;
    pTVar3 = param_1->OutCurveNames;
    pFVar4 = (FCurveElement *)(pTVar3->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar12) && (pFVar12 < (FCurveElement *)(&pFVar4->Name + pTVar3->ArrayMax))) {
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
    iVar9 = pTVar3->ArrayNum;
    if (iVar9 == pTVar3->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
    }
    pTVar3->ArrayNum = iVar9 + 1;
    pTVar5 = param_1->OutCurveValues;
    *(FName *)((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 8) = pFVar12->Name;
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    if ((pFVar6 <= pFVar11) && (pFVar11 < pFVar6 + (longlong)pTVar5->ArrayMax * 4)) {
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
    iVar9 = pTVar5->ArrayNum;
    if (iVar9 == pTVar5->ArrayMax) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
    }
    pTVar5->ArrayNum = iVar9 + 1;
    pFVar12 = pFVar12 + 1;
    uVar2 = *(undefined4 *)pFVar11;
    pFVar11 = pFVar11 + 0x10;
    *(undefined4 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 4) = uVar2;
  }
  return;
}

// HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_> @ 147599b10

void __cdecl
AlgoImpl::
HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
          (ushort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_short,TLess<void>_> param_4)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar8 = iVar5;
  iVar6 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_147599bf5:
      if (iVar6 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            uVar1 = *param_1;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = uVar1;
            iVar8 = 0;
            if (1 < iVar5) {
              do {
                iVar4 = iVar8 * 2;
                iVar6 = iVar4 + 1;
                if (iVar4 + 2 < iVar5) {
                  if (param_1[(longlong)iVar4 + 2] < param_1[iVar6]) {
                    iVar6 = iVar4;
                  }
                  iVar6 = iVar6 + 1;
                }
                uVar1 = param_1[iVar8];
                if (param_1[iVar6] <= uVar1) break;
                param_1[iVar8] = param_1[iVar6];
                param_1[iVar6] = uVar1;
                iVar8 = iVar6;
              } while (iVar6 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar6 + -1;
      iVar5 = iVar8 + -2;
      iVar8 = iVar5;
      iVar6 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar7 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      if (param_1[(longlong)iVar5 + 2] < param_1[iVar7]) {
        iVar7 = iVar5;
      }
      iVar7 = iVar7 + 1;
    }
    uVar1 = param_1[iVar4];
    if (param_1[iVar7] <= uVar1) goto LAB_147599bf5;
    param_1[iVar4] = param_1[iVar7];
    param_1[iVar7] = uVar1;
    iVar5 = iVar7 * 2 + 1;
    iVar4 = iVar7;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FPoseDataContainer::RebuildCurveIndexTable'::__l2::<lambda_1>_>_> @ 147599cc0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FPoseDataContainer::RebuildCurveIndexTable_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_private:_void___cdecl_FPoseDataContainer::RebuildCurveIndexTable(void)_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar7 = iVar5;
  iVar8 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_147599ddc:
      if (iVar8 == 0) {
        iVar5 = param_2 + -1;
        lVar9 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = *param_1;
            iVar4 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar7;
            if (1 < iVar5) {
              do {
                iVar8 = iVar4 * 2;
                iVar7 = iVar8 + 1;
                if (iVar8 + 2 < iVar5) {
                  bVar3 = `FPoseDataContainer::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                                    (param_4.Predicate,param_1[(longlong)iVar8 + 2],param_1[iVar7]);
                  if (bVar3) {
                    iVar7 = iVar8;
                  }
                  iVar7 = iVar7 + 1;
                }
                bVar3 = `FPoseDataContainer::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                                  (param_4.Predicate,param_1[iVar4],param_1[iVar7]);
                if (!bVar3) break;
                iVar8 = param_1[iVar4];
                param_1[iVar4] = param_1[iVar7];
                param_1[iVar7] = iVar8;
                iVar4 = iVar7;
              } while (iVar7 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar4 = iVar8 + -1;
      iVar5 = iVar7 + -2;
      iVar7 = iVar5;
      iVar8 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = `FPoseDataContainer::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                        (param_4.Predicate,param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = `FPoseDataContainer::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_147599ddc;
    iVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = iVar1;
    iVar4 = iVar6;
  } while( true );
}

// HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FReferenceSkeleton::Remove'::__l2::<lambda_2>_>_> @ 147599ec0

void __cdecl
AlgoImpl::
HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FReferenceSkeleton::Remove_::__l2::<lambda_2>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_private:_void___cdecl_FReferenceSkeleton::Remove(FName,bool)_::_2_::<lambda_2>_>
          param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar5 = (param_2 + -2) / 2;
  iVar6 = iVar5 * 2 + 1;
  iVar2 = iVar6;
  iVar7 = iVar5;
  do {
    while (param_2 <= iVar6) {
LAB_147599f9e:
      if (iVar7 == 0) {
        iVar6 = param_2 + -1;
        lVar9 = (longlong)iVar6;
        if (0 < iVar6) {
          do {
            iVar2 = *param_1;
            iVar5 = 0;
            *param_1 = param_1[lVar9];
            param_1[lVar9] = iVar2;
            if (1 < iVar6) {
              do {
                iVar2 = iVar5 * 2;
                iVar7 = iVar2 + 1;
                if (iVar2 + 2 < iVar6) {
                  if (param_1[iVar7] < param_1[(longlong)iVar2 + 2]) {
                    iVar7 = iVar2;
                  }
                  iVar7 = iVar7 + 1;
                }
                iVar2 = param_1[iVar5];
                if (iVar2 <= param_1[iVar7]) break;
                param_1[iVar5] = param_1[iVar7];
                param_1[iVar7] = iVar2;
                iVar5 = iVar7;
              } while (iVar7 * 2 + 1 < iVar6);
            }
            iVar6 = iVar6 + -1;
            lVar9 = lVar9 + -1;
          } while (0 < lVar9);
        }
        return;
      }
      iVar5 = iVar7 + -1;
      iVar6 = iVar2 + -2;
      iVar2 = iVar6;
      iVar7 = iVar5;
    }
    iVar6 = iVar5 * 2;
    iVar8 = iVar6 + 1;
    if (iVar6 + 2 < param_2) {
      if (param_1[iVar8] < param_1[(longlong)iVar6 + 2]) {
        iVar8 = iVar6;
      }
      iVar8 = iVar8 + 1;
    }
    iVar1 = param_1[iVar5];
    if (iVar1 <= param_1[iVar8]) goto LAB_147599f9e;
    param_1[iVar5] = param_1[iVar8];
    iVar6 = iVar8 * 2 + 1;
    param_1[iVar8] = iVar1;
    iVar5 = iVar8;
  } while( true );
}

// HeapSortInternal<`UAssetManager::DumpLoadedAssetState'::__l31::FLoadedInfo,int,FIdentityFunctor,TDereferenceWrapper<`UAssetManager::DumpLoadedAssetState'::__l31::FLoadedInfo,`UAssetManager::DumpLoadedAssetState'::__l48::<lambda_2>_>_> @ 14759a050

void __cdecl
AlgoImpl::
HeapSortInternal<_UAssetManager::DumpLoadedAssetState_::__l31::FLoadedInfo,int,FIdentityFunctor,TDereferenceWrapper<_UAssetManager::DumpLoadedAssetState_::__l31::FLoadedInfo,_UAssetManager::DumpLoadedAssetState_::__l48::<lambda_2>_>_>
          (FLoadedInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_static_void___cdecl_UAssetManager::DumpLoadedAssetState(void)_::_31_::FLoadedInfo,_public:_static_void___cdecl_UAssetManager::DumpLoadedAssetState(void)_::_48_::<lambda_2>_>
          param_4)

{
  code *pcVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  undefined7 uVar4;
  bool bVar5;
  undefined7 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  FLoadedInfo *pFVar16;
  FLoadedInfo *pFVar17;
  longlong lVar18;
  FLoadedInfo *pFVar19;
  
  if (param_2 < 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar10 = (param_2 + -2) / 2;
  iVar12 = iVar10 * 2 + 1;
  iVar13 = iVar12;
  iVar15 = iVar10;
  do {
    while (param_2 <= iVar12) {
LAB_14759a186:
      if (iVar15 == 0) {
        iVar12 = param_2 + -1;
        lVar18 = (longlong)iVar12;
        if (0 < iVar12) {
          pFVar19 = param_1 + lVar18;
          do {
            bVar9 = pFVar19->bPending;
            uVar4 = *(undefined7 *)&pFVar19->field_0x9;
            FVar2 = param_1->AssetName;
            bVar5 = param_1->bPending;
            uVar6 = *(undefined7 *)&param_1->field_0x9;
            pFVar3 = (param_1->BundleState).Data.AllocatorInstance.Data;
            iVar15 = (param_1->BundleState).Data.ArrayNum;
            iVar14 = (param_1->BundleState).Data.ArrayMax;
            param_1->AssetName = pFVar19->AssetName;
            param_1->bPending = bVar9;
            *(undefined7 *)&param_1->field_0x9 = uVar4;
            iVar13 = (pFVar19->BundleState).Data.ArrayNum;
            iVar10 = (pFVar19->BundleState).Data.ArrayMax;
            (param_1->BundleState).Data.AllocatorInstance.Data =
                 (pFVar19->BundleState).Data.AllocatorInstance.Data;
            (param_1->BundleState).Data.ArrayNum = iVar13;
            (param_1->BundleState).Data.ArrayMax = iVar10;
            pFVar19->AssetName = FVar2;
            pFVar19->bPending = bVar5;
            *(undefined7 *)&pFVar19->field_0x9 = uVar6;
            (pFVar19->BundleState).Data.AllocatorInstance.Data = pFVar3;
            (pFVar19->BundleState).Data.ArrayNum = iVar15;
            (pFVar19->BundleState).Data.ArrayMax = iVar14;
            iVar13 = 0;
            if (1 < iVar12) {
              do {
                iVar10 = iVar13 * 2;
                iVar15 = iVar10 + 1;
                if (iVar10 + 2 < iVar12) {
                  iVar14 = ::FName::Compare(&param_1[iVar10 + 2].AssetName,
                                            &param_1[iVar15].AssetName);
                  if (iVar14 < 0) {
                    iVar15 = iVar10;
                  }
                  iVar15 = iVar15 + 1;
                }
                pFVar17 = param_1 + iVar15;
                pFVar16 = param_1 + iVar13;
                iVar13 = ::FName::Compare(&pFVar16->AssetName,&pFVar17->AssetName);
                if (-1 < iVar13) break;
                bVar9 = pFVar17->bPending;
                uVar4 = *(undefined7 *)&pFVar17->field_0x9;
                FVar2 = pFVar16->AssetName;
                bVar5 = pFVar16->bPending;
                uVar6 = *(undefined7 *)&pFVar16->field_0x9;
                pFVar3 = (pFVar16->BundleState).Data.AllocatorInstance.Data;
                iVar14 = (pFVar16->BundleState).Data.ArrayNum;
                iVar11 = (pFVar16->BundleState).Data.ArrayMax;
                pFVar16->AssetName = pFVar17->AssetName;
                pFVar16->bPending = bVar9;
                *(undefined7 *)&pFVar16->field_0x9 = uVar4;
                iVar13 = (pFVar17->BundleState).Data.ArrayNum;
                iVar10 = (pFVar17->BundleState).Data.ArrayMax;
                (pFVar16->BundleState).Data.AllocatorInstance.Data =
                     (pFVar17->BundleState).Data.AllocatorInstance.Data;
                (pFVar16->BundleState).Data.ArrayNum = iVar13;
                (pFVar16->BundleState).Data.ArrayMax = iVar10;
                pFVar17->AssetName = FVar2;
                pFVar17->bPending = bVar5;
                *(undefined7 *)&pFVar17->field_0x9 = uVar6;
                (pFVar17->BundleState).Data.AllocatorInstance.Data = pFVar3;
                (pFVar17->BundleState).Data.ArrayNum = iVar14;
                (pFVar17->BundleState).Data.ArrayMax = iVar11;
                iVar13 = iVar15;
              } while (iVar15 * 2 + 1 < iVar12);
            }
            iVar12 = iVar12 + -1;
            lVar18 = lVar18 + -1;
            pFVar19 = pFVar19 + -1;
          } while (0 < lVar18);
        }
        return;
      }
      iVar10 = iVar15 + -1;
      iVar12 = iVar13 + -2;
      iVar13 = iVar12;
      iVar15 = iVar10;
    }
    iVar12 = iVar10 * 2;
    iVar14 = iVar12 + 1;
    if (iVar12 + 2 < param_2) {
      iVar11 = ::FName::Compare(&param_1[iVar12 + 2].AssetName,&param_1[iVar14].AssetName);
      if (iVar11 < 0) {
        iVar14 = iVar12;
      }
      iVar14 = iVar14 + 1;
    }
    pFVar16 = param_1 + iVar14;
    pFVar19 = param_1 + iVar10;
    iVar12 = ::FName::Compare(&pFVar19->AssetName,&pFVar16->AssetName);
    if (-1 < iVar12) goto LAB_14759a186;
    bVar9 = pFVar16->bPending;
    uVar4 = *(undefined7 *)&pFVar16->field_0x9;
    iVar12 = iVar14 * 2 + 1;
    FVar2 = pFVar19->AssetName;
    bVar5 = pFVar19->bPending;
    uVar6 = *(undefined7 *)&pFVar19->field_0x9;
    pFVar3 = (pFVar19->BundleState).Data.AllocatorInstance.Data;
    iVar7 = (pFVar19->BundleState).Data.ArrayNum;
    iVar8 = (pFVar19->BundleState).Data.ArrayMax;
    pFVar19->AssetName = pFVar16->AssetName;
    pFVar19->bPending = bVar9;
    *(undefined7 *)&pFVar19->field_0x9 = uVar4;
    iVar10 = (pFVar16->BundleState).Data.ArrayNum;
    iVar11 = (pFVar16->BundleState).Data.ArrayMax;
    (pFVar19->BundleState).Data.AllocatorInstance.Data =
         (pFVar16->BundleState).Data.AllocatorInstance.Data;
    (pFVar19->BundleState).Data.ArrayNum = iVar10;
    (pFVar19->BundleState).Data.ArrayMax = iVar11;
    pFVar16->AssetName = FVar2;
    pFVar16->bPending = bVar5;
    *(undefined7 *)&pFVar16->field_0x9 = uVar6;
    (pFVar16->BundleState).Data.AllocatorInstance.Data = pFVar3;
    (pFVar16->BundleState).Data.ArrayNum = iVar7;
    (pFVar16->BundleState).Data.ArrayMax = iVar8;
    iVar10 = iVar14;
  } while( true );
}

// HeapSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,`UAssetManager::DumpAssetTypeSummary'::__l2::<lambda_1>_>_> @ 14759a2b0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,_UAssetManager::DumpAssetTypeSummary_::__l2::<lambda_1>_>_>
          (FPrimaryAssetTypeInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPrimaryAssetTypeInfo,_public:_static_void___cdecl_UAssetManager::DumpAssetTypeSummary(void)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined8 uVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined6 uVar15;
  undefined3 uVar16;
  bool bVar17;
  bool bVar18;
  undefined6 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  undefined3 uVar29;
  int iVar30;
  bool bVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  FPrimaryAssetTypeInfo *pFVar37;
  FPrimaryAssetTypeInfo *pFVar38;
  int iVar39;
  longlong lVar40;
  FPrimaryAssetTypeInfo *pFVar41;
  
  if (param_2 < 0) {
    bVar31 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar31) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar31 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar31) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar32 = (param_2 + -2) / 2;
  iVar34 = iVar32 * 2 + 1;
  iVar35 = iVar34;
  iVar39 = iVar32;
  do {
    while (param_2 <= iVar34) {
LAB_14759a4ac:
      if (iVar39 == 0) {
        iVar34 = param_2 + -1;
        lVar40 = (longlong)iVar34;
        if (0 < iVar34) {
          pFVar41 = param_1 + lVar40;
          do {
            uVar2 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr;
            bVar28 = param_1->bIsDynamicAsset;
            uVar29 = *(undefined3 *)&param_1->field_0x81;
            iVar25 = param_1->NumberOfAssets;
            FVar3 = param_1->PrimaryAssetType;
            uVar4 = *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr;
            uVar5 = *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x8;
            uVar6 = *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x10;
            uVar7 = *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x18;
            uVar8 = *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x20;
            TVar9 = (param_1->AssetBaseClassLoaded).field0_0x0;
            bVar17 = param_1->bHasBlueprintClasses;
            bVar18 = param_1->bIsEditorOnly;
            uVar19 = *(undefined6 *)&param_1->field_0x3a;
            pFVar10 = (param_1->Directories).AllocatorInstance.Data;
            iVar39 = (param_1->Directories).ArrayNum;
            iVar36 = (param_1->Directories).ArrayMax;
            pFVar11 = (param_1->SpecificAssets).AllocatorInstance.Data;
            iVar33 = (param_1->SpecificAssets).ArrayNum;
            iVar20 = (param_1->SpecificAssets).ArrayMax;
            iVar21 = (param_1->Rules).Priority;
            iVar22 = (param_1->Rules).ChunkId;
            uVar12 = *(undefined8 *)&(param_1->Rules).bApplyRecursively;
            pFVar13 = (param_1->AssetScanPaths).AllocatorInstance.Data;
            iVar23 = (param_1->AssetScanPaths).ArrayNum;
            iVar24 = (param_1->AssetScanPaths).ArrayMax;
            param_1->PrimaryAssetType = pFVar41->PrimaryAssetType;
            *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr = uVar2;
            uVar2 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x10;
            *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x8 =
                 *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x8;
            *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar2;
            uVar2 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x20;
            *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x18 =
                 *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x18;
            *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar2;
            bVar31 = pFVar41->bHasBlueprintClasses;
            bVar14 = pFVar41->bIsEditorOnly;
            uVar15 = *(undefined6 *)&pFVar41->field_0x3a;
            (param_1->AssetBaseClassLoaded).field0_0x0 = (pFVar41->AssetBaseClassLoaded).field0_0x0;
            param_1->bHasBlueprintClasses = bVar31;
            param_1->bIsEditorOnly = bVar14;
            *(undefined6 *)&param_1->field_0x3a = uVar15;
            iVar35 = (pFVar41->Directories).ArrayNum;
            iVar32 = (pFVar41->Directories).ArrayMax;
            (param_1->Directories).AllocatorInstance.Data =
                 (pFVar41->Directories).AllocatorInstance.Data;
            (param_1->Directories).ArrayNum = iVar35;
            (param_1->Directories).ArrayMax = iVar32;
            iVar35 = (pFVar41->SpecificAssets).ArrayNum;
            iVar32 = (pFVar41->SpecificAssets).ArrayMax;
            (param_1->SpecificAssets).AllocatorInstance.Data =
                 (pFVar41->SpecificAssets).AllocatorInstance.Data;
            (param_1->SpecificAssets).ArrayNum = iVar35;
            (param_1->SpecificAssets).ArrayMax = iVar32;
            iVar35 = (pFVar41->Rules).ChunkId;
            uVar2 = *(undefined8 *)&(pFVar41->Rules).bApplyRecursively;
            (param_1->Rules).Priority = (pFVar41->Rules).Priority;
            (param_1->Rules).ChunkId = iVar35;
            *(undefined8 *)&(param_1->Rules).bApplyRecursively = uVar2;
            iVar35 = (pFVar41->AssetScanPaths).ArrayNum;
            iVar32 = (pFVar41->AssetScanPaths).ArrayMax;
            (param_1->AssetScanPaths).AllocatorInstance.Data =
                 (pFVar41->AssetScanPaths).AllocatorInstance.Data;
            (param_1->AssetScanPaths).ArrayNum = iVar35;
            (param_1->AssetScanPaths).ArrayMax = iVar32;
            uVar16 = *(undefined3 *)&pFVar41->field_0x81;
            iVar35 = pFVar41->NumberOfAssets;
            param_1->bIsDynamicAsset = pFVar41->bIsDynamicAsset;
            *(undefined3 *)&param_1->field_0x81 = uVar16;
            param_1->NumberOfAssets = iVar35;
            pFVar41->PrimaryAssetType = FVar3;
            *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr = uVar4;
            *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x8 = uVar5;
            *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar6;
            *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x18 = uVar7;
            *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar8;
            (pFVar41->AssetBaseClassLoaded).field0_0x0 = TVar9;
            pFVar41->bHasBlueprintClasses = bVar17;
            pFVar41->bIsEditorOnly = bVar18;
            *(undefined6 *)&pFVar41->field_0x3a = uVar19;
            (pFVar41->Directories).AllocatorInstance.Data = pFVar10;
            (pFVar41->Directories).ArrayNum = iVar39;
            (pFVar41->Directories).ArrayMax = iVar36;
            (pFVar41->SpecificAssets).AllocatorInstance.Data = pFVar11;
            (pFVar41->SpecificAssets).ArrayNum = iVar33;
            (pFVar41->SpecificAssets).ArrayMax = iVar20;
            (pFVar41->Rules).Priority = iVar21;
            (pFVar41->Rules).ChunkId = iVar22;
            *(undefined8 *)&(pFVar41->Rules).bApplyRecursively = uVar12;
            (pFVar41->AssetScanPaths).AllocatorInstance.Data = pFVar13;
            (pFVar41->AssetScanPaths).ArrayNum = iVar23;
            (pFVar41->AssetScanPaths).ArrayMax = iVar24;
            pFVar41->bIsDynamicAsset = bVar28;
            *(undefined3 *)&pFVar41->field_0x81 = uVar29;
            pFVar41->NumberOfAssets = iVar25;
            iVar35 = 0;
            if (1 < iVar34) {
              do {
                iVar39 = iVar35 * 2;
                iVar32 = iVar39 + 1;
                if (iVar39 + 2 < iVar34) {
                  iVar36 = ::FName::Compare(&param_1[iVar39 + 2].PrimaryAssetType,
                                            &param_1[iVar32].PrimaryAssetType);
                  if (iVar36 < 0) {
                    iVar32 = iVar39;
                  }
                  iVar32 = iVar32 + 1;
                }
                pFVar38 = param_1 + iVar32;
                pFVar37 = param_1 + iVar35;
                iVar35 = ::FName::Compare(&pFVar37->PrimaryAssetType,&pFVar38->PrimaryAssetType);
                if (-1 < iVar35) break;
                uVar2 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr;
                bVar28 = pFVar37->bIsDynamicAsset;
                uVar29 = *(undefined3 *)&pFVar37->field_0x81;
                iVar26 = pFVar37->NumberOfAssets;
                FVar3 = pFVar37->PrimaryAssetType;
                uVar4 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr;
                uVar5 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x8;
                uVar6 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x10;
                uVar7 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x18;
                uVar8 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x20;
                TVar9 = (pFVar37->AssetBaseClassLoaded).field0_0x0;
                bVar17 = pFVar37->bHasBlueprintClasses;
                bVar18 = pFVar37->bIsEditorOnly;
                uVar19 = *(undefined6 *)&pFVar37->field_0x3a;
                pFVar10 = (pFVar37->Directories).AllocatorInstance.Data;
                iVar36 = (pFVar37->Directories).ArrayNum;
                iVar33 = (pFVar37->Directories).ArrayMax;
                pFVar11 = (pFVar37->SpecificAssets).AllocatorInstance.Data;
                iVar20 = (pFVar37->SpecificAssets).ArrayNum;
                iVar21 = (pFVar37->SpecificAssets).ArrayMax;
                iVar22 = (pFVar37->Rules).Priority;
                iVar23 = (pFVar37->Rules).ChunkId;
                uVar12 = *(undefined8 *)&(pFVar37->Rules).bApplyRecursively;
                pFVar13 = (pFVar37->AssetScanPaths).AllocatorInstance.Data;
                iVar24 = (pFVar37->AssetScanPaths).ArrayNum;
                iVar25 = (pFVar37->AssetScanPaths).ArrayMax;
                pFVar37->PrimaryAssetType = pFVar38->PrimaryAssetType;
                *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr = uVar2;
                uVar2 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x10;
                *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x8 =
                     *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x8;
                *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar2;
                uVar2 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x20;
                *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x18 =
                     *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x18;
                *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar2;
                bVar31 = pFVar38->bHasBlueprintClasses;
                bVar14 = pFVar38->bIsEditorOnly;
                uVar15 = *(undefined6 *)&pFVar38->field_0x3a;
                (pFVar37->AssetBaseClassLoaded).field0_0x0 =
                     (pFVar38->AssetBaseClassLoaded).field0_0x0;
                pFVar37->bHasBlueprintClasses = bVar31;
                pFVar37->bIsEditorOnly = bVar14;
                *(undefined6 *)&pFVar37->field_0x3a = uVar15;
                iVar35 = (pFVar38->Directories).ArrayNum;
                iVar39 = (pFVar38->Directories).ArrayMax;
                (pFVar37->Directories).AllocatorInstance.Data =
                     (pFVar38->Directories).AllocatorInstance.Data;
                (pFVar37->Directories).ArrayNum = iVar35;
                (pFVar37->Directories).ArrayMax = iVar39;
                iVar35 = (pFVar38->SpecificAssets).ArrayNum;
                iVar39 = (pFVar38->SpecificAssets).ArrayMax;
                (pFVar37->SpecificAssets).AllocatorInstance.Data =
                     (pFVar38->SpecificAssets).AllocatorInstance.Data;
                (pFVar37->SpecificAssets).ArrayNum = iVar35;
                (pFVar37->SpecificAssets).ArrayMax = iVar39;
                iVar35 = (pFVar38->Rules).ChunkId;
                uVar2 = *(undefined8 *)&(pFVar38->Rules).bApplyRecursively;
                (pFVar37->Rules).Priority = (pFVar38->Rules).Priority;
                (pFVar37->Rules).ChunkId = iVar35;
                *(undefined8 *)&(pFVar37->Rules).bApplyRecursively = uVar2;
                iVar35 = (pFVar38->AssetScanPaths).ArrayNum;
                iVar39 = (pFVar38->AssetScanPaths).ArrayMax;
                (pFVar37->AssetScanPaths).AllocatorInstance.Data =
                     (pFVar38->AssetScanPaths).AllocatorInstance.Data;
                (pFVar37->AssetScanPaths).ArrayNum = iVar35;
                (pFVar37->AssetScanPaths).ArrayMax = iVar39;
                uVar16 = *(undefined3 *)&pFVar38->field_0x81;
                iVar35 = pFVar38->NumberOfAssets;
                pFVar37->bIsDynamicAsset = pFVar38->bIsDynamicAsset;
                *(undefined3 *)&pFVar37->field_0x81 = uVar16;
                pFVar37->NumberOfAssets = iVar35;
                pFVar38->PrimaryAssetType = FVar3;
                *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr = uVar4;
                *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x8 = uVar5;
                *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar6;
                *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x18 = uVar7;
                *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar8;
                (pFVar38->AssetBaseClassLoaded).field0_0x0 = TVar9;
                pFVar38->bHasBlueprintClasses = bVar17;
                pFVar38->bIsEditorOnly = bVar18;
                *(undefined6 *)&pFVar38->field_0x3a = uVar19;
                (pFVar38->Directories).AllocatorInstance.Data = pFVar10;
                (pFVar38->Directories).ArrayNum = iVar36;
                (pFVar38->Directories).ArrayMax = iVar33;
                (pFVar38->SpecificAssets).AllocatorInstance.Data = pFVar11;
                (pFVar38->SpecificAssets).ArrayNum = iVar20;
                (pFVar38->SpecificAssets).ArrayMax = iVar21;
                (pFVar38->Rules).Priority = iVar22;
                (pFVar38->Rules).ChunkId = iVar23;
                *(undefined8 *)&(pFVar38->Rules).bApplyRecursively = uVar12;
                (pFVar38->AssetScanPaths).AllocatorInstance.Data = pFVar13;
                (pFVar38->AssetScanPaths).ArrayNum = iVar24;
                (pFVar38->AssetScanPaths).ArrayMax = iVar25;
                pFVar38->bIsDynamicAsset = bVar28;
                *(undefined3 *)&pFVar38->field_0x81 = uVar29;
                pFVar38->NumberOfAssets = iVar26;
                iVar35 = iVar32;
              } while (iVar32 * 2 + 1 < iVar34);
            }
            iVar34 = iVar34 + -1;
            lVar40 = lVar40 + -1;
            pFVar41 = pFVar41 + -1;
          } while (0 < lVar40);
        }
        return;
      }
      iVar32 = iVar39 + -1;
      iVar34 = iVar35 + -2;
      iVar35 = iVar34;
      iVar39 = iVar32;
    }
    iVar34 = iVar32 * 2;
    iVar36 = iVar34 + 1;
    if (iVar34 + 2 < param_2) {
      iVar33 = ::FName::Compare(&param_1[iVar34 + 2].PrimaryAssetType,
                                &param_1[iVar36].PrimaryAssetType);
      if (iVar33 < 0) {
        iVar36 = iVar34;
      }
      iVar36 = iVar36 + 1;
    }
    pFVar37 = param_1 + iVar36;
    pFVar41 = param_1 + iVar32;
    iVar34 = ::FName::Compare(&pFVar41->PrimaryAssetType,&pFVar37->PrimaryAssetType);
    if (-1 < iVar34) goto LAB_14759a4ac;
    uVar2 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr;
    iVar34 = iVar36 * 2 + 1;
    bVar28 = pFVar41->bIsDynamicAsset;
    uVar29 = *(undefined3 *)&pFVar41->field_0x81;
    iVar30 = pFVar41->NumberOfAssets;
    FVar3 = pFVar41->PrimaryAssetType;
    uVar4 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr;
    uVar5 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x8;
    uVar6 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x10;
    uVar7 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x18;
    uVar8 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x20;
    TVar9 = (pFVar41->AssetBaseClassLoaded).field0_0x0;
    bVar17 = pFVar41->bHasBlueprintClasses;
    bVar18 = pFVar41->bIsEditorOnly;
    uVar19 = *(undefined6 *)&pFVar41->field_0x3a;
    pFVar10 = (pFVar41->Directories).AllocatorInstance.Data;
    iVar20 = (pFVar41->Directories).ArrayNum;
    iVar21 = (pFVar41->Directories).ArrayMax;
    pFVar11 = (pFVar41->SpecificAssets).AllocatorInstance.Data;
    iVar22 = (pFVar41->SpecificAssets).ArrayNum;
    iVar23 = (pFVar41->SpecificAssets).ArrayMax;
    iVar24 = (pFVar41->Rules).Priority;
    iVar25 = (pFVar41->Rules).ChunkId;
    uVar12 = *(undefined8 *)&(pFVar41->Rules).bApplyRecursively;
    pFVar13 = (pFVar41->AssetScanPaths).AllocatorInstance.Data;
    iVar26 = (pFVar41->AssetScanPaths).ArrayNum;
    iVar27 = (pFVar41->AssetScanPaths).ArrayMax;
    pFVar41->PrimaryAssetType = pFVar37->PrimaryAssetType;
    *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr = uVar2;
    uVar2 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x10;
    *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x8 =
         *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x8;
    *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x20;
    *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x18 =
         *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x18;
    *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar2;
    bVar31 = pFVar37->bHasBlueprintClasses;
    bVar14 = pFVar37->bIsEditorOnly;
    uVar15 = *(undefined6 *)&pFVar37->field_0x3a;
    (pFVar41->AssetBaseClassLoaded).field0_0x0 = (pFVar37->AssetBaseClassLoaded).field0_0x0;
    pFVar41->bHasBlueprintClasses = bVar31;
    pFVar41->bIsEditorOnly = bVar14;
    *(undefined6 *)&pFVar41->field_0x3a = uVar15;
    iVar32 = (pFVar37->Directories).ArrayNum;
    iVar33 = (pFVar37->Directories).ArrayMax;
    (pFVar41->Directories).AllocatorInstance.Data = (pFVar37->Directories).AllocatorInstance.Data;
    (pFVar41->Directories).ArrayNum = iVar32;
    (pFVar41->Directories).ArrayMax = iVar33;
    iVar32 = (pFVar37->SpecificAssets).ArrayNum;
    iVar33 = (pFVar37->SpecificAssets).ArrayMax;
    (pFVar41->SpecificAssets).AllocatorInstance.Data =
         (pFVar37->SpecificAssets).AllocatorInstance.Data;
    (pFVar41->SpecificAssets).ArrayNum = iVar32;
    (pFVar41->SpecificAssets).ArrayMax = iVar33;
    iVar32 = (pFVar37->Rules).ChunkId;
    uVar2 = *(undefined8 *)&(pFVar37->Rules).bApplyRecursively;
    (pFVar41->Rules).Priority = (pFVar37->Rules).Priority;
    (pFVar41->Rules).ChunkId = iVar32;
    *(undefined8 *)&(pFVar41->Rules).bApplyRecursively = uVar2;
    iVar32 = (pFVar37->AssetScanPaths).ArrayNum;
    iVar33 = (pFVar37->AssetScanPaths).ArrayMax;
    (pFVar41->AssetScanPaths).AllocatorInstance.Data =
         (pFVar37->AssetScanPaths).AllocatorInstance.Data;
    (pFVar41->AssetScanPaths).ArrayNum = iVar32;
    (pFVar41->AssetScanPaths).ArrayMax = iVar33;
    uVar16 = *(undefined3 *)&pFVar37->field_0x81;
    iVar32 = pFVar37->NumberOfAssets;
    pFVar41->bIsDynamicAsset = pFVar37->bIsDynamicAsset;
    *(undefined3 *)&pFVar41->field_0x81 = uVar16;
    pFVar41->NumberOfAssets = iVar32;
    pFVar37->PrimaryAssetType = FVar3;
    *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr = uVar4;
    *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x8 = uVar5;
    *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar6;
    *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x18 = uVar7;
    *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar8;
    (pFVar37->AssetBaseClassLoaded).field0_0x0 = TVar9;
    pFVar37->bHasBlueprintClasses = bVar17;
    pFVar37->bIsEditorOnly = bVar18;
    *(undefined6 *)&pFVar37->field_0x3a = uVar19;
    (pFVar37->Directories).AllocatorInstance.Data = pFVar10;
    (pFVar37->Directories).ArrayNum = iVar20;
    (pFVar37->Directories).ArrayMax = iVar21;
    (pFVar37->SpecificAssets).AllocatorInstance.Data = pFVar11;
    (pFVar37->SpecificAssets).ArrayNum = iVar22;
    (pFVar37->SpecificAssets).ArrayMax = iVar23;
    (pFVar37->Rules).Priority = iVar24;
    (pFVar37->Rules).ChunkId = iVar25;
    *(undefined8 *)&(pFVar37->Rules).bApplyRecursively = uVar12;
    (pFVar37->AssetScanPaths).AllocatorInstance.Data = pFVar13;
    (pFVar37->AssetScanPaths).ArrayNum = iVar26;
    (pFVar37->AssetScanPaths).ArrayMax = iVar27;
    pFVar37->bIsDynamicAsset = bVar28;
    *(undefined3 *)&pFVar37->field_0x81 = uVar29;
    pFVar37->NumberOfAssets = iVar30;
    iVar32 = iVar36;
  } while( true );
}

// HeapSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,`UAssetManager::DumpLoadedAssetState'::__l2::<lambda_1>_>_> @ 14759a730

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __cdecl
AlgoImpl::
HeapSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,_UAssetManager::DumpLoadedAssetState_::__l2::<lambda_1>_>_>
          (FPrimaryAssetTypeInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPrimaryAssetTypeInfo,_public:_static_void___cdecl_UAssetManager::DumpLoadedAssetState(void)_::_2_::<lambda_1>_>
          param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TObjectPtr<UClass>_u_0 TVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined8 uVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined6 uVar15;
  undefined3 uVar16;
  bool bVar17;
  bool bVar18;
  undefined6 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  bool bVar28;
  undefined3 uVar29;
  int iVar30;
  bool bVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  FPrimaryAssetTypeInfo *pFVar37;
  FPrimaryAssetTypeInfo *pFVar38;
  int iVar39;
  longlong lVar40;
  FPrimaryAssetTypeInfo *pFVar41;
  
  if (param_2 < 0) {
    bVar31 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar31) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar31 = ::FDebug::CheckVerifyFailedImpl2
                       ("Num >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                        ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar31) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar32 = (param_2 + -2) / 2;
  iVar34 = iVar32 * 2 + 1;
  iVar35 = iVar34;
  iVar39 = iVar32;
  do {
    while (param_2 <= iVar34) {
LAB_14759a92c:
      if (iVar39 == 0) {
        iVar34 = param_2 + -1;
        lVar40 = (longlong)iVar34;
        if (0 < iVar34) {
          pFVar41 = param_1 + lVar40;
          do {
            uVar2 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr;
            bVar28 = param_1->bIsDynamicAsset;
            uVar29 = *(undefined3 *)&param_1->field_0x81;
            iVar25 = param_1->NumberOfAssets;
            FVar3 = param_1->PrimaryAssetType;
            uVar4 = *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr;
            uVar5 = *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x8;
            uVar6 = *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x10;
            uVar7 = *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x18;
            uVar8 = *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x20;
            TVar9 = (param_1->AssetBaseClassLoaded).field0_0x0;
            bVar17 = param_1->bHasBlueprintClasses;
            bVar18 = param_1->bIsEditorOnly;
            uVar19 = *(undefined6 *)&param_1->field_0x3a;
            pFVar10 = (param_1->Directories).AllocatorInstance.Data;
            iVar39 = (param_1->Directories).ArrayNum;
            iVar36 = (param_1->Directories).ArrayMax;
            pFVar11 = (param_1->SpecificAssets).AllocatorInstance.Data;
            iVar33 = (param_1->SpecificAssets).ArrayNum;
            iVar20 = (param_1->SpecificAssets).ArrayMax;
            iVar21 = (param_1->Rules).Priority;
            iVar22 = (param_1->Rules).ChunkId;
            uVar12 = *(undefined8 *)&(param_1->Rules).bApplyRecursively;
            pFVar13 = (param_1->AssetScanPaths).AllocatorInstance.Data;
            iVar23 = (param_1->AssetScanPaths).ArrayNum;
            iVar24 = (param_1->AssetScanPaths).ArrayMax;
            param_1->PrimaryAssetType = pFVar41->PrimaryAssetType;
            *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr = uVar2;
            uVar2 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x10;
            *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x8 =
                 *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x8;
            *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar2;
            uVar2 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x20;
            *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x18 =
                 *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x18;
            *(undefined8 *)&(param_1->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar2;
            bVar31 = pFVar41->bHasBlueprintClasses;
            bVar14 = pFVar41->bIsEditorOnly;
            uVar15 = *(undefined6 *)&pFVar41->field_0x3a;
            (param_1->AssetBaseClassLoaded).field0_0x0 = (pFVar41->AssetBaseClassLoaded).field0_0x0;
            param_1->bHasBlueprintClasses = bVar31;
            param_1->bIsEditorOnly = bVar14;
            *(undefined6 *)&param_1->field_0x3a = uVar15;
            iVar35 = (pFVar41->Directories).ArrayNum;
            iVar32 = (pFVar41->Directories).ArrayMax;
            (param_1->Directories).AllocatorInstance.Data =
                 (pFVar41->Directories).AllocatorInstance.Data;
            (param_1->Directories).ArrayNum = iVar35;
            (param_1->Directories).ArrayMax = iVar32;
            iVar35 = (pFVar41->SpecificAssets).ArrayNum;
            iVar32 = (pFVar41->SpecificAssets).ArrayMax;
            (param_1->SpecificAssets).AllocatorInstance.Data =
                 (pFVar41->SpecificAssets).AllocatorInstance.Data;
            (param_1->SpecificAssets).ArrayNum = iVar35;
            (param_1->SpecificAssets).ArrayMax = iVar32;
            iVar35 = (pFVar41->Rules).ChunkId;
            uVar2 = *(undefined8 *)&(pFVar41->Rules).bApplyRecursively;
            (param_1->Rules).Priority = (pFVar41->Rules).Priority;
            (param_1->Rules).ChunkId = iVar35;
            *(undefined8 *)&(param_1->Rules).bApplyRecursively = uVar2;
            iVar35 = (pFVar41->AssetScanPaths).ArrayNum;
            iVar32 = (pFVar41->AssetScanPaths).ArrayMax;
            (param_1->AssetScanPaths).AllocatorInstance.Data =
                 (pFVar41->AssetScanPaths).AllocatorInstance.Data;
            (param_1->AssetScanPaths).ArrayNum = iVar35;
            (param_1->AssetScanPaths).ArrayMax = iVar32;
            uVar16 = *(undefined3 *)&pFVar41->field_0x81;
            iVar35 = pFVar41->NumberOfAssets;
            param_1->bIsDynamicAsset = pFVar41->bIsDynamicAsset;
            *(undefined3 *)&param_1->field_0x81 = uVar16;
            param_1->NumberOfAssets = iVar35;
            pFVar41->PrimaryAssetType = FVar3;
            *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr = uVar4;
            *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x8 = uVar5;
            *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar6;
            *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x18 = uVar7;
            *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar8;
            (pFVar41->AssetBaseClassLoaded).field0_0x0 = TVar9;
            pFVar41->bHasBlueprintClasses = bVar17;
            pFVar41->bIsEditorOnly = bVar18;
            *(undefined6 *)&pFVar41->field_0x3a = uVar19;
            (pFVar41->Directories).AllocatorInstance.Data = pFVar10;
            (pFVar41->Directories).ArrayNum = iVar39;
            (pFVar41->Directories).ArrayMax = iVar36;
            (pFVar41->SpecificAssets).AllocatorInstance.Data = pFVar11;
            (pFVar41->SpecificAssets).ArrayNum = iVar33;
            (pFVar41->SpecificAssets).ArrayMax = iVar20;
            (pFVar41->Rules).Priority = iVar21;
            (pFVar41->Rules).ChunkId = iVar22;
            *(undefined8 *)&(pFVar41->Rules).bApplyRecursively = uVar12;
            (pFVar41->AssetScanPaths).AllocatorInstance.Data = pFVar13;
            (pFVar41->AssetScanPaths).ArrayNum = iVar23;
            (pFVar41->AssetScanPaths).ArrayMax = iVar24;
            pFVar41->bIsDynamicAsset = bVar28;
            *(undefined3 *)&pFVar41->field_0x81 = uVar29;
            pFVar41->NumberOfAssets = iVar25;
            iVar35 = 0;
            if (1 < iVar34) {
              do {
                iVar39 = iVar35 * 2;
                iVar32 = iVar39 + 1;
                if (iVar39 + 2 < iVar34) {
                  iVar36 = ::FName::Compare(&param_1[iVar39 + 2].PrimaryAssetType,
                                            &param_1[iVar32].PrimaryAssetType);
                  if (iVar36 < 0) {
                    iVar32 = iVar39;
                  }
                  iVar32 = iVar32 + 1;
                }
                pFVar38 = param_1 + iVar32;
                pFVar37 = param_1 + iVar35;
                iVar35 = ::FName::Compare(&pFVar37->PrimaryAssetType,&pFVar38->PrimaryAssetType);
                if (-1 < iVar35) break;
                uVar2 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr;
                bVar28 = pFVar37->bIsDynamicAsset;
                uVar29 = *(undefined3 *)&pFVar37->field_0x81;
                iVar26 = pFVar37->NumberOfAssets;
                FVar3 = pFVar37->PrimaryAssetType;
                uVar4 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr;
                uVar5 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x8;
                uVar6 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x10;
                uVar7 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x18;
                uVar8 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x20;
                TVar9 = (pFVar37->AssetBaseClassLoaded).field0_0x0;
                bVar17 = pFVar37->bHasBlueprintClasses;
                bVar18 = pFVar37->bIsEditorOnly;
                uVar19 = *(undefined6 *)&pFVar37->field_0x3a;
                pFVar10 = (pFVar37->Directories).AllocatorInstance.Data;
                iVar36 = (pFVar37->Directories).ArrayNum;
                iVar33 = (pFVar37->Directories).ArrayMax;
                pFVar11 = (pFVar37->SpecificAssets).AllocatorInstance.Data;
                iVar20 = (pFVar37->SpecificAssets).ArrayNum;
                iVar21 = (pFVar37->SpecificAssets).ArrayMax;
                iVar22 = (pFVar37->Rules).Priority;
                iVar23 = (pFVar37->Rules).ChunkId;
                uVar12 = *(undefined8 *)&(pFVar37->Rules).bApplyRecursively;
                pFVar13 = (pFVar37->AssetScanPaths).AllocatorInstance.Data;
                iVar24 = (pFVar37->AssetScanPaths).ArrayNum;
                iVar25 = (pFVar37->AssetScanPaths).ArrayMax;
                pFVar37->PrimaryAssetType = pFVar38->PrimaryAssetType;
                *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr = uVar2;
                uVar2 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x10;
                *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x8 =
                     *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x8;
                *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar2;
                uVar2 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x20;
                *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x18 =
                     *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x18;
                *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar2;
                bVar31 = pFVar38->bHasBlueprintClasses;
                bVar14 = pFVar38->bIsEditorOnly;
                uVar15 = *(undefined6 *)&pFVar38->field_0x3a;
                (pFVar37->AssetBaseClassLoaded).field0_0x0 =
                     (pFVar38->AssetBaseClassLoaded).field0_0x0;
                pFVar37->bHasBlueprintClasses = bVar31;
                pFVar37->bIsEditorOnly = bVar14;
                *(undefined6 *)&pFVar37->field_0x3a = uVar15;
                iVar35 = (pFVar38->Directories).ArrayNum;
                iVar39 = (pFVar38->Directories).ArrayMax;
                (pFVar37->Directories).AllocatorInstance.Data =
                     (pFVar38->Directories).AllocatorInstance.Data;
                (pFVar37->Directories).ArrayNum = iVar35;
                (pFVar37->Directories).ArrayMax = iVar39;
                iVar35 = (pFVar38->SpecificAssets).ArrayNum;
                iVar39 = (pFVar38->SpecificAssets).ArrayMax;
                (pFVar37->SpecificAssets).AllocatorInstance.Data =
                     (pFVar38->SpecificAssets).AllocatorInstance.Data;
                (pFVar37->SpecificAssets).ArrayNum = iVar35;
                (pFVar37->SpecificAssets).ArrayMax = iVar39;
                iVar35 = (pFVar38->Rules).ChunkId;
                uVar2 = *(undefined8 *)&(pFVar38->Rules).bApplyRecursively;
                (pFVar37->Rules).Priority = (pFVar38->Rules).Priority;
                (pFVar37->Rules).ChunkId = iVar35;
                *(undefined8 *)&(pFVar37->Rules).bApplyRecursively = uVar2;
                iVar35 = (pFVar38->AssetScanPaths).ArrayNum;
                iVar39 = (pFVar38->AssetScanPaths).ArrayMax;
                (pFVar37->AssetScanPaths).AllocatorInstance.Data =
                     (pFVar38->AssetScanPaths).AllocatorInstance.Data;
                (pFVar37->AssetScanPaths).ArrayNum = iVar35;
                (pFVar37->AssetScanPaths).ArrayMax = iVar39;
                uVar16 = *(undefined3 *)&pFVar38->field_0x81;
                iVar35 = pFVar38->NumberOfAssets;
                pFVar37->bIsDynamicAsset = pFVar38->bIsDynamicAsset;
                *(undefined3 *)&pFVar37->field_0x81 = uVar16;
                pFVar37->NumberOfAssets = iVar35;
                pFVar38->PrimaryAssetType = FVar3;
                *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr = uVar4;
                *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x8 = uVar5;
                *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar6;
                *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x18 = uVar7;
                *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar8;
                (pFVar38->AssetBaseClassLoaded).field0_0x0 = TVar9;
                pFVar38->bHasBlueprintClasses = bVar17;
                pFVar38->bIsEditorOnly = bVar18;
                *(undefined6 *)&pFVar38->field_0x3a = uVar19;
                (pFVar38->Directories).AllocatorInstance.Data = pFVar10;
                (pFVar38->Directories).ArrayNum = iVar36;
                (pFVar38->Directories).ArrayMax = iVar33;
                (pFVar38->SpecificAssets).AllocatorInstance.Data = pFVar11;
                (pFVar38->SpecificAssets).ArrayNum = iVar20;
                (pFVar38->SpecificAssets).ArrayMax = iVar21;
                (pFVar38->Rules).Priority = iVar22;
                (pFVar38->Rules).ChunkId = iVar23;
                *(undefined8 *)&(pFVar38->Rules).bApplyRecursively = uVar12;
                (pFVar38->AssetScanPaths).AllocatorInstance.Data = pFVar13;
                (pFVar38->AssetScanPaths).ArrayNum = iVar24;
                (pFVar38->AssetScanPaths).ArrayMax = iVar25;
                pFVar38->bIsDynamicAsset = bVar28;
                *(undefined3 *)&pFVar38->field_0x81 = uVar29;
                pFVar38->NumberOfAssets = iVar26;
                iVar35 = iVar32;
              } while (iVar32 * 2 + 1 < iVar34);
            }
            iVar34 = iVar34 + -1;
            lVar40 = lVar40 + -1;
            pFVar41 = pFVar41 + -1;
          } while (0 < lVar40);
        }
        return;
      }
      iVar32 = iVar39 + -1;
      iVar34 = iVar35 + -2;
      iVar35 = iVar34;
      iVar39 = iVar32;
    }
    iVar34 = iVar32 * 2;
    iVar36 = iVar34 + 1;
    if (iVar34 + 2 < param_2) {
      iVar33 = ::FName::Compare(&param_1[iVar34 + 2].PrimaryAssetType,
                                &param_1[iVar36].PrimaryAssetType);
      if (iVar33 < 0) {
        iVar36 = iVar34;
      }
      iVar36 = iVar36 + 1;
    }
    pFVar37 = param_1 + iVar36;
    pFVar41 = param_1 + iVar32;
    iVar34 = ::FName::Compare(&pFVar41->PrimaryAssetType,&pFVar37->PrimaryAssetType);
    if (-1 < iVar34) goto LAB_14759a92c;
    uVar2 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr;
    iVar34 = iVar36 * 2 + 1;
    bVar28 = pFVar41->bIsDynamicAsset;
    uVar29 = *(undefined3 *)&pFVar41->field_0x81;
    iVar30 = pFVar41->NumberOfAssets;
    FVar3 = pFVar41->PrimaryAssetType;
    uVar4 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr;
    uVar5 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x8;
    uVar6 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x10;
    uVar7 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x18;
    uVar8 = *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x20;
    TVar9 = (pFVar41->AssetBaseClassLoaded).field0_0x0;
    bVar17 = pFVar41->bHasBlueprintClasses;
    bVar18 = pFVar41->bIsEditorOnly;
    uVar19 = *(undefined6 *)&pFVar41->field_0x3a;
    pFVar10 = (pFVar41->Directories).AllocatorInstance.Data;
    iVar20 = (pFVar41->Directories).ArrayNum;
    iVar21 = (pFVar41->Directories).ArrayMax;
    pFVar11 = (pFVar41->SpecificAssets).AllocatorInstance.Data;
    iVar22 = (pFVar41->SpecificAssets).ArrayNum;
    iVar23 = (pFVar41->SpecificAssets).ArrayMax;
    iVar24 = (pFVar41->Rules).Priority;
    iVar25 = (pFVar41->Rules).ChunkId;
    uVar12 = *(undefined8 *)&(pFVar41->Rules).bApplyRecursively;
    pFVar13 = (pFVar41->AssetScanPaths).AllocatorInstance.Data;
    iVar26 = (pFVar41->AssetScanPaths).ArrayNum;
    iVar27 = (pFVar41->AssetScanPaths).ArrayMax;
    pFVar41->PrimaryAssetType = pFVar37->PrimaryAssetType;
    *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr = uVar2;
    uVar2 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x10;
    *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x8 =
         *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x8;
    *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar2;
    uVar2 = *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x20;
    *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x18 =
         *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x18;
    *(undefined8 *)&(pFVar41->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar2;
    bVar31 = pFVar37->bHasBlueprintClasses;
    bVar14 = pFVar37->bIsEditorOnly;
    uVar15 = *(undefined6 *)&pFVar37->field_0x3a;
    (pFVar41->AssetBaseClassLoaded).field0_0x0 = (pFVar37->AssetBaseClassLoaded).field0_0x0;
    pFVar41->bHasBlueprintClasses = bVar31;
    pFVar41->bIsEditorOnly = bVar14;
    *(undefined6 *)&pFVar41->field_0x3a = uVar15;
    iVar32 = (pFVar37->Directories).ArrayNum;
    iVar33 = (pFVar37->Directories).ArrayMax;
    (pFVar41->Directories).AllocatorInstance.Data = (pFVar37->Directories).AllocatorInstance.Data;
    (pFVar41->Directories).ArrayNum = iVar32;
    (pFVar41->Directories).ArrayMax = iVar33;
    iVar32 = (pFVar37->SpecificAssets).ArrayNum;
    iVar33 = (pFVar37->SpecificAssets).ArrayMax;
    (pFVar41->SpecificAssets).AllocatorInstance.Data =
         (pFVar37->SpecificAssets).AllocatorInstance.Data;
    (pFVar41->SpecificAssets).ArrayNum = iVar32;
    (pFVar41->SpecificAssets).ArrayMax = iVar33;
    iVar32 = (pFVar37->Rules).ChunkId;
    uVar2 = *(undefined8 *)&(pFVar37->Rules).bApplyRecursively;
    (pFVar41->Rules).Priority = (pFVar37->Rules).Priority;
    (pFVar41->Rules).ChunkId = iVar32;
    *(undefined8 *)&(pFVar41->Rules).bApplyRecursively = uVar2;
    iVar32 = (pFVar37->AssetScanPaths).ArrayNum;
    iVar33 = (pFVar37->AssetScanPaths).ArrayMax;
    (pFVar41->AssetScanPaths).AllocatorInstance.Data =
         (pFVar37->AssetScanPaths).AllocatorInstance.Data;
    (pFVar41->AssetScanPaths).ArrayNum = iVar32;
    (pFVar41->AssetScanPaths).ArrayMax = iVar33;
    uVar16 = *(undefined3 *)&pFVar37->field_0x81;
    iVar32 = pFVar37->NumberOfAssets;
    pFVar41->bIsDynamicAsset = pFVar37->bIsDynamicAsset;
    *(undefined3 *)&pFVar41->field_0x81 = uVar16;
    pFVar41->NumberOfAssets = iVar32;
    pFVar37->PrimaryAssetType = FVar3;
    *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr = uVar4;
    *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x8 = uVar5;
    *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar6;
    *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x18 = uVar7;
    *(undefined8 *)&(pFVar37->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar8;
    (pFVar37->AssetBaseClassLoaded).field0_0x0 = TVar9;
    pFVar37->bHasBlueprintClasses = bVar17;
    pFVar37->bIsEditorOnly = bVar18;
    *(undefined6 *)&pFVar37->field_0x3a = uVar19;
    (pFVar37->Directories).AllocatorInstance.Data = pFVar10;
    (pFVar37->Directories).ArrayNum = iVar20;
    (pFVar37->Directories).ArrayMax = iVar21;
    (pFVar37->SpecificAssets).AllocatorInstance.Data = pFVar11;
    (pFVar37->SpecificAssets).ArrayNum = iVar22;
    (pFVar37->SpecificAssets).ArrayMax = iVar23;
    (pFVar37->Rules).Priority = iVar24;
    (pFVar37->Rules).ChunkId = iVar25;
    *(undefined8 *)&(pFVar37->Rules).bApplyRecursively = uVar12;
    (pFVar37->AssetScanPaths).AllocatorInstance.Data = pFVar13;
    (pFVar37->AssetScanPaths).ArrayNum = iVar26;
    (pFVar37->AssetScanPaths).ArrayMax = iVar27;
    pFVar37->bIsDynamicAsset = bVar28;
    *(undefined3 *)&pFVar37->field_0x81 = uVar29;
    pFVar37->NumberOfAssets = iVar30;
    iVar32 = iVar36;
  } while( true );
}

// InternalConstructor<AAtmosphericFog> @ 14759abb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AAtmosphericFog>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AInfo::AInfo((AInfo *)this,param_1);
    this->_padding_ = (longlong)&___7AAtmosphericFog__6B_;
    this[1]._padding_ = 0;
    pFVar3 = FName::FName(&local_res8,L"AtmosphericFogComponent0");
    FVar2 = *pFVar3;
    pUVar4 = UAtmosphericFogComponent::StaticClass();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    (this->RootComponent).field0_0x0 = *(TObjectPtr<USceneComponent>_u_0 *)(this + 1);
    pbVar1 = (byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *pbVar1 = *pbVar1 | 2;
    AActor::SetHidden(this,false);
  }
  return;
}

// InternalConstructor<ASkeletalMeshActor> @ 14759ac80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<ASkeletalMeshActor>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  AActor *this;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FName local_res8;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ASkeletalMeshActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    puVar1 = &this[1].field_0x58;
    this[1].bNetTemporary = '\0';
    this[1].bReplicateUsingRegisteredSubObjectList = '\0';
    this[1].bNetCheckedInitialPhysicsState = '\0';
    this[1].bAllowReceiveTickEventOnDedicatedServer = '\0';
    this[1].bCanBeInCluster = '\0';
    this[1].bReplicates = '\0';
    this[1].bActorSeamlessTraveled = '\0';
    this[1].bIsEditorOnlyActor = '\0';
    this[1].bEnableAutoLODGeneration = '\0';
    this[1].bIgnoresOriginShifting = '\0';
    this[1].bGenerateOverlapEventsDuringLevelStreaming = '\0';
    this[1].bFindCameraComponentWhenViewTarget = '\0';
    this[1].bCollideWhenPlacing = '\0';
    this[1].bBlockInput = '\0';
    this[1].bCanBeDamaged = '\0';
    this[1].bAutoDestroyWhenFinished = '\0';
    this[1].bAllowTickBeforeBeginPlay = '\0';
    this[1].bReplayRewindable = '\0';
    this[1].bRelevantForLevelBounds = '\0';
    this[1].bRelevantForNetworkReplays = '\0';
    this[1].bNetUseOwnerRelevancy = '\0';
    this[1].bNetLoadOnClient = '\0';
    this[1].bExchangedRoles = '\0';
    this[1].bForceNetAddressable = '\0';
    this[1].bTearOff = '\0';
    this[1].bHidden = '\0';
    this[1].bCallPreReplicationForReplay = '\0';
    this[1].bCallPreReplication = '\0';
    this[1].bReplicateMovement = '\0';
    this[1].bAlwaysRelevant = '\0';
    this[1].bOnlyRelevantToOwner = '\0';
    this[1].bNetStartup = '\0';
    *(undefined4 *)&this[1].field_0x5c = 0x80;
    this[1].RemoteRole = 0xff;
    this[1].ActorCategory = 0xff;
    *(undefined2 *)&this[1].field_0x62 = 0xffff;
    this[1].InitialLifeSpan = 0.0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined4 *)&this[1].AttachmentReplication.LocationOffset = 0;
    pFVar3 = FName::FName(&local_res8,L"SkeletalMeshComponent0");
    FVar2 = *pFVar3;
    pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    this[1]._padding_ = (longlong)pUVar5;
    pUVar5[0x33].field_0xc = 1;
    (**(code **)(*(longlong *)this[1]._padding_ + 0x788))
              ((longlong *)this[1]._padding_,UCollisionProfile::PhysicsActor_ProfileName,1);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)this[1]._padding_ != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this[1]._padding_);
    }
    (this->RootComponent).field0_0x0 = (TObjectPtr<USceneComponent>_u_0)this[1]._padding_;
    *(uint *)&this[1]._padding_ = (uint)this[1]._padding_ | 1;
  }
  return;
}

// InternalConstructor<UAnimBlueprint> @ 14759add0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UAnimBlueprint>(FObjectInitializer *param_1)

{
  UBlueprint *this;
  
  this = (UBlueprint *)param_1->Obj;
  if (this != (UBlueprint *)0x0) {
    UBlueprint::UBlueprint(this,param_1);
    *(undefined1 *)((longlong)&this[1]._padding_ + 1) = 1;
    this->_padding_ = (longlong)&UAnimBlueprint::_vftable__for__UBlueprintCore__;
    this->_padding_ = (longlong)&UAnimBlueprint::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = (longlong)&___7UAnimBlueprint__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAssetManager> @ 14759ae40

void __cdecl InternalConstructor<UAssetManager>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UAssetManager__6B_;
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
  *(undefined8 *)(this + 5) = 0;
  *(undefined8 *)&this[5].field_0x8 = 0;
  *(undefined8 *)&this[5].field_0x20 = 0;
  *(undefined4 *)(this + 6) = 0;
  *(undefined4 *)&this[6].field_0x4 = 0x80;
  *(undefined4 *)&this[6].field_0x8 = 0xffffffff;
  *(undefined4 *)&this[6].field_0xc = 0;
  *(undefined8 *)&this[6].field_0x18 = 0;
  *(undefined4 *)&this[6].field_0x20 = 0;
  *(undefined8 *)(this + 7) = 0;
  *(undefined8 *)&this[7].field_0x8 = 0;
  *(undefined8 *)&this[7].field_0x20 = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)&this[8].field_0x4 = 0x80;
  *(undefined4 *)&this[8].field_0x8 = 0xffffffff;
  *(undefined4 *)&this[8].field_0xc = 0;
  *(undefined8 *)&this[8].field_0x18 = 0;
  *(undefined4 *)&this[8].field_0x20 = 0;
  *(undefined8 *)(this + 9) = 0;
  *(undefined8 *)&this[9].field_0x8 = 0;
  *(undefined8 *)&this[9].field_0x20 = 0;
  *(undefined4 *)(this + 10) = 0;
  *(undefined4 *)&this[10].field_0x4 = 0x80;
  *(undefined4 *)&this[10].field_0x8 = 0xffffffff;
  *(undefined4 *)&this[10].field_0xc = 0;
  *(undefined8 *)&this[10].field_0x18 = 0;
  *(undefined4 *)&this[10].field_0x20 = 0;
  *(undefined8 *)(this + 0xb) = 0;
  *(undefined8 *)&this[0xb].field_0x8 = 0;
  *(undefined8 *)&this[0xb].field_0x20 = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)&this[0xc].field_0x4 = 0x80;
  *(undefined4 *)&this[0xc].field_0x8 = 0xffffffff;
  *(undefined4 *)&this[0xc].field_0xc = 0;
  *(undefined8 *)&this[0xc].field_0x18 = 0;
  *(undefined4 *)&this[0xc].field_0x20 = 0;
  *(undefined8 *)(this + 0xd) = 0;
  *(undefined8 *)&this[0xd].field_0x8 = 0;
  *(undefined8 *)&this[0xd].field_0x10 = 0;
  *(undefined8 *)&this[0xd].field_0x18 = 0;
  *(undefined8 *)&this[0xd].field_0x20 = 0;
  *(undefined8 *)(this + 0xe) = 0;
  FStreamableManager::FStreamableManager((FStreamableManager *)&this[0xe].field_0x8);
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined8 *)&this[0x14].field_0x8 = 0;
  *(undefined8 *)&this[0x14].field_0x10 = 0;
  *(undefined8 *)&this[0x14].field_0x18 = 0;
  *(undefined8 *)&this[0x15].field_0x8 = 0;
  *(undefined4 *)&this[0x15].field_0x10 = 0;
  *(undefined4 *)&this[0x15].field_0x14 = 0x80;
  *(undefined4 *)&this[0x15].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[0x15].field_0x1c = 0;
  *(undefined8 *)(this + 0x16) = 0;
  *(undefined4 *)&this[0x16].field_0x8 = 0;
  *(undefined8 *)&this[0x16].field_0x10 = 0;
  *(undefined8 *)&this[0x16].field_0x18 = 0;
  *(undefined2 *)&this[0x16].field_0x26 = 0x100;
  *(undefined8 *)&this[0x17].field_0x10 = 0;
  *(undefined8 *)&this[0x17].field_0x18 = 0;
  *(undefined8 *)&this[0x18].field_0x8 = 0;
  *(undefined4 *)&this[0x18].field_0x10 = 0;
  *(undefined4 *)&this[0x18].field_0x14 = 0x80;
  *(undefined4 *)&this[0x18].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[0x18].field_0x1c = 0;
  *(undefined8 *)(this + 0x19) = 0;
  *(undefined4 *)&this[0x19].field_0x8 = 0;
  *(undefined8 *)&this[0x19].field_0x10 = 0;
  *(undefined8 *)&this[0x19].field_0x18 = 0;
  *(undefined8 *)&this[0x1a].field_0x8 = 0;
  *(undefined4 *)&this[0x1a].field_0x10 = 0;
  *(undefined4 *)&this[0x1a].field_0x14 = 0x80;
  *(undefined4 *)&this[0x1a].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[0x1a].field_0x1c = 0;
  *(undefined8 *)(this + 0x1b) = 0;
  *(undefined4 *)&this[0x1b].field_0x8 = 0;
  *(undefined8 *)&this[0x1b].field_0x10 = 0;
  *(undefined8 *)&this[0x1b].field_0x18 = 0;
  *(undefined8 *)&this[0x1c].field_0x8 = 0;
  *(undefined4 *)&this[0x1c].field_0x10 = 0;
  *(undefined4 *)&this[0x1c].field_0x14 = 0x80;
  *(undefined4 *)&this[0x1c].field_0x18 = 0xffffffff;
  *(undefined4 *)&this[0x1c].field_0x1c = 0;
  *(undefined8 *)(this + 0x1d) = 0;
  *(undefined4 *)&this[0x1d].field_0x8 = 0;
  *(undefined8 *)&this[0x1d].field_0x10 = 0;
  *(undefined8 *)&this[0x1d].field_0x18 = 0;
  *(undefined8 *)&this[0x1d].field_0x20 = 0;
  *(undefined8 *)(this + 0x1e) = 2;
  *(undefined8 *)&this[0x1e].field_0x8 = 0;
  *(undefined8 *)&this[0x1e].field_0x18 = 0;
  *(undefined8 *)&this[0x1e].field_0x20 = 0;
  *(undefined8 *)&this[0x1f].field_0x10 = 0;
  *(undefined2 *)&this[0x1e].field_0x10 = 0;
  *(undefined4 *)&this[0x1f].field_0x18 = 0;
  *(undefined4 *)&this[0x1f].field_0x1c = 0x80;
  *(undefined4 *)&this[0x1f].field_0x20 = 0xffffffff;
  *(undefined4 *)&this[0x1f].field_0x24 = 0;
  *(undefined8 *)&this[0x20].field_0x8 = 0;
  *(undefined4 *)&this[0x20].field_0x10 = 0;
  *(undefined4 *)&this[0x16].field_0x20 = 0;
  this[0x16].field_0x24 = 0;
  *(undefined4 *)(this + 0x17) = 0;
  *(undefined4 *)&this[0x17].field_0x4 = 0x1000000;
  this[0x17].field_0x8 = 0;
  *(undefined4 *)&this[0x17].field_0xc = 0;
  return;
}

// InternalConstructor<UAssetUserData> @ 14759ae60

void __cdecl InternalConstructor<UAssetUserData>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UAssetUserData__6B_;
  }
  return;
}

// InternalConstructor<UAsyncActionChangePrimaryAssetBundles> @ 14759ae90

void __cdecl InternalConstructor<UAsyncActionChangePrimaryAssetBundles>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncActionChangePrimaryAssetBundles__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// InternalConstructor<UAsyncActionLoadPrimaryAsset> @ 14759af00

void __cdecl InternalConstructor<UAsyncActionLoadPrimaryAsset>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAsset__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// InternalConstructor<UAsyncActionLoadPrimaryAssetBase> @ 14759af70

void __cdecl InternalConstructor<UAsyncActionLoadPrimaryAssetBase>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAsyncActionLoadPrimaryAssetClass> @ 14759afd0

void __cdecl InternalConstructor<UAsyncActionLoadPrimaryAssetClass>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetClass__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// InternalConstructor<UAsyncActionLoadPrimaryAssetClassList> @ 14759b040

void __cdecl InternalConstructor<UAsyncActionLoadPrimaryAssetClassList>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetClassList__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// InternalConstructor<UAsyncActionLoadPrimaryAssetList> @ 14759b0b0

void __cdecl InternalConstructor<UAsyncActionLoadPrimaryAssetList>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetList__6B_;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// InternalConstructor<UAtmosphericFogComponent> @ 14759b120

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl InternalConstructor<UAtmosphericFogComponent>(FObjectInitializer *param_1)

{
  USkyAtmosphereComponent *this;
  
  this = (USkyAtmosphereComponent *)param_1->Obj;
  if (this != (USkyAtmosphereComponent *)0x0) {
    USkyAtmosphereComponent::USkyAtmosphereComponent(this,param_1);
    this->bIsAtmosphericFog = true;
    this->_padding_ = (longlong)&UAtmosphericFogComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAtmosphericFogComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UAtmosphericFogComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    USkyAtmosphereComponent::SetPositionToMatchDeprecatedAtmosphericFog(this);
    return;
  }
  return;
}

// InternalConstructor<UMeshDeformerCollection> @ 14759b180

void __cdecl InternalConstructor<UMeshDeformerCollection>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UMeshDeformerCollection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UMirrorDataTable> @ 14759b1d0

void __cdecl InternalConstructor<UMirrorDataTable>(FObjectInitializer *param_1)

{
  UDataTable *this;
  
  this = (UDataTable *)param_1->Obj;
  if (this != (UDataTable *)0x0) {
    UDataTable::UDataTable(this,param_1);
    this->_padding_ = (longlong)&___7UMirrorDataTable__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RowStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    *(undefined8 *)&this[1].RowMap = 0;
    *(undefined8 *)&this[1].RowMap.field_0x8 = 0;
    *(undefined8 *)&this[1].RowMap.field_0x10 = 0;
    *(undefined8 *)&this[1].RowMap.field_0x18 = 0;
    *(undefined8 *)&this[1].RowMap.field_0x20 = 0;
    *(undefined8 *)&this[1].RowMap.field_0x28 = 0;
    *(undefined8 *)&this[1].RowMap.field_0x40 = 0;
    *(undefined2 *)&this[1]._padding_ = 0x101;
    *(undefined4 *)&this[1].RowMap.field_0x48 = 0;
    *(undefined4 *)&this[1].RowMap.field_0x4c = 0x80;
    *(undefined4 *)&this[1].field_0x80 = 0xffffffff;
    this[1]._padding_ = 0;
    this[1].ImportKeyField.Data.ArrayNum = 0;
    this[1].ImportKeyField.Data.ArrayMax = 0;
    *(undefined4 *)&this[1].OnDataTableChangedDelegate = 0;
    *(undefined8 *)&this[1].OnDataTableChangedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].OnDataTableChangedDelegate.field_0x10 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2].RowStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    *(undefined4 *)&this[2].RowMap = 0;
    *(undefined8 *)&this[2].RowMap.field_0x8 = 0;
    *(undefined8 *)&this[2].RowMap.field_0x10 = 0;
    *(undefined8 *)&this[2].RowMap.field_0x28 = 0;
    *(undefined4 *)&this[2].RowMap.field_0x30 = 0;
    *(undefined4 *)&this[2].RowMap.field_0x34 = 0x80;
    *(undefined4 *)&this[2].RowMap.field_0x38 = 0xffffffff;
    *(undefined4 *)&this[2].RowMap.field_0x3c = 0;
    *(undefined8 *)&this[2].RowMap.field_0x48 = 0;
    *(undefined4 *)&this[2].field_0x80 = 0;
  }
  return;
}

// InternalConstructor<UNodeMappingContainer> @ 14759b320

void __cdecl InternalConstructor<UNodeMappingContainer>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UNodeMappingContainer__6B_;
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
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined4 *)(this + 6) = 0;
    *(undefined4 *)&this[6].field_0x4 = 0x80;
    *(undefined4 *)&this[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&this[6].field_0xc = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined4 *)&this[6].field_0x20 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[7].field_0x18,0);
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x18 = 0;
    *(undefined8 *)&this[8].field_0x20 = 0;
    *(undefined8 *)&this[8].field_0x10 = 0;
    *(undefined8 *)&this[8].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&this[8].field_0x18,0);
  }
  return;
}

// InternalConstructor<UNodeMappingProviderInterface> @ 14759b460

void __cdecl InternalConstructor<UNodeMappingProviderInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UNodeMappingProviderInterface__6B_;
  }
  return;
}

// InternalConstructor<UPoseAsset> @ 14759b490

void __cdecl InternalConstructor<UPoseAsset>(FObjectInitializer *param_1)

{
  UAnimationAsset *this;
  
  this = (UAnimationAsset *)param_1->Obj;
  if (this != (UAnimationAsset *)0x0) {
    UAnimationAsset::UAnimationAsset(this,param_1);
    *(undefined4 *)((longlong)&this[1].AssetUserData.AllocatorInstance.Data + 4) = 0xffffffff;
    this->_padding_ = (longlong)&UPoseAsset::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPoseAsset::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UPoseAsset::_vftable__for__IInterface_PreviewMeshProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Skeleton.field0_0x0.DebugPtr = (USkeleton *)0x0;
    this[1].SkeletonGuid.A = 0;
    this[1].SkeletonGuid.B = 0;
    this[1].SkeletonGuid.C = 0;
    this[1].SkeletonGuid.D = 0;
    this[1].SkeletonVirtualBoneGuid.A = 0;
    this[1].SkeletonVirtualBoneGuid.B = 0;
    this[1].SkeletonVirtualBoneGuid.C = 0;
    this[1].SkeletonVirtualBoneGuid.D = 0;
    this[1].MetaData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].MetaData.ArrayNum = 0;
    this[1].MetaData.ArrayMax = 0;
    *(undefined1 *)&this[1].AssetUserData.AllocatorInstance.Data = 0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UPreviewCollectionInterface> @ 14759b570

void __cdecl InternalConstructor<UPreviewCollectionInterface>(FObjectInitializer *param_1)

{
  UInterface *this;
  
  this = (UInterface *)param_1->Obj;
  if (this != (UInterface *)0x0) {
    UInterface::UInterface(this,param_1);
    *(undefined ***)this = &___7UPreviewCollectionInterface__6B_;
  }
  return;
}

// InternalConstructor<UPreviewMeshCollection> @ 14759b5a0

void __cdecl InternalConstructor<UPreviewMeshCollection>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&UPreviewMeshCollection::_vftable__for__UDataAsset__;
    this[1]._padding_ =
         (longlong)&UPreviewMeshCollection::_vftable__for__IPreviewCollectionInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<USkeleton> @ 14759b5f0

void __cdecl InternalConstructor<USkeleton>(FObjectInitializer *param_1)

{
  if ((USkeleton *)param_1->Obj != (USkeleton *)0x0) {
    USkeleton::USkeleton((USkeleton *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UTransformTrajectoryBlueprintLibrary> @ 14759b610

void __cdecl InternalConstructor<UTransformTrajectoryBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UTransformTrajectoryBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UVariableFrameStrippingSettings> @ 14759b640

void __cdecl InternalConstructor<UVariableFrameStrippingSettings>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UVariableFrameStrippingSettings__6B_;
    *(undefined1 *)(this + 1) = 0;
    *(undefined4 *)&this[1].field_0x4 = 3;
  }
  return;
}

// InternalVTableHelperCtorCaller<AAtmosphericFog> @ 14759b680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AAtmosphericFog>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AInfo *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AAtmosphericFog::GetPrivateStaticClass();
  this = (AInfo *)StaticAllocateObject
                            (pUVar2,pUVar1,(FName)0x0,
                             RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,Borrowed,false,
                             (bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                             (FGCReconstructionGuard *)0x0);
  if (this != (AInfo *)0x0) {
    AInfo::AInfo(this,param_1);
    *(undefined ***)this = &___7AAtmosphericFog__6B_;
    *(undefined8 *)(this + 1) = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<ASkeletalMeshActor> @ 14759b740

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<ASkeletalMeshActor>(FVTableHelper *param_1)

{
  undefined1 *puVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  AActor *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = ASkeletalMeshActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7ASkeletalMeshActor__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick._padding_ = 0;
    this[1].PrimaryActorTick.Target = (AActor *)0x0;
    puVar1 = &this[1].field_0x58;
    this[1].bNetTemporary = '\0';
    this[1].bReplicateUsingRegisteredSubObjectList = '\0';
    this[1].bNetCheckedInitialPhysicsState = '\0';
    this[1].bAllowReceiveTickEventOnDedicatedServer = '\0';
    this[1].bCanBeInCluster = '\0';
    this[1].bReplicates = '\0';
    this[1].bActorSeamlessTraveled = '\0';
    this[1].bIsEditorOnlyActor = '\0';
    this[1].bEnableAutoLODGeneration = '\0';
    this[1].bIgnoresOriginShifting = '\0';
    this[1].bGenerateOverlapEventsDuringLevelStreaming = '\0';
    this[1].bFindCameraComponentWhenViewTarget = '\0';
    this[1].bCollideWhenPlacing = '\0';
    this[1].bBlockInput = '\0';
    this[1].bCanBeDamaged = '\0';
    this[1].bAutoDestroyWhenFinished = '\0';
    this[1].bAllowTickBeforeBeginPlay = '\0';
    this[1].bReplayRewindable = '\0';
    this[1].bRelevantForLevelBounds = '\0';
    this[1].bRelevantForNetworkReplays = '\0';
    this[1].bNetUseOwnerRelevancy = '\0';
    this[1].bNetLoadOnClient = '\0';
    this[1].bExchangedRoles = '\0';
    this[1].bForceNetAddressable = '\0';
    this[1].bTearOff = '\0';
    this[1].bHidden = '\0';
    this[1].bCallPreReplicationForReplay = '\0';
    this[1].bCallPreReplication = '\0';
    this[1].bReplicateMovement = '\0';
    this[1].bAlwaysRelevant = '\0';
    this[1].bOnlyRelevantToOwner = '\0';
    this[1].bNetStartup = '\0';
    *(undefined4 *)&this[1].field_0x5c = 0x80;
    this[1].RemoteRole = 0xff;
    this[1].ActorCategory = 0xff;
    *(undefined2 *)&this[1].field_0x62 = 0xffff;
    this[1].InitialLifeSpan = 0.0;
    this[1].AttachmentReplication.AttachParent.field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined4 *)&this[1].AttachmentReplication.LocationOffset = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAnimBlueprint> @ 14759b860

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAnimBlueprint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprint *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAnimBlueprint::GetPrivateStaticClass();
  this = (UBlueprint *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprint *)0x0) {
    UBlueprint::UBlueprint(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UAnimBlueprint::_vftable__for__UBlueprintCore__;
    this->_padding_ = (longlong)&UAnimBlueprint::_vftable__for__IBlueprintPropertyGuidProvider__;
    this[1]._padding_ = (longlong)&___7UAnimBlueprint__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAssetManager> @ 14759b940

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAssetManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAssetManager *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAssetManager::GetPrivateStaticClass();
  pUVar3 = (UAssetManager *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UAssetManager *)0x0) {
    pUVar3 = UAssetManager::UAssetManager(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAssetUserData> @ 14759b9e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAssetUserData>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAssetUserData::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UAssetUserData__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAsyncActionChangePrimaryAssetBundles> @ 14759ba90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAsyncActionChangePrimaryAssetBundles>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncActionChangePrimaryAssetBundles::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncActionChangePrimaryAssetBundles__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAsset> @ 14759bb70

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncActionLoadPrimaryAsset::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAsset__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetBase> @ 14759bc50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetBase>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncActionLoadPrimaryAssetBase::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetClass> @ 14759bd20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncActionLoadPrimaryAssetClass::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetClass__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetClassList> @ 14759be00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetClassList>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncActionLoadPrimaryAssetClassList::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetClassList__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetList> @ 14759bee0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetList>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAsyncActionLoadPrimaryAssetList::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetList__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAtmosphericFogComponent> @ 14759bfc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAtmosphericFogComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USkyAtmosphereComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAtmosphericFogComponent::GetPrivateStaticClass();
  this = (USkyAtmosphereComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USkyAtmosphereComponent *)0x0) {
    USkyAtmosphereComponent::USkyAtmosphereComponent(this,param_1);
    this->_padding_ = (longlong)&UAtmosphericFogComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UAtmosphericFogComponent::_vftable__for__IInterface_AssetUserData__
    ;
    this->_padding_ =
         (longlong)&UAtmosphericFogComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMeshDeformerCollection> @ 14759c080

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMeshDeformerCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMeshDeformerCollection::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UMeshDeformerCollection__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UMirrorDataTable> @ 14759c140

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UMirrorDataTable>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataTable *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMirrorDataTable::GetPrivateStaticClass();
  this = (UDataTable *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataTable *)0x0) {
    UDataTable::UDataTable(this,param_1);
    *(undefined1 *)((longlong)&this[1]._padding_ + 1) = 1;
    this->_padding_ = (longlong)&___7UMirrorDataTable__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RowStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    *(undefined8 *)&this[1].RowMap = 0;
    *(undefined8 *)&this[1].RowMap.field_0x8 = 0;
    *(undefined8 *)&this[1].RowMap.field_0x10 = 0;
    *(undefined8 *)&this[1].RowMap.field_0x18 = 0;
    *(undefined8 *)&this[1].RowMap.field_0x20 = 0;
    *(undefined8 *)&this[1].RowMap.field_0x28 = 0;
    *(undefined8 *)&this[1].RowMap.field_0x40 = 0;
    *(undefined4 *)&this[1].RowMap.field_0x48 = 0;
    *(undefined4 *)&this[1].RowMap.field_0x4c = 0x80;
    *(undefined4 *)&this[1].field_0x80 = 0xffffffff;
    this[1]._padding_ = 0;
    this[1].ImportKeyField.Data.ArrayNum = 0;
    this[1].ImportKeyField.Data.ArrayMax = 0;
    *(undefined4 *)&this[1].OnDataTableChangedDelegate = 0;
    *(undefined8 *)&this[1].OnDataTableChangedDelegate.field_0x8 = 0;
    *(undefined8 *)&this[1].OnDataTableChangedDelegate.field_0x10 = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2].RowStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    *(undefined4 *)&this[2].RowMap = 0;
    *(undefined8 *)&this[2].RowMap.field_0x8 = 0;
    *(undefined8 *)&this[2].RowMap.field_0x10 = 0;
    *(undefined8 *)&this[2].RowMap.field_0x28 = 0;
    *(undefined4 *)&this[2].RowMap.field_0x30 = 0;
    *(undefined4 *)&this[2].RowMap.field_0x34 = 0x80;
    *(undefined4 *)&this[2].RowMap.field_0x38 = 0xffffffff;
    *(undefined4 *)&this[2].RowMap.field_0x3c = 0;
    *(undefined8 *)&this[2].RowMap.field_0x48 = 0;
    *(undefined4 *)&this[2].field_0x80 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNodeMappingContainer> @ 14759c300

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UNodeMappingContainer>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNodeMappingContainer::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNodeMappingContainer__6B_;
    *(undefined8 *)(pUVar1 + 1) = 0;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0xc = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0xc = 0;
    *(undefined8 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 5) = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 6) = 0;
    *(undefined4 *)&pUVar1[6].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0xc = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined4 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[7].field_0x18,0);
    *(undefined8 *)(pUVar1 + 8) = 0;
    *(undefined8 *)&pUVar1[8].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x20 = 0;
    *(undefined8 *)&pUVar1[8].field_0x10 = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    FUtf8String::Reset((FUtf8String *)&pUVar1[8].field_0x18,0);
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UNodeMappingProviderInterface> @ 14759c4b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UNodeMappingProviderInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UNodeMappingProviderInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UNodeMappingProviderInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPoseAsset> @ 14759c560

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPoseAsset>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAnimationAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPoseAsset::GetPrivateStaticClass();
  this = (UAnimationAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UAnimationAsset *)0x0) {
    UAnimationAsset::UAnimationAsset(this,param_1);
    this->_padding_ = (longlong)&UPoseAsset::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UPoseAsset::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UPoseAsset::_vftable__for__IInterface_PreviewMeshProvider__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].Skeleton.field0_0x0.DebugPtr = (USkeleton *)0x0;
    this[1].SkeletonGuid.A = 0;
    this[1].SkeletonGuid.B = 0;
    this[1].SkeletonGuid.C = 0;
    this[1].SkeletonGuid.D = 0;
    this[1].SkeletonVirtualBoneGuid.A = 0;
    this[1].SkeletonVirtualBoneGuid.B = 0;
    this[1].SkeletonVirtualBoneGuid.C = 0;
    this[1].SkeletonVirtualBoneGuid.D = 0;
    this[1].MetaData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].MetaData.ArrayNum = 0;
    this[1].MetaData.ArrayMax = 0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPreviewCollectionInterface> @ 14759c6a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UPreviewCollectionInterface>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPreviewCollectionInterface::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UInterface::UInterface((UInterface *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UPreviewCollectionInterface__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UPreviewMeshCollection> @ 14759c750

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UPreviewMeshCollection>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UPreviewMeshCollection::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UPreviewMeshCollection::_vftable__for__UDataAsset__;
    this[1]._padding_ =
         (longlong)&UPreviewMeshCollection::_vftable__for__IPreviewCollectionInterface__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<USkeleton> @ 14759c820

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USkeleton>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USkeleton *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USkeleton::GetPrivateStaticClass();
  pUVar3 = (USkeleton *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (USkeleton *)0x0) {
    pUVar3 = USkeleton::USkeleton(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UTransformTrajectoryBlueprintLibrary> @ 14759c8c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UTransformTrajectoryBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UTransformTrajectoryBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UTransformTrajectoryBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UVariableFrameStrippingSettings> @ 14759c970

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UVariableFrameStrippingSettings>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UVariableFrameStrippingSettings::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UVariableFrameStrippingSettings__6B_;
    *(undefined1 *)(pUVar1 + 1) = 0;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_> @ 14759ca30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
          (ushort *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<unsigned_short,TLess<void>_> param_4)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort **ppuVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  ushort *local_338;
  ushort *local_328;
  ushort *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppuVar5 = &local_328;
    do {
      puVar8 = ppuVar5[1];
      puVar4 = *ppuVar5;
      puVar1 = ppuVar5[2];
      iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 1) + 1;
      local_338._0_4_ = (int)puVar1;
      puVar9 = puVar4;
      if ((int)local_338 != 0) {
LAB_14759cae0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          puVar6 = puVar8 + 1;
          uVar2 = puVar9[iVar3 >> 1];
          puVar9[iVar3 >> 1] = *puVar9;
          *puVar9 = uVar2;
          puVar4 = puVar9;
LAB_14759cb10:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar8) goto code_r0x00014759cb19;
          goto LAB_14759cb22;
        }
        for (; puVar4 = puVar9, puVar1 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar1 = puVar1 + 1, puVar1 <= puVar8) {
            if (*puVar4 < *puVar1) {
              puVar4 = puVar1;
            }
          }
          uVar2 = *puVar4;
          *puVar4 = *puVar8;
          *puVar8 = uVar2;
        }
        goto LAB_14759cbe2;
      }
LAB_14759cbd1:
      local_338 = puVar1;
      HeapSortInternal<unsigned_short,int,FIdentityFunctor,TDereferenceWrapper<unsigned_short,TLess<void>_>_>
                (puVar4,iVar3,param_3,param_4);
LAB_14759cbe2:
      ppuVar5 = ppuVar5 + -3;
    } while (&local_328 <= ppuVar5);
  }
  return;
code_r0x00014759cb19:
  if (*puVar4 <= *puVar9) goto LAB_14759cb10;
LAB_14759cb22:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -1;
    if (puVar6 <= puVar9) break;
  } while (*puVar9 <= *puVar6);
  if (puVar4 <= puVar6) {
    uVar2 = *puVar4;
    *puVar4 = *puVar6;
    *puVar6 = uVar2;
    goto LAB_14759cb10;
  }
  uVar2 = *puVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *puVar9 = *puVar6;
  *puVar6 = uVar2;
  if ((longlong)((longlong)puVar6 + (-2 - (longlong)puVar9) & 0xfffffffffffffffeU) <
      (longlong)((longlong)puVar8 - (longlong)puVar4 & 0xfffffffffffffffeU)) {
    if (puVar4 < puVar8) {
      *ppuVar5 = puVar4;
      ppuVar5[1] = puVar8;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar6 <= puVar9 + 1) goto LAB_14759cbe2;
    puVar8 = puVar7 + -2;
    puVar4 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar6) {
      *ppuVar5 = puVar9;
      ppuVar5[1] = puVar7 + -2;
      *(int *)(ppuVar5 + 2) = (int)local_338;
      ppuVar5 = ppuVar5 + 3;
    }
    if (puVar8 <= puVar4) goto LAB_14759cbe2;
  }
  iVar3 = (int)((longlong)puVar8 - (longlong)puVar4 >> 1) + 1;
  puVar9 = puVar4;
  if ((int)local_338 == 0) goto LAB_14759cbd1;
  goto LAB_14759cae0;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FPoseDataContainer::RebuildCurveIndexTable'::__l2::<lambda_1>_>_> @ 14759cc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FPoseDataContainer::RebuildCurveIndexTable_::__l2::<lambda_1>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_private:_void___cdecl_FPoseDataContainer::RebuildCurveIndexTable(void)_::_2_::<lambda_1>_>
          param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  int *local_358;
  int *local_348;
  int *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    ppiVar7 = &local_348;
    do {
      piVar4 = ppiVar7[1];
      piVar5 = *ppiVar7;
      local_358 = ppiVar7[2];
      iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
      piVar10 = piVar5;
      iVar6 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14759cd30:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar8 = piVar4 + 1;
          iVar1 = piVar10[iVar3 >> 1];
          piVar10[iVar3 >> 1] = *piVar10;
          *piVar10 = iVar1;
          piVar5 = piVar10;
LAB_14759cd60:
          piVar5 = piVar5 + 1;
          if (piVar5 <= piVar4) goto code_r0x00014759cd69;
          goto LAB_14759cd80;
        }
        for (; piVar8 = piVar10, piVar5 = piVar10, piVar10 < piVar4; piVar4 = piVar4 + -1) {
          while (piVar5 = piVar5 + 1, piVar5 <= piVar4) {
            bVar2 = `FPoseDataContainer::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                              (param_4.Predicate,*piVar8,*piVar5);
            if (bVar2) {
              piVar8 = piVar5;
            }
          }
          iVar6 = *piVar8;
          *piVar8 = *piVar4;
          *piVar4 = iVar6;
        }
        goto LAB_14759ce44;
      }
LAB_14759ce33:
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FPoseDataContainer::RebuildCurveIndexTable_::__l2::<lambda_1>_>_>
                (piVar5,iVar3,param_3,param_4);
LAB_14759ce44:
      ppiVar7 = ppiVar7 + -3;
    } while (&local_348 <= ppiVar7);
  }
  return;
code_r0x00014759cd69:
  bVar2 = `FPoseDataContainer::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                    (param_4.Predicate,*piVar10,*piVar5);
  if (!bVar2) goto LAB_14759cd60;
LAB_14759cd80:
  do {
    piVar9 = piVar8;
    piVar8 = piVar9 + -1;
    if (piVar8 <= piVar10) break;
    bVar2 = `FPoseDataContainer::RebuildCurveIndexTable'::__l2::<lambda_1>::operator()
                      (param_4.Predicate,*piVar8,*piVar10);
  } while (!bVar2);
  if (piVar5 <= piVar8) {
    iVar3 = *piVar5;
    *piVar5 = *piVar8;
    *piVar8 = iVar3;
    goto LAB_14759cd60;
  }
  iVar3 = *piVar10;
  iVar6 = iVar6 + -1;
  *piVar10 = *piVar8;
  *piVar8 = iVar3;
  if ((longlong)((longlong)piVar8 + (-4 - (longlong)piVar10) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar4 - (longlong)piVar5 & 0xfffffffffffffffcU)) {
    if (piVar5 < piVar4) {
      *ppiVar7 = piVar5;
      ppiVar7[1] = piVar4;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar8 <= piVar10 + 1) goto LAB_14759ce44;
    piVar4 = piVar9 + -2;
    piVar5 = piVar10;
  }
  else {
    if (piVar10 + 1 < piVar8) {
      *ppiVar7 = piVar10;
      ppiVar7[1] = piVar9 + -2;
      *(int *)(ppiVar7 + 2) = iVar6;
      ppiVar7 = ppiVar7 + 3;
    }
    if (piVar4 <= piVar5) goto LAB_14759ce44;
  }
  iVar3 = (int)((longlong)piVar4 - (longlong)piVar5 >> 2) + 1;
  piVar10 = piVar5;
  if (iVar6 == 0) goto LAB_14759ce33;
  goto LAB_14759cd30;
}

// IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,`FReferenceSkeleton::Remove'::__l2::<lambda_2>_>_> @ 14759cf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FReferenceSkeleton::Remove_::__l2::<lambda_2>_>_>
          (int *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<int,_private:_void___cdecl_FReferenceSkeleton::Remove(FName,bool)_::_2_::<lambda_2>_>
          param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  undefined1 auStack_368 [48];
  int *local_338;
  int *local_328;
  int *local_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = __security_cookie.value ^ (ulonglong)auStack_368;
    local_320 = param_1 + (longlong)param_2 + -1;
    local_328 = param_1;
    fVar10 = logf((float)param_2 * (float)param_2);
    local_318 = (undefined4)(longlong)fVar10;
    memset(local_310,0,0x2e8);
    ppiVar5 = &local_328;
    do {
      piVar8 = ppiVar5[1];
      piVar4 = *ppiVar5;
      piVar1 = ppiVar5[2];
      iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
      local_338._0_4_ = (int)piVar1;
      piVar9 = piVar4;
      if ((int)local_338 != 0) {
LAB_14759cfb0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          piVar6 = piVar8 + 1;
          iVar2 = piVar9[iVar3 >> 1];
          piVar9[iVar3 >> 1] = *piVar9;
          *piVar9 = iVar2;
          piVar4 = piVar9;
LAB_14759cfe0:
          piVar4 = piVar4 + 1;
          if (piVar4 <= piVar8) goto code_r0x00014759cfe9;
          goto LAB_14759cff0;
        }
        for (; piVar4 = piVar9, piVar1 = piVar9, piVar9 < piVar8; piVar8 = piVar8 + -1) {
          while (piVar1 = piVar1 + 1, piVar1 <= piVar8) {
            if (*piVar1 < *piVar4) {
              piVar4 = piVar1;
            }
          }
          iVar3 = *piVar4;
          *piVar4 = *piVar8;
          *piVar8 = iVar3;
        }
        goto LAB_14759d0a8;
      }
LAB_14759d097:
      local_338 = piVar1;
      HeapSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FReferenceSkeleton::Remove_::__l2::<lambda_2>_>_>
                (piVar4,iVar3,param_3,param_4);
LAB_14759d0a8:
      ppiVar5 = ppiVar5 + -3;
    } while (&local_328 <= ppiVar5);
  }
  return;
code_r0x00014759cfe9:
  if (*piVar9 <= *piVar4) goto LAB_14759cfe0;
LAB_14759cff0:
  do {
    piVar7 = piVar6;
    piVar6 = piVar7 + -1;
    if (piVar6 <= piVar9) break;
  } while (*piVar6 <= *piVar9);
  if (piVar4 <= piVar6) {
    iVar3 = *piVar4;
    *piVar4 = *piVar6;
    *piVar6 = iVar3;
    goto LAB_14759cfe0;
  }
  iVar3 = *piVar9;
  local_338._0_4_ = (int)local_338 + -1;
  *piVar9 = *piVar6;
  *piVar6 = iVar3;
  if ((longlong)((longlong)piVar6 + (-4 - (longlong)piVar9) & 0xfffffffffffffffcU) <
      (longlong)((longlong)piVar8 - (longlong)piVar4 & 0xfffffffffffffffcU)) {
    if (piVar4 < piVar8) {
      *ppiVar5 = piVar4;
      ppiVar5[1] = piVar8;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar6 <= piVar9 + 1) goto LAB_14759d0a8;
    piVar8 = piVar7 + -2;
    piVar4 = piVar9;
  }
  else {
    if (piVar9 + 1 < piVar6) {
      *ppiVar5 = piVar9;
      ppiVar5[1] = piVar7 + -2;
      *(int *)(ppiVar5 + 2) = (int)local_338;
      ppiVar5 = ppiVar5 + 3;
    }
    if (piVar8 <= piVar4) goto LAB_14759d0a8;
  }
  iVar3 = (int)((longlong)piVar8 - (longlong)piVar4 >> 2) + 1;
  piVar9 = piVar4;
  if ((int)local_338 == 0) goto LAB_14759d097;
  goto LAB_14759cfb0;
}

// IntroSortInternal<`UAssetManager::DumpLoadedAssetState'::__l31::FLoadedInfo,int,FIdentityFunctor,TDereferenceWrapper<`UAssetManager::DumpLoadedAssetState'::__l31::FLoadedInfo,`UAssetManager::DumpLoadedAssetState'::__l48::<lambda_2>_>_> @ 14759d120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
AlgoImpl::
IntroSortInternal<_UAssetManager::DumpLoadedAssetState_::__l31::FLoadedInfo,int,FIdentityFunctor,TDereferenceWrapper<_UAssetManager::DumpLoadedAssetState_::__l31::FLoadedInfo,_UAssetManager::DumpLoadedAssetState_::__l48::<lambda_2>_>_>
          (FLoadedInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<_public:_static_void___cdecl_UAssetManager::DumpLoadedAssetState(void)_::_31_::FLoadedInfo,_public:_static_void___cdecl_UAssetManager::DumpLoadedAssetState(void)_::_48_::<lambda_2>_>
          param_4)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined7 uVar5;
  int iVar6;
  bool bVar7;
  undefined7 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FLoadedInfo *pFVar12;
  FLoadedInfo *pFVar13;
  FLoadedInfo *pFVar14;
  FLoadedInfo **ppFVar15;
  int iVar16;
  FLoadedInfo *this;
  FLoadedInfo *pFVar17;
  FLoadedInfo *pFVar18;
  float fVar19;
  undefined1 auStack_388 [48];
  FLoadedInfo *local_358;
  FLoadedInfo *local_348;
  FLoadedInfo *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar19 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar19;
    memset(local_330,0,0x2e8);
    ppFVar15 = &local_348;
    do {
      pFVar18 = ppFVar15[1];
      pFVar17 = *ppFVar15;
      local_358 = ppFVar15[2];
      iVar11 = (int)((longlong)pFVar18 - (longlong)pFVar17 >> 5) + 1;
      this = pFVar17;
      iVar16 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14759d1e0:
        if (8 < iVar11) {
          bVar4 = this->bPending;
          uVar5 = *(undefined7 *)&this->field_0x9;
          pFVar12 = pFVar18 + 1;
          pFVar17 = this + iVar11 / 2;
          FVar1 = pFVar17->AssetName;
          bVar7 = pFVar17->bPending;
          uVar8 = *(undefined7 *)&pFVar17->field_0x9;
          pFVar2 = (pFVar17->BundleState).Data.AllocatorInstance.Data;
          iVar9 = (pFVar17->BundleState).Data.ArrayNum;
          iVar10 = (pFVar17->BundleState).Data.ArrayMax;
          pFVar17->AssetName = this->AssetName;
          pFVar17->bPending = bVar4;
          *(undefined7 *)&pFVar17->field_0x9 = uVar5;
          iVar11 = (this->BundleState).Data.ArrayNum;
          iVar6 = (this->BundleState).Data.ArrayMax;
          (pFVar17->BundleState).Data.AllocatorInstance.Data =
               (this->BundleState).Data.AllocatorInstance.Data;
          (pFVar17->BundleState).Data.ArrayNum = iVar11;
          (pFVar17->BundleState).Data.ArrayMax = iVar6;
          this->AssetName = FVar1;
          this->bPending = bVar7;
          *(undefined7 *)&this->field_0x9 = uVar8;
          (this->BundleState).Data.AllocatorInstance.Data = pFVar2;
          (this->BundleState).Data.ArrayNum = iVar9;
          (this->BundleState).Data.ArrayMax = iVar10;
          pFVar17 = this;
LAB_14759d220:
          pFVar14 = pFVar17;
          pFVar17 = pFVar14 + 1;
          if (pFVar17 <= pFVar18) goto code_r0x00014759d229;
          goto LAB_14759d240;
        }
        for (; pFVar12 = this, pFVar17 = this, this < pFVar18; pFVar18 = pFVar18 + -1) {
          while (pFVar14 = pFVar12, pFVar17 = pFVar17 + 1, pFVar17 <= pFVar18) {
            iVar16 = ::FName::Compare(&pFVar14->AssetName,&pFVar17->AssetName);
            pFVar12 = pFVar17;
            if (-1 < iVar16) {
              pFVar12 = pFVar14;
            }
          }
          FVar1 = pFVar14->AssetName;
          bVar7 = pFVar14->bPending;
          uVar8 = *(undefined7 *)&pFVar14->field_0x9;
          pFVar2 = (pFVar14->BundleState).Data.AllocatorInstance.Data;
          iVar6 = (pFVar14->BundleState).Data.ArrayNum;
          iVar9 = (pFVar14->BundleState).Data.ArrayMax;
          bVar4 = pFVar18->bPending;
          uVar5 = *(undefined7 *)&pFVar18->field_0x9;
          pFVar14->AssetName = pFVar18->AssetName;
          pFVar14->bPending = bVar4;
          *(undefined7 *)&pFVar14->field_0x9 = uVar5;
          iVar16 = (pFVar18->BundleState).Data.ArrayNum;
          iVar11 = (pFVar18->BundleState).Data.ArrayMax;
          (pFVar14->BundleState).Data.AllocatorInstance.Data =
               (pFVar18->BundleState).Data.AllocatorInstance.Data;
          (pFVar14->BundleState).Data.ArrayNum = iVar16;
          (pFVar14->BundleState).Data.ArrayMax = iVar11;
          pFVar18->AssetName = FVar1;
          pFVar18->bPending = bVar7;
          *(undefined7 *)&pFVar18->field_0x9 = uVar8;
          (pFVar18->BundleState).Data.AllocatorInstance.Data = pFVar2;
          (pFVar18->BundleState).Data.ArrayNum = iVar6;
          (pFVar18->BundleState).Data.ArrayMax = iVar9;
        }
        goto LAB_14759d331;
      }
LAB_14759d320:
      HeapSortInternal<_UAssetManager::DumpLoadedAssetState_::__l31::FLoadedInfo,int,FIdentityFunctor,TDereferenceWrapper<_UAssetManager::DumpLoadedAssetState_::__l31::FLoadedInfo,_UAssetManager::DumpLoadedAssetState_::__l48::<lambda_2>_>_>
                (pFVar17,iVar11,param_3,param_4);
LAB_14759d331:
      ppFVar15 = ppFVar15 + -3;
    } while (&local_348 <= ppFVar15);
  }
  return;
code_r0x00014759d229:
  iVar11 = ::FName::Compare(&this->AssetName,&pFVar17->AssetName);
  if (-1 < iVar11) goto LAB_14759d220;
LAB_14759d240:
  do {
    pFVar13 = pFVar12;
    pFVar12 = pFVar13 + -1;
    if (pFVar12 <= this) break;
    iVar11 = ::FName::Compare(&pFVar12->AssetName,&this->AssetName);
  } while (-1 < iVar11);
  uVar3 = *(undefined8 *)&pFVar13[-1].bPending;
  if (pFVar17 <= pFVar12) {
    FVar1 = pFVar17->AssetName;
    bVar4 = pFVar14[1].bPending;
    uVar5 = *(undefined7 *)&pFVar14[1].field_0x9;
    pFVar2 = pFVar14[1].BundleState.Data.AllocatorInstance.Data;
    iVar9 = pFVar14[1].BundleState.Data.ArrayNum;
    iVar10 = pFVar14[1].BundleState.Data.ArrayMax;
    pFVar17->AssetName = pFVar12->AssetName;
    *(undefined8 *)&pFVar14[1].bPending = uVar3;
    iVar11 = pFVar13[-1].BundleState.Data.ArrayNum;
    iVar6 = pFVar13[-1].BundleState.Data.ArrayMax;
    pFVar14[1].BundleState.Data.AllocatorInstance.Data =
         pFVar13[-1].BundleState.Data.AllocatorInstance.Data;
    pFVar14[1].BundleState.Data.ArrayNum = iVar11;
    pFVar14[1].BundleState.Data.ArrayMax = iVar6;
    pFVar12->AssetName = FVar1;
    pFVar13[-1].bPending = bVar4;
    *(undefined7 *)&pFVar13[-1].field_0x9 = uVar5;
    pFVar13[-1].BundleState.Data.AllocatorInstance.Data = pFVar2;
    pFVar13[-1].BundleState.Data.ArrayNum = iVar9;
    pFVar13[-1].BundleState.Data.ArrayMax = iVar10;
    goto LAB_14759d220;
  }
  FVar1 = this->AssetName;
  bVar4 = this->bPending;
  uVar5 = *(undefined7 *)&this->field_0x9;
  pFVar2 = (this->BundleState).Data.AllocatorInstance.Data;
  iVar9 = (this->BundleState).Data.ArrayNum;
  iVar10 = (this->BundleState).Data.ArrayMax;
  this->AssetName = pFVar12->AssetName;
  *(undefined8 *)&this->bPending = uVar3;
  iVar16 = iVar16 + -1;
  iVar11 = pFVar13[-1].BundleState.Data.ArrayNum;
  iVar6 = pFVar13[-1].BundleState.Data.ArrayMax;
  (this->BundleState).Data.AllocatorInstance.Data =
       pFVar13[-1].BundleState.Data.AllocatorInstance.Data;
  (this->BundleState).Data.ArrayNum = iVar11;
  (this->BundleState).Data.ArrayMax = iVar6;
  pFVar12->AssetName = FVar1;
  pFVar13[-1].bPending = bVar4;
  *(undefined7 *)&pFVar13[-1].field_0x9 = uVar5;
  pFVar13[-1].BundleState.Data.AllocatorInstance.Data = pFVar2;
  pFVar13[-1].BundleState.Data.ArrayNum = iVar9;
  pFVar13[-1].BundleState.Data.ArrayMax = iVar10;
  if ((longlong)((longlong)pFVar12 + (-0x20 - (longlong)this) & 0xffffffffffffffe0U) <
      (longlong)((longlong)pFVar18 - (longlong)pFVar17 & 0xffffffffffffffe0U)) {
    if (pFVar17 < pFVar18) {
      *ppFVar15 = pFVar17;
      ppFVar15[1] = pFVar18;
      *(int *)(ppFVar15 + 2) = iVar16;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar12 <= this + 1) goto LAB_14759d331;
    pFVar18 = pFVar13 + -2;
    pFVar17 = this;
  }
  else {
    if (this + 1 < pFVar12) {
      *ppFVar15 = this;
      ppFVar15[1] = pFVar13 + -2;
      *(int *)(ppFVar15 + 2) = iVar16;
      ppFVar15 = ppFVar15 + 3;
    }
    if (pFVar18 <= pFVar17) goto LAB_14759d331;
  }
  iVar11 = (int)((longlong)pFVar18 - (longlong)pFVar17 >> 5) + 1;
  this = pFVar17;
  if (iVar16 == 0) goto LAB_14759d320;
  goto LAB_14759d1e0;
}

// IntroSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,`UAssetManager::DumpAssetTypeSummary'::__l2::<lambda_1>_>_> @ 14759d410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,_UAssetManager::DumpAssetTypeSummary_::__l2::<lambda_1>_>_>
          (FPrimaryAssetTypeInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPrimaryAssetTypeInfo,_public:_static_void___cdecl_UAssetManager::DumpAssetTypeSummary(void)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  FName FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TObjectPtr<UClass>_u_0 TVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  bool bVar14;
  undefined6 uVar15;
  int iVar16;
  undefined3 uVar17;
  bool bVar18;
  bool bVar19;
  undefined6 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  undefined3 uVar30;
  int iVar31;
  int iVar32;
  FPrimaryAssetTypeInfo *pFVar33;
  FPrimaryAssetTypeInfo *pFVar34;
  FPrimaryAssetTypeInfo *pFVar35;
  FPrimaryAssetTypeInfo **ppFVar36;
  int iVar37;
  FPrimaryAssetTypeInfo *this;
  FPrimaryAssetTypeInfo *pFVar38;
  FPrimaryAssetTypeInfo *pFVar39;
  float fVar40;
  undefined1 auStack_3d8 [48];
  FPrimaryAssetTypeInfo *local_3a8;
  FPrimaryAssetTypeInfo *local_398;
  FPrimaryAssetTypeInfo *local_390;
  undefined4 local_388;
  undefined1 local_380 [744];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  if (1 < param_2) {
    local_390 = param_1 + (longlong)param_2 + -1;
    local_398 = param_1;
    fVar40 = logf((float)param_2 * (float)param_2);
    local_388 = (undefined4)(longlong)fVar40;
    memset(local_380,0,0x2e8);
    ppFVar36 = &local_398;
    do {
      pFVar39 = ppFVar36[1];
      pFVar38 = *ppFVar36;
      local_3a8 = ppFVar36[2];
      iVar32 = (int)(((longlong)pFVar39 - (longlong)pFVar38) / 0x88) + 1;
      this = pFVar38;
      iVar37 = (int)local_3a8;
      if ((int)local_3a8 != 0) {
LAB_14759d510:
        if (8 < iVar32) {
          uVar1 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr;
          pFVar33 = pFVar39 + 1;
          pFVar38 = this + iVar32 / 2;
          FVar2 = pFVar38->PrimaryAssetType;
          uVar3 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr;
          uVar4 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x8;
          uVar5 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x10;
          uVar6 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x18;
          uVar7 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x20;
          TVar8 = (pFVar38->AssetBaseClassLoaded).field0_0x0;
          bVar18 = pFVar38->bHasBlueprintClasses;
          bVar19 = pFVar38->bIsEditorOnly;
          uVar20 = *(undefined6 *)&pFVar38->field_0x3a;
          pFVar9 = (pFVar38->Directories).AllocatorInstance.Data;
          iVar21 = (pFVar38->Directories).ArrayNum;
          iVar22 = (pFVar38->Directories).ArrayMax;
          pFVar10 = (pFVar38->SpecificAssets).AllocatorInstance.Data;
          iVar23 = (pFVar38->SpecificAssets).ArrayNum;
          iVar24 = (pFVar38->SpecificAssets).ArrayMax;
          iVar25 = (pFVar38->Rules).Priority;
          iVar26 = (pFVar38->Rules).ChunkId;
          uVar11 = *(undefined8 *)&(pFVar38->Rules).bApplyRecursively;
          pFVar12 = (pFVar38->AssetScanPaths).AllocatorInstance.Data;
          iVar27 = (pFVar38->AssetScanPaths).ArrayNum;
          iVar28 = (pFVar38->AssetScanPaths).ArrayMax;
          bVar29 = pFVar38->bIsDynamicAsset;
          uVar30 = *(undefined3 *)&pFVar38->field_0x81;
          iVar31 = pFVar38->NumberOfAssets;
          pFVar38->PrimaryAssetType = this->PrimaryAssetType;
          *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr = uVar1;
          uVar1 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x10;
          *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x8 =
               *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8;
          *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar1;
          uVar1 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x20;
          *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x18 =
               *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x18;
          *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar1;
          bVar13 = this->bHasBlueprintClasses;
          bVar14 = this->bIsEditorOnly;
          uVar15 = *(undefined6 *)&this->field_0x3a;
          (pFVar38->AssetBaseClassLoaded).field0_0x0 = (this->AssetBaseClassLoaded).field0_0x0;
          pFVar38->bHasBlueprintClasses = bVar13;
          pFVar38->bIsEditorOnly = bVar14;
          *(undefined6 *)&pFVar38->field_0x3a = uVar15;
          iVar32 = (this->Directories).ArrayNum;
          iVar16 = (this->Directories).ArrayMax;
          (pFVar38->Directories).AllocatorInstance.Data = (this->Directories).AllocatorInstance.Data
          ;
          (pFVar38->Directories).ArrayNum = iVar32;
          (pFVar38->Directories).ArrayMax = iVar16;
          iVar32 = (this->SpecificAssets).ArrayNum;
          iVar16 = (this->SpecificAssets).ArrayMax;
          (pFVar38->SpecificAssets).AllocatorInstance.Data =
               (this->SpecificAssets).AllocatorInstance.Data;
          (pFVar38->SpecificAssets).ArrayNum = iVar32;
          (pFVar38->SpecificAssets).ArrayMax = iVar16;
          iVar32 = (this->Rules).ChunkId;
          uVar1 = *(undefined8 *)&(this->Rules).bApplyRecursively;
          (pFVar38->Rules).Priority = (this->Rules).Priority;
          (pFVar38->Rules).ChunkId = iVar32;
          *(undefined8 *)&(pFVar38->Rules).bApplyRecursively = uVar1;
          iVar32 = (this->AssetScanPaths).ArrayNum;
          iVar16 = (this->AssetScanPaths).ArrayMax;
          (pFVar38->AssetScanPaths).AllocatorInstance.Data =
               (this->AssetScanPaths).AllocatorInstance.Data;
          (pFVar38->AssetScanPaths).ArrayNum = iVar32;
          (pFVar38->AssetScanPaths).ArrayMax = iVar16;
          uVar17 = *(undefined3 *)&this->field_0x81;
          iVar32 = this->NumberOfAssets;
          pFVar38->bIsDynamicAsset = this->bIsDynamicAsset;
          *(undefined3 *)&pFVar38->field_0x81 = uVar17;
          pFVar38->NumberOfAssets = iVar32;
          this->PrimaryAssetType = FVar2;
          *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr = uVar3;
          *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8 = uVar4;
          *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar5;
          *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x18 = uVar6;
          *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar7;
          (this->AssetBaseClassLoaded).field0_0x0 = TVar8;
          this->bHasBlueprintClasses = bVar18;
          this->bIsEditorOnly = bVar19;
          *(undefined6 *)&this->field_0x3a = uVar20;
          (this->Directories).AllocatorInstance.Data = pFVar9;
          (this->Directories).ArrayNum = iVar21;
          (this->Directories).ArrayMax = iVar22;
          (this->SpecificAssets).AllocatorInstance.Data = pFVar10;
          (this->SpecificAssets).ArrayNum = iVar23;
          (this->SpecificAssets).ArrayMax = iVar24;
          (this->Rules).Priority = iVar25;
          (this->Rules).ChunkId = iVar26;
          *(undefined8 *)&(this->Rules).bApplyRecursively = uVar11;
          (this->AssetScanPaths).AllocatorInstance.Data = pFVar12;
          (this->AssetScanPaths).ArrayNum = iVar27;
          (this->AssetScanPaths).ArrayMax = iVar28;
          this->bIsDynamicAsset = bVar29;
          *(undefined3 *)&this->field_0x81 = uVar30;
          this->NumberOfAssets = iVar31;
          pFVar38 = this;
LAB_14759d5f0:
          pFVar35 = pFVar38;
          pFVar38 = pFVar35 + 1;
          if (pFVar38 <= pFVar39) goto code_r0x00014759d5fc;
          goto LAB_14759d610;
        }
        for (; pFVar33 = this, pFVar38 = this, this < pFVar39; pFVar39 = pFVar39 + -1) {
          while (pFVar35 = pFVar33, pFVar38 = pFVar38 + 1, pFVar38 <= pFVar39) {
            iVar37 = ::FName::Compare(&pFVar35->PrimaryAssetType,&pFVar38->PrimaryAssetType);
            pFVar33 = pFVar38;
            if (-1 < iVar37) {
              pFVar33 = pFVar35;
            }
          }
          FVar2 = pFVar35->PrimaryAssetType;
          uVar1 = *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr;
          bVar29 = pFVar35->bIsDynamicAsset;
          uVar30 = *(undefined3 *)&pFVar35->field_0x81;
          iVar28 = pFVar35->NumberOfAssets;
          uVar3 = *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x8;
          uVar4 = *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x10;
          uVar5 = *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr;
          uVar6 = *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x18;
          uVar7 = *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x20;
          TVar8 = (pFVar35->AssetBaseClassLoaded).field0_0x0;
          bVar18 = pFVar35->bHasBlueprintClasses;
          bVar19 = pFVar35->bIsEditorOnly;
          uVar20 = *(undefined6 *)&pFVar35->field_0x3a;
          pFVar9 = (pFVar35->Directories).AllocatorInstance.Data;
          iVar16 = (pFVar35->Directories).ArrayNum;
          iVar21 = (pFVar35->Directories).ArrayMax;
          pFVar10 = (pFVar35->SpecificAssets).AllocatorInstance.Data;
          iVar22 = (pFVar35->SpecificAssets).ArrayNum;
          iVar23 = (pFVar35->SpecificAssets).ArrayMax;
          iVar24 = (pFVar35->Rules).Priority;
          iVar25 = (pFVar35->Rules).ChunkId;
          uVar11 = *(undefined8 *)&(pFVar35->Rules).bApplyRecursively;
          pFVar12 = (pFVar35->AssetScanPaths).AllocatorInstance.Data;
          iVar26 = (pFVar35->AssetScanPaths).ArrayNum;
          iVar27 = (pFVar35->AssetScanPaths).ArrayMax;
          pFVar35->PrimaryAssetType = pFVar39->PrimaryAssetType;
          *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr = uVar5;
          uVar5 = *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x10;
          *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x8 =
               *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x8;
          *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar5;
          uVar5 = *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x20;
          *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x18 =
               *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x18;
          *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar5;
          bVar13 = pFVar39->bHasBlueprintClasses;
          bVar14 = pFVar39->bIsEditorOnly;
          uVar15 = *(undefined6 *)&pFVar39->field_0x3a;
          (pFVar35->AssetBaseClassLoaded).field0_0x0 = (pFVar39->AssetBaseClassLoaded).field0_0x0;
          pFVar35->bHasBlueprintClasses = bVar13;
          pFVar35->bIsEditorOnly = bVar14;
          *(undefined6 *)&pFVar35->field_0x3a = uVar15;
          iVar37 = (pFVar39->Directories).ArrayNum;
          iVar32 = (pFVar39->Directories).ArrayMax;
          (pFVar35->Directories).AllocatorInstance.Data =
               (pFVar39->Directories).AllocatorInstance.Data;
          (pFVar35->Directories).ArrayNum = iVar37;
          (pFVar35->Directories).ArrayMax = iVar32;
          iVar37 = (pFVar39->SpecificAssets).ArrayNum;
          iVar32 = (pFVar39->SpecificAssets).ArrayMax;
          (pFVar35->SpecificAssets).AllocatorInstance.Data =
               (pFVar39->SpecificAssets).AllocatorInstance.Data;
          (pFVar35->SpecificAssets).ArrayNum = iVar37;
          (pFVar35->SpecificAssets).ArrayMax = iVar32;
          iVar37 = (pFVar39->Rules).ChunkId;
          uVar5 = *(undefined8 *)&(pFVar39->Rules).bApplyRecursively;
          (pFVar35->Rules).Priority = (pFVar39->Rules).Priority;
          (pFVar35->Rules).ChunkId = iVar37;
          *(undefined8 *)&(pFVar35->Rules).bApplyRecursively = uVar5;
          iVar37 = (pFVar39->AssetScanPaths).ArrayNum;
          iVar32 = (pFVar39->AssetScanPaths).ArrayMax;
          (pFVar35->AssetScanPaths).AllocatorInstance.Data =
               (pFVar39->AssetScanPaths).AllocatorInstance.Data;
          (pFVar35->AssetScanPaths).ArrayNum = iVar37;
          (pFVar35->AssetScanPaths).ArrayMax = iVar32;
          uVar17 = *(undefined3 *)&pFVar39->field_0x81;
          iVar37 = pFVar39->NumberOfAssets;
          pFVar35->bIsDynamicAsset = pFVar39->bIsDynamicAsset;
          *(undefined3 *)&pFVar35->field_0x81 = uVar17;
          pFVar35->NumberOfAssets = iVar37;
          pFVar39->PrimaryAssetType = FVar2;
          *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr = uVar1;
          *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x8 = uVar3;
          *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar4;
          *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x18 = uVar6;
          *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar7;
          (pFVar39->AssetBaseClassLoaded).field0_0x0 = TVar8;
          pFVar39->bHasBlueprintClasses = bVar18;
          pFVar39->bIsEditorOnly = bVar19;
          *(undefined6 *)&pFVar39->field_0x3a = uVar20;
          (pFVar39->Directories).AllocatorInstance.Data = pFVar9;
          (pFVar39->Directories).ArrayNum = iVar16;
          (pFVar39->Directories).ArrayMax = iVar21;
          (pFVar39->SpecificAssets).AllocatorInstance.Data = pFVar10;
          (pFVar39->SpecificAssets).ArrayNum = iVar22;
          (pFVar39->SpecificAssets).ArrayMax = iVar23;
          (pFVar39->Rules).Priority = iVar24;
          (pFVar39->Rules).ChunkId = iVar25;
          *(undefined8 *)&(pFVar39->Rules).bApplyRecursively = uVar11;
          (pFVar39->AssetScanPaths).AllocatorInstance.Data = pFVar12;
          (pFVar39->AssetScanPaths).ArrayNum = iVar26;
          (pFVar39->AssetScanPaths).ArrayMax = iVar27;
          pFVar39->bIsDynamicAsset = bVar29;
          *(undefined3 *)&pFVar39->field_0x81 = uVar30;
          pFVar39->NumberOfAssets = iVar28;
        }
        goto LAB_14759d876;
      }
LAB_14759d85d:
      HeapSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,_UAssetManager::DumpAssetTypeSummary_::__l2::<lambda_1>_>_>
                (pFVar38,iVar32,param_3,param_4);
LAB_14759d876:
      ppFVar36 = ppFVar36 + -3;
    } while (&local_398 <= ppFVar36);
  }
  return;
code_r0x00014759d5fc:
  iVar32 = ::FName::Compare(&this->PrimaryAssetType,&pFVar38->PrimaryAssetType);
  if (-1 < iVar32) goto LAB_14759d5f0;
LAB_14759d610:
  do {
    pFVar34 = pFVar33;
    pFVar33 = pFVar34 + -1;
    if (pFVar33 <= this) break;
    iVar32 = ::FName::Compare(&pFVar33->PrimaryAssetType,&this->PrimaryAssetType);
  } while (-1 < iVar32);
  uVar1 = *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr;
  if (pFVar38 <= pFVar33) {
    FVar2 = pFVar38->PrimaryAssetType;
    uVar3 = *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr;
    uVar4 = *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x8;
    uVar5 = *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x10;
    uVar6 = *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x18;
    uVar7 = *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x20;
    TVar8 = pFVar35[1].AssetBaseClassLoaded.field0_0x0;
    bVar18 = pFVar35[1].bHasBlueprintClasses;
    bVar19 = pFVar35[1].bIsEditorOnly;
    uVar20 = *(undefined6 *)&pFVar35[1].field_0x3a;
    pFVar9 = pFVar35[1].Directories.AllocatorInstance.Data;
    iVar21 = pFVar35[1].Directories.ArrayNum;
    iVar22 = pFVar35[1].Directories.ArrayMax;
    pFVar10 = pFVar35[1].SpecificAssets.AllocatorInstance.Data;
    iVar23 = pFVar35[1].SpecificAssets.ArrayNum;
    iVar24 = pFVar35[1].SpecificAssets.ArrayMax;
    iVar25 = pFVar35[1].Rules.Priority;
    iVar26 = pFVar35[1].Rules.ChunkId;
    uVar11 = *(undefined8 *)&pFVar35[1].Rules.bApplyRecursively;
    pFVar12 = pFVar35[1].AssetScanPaths.AllocatorInstance.Data;
    iVar27 = pFVar35[1].AssetScanPaths.ArrayNum;
    iVar28 = pFVar35[1].AssetScanPaths.ArrayMax;
    bVar29 = pFVar35[1].bIsDynamicAsset;
    uVar30 = *(undefined3 *)&pFVar35[1].field_0x81;
    iVar31 = pFVar35[1].NumberOfAssets;
    pFVar38->PrimaryAssetType = pFVar33->PrimaryAssetType;
    *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr = uVar1;
    uVar1 = *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x10;
    *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x8 =
         *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x8;
    *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x10 = uVar1;
    uVar1 = *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x20;
    *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x18 =
         *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x18;
    *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x20 = uVar1;
    bVar13 = pFVar34[-1].bHasBlueprintClasses;
    bVar14 = pFVar34[-1].bIsEditorOnly;
    uVar15 = *(undefined6 *)&pFVar34[-1].field_0x3a;
    pFVar35[1].AssetBaseClassLoaded.field0_0x0 = pFVar34[-1].AssetBaseClassLoaded.field0_0x0;
    pFVar35[1].bHasBlueprintClasses = bVar13;
    pFVar35[1].bIsEditorOnly = bVar14;
    *(undefined6 *)&pFVar35[1].field_0x3a = uVar15;
    iVar32 = pFVar34[-1].Directories.ArrayNum;
    iVar16 = pFVar34[-1].Directories.ArrayMax;
    pFVar35[1].Directories.AllocatorInstance.Data = pFVar34[-1].Directories.AllocatorInstance.Data;
    pFVar35[1].Directories.ArrayNum = iVar32;
    pFVar35[1].Directories.ArrayMax = iVar16;
    iVar32 = pFVar34[-1].SpecificAssets.ArrayNum;
    iVar16 = pFVar34[-1].SpecificAssets.ArrayMax;
    pFVar35[1].SpecificAssets.AllocatorInstance.Data =
         pFVar34[-1].SpecificAssets.AllocatorInstance.Data;
    pFVar35[1].SpecificAssets.ArrayNum = iVar32;
    pFVar35[1].SpecificAssets.ArrayMax = iVar16;
    iVar32 = pFVar34[-1].Rules.ChunkId;
    uVar1 = *(undefined8 *)&pFVar34[-1].Rules.bApplyRecursively;
    pFVar35[1].Rules.Priority = pFVar34[-1].Rules.Priority;
    pFVar35[1].Rules.ChunkId = iVar32;
    *(undefined8 *)&pFVar35[1].Rules.bApplyRecursively = uVar1;
    iVar32 = pFVar34[-1].AssetScanPaths.ArrayNum;
    iVar16 = pFVar34[-1].AssetScanPaths.ArrayMax;
    pFVar35[1].AssetScanPaths.AllocatorInstance.Data =
         pFVar34[-1].AssetScanPaths.AllocatorInstance.Data;
    pFVar35[1].AssetScanPaths.ArrayNum = iVar32;
    pFVar35[1].AssetScanPaths.ArrayMax = iVar16;
    uVar17 = *(undefined3 *)&pFVar34[-1].field_0x81;
    iVar32 = pFVar34[-1].NumberOfAssets;
    pFVar35[1].bIsDynamicAsset = pFVar34[-1].bIsDynamicAsset;
    *(undefined3 *)&pFVar35[1].field_0x81 = uVar17;
    pFVar35[1].NumberOfAssets = iVar32;
    pFVar33->PrimaryAssetType = FVar2;
    *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr = uVar3;
    *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x8 = uVar4;
    *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x10 = uVar5;
    *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x18 = uVar6;
    *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x20 = uVar7;
    pFVar34[-1].AssetBaseClassLoaded.field0_0x0 = TVar8;
    pFVar34[-1].bHasBlueprintClasses = bVar18;
    pFVar34[-1].bIsEditorOnly = bVar19;
    *(undefined6 *)&pFVar34[-1].field_0x3a = uVar20;
    pFVar34[-1].Directories.AllocatorInstance.Data = pFVar9;
    pFVar34[-1].Directories.ArrayNum = iVar21;
    pFVar34[-1].Directories.ArrayMax = iVar22;
    pFVar34[-1].SpecificAssets.AllocatorInstance.Data = pFVar10;
    pFVar34[-1].SpecificAssets.ArrayNum = iVar23;
    pFVar34[-1].SpecificAssets.ArrayMax = iVar24;
    pFVar34[-1].Rules.Priority = iVar25;
    pFVar34[-1].Rules.ChunkId = iVar26;
    *(undefined8 *)&pFVar34[-1].Rules.bApplyRecursively = uVar11;
    pFVar34[-1].AssetScanPaths.AllocatorInstance.Data = pFVar12;
    pFVar34[-1].AssetScanPaths.ArrayNum = iVar27;
    pFVar34[-1].AssetScanPaths.ArrayMax = iVar28;
    pFVar34[-1].bIsDynamicAsset = bVar29;
    *(undefined3 *)&pFVar34[-1].field_0x81 = uVar30;
    pFVar34[-1].NumberOfAssets = iVar31;
    goto LAB_14759d5f0;
  }
  FVar2 = this->PrimaryAssetType;
  uVar3 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr;
  uVar4 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8;
  uVar5 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x10;
  uVar6 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x18;
  uVar7 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x20;
  iVar37 = iVar37 + -1;
  TVar8 = (this->AssetBaseClassLoaded).field0_0x0;
  bVar18 = this->bHasBlueprintClasses;
  bVar19 = this->bIsEditorOnly;
  uVar20 = *(undefined6 *)&this->field_0x3a;
  pFVar9 = (this->Directories).AllocatorInstance.Data;
  iVar21 = (this->Directories).ArrayNum;
  iVar22 = (this->Directories).ArrayMax;
  pFVar10 = (this->SpecificAssets).AllocatorInstance.Data;
  iVar23 = (this->SpecificAssets).ArrayNum;
  iVar24 = (this->SpecificAssets).ArrayMax;
  iVar25 = (this->Rules).Priority;
  iVar26 = (this->Rules).ChunkId;
  uVar11 = *(undefined8 *)&(this->Rules).bApplyRecursively;
  pFVar12 = (this->AssetScanPaths).AllocatorInstance.Data;
  iVar27 = (this->AssetScanPaths).ArrayNum;
  iVar28 = (this->AssetScanPaths).ArrayMax;
  bVar29 = this->bIsDynamicAsset;
  uVar30 = *(undefined3 *)&this->field_0x81;
  iVar31 = this->NumberOfAssets;
  this->PrimaryAssetType = pFVar33->PrimaryAssetType;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr = uVar1;
  uVar1 = *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x20;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x18 =
       *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar1;
  bVar13 = pFVar34[-1].bHasBlueprintClasses;
  bVar14 = pFVar34[-1].bIsEditorOnly;
  uVar15 = *(undefined6 *)&pFVar34[-1].field_0x3a;
  (this->AssetBaseClassLoaded).field0_0x0 = pFVar34[-1].AssetBaseClassLoaded.field0_0x0;
  this->bHasBlueprintClasses = bVar13;
  this->bIsEditorOnly = bVar14;
  *(undefined6 *)&this->field_0x3a = uVar15;
  iVar32 = pFVar34[-1].Directories.ArrayNum;
  iVar16 = pFVar34[-1].Directories.ArrayMax;
  (this->Directories).AllocatorInstance.Data = pFVar34[-1].Directories.AllocatorInstance.Data;
  (this->Directories).ArrayNum = iVar32;
  (this->Directories).ArrayMax = iVar16;
  iVar32 = pFVar34[-1].SpecificAssets.ArrayNum;
  iVar16 = pFVar34[-1].SpecificAssets.ArrayMax;
  (this->SpecificAssets).AllocatorInstance.Data = pFVar34[-1].SpecificAssets.AllocatorInstance.Data;
  (this->SpecificAssets).ArrayNum = iVar32;
  (this->SpecificAssets).ArrayMax = iVar16;
  iVar32 = pFVar34[-1].Rules.ChunkId;
  uVar1 = *(undefined8 *)&pFVar34[-1].Rules.bApplyRecursively;
  (this->Rules).Priority = pFVar34[-1].Rules.Priority;
  (this->Rules).ChunkId = iVar32;
  *(undefined8 *)&(this->Rules).bApplyRecursively = uVar1;
  iVar32 = pFVar34[-1].AssetScanPaths.ArrayNum;
  iVar16 = pFVar34[-1].AssetScanPaths.ArrayMax;
  (this->AssetScanPaths).AllocatorInstance.Data = pFVar34[-1].AssetScanPaths.AllocatorInstance.Data;
  (this->AssetScanPaths).ArrayNum = iVar32;
  (this->AssetScanPaths).ArrayMax = iVar16;
  uVar17 = *(undefined3 *)&pFVar34[-1].field_0x81;
  iVar32 = pFVar34[-1].NumberOfAssets;
  this->bIsDynamicAsset = pFVar34[-1].bIsDynamicAsset;
  *(undefined3 *)&this->field_0x81 = uVar17;
  this->NumberOfAssets = iVar32;
  pFVar33->PrimaryAssetType = FVar2;
  *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr = uVar3;
  *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x8 = uVar4;
  *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x10 = uVar5;
  *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x18 = uVar6;
  *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x20 = uVar7;
  pFVar34[-1].AssetBaseClassLoaded.field0_0x0 = TVar8;
  pFVar34[-1].bHasBlueprintClasses = bVar18;
  pFVar34[-1].bIsEditorOnly = bVar19;
  *(undefined6 *)&pFVar34[-1].field_0x3a = uVar20;
  pFVar34[-1].Directories.AllocatorInstance.Data = pFVar9;
  pFVar34[-1].Directories.ArrayNum = iVar21;
  pFVar34[-1].Directories.ArrayMax = iVar22;
  pFVar34[-1].SpecificAssets.AllocatorInstance.Data = pFVar10;
  pFVar34[-1].SpecificAssets.ArrayNum = iVar23;
  pFVar34[-1].SpecificAssets.ArrayMax = iVar24;
  pFVar34[-1].Rules.Priority = iVar25;
  pFVar34[-1].Rules.ChunkId = iVar26;
  *(undefined8 *)&pFVar34[-1].Rules.bApplyRecursively = uVar11;
  pFVar34[-1].AssetScanPaths.AllocatorInstance.Data = pFVar12;
  pFVar34[-1].AssetScanPaths.ArrayNum = iVar27;
  pFVar34[-1].AssetScanPaths.ArrayMax = iVar28;
  pFVar34[-1].bIsDynamicAsset = bVar29;
  *(undefined3 *)&pFVar34[-1].field_0x81 = uVar30;
  pFVar34[-1].NumberOfAssets = iVar31;
  if (((longlong)pFVar33 + (-0x88 - (longlong)this)) / 0x88 <
      ((longlong)pFVar39 - (longlong)pFVar38) / 0x88) {
    if (pFVar38 < pFVar39) {
      *ppFVar36 = pFVar38;
      ppFVar36[1] = pFVar39;
      *(int *)(ppFVar36 + 2) = iVar37;
      ppFVar36 = ppFVar36 + 3;
    }
    if (pFVar33 <= this + 1) goto LAB_14759d876;
    pFVar39 = pFVar34 + -2;
    pFVar38 = this;
  }
  else {
    if (this + 1 < pFVar33) {
      *ppFVar36 = this;
      ppFVar36[1] = pFVar34 + -2;
      *(int *)(ppFVar36 + 2) = iVar37;
      ppFVar36 = ppFVar36 + 3;
    }
    if (pFVar39 <= pFVar38) goto LAB_14759d876;
  }
  iVar32 = (int)(((longlong)pFVar39 - (longlong)pFVar38) / 0x88) + 1;
  this = pFVar38;
  if (iVar37 == 0) goto LAB_14759d85d;
  goto LAB_14759d510;
}

// IntroSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,`UAssetManager::DumpLoadedAssetState'::__l2::<lambda_1>_>_> @ 14759da10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __cdecl
AlgoImpl::
IntroSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,_UAssetManager::DumpLoadedAssetState_::__l2::<lambda_1>_>_>
          (FPrimaryAssetTypeInfo *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<FPrimaryAssetTypeInfo,_public:_static_void___cdecl_UAssetManager::DumpLoadedAssetState(void)_::_2_::<lambda_1>_>
          param_4)

{
  undefined8 uVar1;
  FName FVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  TObjectPtr<UClass>_u_0 TVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  bool bVar14;
  undefined6 uVar15;
  int iVar16;
  undefined3 uVar17;
  bool bVar18;
  bool bVar19;
  undefined6 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  undefined3 uVar30;
  int iVar31;
  int iVar32;
  FPrimaryAssetTypeInfo *pFVar33;
  FPrimaryAssetTypeInfo *pFVar34;
  FPrimaryAssetTypeInfo *pFVar35;
  FPrimaryAssetTypeInfo **ppFVar36;
  int iVar37;
  FPrimaryAssetTypeInfo *this;
  FPrimaryAssetTypeInfo *pFVar38;
  FPrimaryAssetTypeInfo *pFVar39;
  float fVar40;
  undefined1 auStack_3d8 [48];
  FPrimaryAssetTypeInfo *local_3a8;
  FPrimaryAssetTypeInfo *local_398;
  FPrimaryAssetTypeInfo *local_390;
  undefined4 local_388;
  undefined1 local_380 [744];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  if (1 < param_2) {
    local_390 = param_1 + (longlong)param_2 + -1;
    local_398 = param_1;
    fVar40 = logf((float)param_2 * (float)param_2);
    local_388 = (undefined4)(longlong)fVar40;
    memset(local_380,0,0x2e8);
    ppFVar36 = &local_398;
    do {
      pFVar39 = ppFVar36[1];
      pFVar38 = *ppFVar36;
      local_3a8 = ppFVar36[2];
      iVar32 = (int)(((longlong)pFVar39 - (longlong)pFVar38) / 0x88) + 1;
      this = pFVar38;
      iVar37 = (int)local_3a8;
      if ((int)local_3a8 != 0) {
LAB_14759db10:
        if (8 < iVar32) {
          uVar1 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr;
          pFVar33 = pFVar39 + 1;
          pFVar38 = this + iVar32 / 2;
          FVar2 = pFVar38->PrimaryAssetType;
          uVar3 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr;
          uVar4 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x8;
          uVar5 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x10;
          uVar6 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x18;
          uVar7 = *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x20;
          TVar8 = (pFVar38->AssetBaseClassLoaded).field0_0x0;
          bVar18 = pFVar38->bHasBlueprintClasses;
          bVar19 = pFVar38->bIsEditorOnly;
          uVar20 = *(undefined6 *)&pFVar38->field_0x3a;
          pFVar9 = (pFVar38->Directories).AllocatorInstance.Data;
          iVar21 = (pFVar38->Directories).ArrayNum;
          iVar22 = (pFVar38->Directories).ArrayMax;
          pFVar10 = (pFVar38->SpecificAssets).AllocatorInstance.Data;
          iVar23 = (pFVar38->SpecificAssets).ArrayNum;
          iVar24 = (pFVar38->SpecificAssets).ArrayMax;
          iVar25 = (pFVar38->Rules).Priority;
          iVar26 = (pFVar38->Rules).ChunkId;
          uVar11 = *(undefined8 *)&(pFVar38->Rules).bApplyRecursively;
          pFVar12 = (pFVar38->AssetScanPaths).AllocatorInstance.Data;
          iVar27 = (pFVar38->AssetScanPaths).ArrayNum;
          iVar28 = (pFVar38->AssetScanPaths).ArrayMax;
          bVar29 = pFVar38->bIsDynamicAsset;
          uVar30 = *(undefined3 *)&pFVar38->field_0x81;
          iVar31 = pFVar38->NumberOfAssets;
          pFVar38->PrimaryAssetType = this->PrimaryAssetType;
          *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr = uVar1;
          uVar1 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x10;
          *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x8 =
               *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8;
          *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar1;
          uVar1 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x20;
          *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x18 =
               *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x18;
          *(undefined8 *)&(pFVar38->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar1;
          bVar13 = this->bHasBlueprintClasses;
          bVar14 = this->bIsEditorOnly;
          uVar15 = *(undefined6 *)&this->field_0x3a;
          (pFVar38->AssetBaseClassLoaded).field0_0x0 = (this->AssetBaseClassLoaded).field0_0x0;
          pFVar38->bHasBlueprintClasses = bVar13;
          pFVar38->bIsEditorOnly = bVar14;
          *(undefined6 *)&pFVar38->field_0x3a = uVar15;
          iVar32 = (this->Directories).ArrayNum;
          iVar16 = (this->Directories).ArrayMax;
          (pFVar38->Directories).AllocatorInstance.Data = (this->Directories).AllocatorInstance.Data
          ;
          (pFVar38->Directories).ArrayNum = iVar32;
          (pFVar38->Directories).ArrayMax = iVar16;
          iVar32 = (this->SpecificAssets).ArrayNum;
          iVar16 = (this->SpecificAssets).ArrayMax;
          (pFVar38->SpecificAssets).AllocatorInstance.Data =
               (this->SpecificAssets).AllocatorInstance.Data;
          (pFVar38->SpecificAssets).ArrayNum = iVar32;
          (pFVar38->SpecificAssets).ArrayMax = iVar16;
          iVar32 = (this->Rules).ChunkId;
          uVar1 = *(undefined8 *)&(this->Rules).bApplyRecursively;
          (pFVar38->Rules).Priority = (this->Rules).Priority;
          (pFVar38->Rules).ChunkId = iVar32;
          *(undefined8 *)&(pFVar38->Rules).bApplyRecursively = uVar1;
          iVar32 = (this->AssetScanPaths).ArrayNum;
          iVar16 = (this->AssetScanPaths).ArrayMax;
          (pFVar38->AssetScanPaths).AllocatorInstance.Data =
               (this->AssetScanPaths).AllocatorInstance.Data;
          (pFVar38->AssetScanPaths).ArrayNum = iVar32;
          (pFVar38->AssetScanPaths).ArrayMax = iVar16;
          uVar17 = *(undefined3 *)&this->field_0x81;
          iVar32 = this->NumberOfAssets;
          pFVar38->bIsDynamicAsset = this->bIsDynamicAsset;
          *(undefined3 *)&pFVar38->field_0x81 = uVar17;
          pFVar38->NumberOfAssets = iVar32;
          this->PrimaryAssetType = FVar2;
          *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr = uVar3;
          *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8 = uVar4;
          *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar5;
          *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x18 = uVar6;
          *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar7;
          (this->AssetBaseClassLoaded).field0_0x0 = TVar8;
          this->bHasBlueprintClasses = bVar18;
          this->bIsEditorOnly = bVar19;
          *(undefined6 *)&this->field_0x3a = uVar20;
          (this->Directories).AllocatorInstance.Data = pFVar9;
          (this->Directories).ArrayNum = iVar21;
          (this->Directories).ArrayMax = iVar22;
          (this->SpecificAssets).AllocatorInstance.Data = pFVar10;
          (this->SpecificAssets).ArrayNum = iVar23;
          (this->SpecificAssets).ArrayMax = iVar24;
          (this->Rules).Priority = iVar25;
          (this->Rules).ChunkId = iVar26;
          *(undefined8 *)&(this->Rules).bApplyRecursively = uVar11;
          (this->AssetScanPaths).AllocatorInstance.Data = pFVar12;
          (this->AssetScanPaths).ArrayNum = iVar27;
          (this->AssetScanPaths).ArrayMax = iVar28;
          this->bIsDynamicAsset = bVar29;
          *(undefined3 *)&this->field_0x81 = uVar30;
          this->NumberOfAssets = iVar31;
          pFVar38 = this;
LAB_14759dbf0:
          pFVar35 = pFVar38;
          pFVar38 = pFVar35 + 1;
          if (pFVar38 <= pFVar39) goto code_r0x00014759dbfc;
          goto LAB_14759dc10;
        }
        for (; pFVar33 = this, pFVar38 = this, this < pFVar39; pFVar39 = pFVar39 + -1) {
          while (pFVar35 = pFVar33, pFVar38 = pFVar38 + 1, pFVar38 <= pFVar39) {
            iVar37 = ::FName::Compare(&pFVar35->PrimaryAssetType,&pFVar38->PrimaryAssetType);
            pFVar33 = pFVar38;
            if (-1 < iVar37) {
              pFVar33 = pFVar35;
            }
          }
          FVar2 = pFVar35->PrimaryAssetType;
          uVar1 = *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr;
          bVar29 = pFVar35->bIsDynamicAsset;
          uVar30 = *(undefined3 *)&pFVar35->field_0x81;
          iVar28 = pFVar35->NumberOfAssets;
          uVar3 = *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x8;
          uVar4 = *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x10;
          uVar5 = *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr;
          uVar6 = *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x18;
          uVar7 = *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x20;
          TVar8 = (pFVar35->AssetBaseClassLoaded).field0_0x0;
          bVar18 = pFVar35->bHasBlueprintClasses;
          bVar19 = pFVar35->bIsEditorOnly;
          uVar20 = *(undefined6 *)&pFVar35->field_0x3a;
          pFVar9 = (pFVar35->Directories).AllocatorInstance.Data;
          iVar16 = (pFVar35->Directories).ArrayNum;
          iVar21 = (pFVar35->Directories).ArrayMax;
          pFVar10 = (pFVar35->SpecificAssets).AllocatorInstance.Data;
          iVar22 = (pFVar35->SpecificAssets).ArrayNum;
          iVar23 = (pFVar35->SpecificAssets).ArrayMax;
          iVar24 = (pFVar35->Rules).Priority;
          iVar25 = (pFVar35->Rules).ChunkId;
          uVar11 = *(undefined8 *)&(pFVar35->Rules).bApplyRecursively;
          pFVar12 = (pFVar35->AssetScanPaths).AllocatorInstance.Data;
          iVar26 = (pFVar35->AssetScanPaths).ArrayNum;
          iVar27 = (pFVar35->AssetScanPaths).ArrayMax;
          pFVar35->PrimaryAssetType = pFVar39->PrimaryAssetType;
          *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr = uVar5;
          uVar5 = *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x10;
          *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x8 =
               *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x8;
          *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar5;
          uVar5 = *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x20;
          *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x18 =
               *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x18;
          *(undefined8 *)&(pFVar35->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar5;
          bVar13 = pFVar39->bHasBlueprintClasses;
          bVar14 = pFVar39->bIsEditorOnly;
          uVar15 = *(undefined6 *)&pFVar39->field_0x3a;
          (pFVar35->AssetBaseClassLoaded).field0_0x0 = (pFVar39->AssetBaseClassLoaded).field0_0x0;
          pFVar35->bHasBlueprintClasses = bVar13;
          pFVar35->bIsEditorOnly = bVar14;
          *(undefined6 *)&pFVar35->field_0x3a = uVar15;
          iVar37 = (pFVar39->Directories).ArrayNum;
          iVar32 = (pFVar39->Directories).ArrayMax;
          (pFVar35->Directories).AllocatorInstance.Data =
               (pFVar39->Directories).AllocatorInstance.Data;
          (pFVar35->Directories).ArrayNum = iVar37;
          (pFVar35->Directories).ArrayMax = iVar32;
          iVar37 = (pFVar39->SpecificAssets).ArrayNum;
          iVar32 = (pFVar39->SpecificAssets).ArrayMax;
          (pFVar35->SpecificAssets).AllocatorInstance.Data =
               (pFVar39->SpecificAssets).AllocatorInstance.Data;
          (pFVar35->SpecificAssets).ArrayNum = iVar37;
          (pFVar35->SpecificAssets).ArrayMax = iVar32;
          iVar37 = (pFVar39->Rules).ChunkId;
          uVar5 = *(undefined8 *)&(pFVar39->Rules).bApplyRecursively;
          (pFVar35->Rules).Priority = (pFVar39->Rules).Priority;
          (pFVar35->Rules).ChunkId = iVar37;
          *(undefined8 *)&(pFVar35->Rules).bApplyRecursively = uVar5;
          iVar37 = (pFVar39->AssetScanPaths).ArrayNum;
          iVar32 = (pFVar39->AssetScanPaths).ArrayMax;
          (pFVar35->AssetScanPaths).AllocatorInstance.Data =
               (pFVar39->AssetScanPaths).AllocatorInstance.Data;
          (pFVar35->AssetScanPaths).ArrayNum = iVar37;
          (pFVar35->AssetScanPaths).ArrayMax = iVar32;
          uVar17 = *(undefined3 *)&pFVar39->field_0x81;
          iVar37 = pFVar39->NumberOfAssets;
          pFVar35->bIsDynamicAsset = pFVar39->bIsDynamicAsset;
          *(undefined3 *)&pFVar35->field_0x81 = uVar17;
          pFVar35->NumberOfAssets = iVar37;
          pFVar39->PrimaryAssetType = FVar2;
          *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr = uVar1;
          *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x8 = uVar3;
          *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar4;
          *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x18 = uVar6;
          *(undefined8 *)&(pFVar39->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar7;
          (pFVar39->AssetBaseClassLoaded).field0_0x0 = TVar8;
          pFVar39->bHasBlueprintClasses = bVar18;
          pFVar39->bIsEditorOnly = bVar19;
          *(undefined6 *)&pFVar39->field_0x3a = uVar20;
          (pFVar39->Directories).AllocatorInstance.Data = pFVar9;
          (pFVar39->Directories).ArrayNum = iVar16;
          (pFVar39->Directories).ArrayMax = iVar21;
          (pFVar39->SpecificAssets).AllocatorInstance.Data = pFVar10;
          (pFVar39->SpecificAssets).ArrayNum = iVar22;
          (pFVar39->SpecificAssets).ArrayMax = iVar23;
          (pFVar39->Rules).Priority = iVar24;
          (pFVar39->Rules).ChunkId = iVar25;
          *(undefined8 *)&(pFVar39->Rules).bApplyRecursively = uVar11;
          (pFVar39->AssetScanPaths).AllocatorInstance.Data = pFVar12;
          (pFVar39->AssetScanPaths).ArrayNum = iVar26;
          (pFVar39->AssetScanPaths).ArrayMax = iVar27;
          pFVar39->bIsDynamicAsset = bVar29;
          *(undefined3 *)&pFVar39->field_0x81 = uVar30;
          pFVar39->NumberOfAssets = iVar28;
        }
        goto LAB_14759de76;
      }
LAB_14759de5d:
      HeapSortInternal<FPrimaryAssetTypeInfo,int,FIdentityFunctor,TDereferenceWrapper<FPrimaryAssetTypeInfo,_UAssetManager::DumpLoadedAssetState_::__l2::<lambda_1>_>_>
                (pFVar38,iVar32,param_3,param_4);
LAB_14759de76:
      ppFVar36 = ppFVar36 + -3;
    } while (&local_398 <= ppFVar36);
  }
  return;
code_r0x00014759dbfc:
  iVar32 = ::FName::Compare(&this->PrimaryAssetType,&pFVar38->PrimaryAssetType);
  if (-1 < iVar32) goto LAB_14759dbf0;
LAB_14759dc10:
  do {
    pFVar34 = pFVar33;
    pFVar33 = pFVar34 + -1;
    if (pFVar33 <= this) break;
    iVar32 = ::FName::Compare(&pFVar33->PrimaryAssetType,&this->PrimaryAssetType);
  } while (-1 < iVar32);
  uVar1 = *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr;
  if (pFVar38 <= pFVar33) {
    FVar2 = pFVar38->PrimaryAssetType;
    uVar3 = *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr;
    uVar4 = *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x8;
    uVar5 = *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x10;
    uVar6 = *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x18;
    uVar7 = *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x20;
    TVar8 = pFVar35[1].AssetBaseClassLoaded.field0_0x0;
    bVar18 = pFVar35[1].bHasBlueprintClasses;
    bVar19 = pFVar35[1].bIsEditorOnly;
    uVar20 = *(undefined6 *)&pFVar35[1].field_0x3a;
    pFVar9 = pFVar35[1].Directories.AllocatorInstance.Data;
    iVar21 = pFVar35[1].Directories.ArrayNum;
    iVar22 = pFVar35[1].Directories.ArrayMax;
    pFVar10 = pFVar35[1].SpecificAssets.AllocatorInstance.Data;
    iVar23 = pFVar35[1].SpecificAssets.ArrayNum;
    iVar24 = pFVar35[1].SpecificAssets.ArrayMax;
    iVar25 = pFVar35[1].Rules.Priority;
    iVar26 = pFVar35[1].Rules.ChunkId;
    uVar11 = *(undefined8 *)&pFVar35[1].Rules.bApplyRecursively;
    pFVar12 = pFVar35[1].AssetScanPaths.AllocatorInstance.Data;
    iVar27 = pFVar35[1].AssetScanPaths.ArrayNum;
    iVar28 = pFVar35[1].AssetScanPaths.ArrayMax;
    bVar29 = pFVar35[1].bIsDynamicAsset;
    uVar30 = *(undefined3 *)&pFVar35[1].field_0x81;
    iVar31 = pFVar35[1].NumberOfAssets;
    pFVar38->PrimaryAssetType = pFVar33->PrimaryAssetType;
    *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr = uVar1;
    uVar1 = *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x10;
    *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x8 =
         *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x8;
    *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x10 = uVar1;
    uVar1 = *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x20;
    *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x18 =
         *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x18;
    *(undefined8 *)&pFVar35[1].AssetBaseClass.SoftObjectPtr.field_0x20 = uVar1;
    bVar13 = pFVar34[-1].bHasBlueprintClasses;
    bVar14 = pFVar34[-1].bIsEditorOnly;
    uVar15 = *(undefined6 *)&pFVar34[-1].field_0x3a;
    pFVar35[1].AssetBaseClassLoaded.field0_0x0 = pFVar34[-1].AssetBaseClassLoaded.field0_0x0;
    pFVar35[1].bHasBlueprintClasses = bVar13;
    pFVar35[1].bIsEditorOnly = bVar14;
    *(undefined6 *)&pFVar35[1].field_0x3a = uVar15;
    iVar32 = pFVar34[-1].Directories.ArrayNum;
    iVar16 = pFVar34[-1].Directories.ArrayMax;
    pFVar35[1].Directories.AllocatorInstance.Data = pFVar34[-1].Directories.AllocatorInstance.Data;
    pFVar35[1].Directories.ArrayNum = iVar32;
    pFVar35[1].Directories.ArrayMax = iVar16;
    iVar32 = pFVar34[-1].SpecificAssets.ArrayNum;
    iVar16 = pFVar34[-1].SpecificAssets.ArrayMax;
    pFVar35[1].SpecificAssets.AllocatorInstance.Data =
         pFVar34[-1].SpecificAssets.AllocatorInstance.Data;
    pFVar35[1].SpecificAssets.ArrayNum = iVar32;
    pFVar35[1].SpecificAssets.ArrayMax = iVar16;
    iVar32 = pFVar34[-1].Rules.ChunkId;
    uVar1 = *(undefined8 *)&pFVar34[-1].Rules.bApplyRecursively;
    pFVar35[1].Rules.Priority = pFVar34[-1].Rules.Priority;
    pFVar35[1].Rules.ChunkId = iVar32;
    *(undefined8 *)&pFVar35[1].Rules.bApplyRecursively = uVar1;
    iVar32 = pFVar34[-1].AssetScanPaths.ArrayNum;
    iVar16 = pFVar34[-1].AssetScanPaths.ArrayMax;
    pFVar35[1].AssetScanPaths.AllocatorInstance.Data =
         pFVar34[-1].AssetScanPaths.AllocatorInstance.Data;
    pFVar35[1].AssetScanPaths.ArrayNum = iVar32;
    pFVar35[1].AssetScanPaths.ArrayMax = iVar16;
    uVar17 = *(undefined3 *)&pFVar34[-1].field_0x81;
    iVar32 = pFVar34[-1].NumberOfAssets;
    pFVar35[1].bIsDynamicAsset = pFVar34[-1].bIsDynamicAsset;
    *(undefined3 *)&pFVar35[1].field_0x81 = uVar17;
    pFVar35[1].NumberOfAssets = iVar32;
    pFVar33->PrimaryAssetType = FVar2;
    *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr = uVar3;
    *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x8 = uVar4;
    *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x10 = uVar5;
    *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x18 = uVar6;
    *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x20 = uVar7;
    pFVar34[-1].AssetBaseClassLoaded.field0_0x0 = TVar8;
    pFVar34[-1].bHasBlueprintClasses = bVar18;
    pFVar34[-1].bIsEditorOnly = bVar19;
    *(undefined6 *)&pFVar34[-1].field_0x3a = uVar20;
    pFVar34[-1].Directories.AllocatorInstance.Data = pFVar9;
    pFVar34[-1].Directories.ArrayNum = iVar21;
    pFVar34[-1].Directories.ArrayMax = iVar22;
    pFVar34[-1].SpecificAssets.AllocatorInstance.Data = pFVar10;
    pFVar34[-1].SpecificAssets.ArrayNum = iVar23;
    pFVar34[-1].SpecificAssets.ArrayMax = iVar24;
    pFVar34[-1].Rules.Priority = iVar25;
    pFVar34[-1].Rules.ChunkId = iVar26;
    *(undefined8 *)&pFVar34[-1].Rules.bApplyRecursively = uVar11;
    pFVar34[-1].AssetScanPaths.AllocatorInstance.Data = pFVar12;
    pFVar34[-1].AssetScanPaths.ArrayNum = iVar27;
    pFVar34[-1].AssetScanPaths.ArrayMax = iVar28;
    pFVar34[-1].bIsDynamicAsset = bVar29;
    *(undefined3 *)&pFVar34[-1].field_0x81 = uVar30;
    pFVar34[-1].NumberOfAssets = iVar31;
    goto LAB_14759dbf0;
  }
  FVar2 = this->PrimaryAssetType;
  uVar3 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr;
  uVar4 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8;
  uVar5 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x10;
  uVar6 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x18;
  uVar7 = *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x20;
  iVar37 = iVar37 + -1;
  TVar8 = (this->AssetBaseClassLoaded).field0_0x0;
  bVar18 = this->bHasBlueprintClasses;
  bVar19 = this->bIsEditorOnly;
  uVar20 = *(undefined6 *)&this->field_0x3a;
  pFVar9 = (this->Directories).AllocatorInstance.Data;
  iVar21 = (this->Directories).ArrayNum;
  iVar22 = (this->Directories).ArrayMax;
  pFVar10 = (this->SpecificAssets).AllocatorInstance.Data;
  iVar23 = (this->SpecificAssets).ArrayNum;
  iVar24 = (this->SpecificAssets).ArrayMax;
  iVar25 = (this->Rules).Priority;
  iVar26 = (this->Rules).ChunkId;
  uVar11 = *(undefined8 *)&(this->Rules).bApplyRecursively;
  pFVar12 = (this->AssetScanPaths).AllocatorInstance.Data;
  iVar27 = (this->AssetScanPaths).ArrayNum;
  iVar28 = (this->AssetScanPaths).ArrayMax;
  bVar29 = this->bIsDynamicAsset;
  uVar30 = *(undefined3 *)&this->field_0x81;
  iVar31 = this->NumberOfAssets;
  this->PrimaryAssetType = pFVar33->PrimaryAssetType;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr = uVar1;
  uVar1 = *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x20;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x18 =
       *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->AssetBaseClass).SoftObjectPtr.field_0x20 = uVar1;
  bVar13 = pFVar34[-1].bHasBlueprintClasses;
  bVar14 = pFVar34[-1].bIsEditorOnly;
  uVar15 = *(undefined6 *)&pFVar34[-1].field_0x3a;
  (this->AssetBaseClassLoaded).field0_0x0 = pFVar34[-1].AssetBaseClassLoaded.field0_0x0;
  this->bHasBlueprintClasses = bVar13;
  this->bIsEditorOnly = bVar14;
  *(undefined6 *)&this->field_0x3a = uVar15;
  iVar32 = pFVar34[-1].Directories.ArrayNum;
  iVar16 = pFVar34[-1].Directories.ArrayMax;
  (this->Directories).AllocatorInstance.Data = pFVar34[-1].Directories.AllocatorInstance.Data;
  (this->Directories).ArrayNum = iVar32;
  (this->Directories).ArrayMax = iVar16;
  iVar32 = pFVar34[-1].SpecificAssets.ArrayNum;
  iVar16 = pFVar34[-1].SpecificAssets.ArrayMax;
  (this->SpecificAssets).AllocatorInstance.Data = pFVar34[-1].SpecificAssets.AllocatorInstance.Data;
  (this->SpecificAssets).ArrayNum = iVar32;
  (this->SpecificAssets).ArrayMax = iVar16;
  iVar32 = pFVar34[-1].Rules.ChunkId;
  uVar1 = *(undefined8 *)&pFVar34[-1].Rules.bApplyRecursively;
  (this->Rules).Priority = pFVar34[-1].Rules.Priority;
  (this->Rules).ChunkId = iVar32;
  *(undefined8 *)&(this->Rules).bApplyRecursively = uVar1;
  iVar32 = pFVar34[-1].AssetScanPaths.ArrayNum;
  iVar16 = pFVar34[-1].AssetScanPaths.ArrayMax;
  (this->AssetScanPaths).AllocatorInstance.Data = pFVar34[-1].AssetScanPaths.AllocatorInstance.Data;
  (this->AssetScanPaths).ArrayNum = iVar32;
  (this->AssetScanPaths).ArrayMax = iVar16;
  uVar17 = *(undefined3 *)&pFVar34[-1].field_0x81;
  iVar32 = pFVar34[-1].NumberOfAssets;
  this->bIsDynamicAsset = pFVar34[-1].bIsDynamicAsset;
  *(undefined3 *)&this->field_0x81 = uVar17;
  this->NumberOfAssets = iVar32;
  pFVar33->PrimaryAssetType = FVar2;
  *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr = uVar3;
  *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x8 = uVar4;
  *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x10 = uVar5;
  *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x18 = uVar6;
  *(undefined8 *)&pFVar34[-1].AssetBaseClass.SoftObjectPtr.field_0x20 = uVar7;
  pFVar34[-1].AssetBaseClassLoaded.field0_0x0 = TVar8;
  pFVar34[-1].bHasBlueprintClasses = bVar18;
  pFVar34[-1].bIsEditorOnly = bVar19;
  *(undefined6 *)&pFVar34[-1].field_0x3a = uVar20;
  pFVar34[-1].Directories.AllocatorInstance.Data = pFVar9;
  pFVar34[-1].Directories.ArrayNum = iVar21;
  pFVar34[-1].Directories.ArrayMax = iVar22;
  pFVar34[-1].SpecificAssets.AllocatorInstance.Data = pFVar10;
  pFVar34[-1].SpecificAssets.ArrayNum = iVar23;
  pFVar34[-1].SpecificAssets.ArrayMax = iVar24;
  pFVar34[-1].Rules.Priority = iVar25;
  pFVar34[-1].Rules.ChunkId = iVar26;
  *(undefined8 *)&pFVar34[-1].Rules.bApplyRecursively = uVar11;
  pFVar34[-1].AssetScanPaths.AllocatorInstance.Data = pFVar12;
  pFVar34[-1].AssetScanPaths.ArrayNum = iVar27;
  pFVar34[-1].AssetScanPaths.ArrayMax = iVar28;
  pFVar34[-1].bIsDynamicAsset = bVar29;
  *(undefined3 *)&pFVar34[-1].field_0x81 = uVar30;
  pFVar34[-1].NumberOfAssets = iVar31;
  if (((longlong)pFVar33 + (-0x88 - (longlong)this)) / 0x88 <
      ((longlong)pFVar39 - (longlong)pFVar38) / 0x88) {
    if (pFVar38 < pFVar39) {
      *ppFVar36 = pFVar38;
      ppFVar36[1] = pFVar39;
      *(int *)(ppFVar36 + 2) = iVar37;
      ppFVar36 = ppFVar36 + 3;
    }
    if (pFVar33 <= this + 1) goto LAB_14759de76;
    pFVar39 = pFVar34 + -2;
    pFVar38 = this;
  }
  else {
    if (this + 1 < pFVar33) {
      *ppFVar36 = this;
      ppFVar36[1] = pFVar34 + -2;
      *(int *)(ppFVar36 + 2) = iVar37;
      ppFVar36 = ppFVar36 + 3;
    }
    if (pFVar39 <= pFVar38) goto LAB_14759de76;
  }
  iVar32 = (int)(((longlong)pFVar39 - (longlong)pFVar38) / 0x88) + 1;
  this = pFVar38;
  if (iVar37 == 0) goto LAB_14759de5d;
  goto LAB_14759db10;
}

// IsObjectPtrEqual<USoundNode,USoundNode_*,0> @ 14759e060

bool __cdecl
ObjectPtr_Private::IsObjectPtrEqual<USoundNode,USoundNode_*,0>
          (TObjectPtr<USoundNode> *param_1,USoundNode **param_2)

{
  if ((param_1->field0_0x0).DebugPtr == (USoundNode *)0x0) {
    return *param_2 == (USoundNode *)0x0;
  }
  return (param_1->field0_0x0).DebugPtr == *param_2;
}

// KahnTopologicalSort<TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_>_&,`FAssetCompilingManager::RegisterManager'::__l2::<lambda_1>_> @ 14759e080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Algo::
KahnTopologicalSort<TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_>_&,_FAssetCompilingManager::RegisterManager_::__l2::<lambda_1>_>
          (TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_> *param_1,<lambda_1> param_2,
          ETopologicalSort param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ForElementType<FSetElementId> FVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  ulonglong uVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar17;
  byte bVar18;
  ForAnyElementType FVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 *puVar31;
  uint *puVar32;
  uint uVar33;
  ForElementType<unsigned_int> FVar34;
  undefined1 auStackY_4c8 [32];
  undefined1 local_478;
  undefined1 local_477;
  undefined1 local_476;
  undefined1 local_475;
  undefined1 local_474 [4];
  uint local_470 [2];
  ForAnyElementType local_468;
  undefined8 local_460;
  ForAnyElementType local_458;
  undefined8 local_450;
  uint local_448;
  uint local_444;
  uint local_440 [2];
  uint local_438 [2];
  ETopologicalSort local_430;
  uint local_42c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_428;
  int iStack_420;
  uint uStack_41c;
  TBitArray<FDefaultBitArrayAllocator> *local_418;
  undefined4 uStack_410;
  uint uStack_40c;
  uint local_408;
  undefined4 uStack_404;
  int iStack_400;
  undefined4 uStack_3fc;
  uint local_3f8;
  uint uStack_3f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3f0;
  undefined4 local_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  undefined4 uStack_3dc;
  int local_3d8;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c4;
  TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_> *local_3c0;
  undefined4 local_3b8;
  int local_3b4;
  int local_3b0 [2];
  longlong *local_3a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3a0;
  int local_380;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_378;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_370;
  undefined8 uStack_350;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_348;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_340;
  undefined8 uStack_320;
  undefined4 local_2fc;
  undefined4 local_2dc;
  undefined1 local_2d8 [32];
  uint *local_2b8;
  ulonglong uStack_2b0;
  undefined8 local_2a8;
  ForElementType<FSetElementId> FStack_2a0;
  ulonglong uStack_290;
  undefined1 local_288 [32];
  uint *local_268;
  ulonglong uStack_260;
  undefined8 local_258;
  ForElementType<FSetElementId> FStack_250;
  undefined8 uStack_240;
  undefined1 local_238 [32];
  ForElementType<unsigned_int> local_218;
  uint local_210;
  int local_20c;
  int local_208;
  int local_204;
  undefined1 local_200 [8];
  ForAnyElementType local_1f8;
  uint local_1f0;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  ForAnyElementType local_1d8;
  ulonglong local_1d0;
  ForAnyElementType local_1c8;
  undefined8 local_1c0;
  FMutuallyReachableVertexSetContext local_1b8;
  bool local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  uVar23 = 0;
  local_238._0_8_ = (FScriptContainerElement *)0x0;
  local_238._8_8_ = 0;
  local_218 = (ForElementType<unsigned_int>)0x0;
  local_210 = 0;
  local_20c = 0x80;
  local_208 = -1;
  local_204 = 0;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0 = 0;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0._0_4_ = 0;
  local_1e0._4_4_ = 0;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = 0;
  local_1c8.Data = (FScriptContainerElement *)0x0;
  local_1c0._0_4_ = 0;
  local_1c0._4_4_ = 0;
  local_58 = false;
  local_2d8._0_8_ = (FScriptContainerElement *)0x0;
  local_2d8._8_8_ = 0;
  local_2b8 = (uint *)0x0;
  uStack_2b0 = 0x8000000000;
  local_2a8 = 0xffffffff;
  FStack_2a0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_290 = uStack_290 & 0xffffffff00000000;
  local_430 = param_3;
  local_3c0 = param_1;
  AlgoImpl::
  KahnTopologicalSort_CreateWorkingGraph<TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_>,_FAssetCompilingManager::RegisterManager_::__l2::<lambda_1>_>
            ((FKahnContext *)local_238,param_1,param_2,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8);
  uVar33 = (uint)local_1d0;
  local_288._0_8_ = (FScriptContainerElement *)0x0;
  local_288._8_8_ = 0;
  local_268 = (uint *)0x0;
  uStack_260 = 0x8000000000;
  local_258 = 0xffffffff;
  FStack_250.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uStack_240 = (ulonglong)uStack_240._4_4_ << 0x20;
  local_458.Data = (FScriptContainerElement *)0x0;
  local_450 = 0;
  local_42c = (uint)local_1d0;
  if ((int)(uint)local_1d0 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(local_1d0 & 0xffffffff);
  }
  if (0 < (int)(uint)local_1d0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,(uint)local_1d0,&local_458,0,(int *)((longlong)&local_450 + 4));
  }
  if (uVar33 <= (uint)(local_238._8_4_ - local_204)) goto LAB_14759e475;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_238,uVar33);
  uVar22 = 1;
  if (3 < uVar33) {
    uVar22 = (ulonglong)((uVar33 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_3b8 = (undefined4)lVar20;
    uVar22 = (ulonglong)(uint)(1 << ((byte)lVar20 & 0x1f));
  }
  uVar29 = (uint)uVar22;
  if ((local_1f0 != 0) && ((int)uVar29 <= (int)local_1f0)) goto LAB_14759e475;
  local_1f0 = uVar29;
  if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,0,4);
  }
  if (uVar29 != 0) {
    uVar27 = uVar29;
    if (uVar29 < 2) {
      if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
        uVar27 = 0;
        goto LAB_14759e2b8;
      }
    }
    else {
LAB_14759e2b8:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,uVar27,4);
    }
    if (0 < (int)uVar29) {
      uVar30 = uVar23;
      do {
        FVar19.Data = (FScriptContainerElement *)local_200;
        if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar19.Data = local_1f8.Data;
        }
        uVar16 = uVar30 & (longlong)(int)uVar29 - 1U;
        uVar30 = uVar30 + 1;
        *(undefined4 *)((longlong)FVar19.Data + uVar16 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  if (local_1f0 != 0) {
    pTStack_3f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10);
    local_3f8 = 0;
    uStack_3f4 = 1;
    uStack_3e4 = 0;
    uStack_3e0 = 0;
    uVar22 = uVar23;
    if (local_210 != 0) {
      FVar34 = (ForElementType<unsigned_int>)((longlong)local_238 + 0x10);
      if (local_218 != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_218;
      }
      uVar29 = *(uint *)FVar34;
      uVar30 = uVar23;
      while (uVar29 == 0) {
        uStack_3e0 = (int)uVar30 + 0x20;
        uVar30 = (ulonglong)uStack_3e0;
        iVar15 = (int)uVar22;
        local_3f8 = iVar15 + 1;
        uVar22 = (ulonglong)local_3f8;
        if ((int)((local_210 - 1) + ((int)(local_210 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_3f8)
        goto LAB_14759e3cd;
        uVar29 = ((uint *)((longlong)FVar34 + 4))[iVar15];
      }
      uStack_3f4 = -uVar29 & uVar29;
      uVar22 = (ulonglong)uStack_3f4 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_3b4 = (int)lVar20;
      uStack_3e4 = local_3b4 + -1 + uStack_3e0;
      uVar22 = (ulonglong)uStack_3e4;
      if ((int)local_210 < (int)uStack_3e4) {
LAB_14759e3cd:
        uVar22 = (ulonglong)local_210;
        uStack_3e4 = local_210;
      }
    }
    local_3e8 = 0xffffffff;
    local_3a8 = (longlong *)local_238;
    local_3a0._padding_ = CONCAT44(uStack_3f4,local_3f8);
    local_3a0.CurrentBitIndex = uStack_3e4;
    local_3a0.UnvisitedBitMask = 0xffffffff;
    local_3a0._28_4_ = uStack_3dc;
    local_3a0.BaseBitIndex = uStack_3e0;
    local_3a0.Array = pTStack_3f0;
    if ((int)uVar22 < (int)local_210) {
      do {
        iVar15 = (int)uVar22;
        uVar29 = local_1f0 - 1 & *(uint *)(*local_3a8 + (longlong)iVar15 * 0xc);
        lVar20 = *local_3a8 + (longlong)iVar15 * 0xc;
        *(uint *)(lVar20 + 8) = uVar29;
        FVar19.Data = (FScriptContainerElement *)local_200;
        if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
          FVar19.Data = local_1f8.Data;
        }
        uVar22 = (longlong)(int)local_1f0 - 1U & (longlong)(int)uVar29;
        *(undefined4 *)(lVar20 + 4) = *(undefined4 *)((longlong)FVar19.Data + uVar22 * 4);
        *(int *)((longlong)FVar19.Data + uVar22 * 4) = iVar15;
        local_3a0.UnvisitedBitMask = local_3a0.UnvisitedBitMask & ~local_3a0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3a0);
        uVar22 = (ulonglong)(uint)local_3a0.CurrentBitIndex;
      } while (local_3a0.CurrentBitIndex < (local_3a0.Array)->NumBits);
    }
  }
LAB_14759e475:
  local_448 = 0;
  if (0 < (int)uVar33) {
    do {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238,local_3b0,
                 (bool *)&local_448);
      local_448 = (int)uVar23 + 1;
      uVar23 = (ulonglong)local_448;
    } while ((int)local_448 < (int)uVar33);
  }
  iVar15 = local_238._8_4_ - local_204;
  do {
    if (iVar15 < 1) {
      uVar29 = 0;
      local_468.Data = (FScriptContainerElement *)0x0;
      local_460 = 0;
      if (0 < (int)uVar33) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar33,&local_468,0,(int *)((longlong)&local_460 + 4));
      }
      pFVar24 = (param_1->AllocatorInstance).Data;
      iVar15 = param_1->ArrayNum;
      pFVar26 = pFVar24 + (longlong)iVar15 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar15) {
          local_475 = 0;
          `TCheckedPointerIterator<IAssetCompilingManager_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_475);
        }
        if (pFVar24 == pFVar26) break;
        if (((local_468.Data <= pFVar24) &&
            (pFVar24 < local_468.Data + (longlong)local_460._4_4_ * 8)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        if ((int)local_460 == local_460._4_4_) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_468,(int *)((longlong)&local_460 + 4));
          local_460 = CONCAT44(local_460._4_4_,iVar21);
        }
        lVar20 = (longlong)(int)local_460;
        local_460 = CONCAT44(local_460._4_4_,(int)local_460 + 1);
        uVar3 = *(undefined8 *)pFVar24;
        pFVar24 = pFVar24 + 8;
        *(undefined8 *)(local_468.Data + lVar20 * 8) = uVar3;
      }
      pFVar24 = (param_1->AllocatorInstance).Data;
      iVar15 = param_1->ArrayNum;
      lVar20 = 0;
      pFVar26 = pFVar24 + (longlong)iVar15 * 8;
      while( true ) {
        if (param_1->ArrayNum != iVar15) {
          local_474[0] = 0;
          `TCheckedPointerIterator<IAssetCompilingManager_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_474);
        }
        if (pFVar24 == pFVar26) break;
        uVar33 = 0;
        if ((int)uVar29 < (int)local_450) {
          uVar33 = ~uVar29 >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        uVar33 = *(uint *)(local_458.Data + lVar20);
        uVar27 = 0;
        if ((int)uVar33 < (int)local_460) {
          uVar27 = ~uVar33 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        uVar29 = uVar29 + 1;
        lVar20 = lVar20 + 4;
        *(undefined8 *)pFVar24 = *(undefined8 *)(local_468.Data + (longlong)(int)uVar33 * 8);
        pFVar24 = pFVar24 + 8;
      }
      bVar13 = true;
      if (local_468.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.Data);
      }
LAB_14759ef1d:
      if (local_458.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_458.Data);
      }
      uStack_240 = uStack_240 & 0xffffffff00000000;
      if (FStack_250.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_250.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_288);
      uStack_290 = uStack_290 & 0xffffffff00000000;
      if (FStack_2a0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FStack_2a0.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_2d8);
      if (local_58 != false) {
        AlgoImpl::FMutuallyReachableVertexSetContext::~FMutuallyReachableVertexSetContext
                  (&local_1b8);
      }
      if (local_1c8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1d8.Data,(uint)local_1d0);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1d8.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1d8.Data);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e8.Data,(int)local_1e0);
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_1e8.Data !=
          (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_1e8.Data);
      }
      local_1f0 = 0;
      if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free(local_1f8.Data);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_238);
      return bVar13;
    }
    iVar15 = 0;
    uVar33 = 0;
    if (local_2d8._8_4_ == local_2a8._4_4_) {
      if ((param_3 & AllowCycles) == None) {
        bVar13 = false;
        goto LAB_14759ef1d;
      }
      pTVar17 = AlgoImpl::FindMostIndependentMutuallyReachableVertexSet((FKahnContext *)local_238);
      if ((*(int *)&(pTVar17->Elements).field_0x8 == *(int *)&(pTVar17->Elements).field_0x34) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!MRVS.IsEmpty()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                              ,0x67,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      uVar29 = *(uint *)&(pTVar17->Elements).field_0x28;
      puVar1 = &(pTVar17->Elements).field_0x10;
      uStack_41c = 1;
      uStack_40c = uVar33;
      local_408 = uVar33;
      if (uVar29 != 0) {
        puVar32 = *(uint **)&(pTVar17->Elements).field_0x20;
        puVar28 = (uint *)puVar1;
        if (puVar32 != (uint *)0x0) {
          puVar28 = puVar32;
        }
        uVar27 = *puVar28;
        iVar15 = 0;
        while (uVar27 == 0) {
          lVar20 = (longlong)iVar15;
          local_408 = local_408 + 0x20;
          iVar15 = iVar15 + 1;
          uStack_40c = uVar29;
          if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_14759e5ad;
          uVar27 = puVar28[lVar20 + 1];
        }
        uStack_41c = -uVar27 & uVar27;
        uVar23 = (ulonglong)uStack_41c * 2 + 1;
        lVar20 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_380 = (int)lVar20;
        uStack_40c = (local_408 - 1) + local_380;
        if ((int)uVar29 < (int)uStack_40c) {
          uStack_40c = uVar29;
        }
      }
LAB_14759e5ad:
      uVar27 = *(uint *)&(pTVar17->Elements).field_0x28;
      uStack_404 = local_2fc;
      uVar25 = uVar27 & 0xffffffe0;
      iStack_400 = *(int *)&(pTVar17->Elements).field_0x8 - *(int *)&(pTVar17->Elements).field_0x34;
      TStack_370._padding_ = CONCAT44(uStack_41c,iVar15);
      uStack_410 = 0xffffffff;
      TStack_370.CurrentBitIndex = uStack_40c;
      TStack_370.UnvisitedBitMask = 0xffffffff;
      iVar21 = (int)uVar27 >> 5;
      TStack_370._28_4_ = local_2fc;
      TStack_370.BaseBitIndex = local_408;
      uStack_350 = CONCAT44(uStack_3fc,iStack_400);
      local_428 = pTVar17;
      iStack_420 = iVar15;
      local_418 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      local_378 = pTVar17;
      TStack_370.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar27 < 0) || ((int)uVar29 < (int)uVar27)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      uVar29 = *(uint *)&(pTVar17->Elements).field_0x28;
      if (uVar27 != uVar29) {
        puVar2 = *(undefined1 **)&(pTVar17->Elements).field_0x20;
        puVar31 = puVar1;
        if (puVar2 != (undefined1 *)0x0) {
          puVar31 = puVar2;
        }
        uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar21 * 4);
        while (uVar27 == 0) {
          lVar20 = (longlong)iVar21;
          uVar25 = uVar25 + 0x20;
          iVar21 = iVar21 + 1;
          uVar27 = uVar29;
          if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
          goto LAB_14759e6b0;
          uVar27 = *(uint *)(puVar31 + lVar20 * 4 + 4);
        }
        uVar23 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
        lVar20 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        local_3d8 = (int)lVar20;
        uVar27 = (uVar25 - 1) + local_3d8;
        if ((int)uVar29 < (int)uVar27) {
          uVar27 = uVar29;
        }
      }
LAB_14759e6b0:
      while( true ) {
        pTVar5 = local_378;
        if (*(int *)&(local_378->Elements).field_0x8 - *(int *)&(local_378->Elements).field_0x34 !=
            (int)uStack_350) {
          local_478 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_478);
        }
        if (((TStack_370.CurrentBitIndex == uVar27) &&
            (TStack_370.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar5 == pTVar17)) break;
        uVar29 = *(uint *)(*(longlong *)&pTVar5->Elements +
                          (longlong)TStack_370.CurrentBitIndex * 0xc);
        local_444 = uVar29;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8,&local_3d4,
                   (bool *)&local_444);
        uVar25 = uVar33;
        if ((int)uVar29 < (int)local_1c0) {
          uVar25 = ~uVar29 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        *(undefined4 *)(local_1c8.Data + (longlong)(int)uVar29 * 4) = 0xffffffff;
        TStack_370.UnvisitedBitMask = TStack_370.UnvisitedBitMask & ~TStack_370._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_370);
      }
    }
    if (local_288._8_4_ != local_258._4_4_) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_288);
      bVar13 = (longlong)local_288._8_8_ < 0;
      local_288._8_8_ = local_288._8_8_ & 0xffffffff00000000;
      if (bVar13) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)local_288,0,(int *)(local_288 + 0xc));
      }
      local_258 = 0xffffffff;
      uStack_260 = uStack_260 & 0xffffffff00000000;
    }
    uVar29 = (uint)uStack_2b0;
    uStack_41c = 1;
    uStack_40c = uVar33;
    iStack_420 = 0;
    if ((uint)uStack_2b0 != 0) {
      puVar32 = (uint *)(local_2d8 + 0x10);
      if (local_2b8 != (uint *)0x0) {
        puVar32 = local_2b8;
      }
      uVar27 = *puVar32;
      while (uVar27 == 0) {
        lVar20 = (longlong)iStack_420;
        uVar33 = uVar33 + 0x20;
        iStack_420 = iStack_420 + 1;
        uStack_40c = (uint)uStack_2b0;
        if ((int)(((uint)uStack_2b0 - 1) + ((int)((uint)uStack_2b0 - 1) >> 0x1f & 0x1fU)) >> 5 <
            iStack_420) goto LAB_14759e870;
        uVar27 = (puVar32 + 1)[lVar20];
      }
      uStack_41c = -uVar27 & uVar27;
      uVar23 = (ulonglong)uStack_41c * 2 + 1;
      lVar20 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_3d0 = (int)lVar20;
      uStack_40c = (uVar33 - 1) + local_3d0;
      if ((int)(uint)uStack_2b0 < (int)uStack_40c) {
        uStack_40c = (uint)uStack_2b0;
      }
    }
LAB_14759e870:
    local_428 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8;
    uStack_404 = local_2dc;
    local_418 = (TBitArray<FDefaultBitArrayAllocator> *)(local_2d8 + 0x10);
    iStack_400 = local_2d8._8_4_ - local_2a8._4_4_;
    uVar27 = (uint)uStack_2b0 & 0xffffffe0;
    TStack_340._padding_ = CONCAT44(uStack_41c,iStack_420);
    uStack_410 = 0xffffffff;
    TStack_340.CurrentBitIndex = uStack_40c;
    TStack_340.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)(uint)uStack_2b0 >> 5;
    TStack_340._28_4_ = local_2dc;
    TStack_340.BaseBitIndex = uVar33;
    uStack_320 = CONCAT44(uStack_3fc,iStack_400);
    bVar18 = (byte)uStack_2b0;
    local_408 = uVar33;
    local_348 = local_428;
    TStack_340.Array = local_418;
    if ((int)(uint)uStack_2b0 < 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
    }
    if (uVar29 != (uint)uStack_2b0) {
      puVar32 = (uint *)(local_2d8 + 0x10);
      if (local_2b8 != (uint *)0x0) {
        puVar32 = local_2b8;
      }
      uVar33 = -1 << (bVar18 & 0x1f) & puVar32[iVar15];
      while (uVar33 == 0) {
        lVar20 = (longlong)iVar15;
        uVar27 = uVar27 + 0x20;
        iVar15 = iVar15 + 1;
        uVar29 = (uint)uStack_2b0;
        if ((int)(((uint)uStack_2b0 - 1) + ((int)((uint)uStack_2b0 - 1) >> 0x1f & 0x1fU)) >> 5 <
            iVar15) goto LAB_14759e9a0;
        uVar33 = (puVar32 + 1)[lVar20];
      }
      uVar23 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
      lVar20 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_3cc = (int)lVar20;
      uVar29 = local_3cc + -1 + uVar27;
      if ((int)(uint)uStack_2b0 < (int)uVar29) {
        uVar29 = (uint)uStack_2b0;
      }
    }
LAB_14759e9a0:
    while( true ) {
      pTVar17 = local_348;
      if (*(int *)&(local_348->Elements).field_0x8 - *(int *)&(local_348->Elements).field_0x34 !=
          (int)uStack_320) {
        local_477 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_477);
      }
      uVar22 = uStack_240;
      FVar12 = FStack_250.SecondaryData;
      uVar10 = FStack_250._0_8_;
      uVar9 = local_258;
      uVar23 = uStack_260;
      puVar32 = local_268;
      uVar8 = local_288._24_8_;
      uVar7 = local_288._16_8_;
      uVar6 = local_288._8_8_;
      uVar3 = local_288._0_8_;
      if (((TStack_340.CurrentBitIndex == uVar29) &&
          (TStack_340.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_2d8 + 0x10))) &&
         (pTVar17 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_2d8)) break;
      local_470[0] = *(uint *)(*(longlong *)&pTVar17->Elements +
                              (longlong)TStack_340.CurrentBitIndex * 0xc);
      lVar20 = (longlong)(int)local_470[0];
      uVar33 = 0;
      if ((int)local_470[0] < (int)local_1e0) {
        uVar33 = ~local_470[0] >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      pFVar26 = local_1e8.Data + lVar20 * 0x10;
      puVar28 = *(uint **)&pFVar26->field_0x0;
      iVar15 = *(int *)(pFVar26 + 8);
      puVar32 = puVar28 + iVar15;
      while( true ) {
        if (*(int *)(pFVar26 + 8) != iVar15) {
          local_476 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_476)
          ;
        }
        if (puVar28 == puVar32) break;
        local_440[0] = *puVar28;
        lVar20 = (longlong)(int)local_440[0];
        uVar33 = 0;
        if ((int)local_440[0] < (int)local_1c0) {
          uVar33 = ~local_440[0] >> 0x1f;
        }
        if ((uVar33 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        pFVar24 = local_1c8.Data + lVar20 * 4;
        if (*(int *)pFVar24 != -1) {
          if ((*(int *)pFVar24 < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ReferencerDependencyCount > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                                  ,0x7d,L""), bVar13)) {
            pcVar4 = (code *)swi(3);
            uVar14 = (*pcVar4)();
            return (bool)uVar14;
          }
          *(int *)pFVar24 = *(int *)pFVar24 + -1;
          if (*(int *)pFVar24 == 0) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_288,&local_3c4
                       ,(bool *)local_440);
          }
        }
        puVar28 = puVar28 + 1;
      }
      local_438[0] = local_470[0];
      iVar15 = local_238._8_4_ - local_204;
      if (iVar15 != 0) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238,local_470[0],
                   (int *)local_438);
      }
      if ((local_238._8_4_ - local_204 != iVar15 + -1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("RemainingVertices.Num() == RemainingNum - 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                              ,0x88,L""), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      if (((local_458.Data <= (FScriptContainerElement *)local_470) &&
          ((FScriptContainerElement *)local_470 < local_458.Data + (longlong)local_450._4_4_ * 4))
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar13)) {
        pcVar4 = (code *)swi(3);
        uVar14 = (*pcVar4)();
        return (bool)uVar14;
      }
      iVar15 = (int)local_450;
      if ((int)local_450 == local_450._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_458,(int *)((longlong)&local_450 + 4));
      }
      local_450 = CONCAT44(local_450._4_4_,iVar15 + 1);
      *(uint *)(local_458.Data + (longlong)iVar15 * 4) = local_470[0];
      TStack_340.UnvisitedBitMask = TStack_340.UnvisitedBitMask & ~TStack_340._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_340);
    }
    iVar15 = local_238._8_4_ - local_204;
    local_288._0_8_ = local_2d8._0_8_;
    local_288._8_8_ = local_2d8._8_8_;
    local_268 = local_2b8;
    uStack_260 = uStack_2b0;
    local_288._16_8_ = local_2d8._16_8_;
    local_288._24_8_ = local_2d8._24_8_;
    FStack_250.SecondaryData = FStack_2a0.SecondaryData;
    uStack_240 = uStack_290;
    local_258 = local_2a8;
    FStack_250.InlineData[0] = FStack_2a0.InlineData[0];
    FStack_250.InlineData[1] = FStack_2a0.InlineData[1];
    FStack_250.InlineData[2] = FStack_2a0.InlineData[2];
    FStack_250.InlineData[3] = FStack_2a0.InlineData[3];
    FStack_250._padding_ = FStack_2a0._padding_;
    uVar11 = FStack_250._0_8_;
    local_2d8._16_8_ = uVar7;
    local_2d8._24_8_ = uVar8;
    local_2b8 = puVar32;
    uStack_2b0 = uVar23;
    local_2a8 = uVar9;
    FStack_250.InlineData[0] = (uchar)uVar10;
    FStack_250.InlineData[1] = SUB81(uVar10,1);
    FStack_250.InlineData[2] = SUB81(uVar10,2);
    FStack_250.InlineData[3] = SUB81(uVar10,3);
    FStack_250._padding_ = SUB84(uVar10,4);
    FStack_2a0.InlineData[0] = FStack_250.InlineData[0];
    FStack_2a0.InlineData[1] = FStack_250.InlineData[1];
    FStack_2a0.InlineData[2] = FStack_250.InlineData[2];
    FStack_2a0.InlineData[3] = FStack_250.InlineData[3];
    FStack_2a0._padding_ = FStack_250._padding_;
    FStack_2a0.SecondaryData = FVar12;
    uStack_290 = uVar22;
    param_1 = local_3c0;
    param_3 = local_430;
    uVar33 = local_42c;
    local_2d8._0_8_ = uVar3;
    local_2d8._8_8_ = uVar6;
    FStack_250._0_8_ = uVar11;
  } while( true );
}

// KahnTopologicalSort_CreateWorkingGraph<TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_>,`FAssetCompilingManager::RegisterManager'::__l2::<lambda_1>_> @ 14759f060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
AlgoImpl::
KahnTopologicalSort_CreateWorkingGraph<TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_>,_FAssetCompilingManager::RegisterManager_::__l2::<lambda_1>_>
          (FKahnContext *param_1,
          TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FIdentityFunctor FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  FScriptContainerElement *pFVar20;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar21;
  ForAnyElementType FVar22;
  FAssetCompilingManager *local_res18 [2];
  undefined1 auStackY_1c8 [32];
  TLess<void> local_178;
  FIdentityFunctor local_177 [3];
  uint local_174;
  undefined1 local_170;
  undefined1 local_16f [3];
  undefined4 local_16c;
  int local_168;
  uint local_164;
  uint local_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_158;
  undefined4 local_150;
  uint uStack_14c;
  uint uStack_148;
  undefined4 uStack_144;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_140;
  FScriptContainerElement *local_138;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_130;
  TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_> local_128;
  undefined4 local_118;
  int local_114;
  int local_110 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_108;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_100;
  FScriptContainerElement *local_f8;
  TArray<IAssetCompilingManager_*,TSizedDefaultAllocator<32>_> *local_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  FScriptContainerElement *local_c0;
  undefined4 *local_b8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar9 = param_2->ArrayNum;
  local_140 = &param_1->Referencers;
  uVar10 = 0;
  local_130 = &param_1->Dependencies;
  pTVar1 = &param_1->DependencyCount;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  local_res18[0] = param_3.__this;
  local_108 = pTVar1;
  local_100 = param_4;
  local_f0 = param_2;
  if (uVar9 == 0) goto LAB_14759f325;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_a8,uVar9);
  uVar15 = 1;
  if (3 < uVar9) {
    uVar15 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_118 = (undefined4)lVar17;
    uVar15 = (ulonglong)(uint)(1 << ((byte)lVar17 & 0x1f));
  }
  uVar8 = (uint)uVar15;
  if ((local_60 != 0) && ((int)uVar8 <= (int)local_60)) goto LAB_14759f325;
  local_60 = uVar8;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
  }
  if (uVar8 != 0) {
    uVar18 = uVar8;
    if (uVar8 < 2) {
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_14759f15d;
      }
    }
    else {
LAB_14759f15d:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar18,4);
    }
    if (0 < (int)uVar8) {
      uVar12 = uVar10;
      do {
        FVar22.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar22.Data = local_68.Data;
        }
        uVar7 = (longlong)(int)uVar8 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)(FVar22.Data + uVar7 * 4) = 0xffffffff;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
  if (local_60 != 0) {
    pTStack_158 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    local_160 = 0;
    uStack_15c = 1;
    uStack_14c = 0;
    uStack_148 = 0;
    if (local_80 != 0) {
      FVar19 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
      if (local_88 != (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_88;
      }
      uVar8 = *(uint *)FVar19;
      uVar15 = uVar10;
      while (uVar8 == 0) {
        uStack_148 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_148;
        iVar6 = (int)uVar10;
        local_160 = iVar6 + 1;
        uVar10 = (ulonglong)local_160;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_160)
        goto LAB_14759f261;
        uVar8 = ((uint *)((longlong)FVar19 + 4))[iVar6];
      }
      uStack_15c = -uVar8 & uVar8;
      uVar10 = (ulonglong)uStack_15c * 2 + 1;
      lVar17 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_114 = (int)lVar17;
      uStack_14c = local_114 + -1 + uStack_148;
      uVar10 = (ulonglong)uStack_14c;
      if ((int)local_80 < (int)uStack_14c) {
LAB_14759f261:
        uVar10 = (ulonglong)local_80;
        uStack_14c = local_80;
      }
    }
    local_150 = 0xffffffff;
    local_e8 = (longlong *)local_a8;
    local_e0._padding_ = CONCAT44(uStack_15c,local_160);
    local_e0.CurrentBitIndex = uStack_14c;
    local_e0.UnvisitedBitMask = 0xffffffff;
    local_e0._28_4_ = uStack_144;
    local_e0.BaseBitIndex = uStack_148;
    local_e0.Array = pTStack_158;
    if ((int)uVar10 < (int)local_80) {
      do {
        iVar6 = (int)uVar10;
        lVar17 = *local_e8 + (longlong)iVar6 * 0x18;
        uVar10 = *(ulonglong *)(*local_e8 + (longlong)iVar6 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & local_60 - 1;
        *(uint *)(lVar17 + 0x14) = uVar8;
        FVar22.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar22.Data = local_68.Data;
        }
        uVar10 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar17 + 0x10) = *(undefined4 *)(FVar22.Data + uVar10 * 4);
        *(int *)(FVar22.Data + uVar10 * 4) = iVar6;
        local_e0.UnvisitedBitMask = local_e0.UnvisitedBitMask & ~local_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e0);
        uVar10 = (ulonglong)(uint)local_e0.CurrentBitIndex;
      } while (local_e0.CurrentBitIndex < (local_e0.Array)->NumBits);
    }
  }
LAB_14759f325:
  iVar6 = param_2->ArrayNum;
  local_174 = 0;
  pFVar20 = (param_2->AllocatorInstance).Data;
  pFVar16 = pFVar20 + (longlong)iVar6 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar6) {
      local_178 = (TLess<void>)0x0;
      `TCheckedPointerIterator<IAssetCompilingManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_178);
    }
    if (pFVar20 == pFVar16) break;
    uVar10 = *(ulonglong *)pFVar20;
    local_16c = 0xffffffff;
    uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    uVar8 = uVar8 >> 0x10 ^ uVar8;
    if (local_a8._8_4_ != local_74) {
      FVar22.Data = local_70;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FVar22.Data = local_68.Data;
      }
      iVar5 = *(int *)(FVar22.Data + (ulonglong)(local_60 - 1 & uVar8) * 4);
      while (iVar5 != -1) {
        pFVar14 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar5 * 0x18);
        if (*(ulonglong *)(local_a8._0_8_ + (longlong)iVar5 * 0x18) == uVar10) {
          if (pFVar14 != (FScriptContainerElement *)0x0) goto LAB_14759f42f;
          break;
        }
        iVar5 = *(int *)(pFVar14 + 0x10);
      }
    }
    local_b8 = &local_16c;
    local_c0 = pFVar20;
    TSet<TTuple<IAssetCompilingManager_*,int>,TDefaultMapHashableKeyFuncs<IAssetCompilingManager_*,int,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TPairInitializer<IAssetCompilingManager_*_const_&,int_&&>_>
              ((TSet<TTuple<IAssetCompilingManager_*,int>,TDefaultMapHashableKeyFuncs<IAssetCompilingManager_*,int,0>,FDefaultSetAllocator>
                *)local_a8,(uint)&local_168,
               (TPairInitializer<IAssetCompilingManager_*_const_&,int_&&> *)(ulonglong)uVar8,
               (bool *)&local_c0);
    pFVar14 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)local_168 * 0x18);
LAB_14759f42f:
    if ((*(int *)(pFVar14 + 8) != -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExistingHandle == INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\KahnTopologicalSort.h"
                           ,0xb7,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar20 = pFVar20 + 8;
    *(uint *)(pFVar14 + 8) = local_174;
    local_174 = local_174 + 1;
  }
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (local_140,uVar9,Default);
  pTVar21 = local_130;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (local_130,uVar9,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(pTVar1,uVar9,Default);
  local_164 = param_2->ArrayNum;
  uVar10 = (ulonglong)(int)local_164;
  pFVar16 = (param_2->AllocatorInstance).Data;
  local_174 = 0;
  local_f8 = pFVar16 + uVar10 * 8;
  FVar2 = local_177[0];
  do {
    pFVar20 = local_f8;
    local_138 = pFVar16;
    if (param_2->ArrayNum != (int)uVar10) {
      local_170 = 0;
      `TCheckedPointerIterator<IAssetCompilingManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_170);
    }
    if (pFVar16 == pFVar20) {
      local_60 = 0;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<IAssetCompilingManager_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<IAssetCompilingManager_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<IAssetCompilingManager_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      return;
    }
    `FAssetCompilingManager::RegisterManager'::__l2::<lambda_1>::operator()
              (local_res18,&local_128,*(IAssetCompilingManager **)pFVar16);
    lVar17 = (longlong)(int)local_174;
    uVar9 = 0;
    if ((int)local_174 < pTVar21->ArrayNum) {
      uVar9 = ~local_174 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = local_128.ArrayNum;
    pFVar20 = (pTVar21->AllocatorInstance).Data + lVar17 * 0x10;
    pFVar16 = local_128.AllocatorInstance.Data + (longlong)local_128.ArrayNum * 8;
    FVar22.Data = local_128.AllocatorInstance.Data;
    while( true ) {
      if (local_128.ArrayNum != iVar6) {
        local_16f[0] = 0;
        `TCheckedPointerIterator<IAssetCompilingManager_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_16f);
      }
      if (FVar22.Data == pFVar16) break;
      uVar10 = *(ulonglong *)FVar22.Data;
      uVar9 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (local_a8._8_4_ == local_74) {
LAB_14759f6a2:
        FVar22.Data = FVar22.Data + 8;
      }
      else {
        FVar13.Data = local_70;
        if (local_68.Data != (FScriptContainerElement *)0x0) {
          FVar13.Data = local_68.Data;
        }
        iVar5 = *(int *)(FVar13.Data + (ulonglong)(local_60 - 1 & (uVar9 >> 0x10 ^ uVar9)) * 4);
        if (iVar5 == -1) goto LAB_14759f6a2;
        do {
          pFVar14 = (FScriptContainerElement *)(local_a8._0_8_ + (longlong)iVar5 * 0x18);
          if (*(ulonglong *)(local_a8._0_8_ + (longlong)iVar5 * 0x18) == uVar10) {
            pFVar11 = pFVar14 + 8;
            if (pFVar14 == (FScriptContainerElement *)0x0) {
              pFVar11 = (FScriptContainerElement *)0x0;
            }
            if (pFVar11 != (FScriptContainerElement *)0x0) {
              if (((*(FScriptContainerElement **)&pFVar20->field_0x0 <= pFVar11) &&
                  (pFVar11 < *(FScriptContainerElement **)&pFVar20->field_0x0 +
                             (longlong)*(int *)(pFVar20 + 0xc) * 4)) &&
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
              iVar5 = *(int *)&pFVar20[8].field_0x0;
              if (iVar5 == *(int *)(pFVar20 + 0xc)) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 0xc));
              }
              *(int *)&pFVar20[8].field_0x0 = iVar5 + 1;
              *(undefined4 *)
               (*(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)iVar5 * 4) =
                   *(undefined4 *)pFVar11;
            }
            goto LAB_14759f6a2;
          }
          iVar5 = *(int *)(pFVar14 + 0x10);
        } while (iVar5 != -1);
        FVar22.Data = FVar22.Data + 8;
      }
    }
    IntroSortInternal<int,int,FIdentityFunctor,TLess<void>_>
              ((int *)*(FScriptContainerElement **)&pFVar20->field_0x0,*(int *)&pFVar20[8].field_0x0
               ,FVar2,local_178);
    uVar9 = *(uint *)&pFVar20[8].field_0x0;
    pFVar16 = *(FScriptContainerElement **)&pFVar20->field_0x0;
    uVar8 = uVar9;
    if ((int)uVar9 < 2) {
LAB_14759f751:
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if ((int)uVar8 < (int)uVar9) {
        uVar9 = uVar9 - uVar8;
        if (((int)(uVar9 | uVar8) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (uVar9 != 0) {
          iVar6 = (*(int *)&pFVar20[8].field_0x0 - uVar8) - uVar9;
          if (iVar6 != 0) {
            memmove(*(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)(int)uVar8 * 4,
                    *(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)(int)uVar8 * 4 +
                    (longlong)(int)uVar9 * 4,(longlong)iVar6 << 2);
          }
          *(uint *)&pFVar20[8].field_0x0 = *(int *)&pFVar20[8].field_0x0 - uVar9;
        }
      }
    }
    else {
      pFVar14 = pFVar16 + 4;
      pFVar11 = pFVar16;
      if (pFVar14 != pFVar16 + (longlong)(int)uVar9 * 4) {
        do {
          if ((*(int *)pFVar11 != *(int *)pFVar14) && (pFVar11 = pFVar11 + 4, pFVar11 != pFVar14)) {
            *(int *)pFVar11 = *(int *)pFVar14;
          }
          pFVar14 = pFVar14 + 4;
        } while (pFVar14 != pFVar16 + (longlong)(int)uVar9 * 4);
        uVar9 = *(uint *)&pFVar20[8].field_0x0;
      }
      uVar8 = (uint)((longlong)(pFVar11 + (4 - (longlong)pFVar16)) >> 2);
      if ((int)uVar8 <= (int)uVar9) goto LAB_14759f751;
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar8 - uVar9,(ForAnyElementType *)pFVar20,(int *)(pFVar20 + 8),
                         (int *)(pFVar20 + 0xc));
      memset(*(FScriptContainerElement **)&pFVar20->field_0x0 + (longlong)iVar6 * 4,0,
             (longlong)(int)(uVar8 - uVar9) << 2);
    }
    pTVar1 = local_108;
    lVar17 = (longlong)(int)local_174;
    iVar6 = *(int *)&pFVar20[8].field_0x0;
    uVar9 = 0;
    if ((int)local_174 < local_108->ArrayNum) {
      uVar9 = ~local_174 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(int *)((pTVar1->AllocatorInstance).Data + lVar17 * 4) = iVar6;
    if (iVar6 == 0) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (local_100,local_110,(bool *)&local_174);
    }
    pTVar21 = local_140;
    pFVar14 = *(FScriptContainerElement **)&pFVar20->field_0x0;
    iVar6 = *(int *)&pFVar20[8].field_0x0;
    pFVar16 = pFVar14 + (longlong)iVar6 * 4;
    while( true ) {
      if (*(int *)&pFVar20[8].field_0x0 != iVar6) {
        local_177[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_177);
      }
      FVar2 = local_177[0];
      if (pFVar14 == pFVar16) break;
      uVar9 = *(uint *)pFVar14;
      uVar8 = 0;
      if ((int)uVar9 < pTVar21->ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar11 = (pTVar21->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10;
      if (((*(FScriptContainerElement **)&pFVar11->field_0x0 <=
            (FScriptContainerElement *)&local_174) &&
          ((FScriptContainerElement *)&local_174 <
           *(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)*(int *)(pFVar11 + 0xc) * 4)
          ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar11[8].field_0x0;
      if (iVar5 == *(int *)(pFVar11 + 0xc)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)pFVar11,(int *)(pFVar11 + 0xc));
      }
      *(int *)&pFVar11[8].field_0x0 = iVar5 + 1;
      pFVar14 = pFVar14 + 4;
      *(uint *)(*(FScriptContainerElement **)&pFVar11->field_0x0 + (longlong)iVar5 * 4) = local_174;
    }
    local_174 = local_174 + 1;
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    uVar10 = (ulonglong)local_164;
    pFVar16 = local_138 + 8;
    param_2 = local_f0;
    pTVar21 = local_130;
  } while( true );
}

// NewObject<UAnimCurveMetaData> @ 14759fd30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimCurveMetaData * __cdecl
NewObject<UAnimCurveMetaData>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UAnimCurveMetaData *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UAnimCurveMetaData_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UAnimCurveMetaData *)
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

// NewObject<UAssetManager> @ 14759fe20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAssetManager * __cdecl NewObject<UAssetManager>(UObject *param_1)

{
  UClass *pUVar1;
  UAssetManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAssetManager::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAssetManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAsyncActionChangePrimaryAssetBundles> @ 14759fec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncActionChangePrimaryAssetBundles * __cdecl
NewObject<UAsyncActionChangePrimaryAssetBundles>(UObject *param_1)

{
  UClass *pUVar1;
  UAsyncActionChangePrimaryAssetBundles *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAsyncActionChangePrimaryAssetBundles::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAsyncActionChangePrimaryAssetBundles *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAsyncActionLoadPrimaryAsset> @ 14759ff60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncActionLoadPrimaryAsset * __cdecl NewObject<UAsyncActionLoadPrimaryAsset>(UObject *param_1)

{
  UClass *pUVar1;
  UAsyncActionLoadPrimaryAsset *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAsyncActionLoadPrimaryAsset::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAsyncActionLoadPrimaryAsset *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAsyncActionLoadPrimaryAssetClass> @ 1475a0000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncActionLoadPrimaryAssetClass * __cdecl
NewObject<UAsyncActionLoadPrimaryAssetClass>(UObject *param_1)

{
  UClass *pUVar1;
  UAsyncActionLoadPrimaryAssetClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAsyncActionLoadPrimaryAssetClass::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAsyncActionLoadPrimaryAssetClass *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAsyncActionLoadPrimaryAssetClassList> @ 1475a00a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncActionLoadPrimaryAssetClassList * __cdecl
NewObject<UAsyncActionLoadPrimaryAssetClassList>(UObject *param_1)

{
  UClass *pUVar1;
  UAsyncActionLoadPrimaryAssetClassList *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAsyncActionLoadPrimaryAssetClassList::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAsyncActionLoadPrimaryAssetClassList *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UAsyncActionLoadPrimaryAssetList> @ 1475a0140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncActionLoadPrimaryAssetList * __cdecl
NewObject<UAsyncActionLoadPrimaryAssetList>(UObject *param_1)

{
  UClass *pUVar1;
  UAsyncActionLoadPrimaryAssetList *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UAsyncActionLoadPrimaryAssetList::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UAsyncActionLoadPrimaryAssetList *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UBlendProfile> @ 1475a01e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBlendProfile * __cdecl
NewObject<UBlendProfile>
          (UObject *param_1,FName param_2,EObjectFlags param_3,UObject *param_4,bool param_5,
          FObjectInstancingGraph *param_6,UPackage *param_7)

{
  UClass *pUVar1;
  UBlendProfile *pUVar2;
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
  pUVar1 = Z_Construct_UClass_UBlendProfile_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar1);
  local_b8[0x20] = param_5;
  local_b8._48_8_ = param_6;
  local_b8._56_8_ = param_7;
  local_b8._8_8_ = param_1;
  local_b8._16_8_ = param_2;
  local_b8._24_4_ = param_3;
  local_b8._40_8_ = param_4;
  pUVar2 = (UBlendProfile *)
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

// RemoveAll<`TArray<FSetProfileRequest,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Remove'::__l2::<lambda_1>_> @ 1475a04a0

int __thiscall
TArray<FSetProfileRequest,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
RemoveAll<_TArray<FSetProfileRequest,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::Remove_::__l2::<lambda_1>_>
          (TArray<FSetProfileRequest,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this
          ,<lambda_1> *param_1)

{
  int iVar1;
  ForElementType<FSetProfileRequest> FVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ForElementType<FSetProfileRequest> FVar13;
  int iVar14;
  int local_res20;
  
  iVar1 = this->ArrayNum;
  lVar11 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  FVar2 = (this->AllocatorInstance).SecondaryData;
  plVar12 = *(longlong **)param_1;
  FVar13 = (ForElementType<FSetProfileRequest>)this;
  if (FVar2 != (ForElementType<FSetProfileRequest>)0x0) {
    FVar13 = FVar2;
  }
  iVar14 = 0;
  local_res20 = 0;
  if ((((*(longlong *)FVar13 == *plVar12) && (*(longlong *)((longlong)FVar13 + 8) == plVar12[1])) &&
      (bVar4 = TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
                         ((TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *)((longlong)FVar13 + 0x58),
                          (TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *)(plVar12 + 0xb)), bVar4))
     && (bVar4 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                           ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)((longlong)FVar13 + 0x50),
                            (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(plVar12 + 10)), bVar4)) {
    bVar9 = 0;
  }
  else {
    bVar9 = 1;
  }
  lVar6 = 0;
  iVar7 = 0;
  do {
    lVar6 = lVar6 + 1;
    iVar8 = iVar7 + 1;
    if (lVar6 < lVar11) {
      plVar12 = (longlong *)(lVar6 * 0x70 + (longlong)FVar13);
      do {
        plVar3 = *(longlong **)param_1;
        if (((*plVar12 == *plVar3) && (plVar12[1] == plVar3[1])) &&
           ((bVar4 = TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>::UEOpEquals<USkeletalMesh,bool>
                               ((TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *)
                                ((uchar *)((longlong)FVar13 + 0x58) + (longlong)iVar8 * 0x70),
                                (TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr> *)(plVar3 + 0xb)),
            bVar4 && (bVar4 = TWeakObjectPtr<UObject,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                                        ((TWeakObjectPtr<UObject,FWeakObjectPtr> *)
                                         ((uchar *)((longlong)FVar13 + 0x50) +
                                         (longlong)iVar8 * 0x70),
                                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)(plVar3 + 10)),
                     bVar4)))) {
          bVar5 = 0;
        }
        else {
          bVar5 = 1;
        }
        iVar14 = local_res20;
        if (bVar9 != bVar5) break;
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
        plVar12 = plVar12 + 0xe;
      } while (lVar6 < lVar11);
    }
    iVar10 = iVar8 - iVar7;
    if (bVar9 == 0) {
      DestructItems<FSetProfileRequest,int>
                ((FSetProfileRequest *)((longlong)iVar7 * 0x70 + (longlong)FVar13),iVar10);
    }
    else {
      if (iVar14 != iVar7) {
        memmove((longlong *)((longlong)iVar14 * 0x70 + (longlong)FVar13),
                (longlong *)((longlong)iVar7 * 0x70 + (longlong)FVar13),(longlong)iVar10 * 0x70);
      }
      iVar14 = iVar14 + iVar10;
      local_res20 = iVar14;
    }
    bVar9 = bVar9 ^ 1;
    iVar7 = iVar8;
    if (lVar11 <= lVar6) {
      this->ArrayNum = iVar14;
      return iVar1 - iVar14;
    }
  } while( true );
}

// Reverse<TSharedPtr<FSkeletonRemapping,1>_> @ 1475a1570

void __cdecl
AlgoImpl::Reverse<TSharedPtr<FSkeletonRemapping,1>_>
          (TSharedPtr<FSkeletonRemapping,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FSkeletonRemapping *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<FSkeletonRemapping,1> *pTVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_2 / 2);
  if (0 < param_2 / 2) {
    pTVar4 = param_1 + (param_2 + -1);
    do {
      pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
      pFVar2 = param_1->Object;
      pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
      param_1->Object = pTVar4->Object;
      (param_1->SharedReferenceCount).ReferenceController = pTVar1;
      param_1 = param_1 + 1;
      pTVar4->Object = pFVar2;
      (pTVar4->SharedReferenceCount).ReferenceController = pTVar3;
      lVar5 = lVar5 + -1;
      pTVar4 = pTVar4 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// StaticEnum<enum_EAttenuationDistanceModel> @ 1475a2f70

UEnum * __cdecl StaticEnum<enum_EAttenuationDistanceModel>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAttenuationDistanceModel.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAttenuationDistanceModel.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAttenuationDistanceModel,(UObject *)pUVar1,
                       L"EAttenuationDistanceModel");
  }
  return Z_Registration_Info_UEnum_EAttenuationDistanceModel.OuterSingleton;
}

// StaticEnum<enum_ENaturalSoundFalloffMode> @ 1475a2fb0

UEnum * __cdecl StaticEnum<enum_ENaturalSoundFalloffMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ENaturalSoundFalloffMode,(UObject *)pUVar1,
                       L"ENaturalSoundFalloffMode");
  }
  return Z_Registration_Info_UEnum_ENaturalSoundFalloffMode.OuterSingleton;
}

// StaticEnum<enum_EPreviewAnimationBlueprintApplicationMethod> @ 1475a2ff0

UEnum * __cdecl StaticEnum<enum_EPreviewAnimationBlueprintApplicationMethod>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton ==
      (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod,
                       (UObject *)pUVar1,L"EPreviewAnimationBlueprintApplicationMethod");
  }
  return Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.OuterSingleton;
}

// StaticEnum<enum_EPrimaryAssetCookRule> @ 1475a3030

UEnum * __cdecl StaticEnum<enum_EPrimaryAssetCookRule>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule,(UObject *)pUVar1,
                       L"EPrimaryAssetCookRule");
  }
  return Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton;
}

// StaticEnum<enum_ESkeletalMeshVertexAttributeDataType> @ 1475a3070

UEnum * __cdecl StaticEnum<enum_ESkeletalMeshVertexAttributeDataType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.OuterSingleton == (UEnum *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ESkeletalMeshVertexAttributeDataType,
                       (UObject *)pUVar1,L"ESkeletalMeshVertexAttributeDataType");
  }
  return Z_Registration_Info_UEnum_ESkeletalMeshVertexAttributeDataType.OuterSingleton;
}

// StaticEnum<enum_ETimeStretchCurveMapping> @ 1475a30b0

UEnum * __cdecl StaticEnum<enum_ETimeStretchCurveMapping>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_ETimeStretchCurveMapping.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_ETimeStretchCurveMapping.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_ETimeStretchCurveMapping,(UObject *)pUVar1,
                       L"ETimeStretchCurveMapping");
  }
  return Z_Registration_Info_UEnum_ETimeStretchCurveMapping.OuterSingleton;
}

// StaticEnum<enum_EAttenuationShape::Type> @ 1475a30f0

UEnum * __cdecl StaticEnum<enum_EAttenuationShape::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAttenuationShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EAttenuationShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EAttenuationShape,(UObject *)pUVar1,
                       L"EAttenuationShape");
  }
  return Z_Registration_Info_UEnum_EAttenuationShape.OuterSingleton;
}

// StaticEnum<enum_EBoneTranslationRetargetingMode::Type> @ 1475a3130

UEnum * __cdecl StaticEnum<enum_EBoneTranslationRetargetingMode::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EBoneTranslationRetargetingMode,(UObject *)pUVar1,
                       L"EBoneTranslationRetargetingMode");
  }
  return Z_Registration_Info_UEnum_EBoneTranslationRetargetingMode.OuterSingleton;
}

// StaticEnum<enum_EMirrorFindReplaceMethod::Type> @ 1475a3170

UEnum * __cdecl StaticEnum<enum_EMirrorFindReplaceMethod::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMirrorFindReplaceMethod,(UObject *)pUVar1,
                       L"EMirrorFindReplaceMethod");
  }
  return Z_Registration_Info_UEnum_EMirrorFindReplaceMethod.OuterSingleton;
}

// StaticEnum<enum_EMirrorRowType::Type> @ 1475a31b0

UEnum * __cdecl StaticEnum<enum_EMirrorRowType::Type>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_Engine_EMirrorRowType,(UObject *)pUVar1,L"EMirrorRowType");
  }
  return Z_Registration_Info_UEnum_EMirrorRowType.OuterSingleton;
}

// TryToSoftObjectPath<1> @ 1475a31f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl TryToSoftObjectPath<1>(FAssetData *param_1,FSoftObjectPath *param_2)

{
  bool bVar1;
  FSoftObjectPath *pFVar2;
  undefined1 auStack_288 [32];
  FSoftObjectPath local_268;
  TStringView<wchar_t> local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  if ((param_1->PackageName != (FName)0x0) && (param_1->AssetName != (FName)0x0)) {
    bVar1 = EndsWithBlueprint(&param_1->AssetClassPath);
    if (bVar1) {
      local_238.Base = local_218;
      local_238.bIsDynamic = false;
      local_238.bIsExternal = false;
      local_238.CurPos = local_218;
      local_238.End = (wchar_t *)local_18;
      FAssetData::GetSoftObjectPath(param_1,&local_268);
      FSoftObjectPath::ToString(&local_268,&local_238);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"_C",2);
      if (local_268.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.SubPathString.Data.AllocatorInstance.Data);
      }
      local_248.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
      local_248.DataPtr = local_238.Base;
      local_268.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_268.AssetPath.PackageName.Number = 0;
      local_268.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_268.AssetPath.AssetName.Number = 0;
      local_268.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268.SubPathString.Data.ArrayNum = 0;
      local_268.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_268,&local_248);
      FSoftObjectPath::operator=(param_2,&local_268);
      if (local_268.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.SubPathString.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
      return true;
    }
    bVar1 = FAssetData::IsTopLevelAsset(param_1);
    if (bVar1) {
      pFVar2 = FAssetData::GetSoftObjectPath(param_1,&local_268);
      FSoftObjectPath::operator=(param_2,pFVar2);
      if (local_268.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.SubPathString.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  local_268.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_268.AssetPath.PackageName.Number = 0;
  local_268.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_268.AssetPath.AssetName.Number = 0;
  local_268.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.SubPathString.Data.ArrayNum = 0;
  local_268.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::operator=(param_2,&local_268);
  if (local_268.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.SubPathString.Data.AllocatorInstance.Data);
  }
  return false;
}

// TryToSoftObjectPath<0> @ 1475a33c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl TryToSoftObjectPath<0>(FAssetData *param_1,FSoftObjectPath *param_2)

{
  bool bVar1;
  FSoftObjectPath *pFVar2;
  undefined1 auStack_288 [32];
  FSoftObjectPath local_268;
  TStringView<wchar_t> local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_288;
  if ((param_1->PackageName == (FName)0x0) || (param_1->AssetName == (FName)0x0)) {
    local_268.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_268.AssetPath.PackageName.Number = 0;
    local_268.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_268.AssetPath.AssetName.Number = 0;
    local_268.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.SubPathString.Data.ArrayNum = 0;
    local_268.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::operator=(param_2,&local_268);
    if (local_268.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.SubPathString.Data.AllocatorInstance.Data);
    }
    bVar1 = false;
  }
  else {
    bVar1 = EndsWithBlueprint(&param_1->AssetClassPath);
    if (bVar1) {
      local_238.Base = local_218;
      local_238.bIsDynamic = false;
      local_238.bIsExternal = false;
      local_238.CurPos = local_218;
      local_238.End = (wchar_t *)local_18;
      FAssetData::GetSoftObjectPath(param_1,&local_268);
      FSoftObjectPath::ToString(&local_268,&local_238);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_238,L"_C",2);
      if (local_268.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.SubPathString.Data.AllocatorInstance.Data);
      }
      local_248.Size = (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1);
      local_248.DataPtr = local_238.Base;
      local_268.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_268.AssetPath.PackageName.Number = 0;
      local_268.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_268.AssetPath.AssetName.Number = 0;
      local_268.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_268.SubPathString.Data.ArrayNum = 0;
      local_268.SubPathString.Data.ArrayMax = 0;
      FSoftObjectPath::SetPath(&local_268,&local_248);
      FSoftObjectPath::operator=(param_2,&local_268);
      if (local_268.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.SubPathString.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
      bVar1 = true;
    }
    else {
      pFVar2 = FAssetData::GetSoftObjectPath(param_1,&local_268);
      FSoftObjectPath::operator=(param_2,pFVar2);
      if (local_268.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_268.SubPathString.Data.AllocatorInstance.Data);
      }
      bVar1 = true;
    }
  }
  return bVar1;
}

// __builtin_array_init_helper<FName> @ 1475a3820

void __cdecl __builtin_array_init_helper<FName>(FName *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      param_1[uVar1].ComparisonIndex = 0;
      param_1[uVar1].Number = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
  }
  return;
}

// TBaseFunctorDelegateInstance<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`UAssetManager::PostInitProperties'::__l16::<lambda_1>_> @ 1475a3880

TBaseFunctorDelegateInstance<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_UAssetManager::PostInitProperties(void)_::_16_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`UAssetManager::PostInitProperties'::__l16::<lambda_1>_>
::
TBaseFunctorDelegateInstance<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy,_UAssetManager::PostInitProperties_::__l16::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_UAssetManager::PostInitProperties(void)_::_16_::<lambda_1>_>
          *param_1)

{
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AHAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`UAssetManager::PostInitProperties'::`16'::<lambda_1>_>
        ::_vftable_;
  *(undefined8 *)
   &((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> *)
    ((longlong)this + 0x18))->Elements = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined4 *)((longlong)this + 0x40) = 0;
  *(undefined4 *)((longlong)this + 0x44) = 0x80;
  *(undefined4 *)((longlong)this + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x4c) = 0;
  *(undefined8 *)((longlong)this + 0x58) = 0;
  *(undefined4 *)((longlong)this + 0x60) = 0;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
  operator=((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)((longlong)this + 0x18),
            (TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)&param_1->Functor);
  return this;
}

// TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::__l5::<lambda_1>_> @ 1475a38f0

TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_UAssetManager::AcquireResourcesForAssetList(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,EChunkPriority::Type)_::_5_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::__l5::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,_UAssetManager::AcquireResourcesForAssetList_::__l5::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_UAssetManager::AcquireResourcesForAssetList(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,EChunkPriority::Type)_::_5_::<lambda_1>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  *(undefined ***)this =
       &
       ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr_UFStreamableHandle___00___ZUFDefaultDelegateUserPolicy____V__6B_
  ;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::`5'::<lambda_1>_>
        ::_vftable_;
  TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)((longlong)this + 0x18),&(param_1->Functor).CompleteDelegate);
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x30);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Functor).MissingChunks.ArrayNum;
  _Src = (param_1->Functor).MissingChunks.AllocatorInstance.Data;
  *(int *)((longlong)this + 0x38) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x3c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x3c));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::__l11::<lambda_3>_> @ 1475a39b0

TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_UAssetManager::AcquireResourcesForAssetList(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,EChunkPriority::Type)_::_11_::<lambda_3>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::__l11::<lambda_3>_>
::
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,_UAssetManager::AcquireResourcesForAssetList_::__l11::<lambda_3>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_UAssetManager::AcquireResourcesForAssetList(TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_const_&,TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>,EChunkPriority::Type)_::_11_::<lambda_3>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::`11'::<lambda_3>_>
        ::_vftable_;
  TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::
  TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)((longlong)this + 0x18),&(param_1->Functor).CompleteDelegate);
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x30);
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Functor).MissingChunks.ArrayNum;
  _Src = (param_1->Functor).MissingChunks.AllocatorInstance.Data;
  *(int *)((longlong)this + 0x38) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x3c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x3c));
    memcpy(pFVar1->Data,_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::__l2::<lambda_1>,1,1> @ 1475a8510

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseBuffer_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::`8'::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001475a8533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::__l2::<lambda_1>,1,1> @ 1475a8540

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::__l2::<lambda_1>,1,1>
::
~TFunction_OwnedObject<_FRenderCommandDispatcher::Enqueue<TRenderCommandTag<_FSkinWeightProfilesData::ReleaseResources_::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>_::__l2::<lambda_1>,1,1>
          (void *this)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::`8'::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::`2'::<lambda_1>,1,1>
        ::_vftable_;
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    plVar1 = (longlong *)((longlong)this + 0x20);
    if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
      plVar1 = *(longlong **)((longlong)this + 0x38);
    }
                    /* WARNING: Could not recover jumptable at 0x0001475a8563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// ~TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueDataReadback'::__l5::<lambda_1>,1,0> @ 1475a8570

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueDataReadback'::__l5::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSkinWeightProfilesData::EnqueueDataReadback_::__l5::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueDataReadback'::`5'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l8::<lambda_1>,1,0> @ 1475a8590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSkinWeightProfilesData::EnqueueGPUReadback_::__l8::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::`8'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::__l8::<lambda_1>,1,1> @ 1475a85b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::__l8::<lambda_1>,1,1>::
~TFunction_OwnedObject<_FSoundSource::NotifyPlaybackData_::__l8::<lambda_1>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::`8'::<lambda_1>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::<lambda_1>,1,0> @ 1475a85d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSkinWeightProfilesData::ReleaseBuffer_::__l8::<lambda_1>,1,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseBuffer'::`8'::<lambda_1>,1,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseResources'::__l8::<lambda_1>,1,0> @ 1475a85f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseResources'::__l8::<lambda_1>,1,0>::
~TFunction_OwnedObject<_FSkinWeightProfilesData::ReleaseResources_::__l8::<lambda_1>,1,0>
          (void *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseResources'::`8'::<lambda_1>,1,0>::
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

// ~TFunction_OwnedObject<`FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile'::__l46::<lambda_2>,0,0> @ 1475a8610

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile'::__l46::<lambda_2>,0,0>
::
~TFunction_OwnedObject<_FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile_::__l46::<lambda_2>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile'::`46'::<lambda_2>,0,0>
        ::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::__l11::<lambda_2>,1,1> @ 1475a8630

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::__l11::<lambda_2>,1,1>::
~TFunction_OwnedObject<_FSoundSource::NotifyPlaybackData_::__l11::<lambda_2>,1,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::`11'::<lambda_2>,1,1>::_vftable_;
  return;
}

// ~TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l13::<lambda_2>,1,0> @ 1475a8650

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l13::<lambda_2>,1,0>::
~TFunction_OwnedObject<_FSkinWeightProfilesData::EnqueueGPUReadback_::__l13::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::`13'::<lambda_2>,1,0>::
        _vftable_;
  return;
}

// operator<< @ 1475ab9b0

FArchive * __cdecl operator<<(FArchive *param_1,FMeshBoneInfo *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  FArchive *this;
  FColor_u_0 local_res8 [2];
  
  piVar1 = &param_2->ParentIndex;
  this = (FArchive *)(**(code **)(*(longlong *)param_1 + 0x178))();
  piVar2 = (int *)**(undefined8 **)&this->field_0x8;
  if ((int *)(*(undefined8 **)&this->field_0x8)[1] < piVar2 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  if (((param_1->field_0x28 & 1) != 0) && (*(int *)&param_1->field_0x40 < 0x136)) {
    plVar3 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = FColor::White.field0_0x0;
    if (*plVar3 + 4U <= (ulonglong)plVar3[1]) {
      *plVar3 = *plVar3 + 4;
      return param_1;
    }
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      return param_1;
    }
    FArchive::SerializeByteOrderSwapped(param_1,&local_res8[0].Bits);
  }
  return param_1;
}

// operator<< @ 1475abaa0

FArchive * __cdecl operator<<(FArchive *param_1,FNotifyBufferFinishedHooks *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if ((param_1->field_0x28 & 5) == 0) {
    pFVar2 = (param_2->Notifies).AllocatorInstance.Data;
    iVar1 = (param_2->Notifies).ArrayNum;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((param_2->Notifies).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNotifyBufferFinishedHooks::FNotifyBufferDetails,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar2 == pFVar3) break;
      (**(code **)(*(longlong *)param_1 + 0x150))(param_1,pFVar2);
      pFVar2 = pFVar2 + 0x10;
    }
  }
  return param_1;
}

// operator<< @ 1475abb20

FArchive * __cdecl operator<<(FArchive *param_1,FReferenceSkeleton *param_2)

{
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  TArrayPrivateFriend::Serialize<FMeshBoneInfo,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->RawRefBoneInfo);
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->RawRefBonePose);
  if (0x135 < *(int *)&param_1->field_0x40) {
    TSetPrivateFriend::
    Serialize<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)&param_2->RawNameToIndexMap);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if (((*(int *)&param_1->field_0x40 < 0x138) && (0 < (param_2->RawRefBoneInfo).ArrayNum)) &&
       (pFVar5 = (param_2->RawRefBoneInfo).AllocatorInstance.Data, *(int *)(pFVar5 + 8) != -1)) {
      *(undefined4 *)(pFVar5 + 8) = 0xffffffff;
    }
    if ((param_1->field_0x28 & 1) != 0) {
      pTVar1 = &param_2->FinalRefBoneInfo;
      if ((FReferenceSkeleton *)pTVar1 != param_2) {
        iVar3 = (param_2->FinalRefBoneInfo).ArrayMax;
        piVar2 = &(param_2->FinalRefBoneInfo).ArrayMax;
        iVar4 = (param_2->RawRefBoneInfo).ArrayNum;
        pFVar5 = (param_2->RawRefBoneInfo).AllocatorInstance.Data;
        (param_2->FinalRefBoneInfo).ArrayNum = iVar4;
        if ((iVar4 == 0) && (iVar3 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
          if (iVar4 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 * 0xc);
          }
        }
      }
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                (&param_2->FinalRefBonePose,&param_2->RawRefBonePose);
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      operator=((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&param_2->FinalNameToIndexMap,
                (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 *)&param_2->RawNameToIndexMap);
    }
  }
  return param_1;
}

// operator<< @ 1475abc40

FArchive * __cdecl operator<<(FArchive *param_1,FRuntimeSkinWeightProfileData *param_2)

{
  uchar *puVar1;
  
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->BoneIDs);
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->BoneWeights);
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->NumWeightsPerVertex,1);
  }
  else {
    param_2->NumWeightsPerVertex = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  TSetPrivateFriend::
  Serialize<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
                      *)&param_2->VertexIndexToInfluenceOffset);
  return param_1;
}

// operator<< @ 1475abcc0

FArchive * __cdecl operator<<(FArchive *param_1,FSkinWeightOverrideInfo *param_2)

{
  return param_1;
}

// operator<< @ 1475abcd0

FArchive * __cdecl operator<<(FArchive *param_1,FSkinWeightProfilesData *param_2)

{
  TSetPrivateFriend::
  Serialize<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
            (param_1,(TSet<TTuple<FName,FRuntimeSkinWeightProfileData>,TDefaultMapHashableKeyFuncs<FName,FRuntimeSkinWeightProfileData,0>,FDefaultSetAllocator>
                      *)&param_2->OverrideData);
  return param_1;
}

// operator<< @ 1475abd00

FArchive * __cdecl operator<<(FArchive *param_1,FSmartNameMapping *param_2)

{
  FSmartNameMapping::Serialize(param_2,param_1);
  return param_1;
}

// operator<< @ 1475abd30

FArchive * __cdecl operator<<(FArchive *param_1,FTransformTrajectory *param_2)

{
  TArrayPrivateFriend::Serialize<FTransformTrajectorySample,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->Samples);
  return param_1;
}

// operator<< @ 1475abd50

FArchive * __cdecl operator<<(FArchive *param_1,FTransformTrajectorySample *param_2)

{
  float *pfVar1;
  
  UE::Math::operator<<(param_1,&param_2->Facing);
  UE::Math::operator<<(param_1,&param_2->Position);
  pfVar1 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar1 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    param_2->TimeInSeconds = *pfVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return param_1;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&param_2->TimeInSeconds,4);
    return param_1;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)&param_2->TimeInSeconds);
  return param_1;
}

// operator<< @ 1475abde0

FArchive * __cdecl operator<<(FArchive *param_1,FWaveInstance *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if ((param_1->field_0x28 & 5) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x150))();
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&param_2->SoundClass);
    if ((param_1->field_0x28 & 5) == 0) {
      pFVar2 = (param_2->NotifyBufferFinishedHooks).Notifies.AllocatorInstance.Data;
      iVar1 = (param_2->NotifyBufferFinishedHooks).Notifies.ArrayNum;
      pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((param_2->NotifyBufferFinishedHooks).Notifies.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FNotifyBufferFinishedHooks::FNotifyBufferDetails,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar2 == pFVar3) break;
        (**(code **)(*(longlong *)param_1 + 0x150))(param_1,pFVar2);
        pFVar2 = pFVar2 + 0x10;
      }
    }
  }
  return param_1;
}

// operator() @ 1475acf10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
<lambda_26>::operator()
          (<lambda_26> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  int iVar1;
  char cVar2;
  UClass *pUVar3;
  UAssetManager *pUVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  UClass *local_res10 [2];
  undefined8 local_res20;
  FName local_138;
  void *local_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined1 local_110 [24];
  FUtf8String local_f8;
  UClass *local_e8;
  undefined2 local_e0;
  FDirectoryPath *local_d8;
  undefined8 local_d0;
  FSoftObjectPath *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  FString *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_88;
  undefined4 local_84;
  char *local_80;
  char *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  TReferenceControllerBase<1> *local_48;
  
  if ((param_1->ArrayNum == 0) && (4 < (byte)LogAssetManager._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
  }
  iVar1 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar7) break;
    if (*(int *)(pFVar6 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar6;
    }
    ::FName::FName(&local_138,pwVar5);
    local_118 = 0;
    pUVar3 = Z_Construct_UClass_UObject_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110._16_8_ = 0;
    local_110._8_8_ = 0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    local_110._0_8_ = 0;
    local_res20 = 0;
    FUtf8String::Reset(&local_f8,0);
    local_res10[0] = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_110,(FObjectPtr)local_res10);
    local_e8 = Z_Construct_UClass_UObject_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_e8);
    }
    local_e0 = 0;
    local_d8 = (FDirectoryPath *)0x0;
    local_d0 = 0;
    local_c8 = (FSoftObjectPath *)0x0;
    local_c0 = 0;
    local_b8 = 0xffffffffffffffff;
    local_b0 = 1;
    local_a8 = (FString *)0x0;
    local_a0 = 0;
    local_98 = 0;
    local_94 = 0;
    pUVar4 = UAssetManager::Get();
    cVar2 = (**(code **)(pUVar4->_padding_ + 0x360))(pUVar4,local_138,&local_118);
    if (cVar2 == '\0') {
      if (4 < (byte)LogAssetManager._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      }
    }
    else {
      if (4 < (byte)LogAssetManager._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      }
      pUVar4 = UAssetManager::Get();
      local_88 = 0x1634;
      local_84 = 0x19;
      local_58 = 0;
      local_68 = 0;
      local_60 = 0;
      local_78 = 
      "auto __cdecl <lambda_26>::operator ()(const class TArray<class FString,class TSizedDefaultAllocator<32> > &,class UWorld *) const"
      ;
      local_130 = (void *)0x0;
      local_128 = 0;
      local_80 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp";
      (**(code **)(pUVar4->_padding_ + 0x398))
                (pUVar4,local_50,local_138,&local_130,&local_68,0,&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
      if (local_130 != (void *)0x0) {
        FMemory::Free(local_130);
      }
    }
    DestructItems<FString,int>(local_a8,(int)local_a0);
    if (local_a8 != (FString *)0x0) {
      FMemory::Free(local_a8);
    }
    DestructItems<FSoftObjectPath,int>(local_c8,(int)local_c0);
    if (local_c8 != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_c8);
    }
    DestructItems<FDirectoryPath,int>(local_d8,(int)local_d0);
    if (local_d8 != (FDirectoryPath *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// operator() @ 1475ad210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
<lambda_27>::operator()
          (<lambda_27> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  int iVar1;
  char cVar2;
  UClass *pUVar3;
  UAssetManager *pUVar4;
  wchar_t *pwVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  UClass *local_res10;
  FName local_c8 [2];
  undefined8 local_b8;
  undefined1 local_b0 [24];
  FUtf8String local_98;
  UClass *local_88;
  undefined2 local_80;
  FDirectoryPath *local_78;
  undefined8 local_70;
  FSoftObjectPath *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 local_50;
  FString *local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  
  if ((param_1->ArrayNum == 0) && (4 < (byte)LogAssetManager._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
  }
  iVar1 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar6 == pFVar7) break;
    if (*(int *)(pFVar6 + 8) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)pFVar6;
    }
    ::FName::FName(local_c8,pwVar5);
    local_b8 = 0;
    pUVar3 = Z_Construct_UClass_UObject_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0._16_8_ = 0;
    local_b0._8_8_ = 0;
    local_98.Data.ArrayNum = 0;
    local_98.Data.ArrayMax = 0;
    local_b0._0_8_ = 0;
    FUtf8String::Reset(&local_98,0);
    local_res10 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_b0,(FObjectPtr)&local_res10);
    local_88 = Z_Construct_UClass_UObject_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_88);
    }
    local_80 = 0;
    local_78 = (FDirectoryPath *)0x0;
    local_70 = 0;
    local_68 = (FSoftObjectPath *)0x0;
    local_60 = 0;
    local_58 = 0xffffffffffffffff;
    local_50 = 1;
    local_48 = (FString *)0x0;
    local_40 = 0;
    local_38 = 0;
    local_34 = 0;
    pUVar4 = UAssetManager::Get();
    cVar2 = (**(code **)(pUVar4->_padding_ + 0x360))(pUVar4,local_c8[0],&local_b8);
    if (cVar2 == '\0') {
      if (4 < (byte)LogAssetManager._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      }
    }
    else {
      pUVar4 = UAssetManager::Get();
      (**(code **)(pUVar4->_padding_ + 0x3b0))(pUVar4,local_c8[0]);
      if (4 < (byte)LogAssetManager._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAssetManager);
      }
    }
    DestructItems<FString,int>(local_48,(int)local_40);
    if (local_48 != (FString *)0x0) {
      FMemory::Free(local_48);
    }
    DestructItems<FSoftObjectPath,int>(local_68,(int)local_60);
    if (local_68 != (FSoftObjectPath *)0x0) {
      FMemory::Free(local_68);
    }
    DestructItems<FDirectoryPath,int>(local_78,(int)local_70);
    if (local_78 != (FDirectoryPath *)0x0) {
      FMemory::Free(local_78);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// `vcall'{1184,{flat}}'_}' @ 1475ad7e0

/* [thunk]: __cdecl UAssetManager::`vcall'{1184,{flat}}' }' */

void __thiscall UAssetManager::_vcall__1184__flat______(UAssetManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001475ad7e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4a0))();
  return;
}

// `vcall'{1448,{flat}}'_}' @ 1475ad7f0

/* [thunk]: __cdecl UAssetManager::`vcall'{1448,{flat}}' }' */

void __thiscall UAssetManager::_vcall__1448__flat______(UAssetManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001475ad7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5a8))();
  return;
}

// `vcall'{720,{flat}}'_}' @ 1475ad800

/* [thunk]: __cdecl UAsyncActionLoadPrimaryAssetBase::`vcall'{720,{flat}}' }' */

void __thiscall
UAsyncActionLoadPrimaryAssetBase::_vcall__720__flat______(UAsyncActionLoadPrimaryAssetBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001475ad803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d0))();
  return;
}

// `vector_deleting_destructor'`adjustor{80}' @ 1475ad810

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimBlueprint::`vector deleting
   destructor'`adjustor{80}' (unsigned int) __ptr64 */

void * __thiscall
UAnimBlueprint::_vector_deleting_destructor__adjustor_80__(UAnimBlueprint *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimBlueprint *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{168}' @ 1475ad820

/* [thunk]:public: virtual void * __ptr64 __cdecl UAnimBlueprint::`vector deleting
   destructor'`adjustor{168}' (unsigned int) __ptr64 */

void * __thiscall
UAnimBlueprint::_vector_deleting_destructor__adjustor_168__(UAnimBlueprint *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAnimBlueprint *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1475ad834

/* [thunk]:public: virtual void * __ptr64 __cdecl UAtmosphericFogComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAtmosphericFogComponent::_vector_deleting_destructor__adjustor_40__
          (UAtmosphericFogComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UAtmosphericFogComponent *)&this[-1].field_0x338,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1475ad844

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseAsset::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UPoseAsset::_vector_deleting_destructor__adjustor_40__(UPoseAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UPoseAsset *)&this[-1].PoseContainer.Curves.ArrayNum,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1475ad854

/* [thunk]:public: virtual void * __ptr64 __cdecl UPoseAsset::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPoseAsset::_vector_deleting_destructor__adjustor_48__(UPoseAsset *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPoseAsset *)&this[-1].PoseContainer.Curves,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1475ad864

/* [thunk]:public: virtual void * __ptr64 __cdecl UPreviewMeshCollection::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UPreviewMeshCollection::_vector_deleting_destructor__adjustor_48__
          (UPreviewMeshCollection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UPreviewMeshCollection *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 1475ad874

/* [thunk]:public: virtual void * __ptr64 __cdecl USkeleton::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
USkeleton::_vector_deleting_destructor__adjustor_40__(USkeleton *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USkeleton *)&this[-1].CachedSoftObjectPtr.SoftObjectPtr.field_0x10,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 1475ad884

/* [thunk]:public: virtual void * __ptr64 __cdecl USkeleton::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
USkeleton::_vector_deleting_destructor__adjustor_48__(USkeleton *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((USkeleton *)&this[-1].CachedSoftObjectPtr.SoftObjectPtr.field_0x8,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 1475ad8a0

void * __thiscall
IBaseDelegateInstance<FPrimaryAssetId___cdecl(UObject_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<FPrimaryAssetId___cdecl(UObject_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ad8d0

void * __thiscall
IBaseDelegateInstance<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ad900

void * __thiscall
IBaseDelegateInstance<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ad930

void * __thiscall
IBaseDelegateInstance<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ad960

void * __thiscall
TBaseFunctorDelegateInstance<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy,`UAssetManager::PostInitProperties'::__l16::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined4 *)((longlong)this + 0x60) = 0;
  if (*(void **)((longlong)this + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ad9c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ada20

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UE::StreamableManager::Private::WrapDelegate'::__l5::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ada60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::__l9::<lambda_2>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adaa0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::__l11::<lambda_3>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adb00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`UAssetManager::AcquireResourcesForAssetList'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adb40

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adb70

void * __thiscall
TBaseUObjectMethodDelegateInstance<1,UAssetManager_const_,FPrimaryAssetId___cdecl(UObject_const_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<1,UAssetManager_const_,FPrimaryAssetId___cdecl(UObject_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adba0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAssetManager,void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAssetManager,void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adbd0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAssetManager,void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,FPrimaryAssetId>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAssetManager,void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,FPrimaryAssetId>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adc00

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAssetManager,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAssetManager,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adc30

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UAsyncActionLoadPrimaryAssetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UAsyncActionLoadPrimaryAssetBase,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adc60

void * __thiscall
TCommonDelegateInstanceState<FPrimaryAssetId___cdecl(UObject_const_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<FPrimaryAssetId___cdecl(UObject_const_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adc90

void * __thiscall
TCommonDelegateInstanceState<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<int___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adcc0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned_int,bool),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adcf0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,FPrimaryAssetId>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedPtr<FStreamableHandle,1>),FDefaultDelegateUserPolicy,FPrimaryAssetId>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475add20

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(bool,TArray<int,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475add50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::`8'::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::`2'::<lambda_1>,1,1>
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

// `scalar_deleting_destructor' @ 1475addb0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::__l2::<lambda_1>,1,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this =
       &TFunction_OwnedObject<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::`8'::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::`2'::<lambda_1>,1,1>
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

// `scalar_deleting_destructor' @ 1475ade10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueDataReadback'::__l5::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueDataReadback'::`5'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ade50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::`8'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ade90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::__l8::<lambda_1>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::`8'::<lambda_1>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475aded0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseBuffer'::`8'::<lambda_1>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adf10

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseResources'::__l8::<lambda_1>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::ReleaseResources'::`8'::<lambda_1>,1,0>::
        _vftable_;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 8));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adf60

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile'::__l46::<lambda_2>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile'::`46'::<lambda_2>,0,0>
        ::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adfa0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::__l11::<lambda_2>,1,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSoundSource::NotifyPlaybackData'::`11'::<lambda_2>,1,1>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475adfe0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::__l13::<lambda_2>,1,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FSkinWeightProfilesData::EnqueueGPUReadback'::`13'::<lambda_2>,1,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae020

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseBuffer'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand508>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae080

void * __thiscall
TGraphTask<FRenderThreadCommandPipe::TRenderCommandTask<`FRenderCommandDispatcher::Enqueue<TRenderCommandTag<`FSkinWeightProfilesData::ReleaseResources'::__l8::TSTR_ReleaseSkinSkinWeightProfilesDataBufferCommand539>_>'::__l2::<lambda_1>_>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae0e0

void * __thiscall
TGraphTask<FSkinWeightProfileManagerAsyncTask>::_scalar_deleting_destructor_
          (TGraphTask<FSkinWeightProfileManagerAsyncTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae140

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSoundSource::FDebugInfo,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FSoundSource::FDebugInfo,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae180

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSkeletonRemapping,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FSkeletonRemapping,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae1c0

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPrimaryAssetTypeData,SharedPointerInternals::DefaultDeleter<FPrimaryAssetTypeData>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FPrimaryAssetTypeData,SharedPointerInternals::DefaultDeleter<FPrimaryAssetTypeData>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae200

void * __thiscall
TThreadSingleton<FEnsureParentsExistScratchArea>::_scalar_deleting_destructor_
          (TThreadSingleton<FEnsureParentsExistScratchArea> *this,uint param_1)

{
  ~TThreadSingleton<FEnsureParentsExistScratchArea>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae240

void * __thiscall
TThreadSingleton<FPoseAssetEvalData>::_scalar_deleting_destructor_
          (TThreadSingleton<FPoseAssetEvalData> *this,uint param_1)

{
  ~TThreadSingleton<FPoseAssetEvalData>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae280

void * __thiscall AAtmosphericFog::_scalar_deleting_destructor_(AAtmosphericFog *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AAtmosphericFog__6B_;
  AInfo::~AInfo((AInfo *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae2e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
ASkeletalMeshActor::_scalar_deleting_destructor_(ASkeletalMeshActor *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ASkeletalMeshActor__6B_;
  *(undefined4 *)&(this->CurrentlyPlayingMontages).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurrentlyPlayingMontages).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<UAnimMontage,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentlyPlayingMontages);
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae380

void * __thiscall
UE::Anim::FAnimNotifyMirrorContext::_scalar_deleting_destructor_
          (FAnimNotifyMirrorContext *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae3b0

void * __thiscall
FBaseAttenuationSettings::_scalar_deleting_destructor_(FBaseAttenuationSettings *this,uint param_1)

{
  ~FBaseAttenuationSettings(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae3f0

void * __thiscall
FEnsureParentsExistScratchArea::_scalar_deleting_destructor_
          (FEnsureParentsExistScratchArea *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->BoneExists).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TThreadSingleton<FEnsureParentsExistScratchArea>::
  ~TThreadSingleton<FEnsureParentsExistScratchArea>
            ((TThreadSingleton<FEnsureParentsExistScratchArea> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae440

void * __thiscall
UE::Anim::FMirrorSyncScope::_scalar_deleting_destructor_(FMirrorSyncScope *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FAnimSyncGroupScope *this_00;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FMirrorSyncScope_Anim_UE__6B_;
  pTVar4 = (this->AnimSyncGroupScope).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1475ae480;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    this_00 = (this->AnimSyncGroupScope).Object;
    if (this_00 != (FAnimSyncGroupScope *)0x0) {
      FAnimSyncGroupScope::SetMirror(this_00,this->OuterScopeMirrorDataTable);
    }
  }
LAB_1475ae480:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar4 = (this->AnimSyncGroupScope).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae4f0

void * __thiscall
FPoseAssetEvalData::_scalar_deleting_destructor_(FPoseAssetEvalData *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WeightedPoses).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PoseWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PoseWeightedIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TThreadSingleton<FPoseAssetEvalData>::~TThreadSingleton<FPoseAssetEvalData>
            ((TThreadSingleton<FPoseAssetEvalData> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae570

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void * __thiscall
FPrimaryAssetTypeData::_scalar_deleting_destructor_(FPrimaryAssetTypeData *this,uint param_1)

{
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  if (*(int *)&(this->AssetMap).field_0x8 != *(int *)&(this->AssetMap).field_0x34) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AssetMap.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AssetManager.cpp"
                       ,0x1c5,
                       L"FPrimaryAssetTypeData is being destructed while still containing assets");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  *(undefined4 *)&(this->AssetMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->AssetMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPrimaryAssetData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AssetMap);
  (this->RealAssetScanPaths).HashSize = 0;
  FVar1 = (this->RealAssetScanPaths).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RealAssetScanPaths).Elements);
  (this->AdditionalAssetScanPaths).HashSize = 0;
  FVar1 = (this->AdditionalAssetScanPaths).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AdditionalAssetScanPaths).Elements);
  (this->DeferredAssetScanPaths).HashSize = 0;
  FVar1 = (this->DeferredAssetScanPaths).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DeferredAssetScanPaths).Elements);
  FPrimaryAssetTypeInfo::~FPrimaryAssetTypeInfo(&this->Info);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1c8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae690

void * __thiscall
FSkeletalMeshAttributeVertexBuffer::_scalar_deleting_destructor_
          (FSkeletalMeshAttributeVertexBuffer *this,uint param_1)

{
  ~FSkeletalMeshAttributeVertexBuffer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae6d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FSkinWeightProfileManager::_scalar_deleting_destructor_
          (FSkinWeightProfileManager *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  ForElementType<FSetProfileRequest> FVar6;
  
  pFVar3 = (this->AsyncTask).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  FTickFunction::~FTickFunction((FTickFunction *)&this->TickFunction);
  *(undefined4 *)&(this->PendingMeshes).field_0x48 = 0;
  pvVar4 = *(void **)&(this->PendingMeshes).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingMeshes);
  DestructItems<FSetProfileRequest,int>
            ((FSetProfileRequest *)(this->PendingSetProfileRequests).AllocatorInstance.Data,
             (this->PendingSetProfileRequests).ArrayNum);
  pFVar5 = (this->PendingSetProfileRequests).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  FVar6 = (this->CanceledRequest).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FSetProfileRequest>)0x0) {
    FVar6 = (ForElementType<FSetProfileRequest>)&this->CanceledRequest;
  }
  DestructItems<FSetProfileRequest,int>
            ((FSetProfileRequest *)FVar6,(this->CanceledRequest).ArrayNum);
  FVar6 = (this->CanceledRequest).AllocatorInstance.SecondaryData;
  if (FVar6 != (ForElementType<FSetProfileRequest>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae7d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FSkinWeightProfileManagerTickFunction::_scalar_deleting_destructor_
          (FSkinWeightProfileManagerTickFunction *this,uint param_1)

{
  FTickFunction::~FTickFunction((FTickFunction *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae810

void * __thiscall
IPreviewCollectionInterface::_scalar_deleting_destructor_
          (IPreviewCollectionInterface *this,uint param_1)

{
  *this = (IPreviewCollectionInterface)&___7IPreviewCollectionInterface__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UAnimBlueprint::_scalar_deleting_destructor_(UAnimBlueprint *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintCore__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7UAnimBlueprint__6B_;
  pFVar1 = (this->Groups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  UBlueprint::~UBlueprint((UBlueprint *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae8f0

void * __thiscall UAssetManager::_scalar_deleting_destructor_(UAssetManager *this,uint param_1)

{
  ~UAssetManager(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x528);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475ae950

void * __thiscall UAssetUserData::_scalar_deleting_destructor_(UAssetUserData *this,uint param_1)

{
  *(undefined ***)this = &___7UAssetUserData__6B_;
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

// `scalar_deleting_destructor' @ 1475ae9b0

void * __thiscall
UAsyncActionChangePrimaryAssetBundles::_scalar_deleting_destructor_
          (UAsyncActionChangePrimaryAssetBundles *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionChangePrimaryAssetBundles__6B_;
  pvVar1 = *(void **)&(this->Completed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Completed);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475aea80

void * __thiscall
UAsyncActionLoadPrimaryAsset::_scalar_deleting_destructor_
          (UAsyncActionLoadPrimaryAsset *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAsset__6B_;
  pvVar1 = *(void **)&(this->Completed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Completed);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475aeb50

void * __thiscall
UAsyncActionLoadPrimaryAssetBase::_scalar_deleting_destructor_
          (UAsyncActionLoadPrimaryAssetBase *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LoadHandle).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->OldBundles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LoadBundles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AssetsToLoad).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475aebf0

void * __thiscall
UAsyncActionLoadPrimaryAssetClass::_scalar_deleting_destructor_
          (UAsyncActionLoadPrimaryAssetClass *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetClass__6B_;
  pvVar1 = *(void **)&(this->Completed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Completed);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475aecc0

void * __thiscall
UAsyncActionLoadPrimaryAssetClassList::_scalar_deleting_destructor_
          (UAsyncActionLoadPrimaryAssetClassList *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetClassList__6B_;
  pvVar1 = *(void **)&(this->Completed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Completed);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475aed90

void * __thiscall
UAsyncActionLoadPrimaryAssetList::_scalar_deleting_destructor_
          (UAsyncActionLoadPrimaryAssetList *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetList__6B_;
  pvVar1 = *(void **)&(this->Completed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Completed);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475aee60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void * __thiscall
UAtmosphericFogComponent::_scalar_deleting_destructor_(UAtmosphericFogComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  USkyAtmosphereComponent::~USkyAtmosphereComponent((USkyAtmosphereComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x360);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475aeee0

void * __thiscall
UMeshDeformerCollection::_scalar_deleting_destructor_(UMeshDeformerCollection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMeshDeformerCollection__6B_;
  pFVar1 = (this->MeshDeformerCollections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<UMeshDeformer>,int>
            ((TSoftObjectPtr<UMeshDeformer> *)(this->MeshDeformers).AllocatorInstance.Data,
             (this->MeshDeformers).ArrayNum);
  pFVar1 = (this->MeshDeformers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475aef70

void * __thiscall
UMirrorDataTable::_scalar_deleting_destructor_(UMirrorDataTable *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMirrorDataTable__6B_;
  *(undefined4 *)&(this->SyncToMirrorSyncMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SyncToMirrorSyncMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SyncToMirrorSyncMap);
  *(undefined4 *)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnimNotifyToMirrorAnimNotifyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnimNotifyToMirrorAnimNotifyMap);
  *(undefined4 *)&(this->CurveToMirrorCurveMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveToMirrorCurveMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveToMirrorCurveMap);
  pFVar2 = (this->CurveMirrorTargetUIDArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurveMirrorSourceUIDArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(void **)&this->BoneToMirrorBoneIndex != (void *)0x0) {
    FMemory::Free(*(void **)&this->BoneToMirrorBoneIndex);
  }
  pFVar2 = (this->MirrorFindReplaceExpressions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDataTable::~UDataTable((UDataTable *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1f8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475af0a0

void * __thiscall
UNodeMappingContainer::_scalar_deleting_destructor_(UNodeMappingContainer *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UNodeMappingContainer__6B_;
  pvVar1 = *(void **)&(this->TargetAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->SourceAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->SourceToTarget).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SourceToTarget).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceToTarget);
  *(undefined4 *)&(this->TargetItems).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TargetItems).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TargetItems);
  *(undefined4 *)&(this->SourceItems).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SourceItems).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNodeItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceItems);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475af1a0

void * __thiscall
UNodeMappingProviderInterface::_scalar_deleting_destructor_
          (UNodeMappingProviderInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1475af200

void * __thiscall UPoseAsset::_scalar_deleting_destructor_(UPoseAsset *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pFVar1 = (this->RetargetSourceAssetReferencePose).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPoseDataContainer::~FPoseDataContainer(&this->PoseContainer);
  UAnimationAsset::~UAnimationAsset((UAnimationAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475af2a0

void * __thiscall
UPreviewCollectionInterface::_scalar_deleting_destructor_
          (UPreviewCollectionInterface *this,uint param_1)

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

// `scalar_deleting_destructor' @ 1475af300

void * __thiscall
UPreviewMeshCollection::_scalar_deleting_destructor_(UPreviewMeshCollection *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UDataAsset__;
  this->_padding_ = (longlong)&_vftable__for__IPreviewCollectionInterface__;
  DestructItems<FPreviewMeshCollectionEntry,int>
            ((FPreviewMeshCollectionEntry *)(this->SkeletalMeshes).AllocatorInstance.Data,
             (this->SkeletalMeshes).ArrayNum);
  pFVar1 = (this->SkeletalMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IPreviewCollectionInterface__6B_;
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475af3a0

void * __thiscall USkeleton::_scalar_deleting_destructor_(USkeleton *this,uint param_1)

{
  ~USkeleton(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x388);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475af400

void * __thiscall
UTransformTrajectoryBlueprintLibrary::_scalar_deleting_destructor_
          (UTransformTrajectoryBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UTransformTrajectoryBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1475af460

void * __thiscall
UVariableFrameStrippingSettings::_scalar_deleting_destructor_
          (UVariableFrameStrippingSettings *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UVariableFrameStrippingSettings__6B_;
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

// AddVirtualBonePrefix @ 1475b2d10

FString * __cdecl
VirtualBoneNameHelpers::AddVirtualBonePrefix(FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::ConcatFF(__return_storage_ptr__,&VirtualBonePrefix,param_1);
  return __return_storage_ptr__;
}

// CheckVirtualBonePrefix @ 1475b9860

bool __cdecl VirtualBoneNameHelpers::CheckVirtualBonePrefix(FString *param_1)

{
  bool bVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  iVar3 = VirtualBonePrefix.Data.ArrayNum + -1;
  if (VirtualBonePrefix.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  pwVar2 = L"";
  if (VirtualBonePrefix.Data.ArrayNum != 0) {
    pwVar2 = (wchar_t *)VirtualBonePrefix.Data.AllocatorInstance.Data;
  }
  bVar1 = ::FString::StartsWith(param_1,pwVar2,iVar3,IgnoreCase);
  return bVar1;
}

// ComposeAbsoluteTransforms @ 1475ba480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
`anonymous_namespace'::ComposeAbsoluteTransforms
          (FReferenceSkeleton *param_1,TArrayView<UE::Math::TTransform<double>_const_,int> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  TTransform<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  bool bVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  longlong lVar38;
  undefined1 auStackY_158 [32];
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar37 = param_2->ArrayNum;
  piVar1 = &param_3->ArrayNum;
  iVar31 = *piVar1;
  if (iVar31 < (int)uVar37) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,uVar37 - iVar31,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
  }
  else {
    if ((int)uVar37 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar37);
    }
    if ((int)uVar37 < iVar31) {
      uVar35 = iVar31 - uVar37;
      if (((int)(uVar35 | uVar37) < 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar30)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (uVar35 != 0) {
        pFVar34 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar37 * 0x60;
        iVar31 = (*piVar1 - uVar37) - uVar35;
        if (iVar31 != 0) {
          memmove(pFVar34,pFVar34 + (longlong)(int)uVar35 * 0x60,(longlong)iVar31 * 0x60);
        }
        *piVar1 = *piVar1 - uVar35;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,&param_3->AllocatorInstance,*piVar1,&param_3->ArrayMax);
      }
    }
  }
  uVar35 = 0;
  if (0 < (int)uVar37) {
    lVar38 = 0;
    do {
      uVar32 = FReferenceSkeleton::GetParentIndexInternal(param_1,uVar35,&param_1->FinalRefBoneInfo)
      ;
      uVar36 = ~uVar35 >> 0x1f;
      if ((int)uVar32 < 0) {
        uVar32 = 0;
        if ((int)uVar35 < (int)uVar37) {
          uVar32 = uVar36;
        }
        if ((uVar32 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar30)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar3 = param_2->DataPtr;
        puVar2 = (undefined4 *)((longlong)(pTVar3->Rotation).XY.m128d_f64 + lVar38);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar2 = (undefined4 *)((longlong)(pTVar3->Rotation).ZW.m128d_f64 + lVar38);
        uVar10 = *puVar2;
        uVar11 = puVar2[1];
        uVar12 = puVar2[2];
        uVar13 = puVar2[3];
        puVar2 = (undefined4 *)((longlong)(pTVar3->Translation).XY.m128d_f64 + lVar38);
        uVar14 = *puVar2;
        uVar15 = puVar2[1];
        uVar16 = puVar2[2];
        uVar17 = puVar2[3];
        puVar2 = (undefined4 *)((longlong)(pTVar3->Translation).ZW.m128d_f64 + lVar38);
        uVar18 = *puVar2;
        uVar19 = puVar2[1];
        uVar20 = puVar2[2];
        uVar21 = puVar2[3];
        puVar2 = (undefined4 *)((longlong)(pTVar3->Scale3D).XY.m128d_f64 + lVar38);
        uVar22 = *puVar2;
        uVar23 = puVar2[1];
        uVar24 = puVar2[2];
        uVar25 = puVar2[3];
        puVar2 = (undefined4 *)((longlong)(pTVar3->Scale3D).ZW.m128d_f64 + lVar38);
        uVar26 = *puVar2;
        uVar27 = puVar2[1];
        uVar28 = puVar2[2];
        uVar29 = puVar2[3];
        uVar37 = 0;
        if ((int)uVar35 < *piVar1) {
          uVar37 = uVar36;
        }
      }
      else {
        uVar33 = 0;
        if ((int)uVar35 < (int)uVar37) {
          uVar33 = uVar36;
        }
        if ((uVar33 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar30)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar3 = param_2->DataPtr;
        uVar37 = 0;
        if ((int)uVar32 < *piVar1) {
          uVar37 = ~uVar32 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_108.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_108.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_108.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_108.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_108.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_108.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_108,pTVar3 + (int)uVar35,
                   (TTransform<double> *)
                   ((param_3->AllocatorInstance).Data + (longlong)(int)uVar32 * 0x60));
        uVar37 = 0;
        if ((int)uVar35 < *piVar1) {
          uVar37 = uVar36;
        }
        uVar6 = local_108.Rotation.XY.m128d_f64[0]._0_4_;
        uVar7 = local_108.Rotation.XY.m128d_f64[0]._4_4_;
        uVar8 = local_108.Rotation.XY.m128d_f64[1]._0_4_;
        uVar9 = local_108.Rotation.XY.m128d_f64[1]._4_4_;
        uVar10 = local_108.Rotation.ZW.m128d_f64[0]._0_4_;
        uVar11 = local_108.Rotation.ZW.m128d_f64[0]._4_4_;
        uVar12 = local_108.Rotation.ZW.m128d_f64[1]._0_4_;
        uVar13 = local_108.Rotation.ZW.m128d_f64[1]._4_4_;
        uVar14 = local_108.Translation.XY.m128d_f64[0]._0_4_;
        uVar15 = local_108.Translation.XY.m128d_f64[0]._4_4_;
        uVar16 = local_108.Translation.XY.m128d_f64[1]._0_4_;
        uVar17 = local_108.Translation.XY.m128d_f64[1]._4_4_;
        uVar18 = local_108.Translation.ZW.m128d_f64[0]._0_4_;
        uVar19 = local_108.Translation.ZW.m128d_f64[0]._4_4_;
        uVar20 = local_108.Translation.ZW.m128d_f64[1]._0_4_;
        uVar21 = local_108.Translation.ZW.m128d_f64[1]._4_4_;
        uVar22 = local_108.Scale3D.XY.m128d_f64[0]._0_4_;
        uVar23 = local_108.Scale3D.XY.m128d_f64[0]._4_4_;
        uVar24 = local_108.Scale3D.XY.m128d_f64[1]._0_4_;
        uVar25 = local_108.Scale3D.XY.m128d_f64[1]._4_4_;
        uVar26 = local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
        uVar27 = local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
        uVar28 = local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
        uVar29 = local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      if ((uVar37 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (param_3->AllocatorInstance).Data;
      uVar35 = uVar35 + 1;
      uVar37 = param_2->ArrayNum;
      pFVar34 = pFVar4 + lVar38;
      *(undefined4 *)pFVar34 = uVar6;
      *(undefined4 *)(pFVar34 + 4) = uVar7;
      *(undefined4 *)(pFVar34 + 8) = uVar8;
      *(undefined4 *)(pFVar34 + 0xc) = uVar9;
      pFVar34 = pFVar4 + lVar38 + 0x10;
      *(undefined4 *)pFVar34 = uVar10;
      *(undefined4 *)(pFVar34 + 4) = uVar11;
      *(undefined4 *)(pFVar34 + 8) = uVar12;
      *(undefined4 *)(pFVar34 + 0xc) = uVar13;
      pFVar34 = pFVar4 + lVar38 + 0x20;
      *(undefined4 *)pFVar34 = uVar14;
      *(undefined4 *)(pFVar34 + 4) = uVar15;
      *(undefined4 *)(pFVar34 + 8) = uVar16;
      *(undefined4 *)(pFVar34 + 0xc) = uVar17;
      pFVar34 = pFVar4 + lVar38 + 0x30;
      *(undefined4 *)pFVar34 = uVar18;
      *(undefined4 *)(pFVar34 + 4) = uVar19;
      *(undefined4 *)(pFVar34 + 8) = uVar20;
      *(undefined4 *)(pFVar34 + 0xc) = uVar21;
      pFVar34 = pFVar4 + lVar38 + 0x40;
      *(undefined4 *)pFVar34 = uVar22;
      *(undefined4 *)(pFVar34 + 4) = uVar23;
      *(undefined4 *)(pFVar34 + 8) = uVar24;
      *(undefined4 *)(pFVar34 + 0xc) = uVar25;
      pFVar4 = pFVar4 + lVar38 + 0x50;
      *(undefined4 *)pFVar4 = uVar26;
      *(undefined4 *)(pFVar4 + 4) = uVar27;
      *(undefined4 *)(pFVar4 + 8) = uVar28;
      *(undefined4 *)(pFVar4 + 0xc) = uVar29;
      lVar38 = lVar38 + 0x60;
    } while ((int)uVar35 < (int)uVar37);
  }
  return;
}

// ComposeSingleAbsoluteTransform @ 1475ba8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
`anonymous_namespace'::ComposeSingleAbsoluteTransform
          (TTransform<double> *__return_storage_ptr__,int param_1,FReferenceSkeleton *param_2,
          TArrayView<UE::Math::TTransform<double>_const_,int> *param_3)

{
  code *pcVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TTransform<double> *pTVar7;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pTVar7 = TArrayView<UE::Math::TTransform<double>_const_,int>::operator[](param_3,param_1);
  dVar2 = (pTVar7->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar7->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar7->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar7->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar7->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar7->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar7->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar7->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar7->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar7->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar7->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar7->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  uVar5 = FReferenceSkeleton::GetParentIndexInternal(param_2,param_1,&param_2->FinalRefBoneInfo);
  lVar3 = local_a0;
  do {
    if (uVar5 == 0xffffffff) {
      return __return_storage_ptr__;
    }
    local_a0 = (longlong)param_3->ArrayNum;
    uVar6 = 0;
    if ((int)uVar5 < param_3->ArrayNum) {
      uVar6 = ~uVar5 >> 0x1f;
    }
    if (uVar6 == 0) {
      local_a8 = (longlong)(int)uVar5;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      lVar3 = local_a0;
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TTransform<double> *)(*pcVar1)();
        return pTVar7;
      }
    }
    local_a0 = lVar3;
    local_98.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_98.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_98.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_98.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_98.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_98.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_98,__return_storage_ptr__,param_3->DataPtr + (int)uVar5);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_98.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_98.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_98.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_98.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_98.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_98.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_98.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_98.Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_98.Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_98.Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_98.Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_98.Scale3D.ZW.m128d_f64[1];
    uVar5 = FReferenceSkeleton::GetParentIndexInternal(param_2,uVar5,&param_2->FinalRefBoneInfo);
    lVar3 = local_a0;
  } while( true );
}

// EmptyLinkFunctionForGeneratedCodeAnimBlueprint @ 1475c3f60

void __cdecl EmptyLinkFunctionForGeneratedCodeAnimBlueprint(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAssetCompilingManager @ 1475c3f70

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetCompilingManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAssetManager @ 1475c3f80

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAssetManagerTypes @ 1475c3f90

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetManagerTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAssetUserData @ 1475c3fa0

void __cdecl EmptyLinkFunctionForGeneratedCodeAssetUserData(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAsyncActionLoadPrimaryAsset @ 1475c3fb0

void __cdecl EmptyLinkFunctionForGeneratedCodeAsyncActionLoadPrimaryAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAtmosphericFog @ 1475c3fc0

void __cdecl EmptyLinkFunctionForGeneratedCodeAtmosphericFog(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAtmosphericFogComponent @ 1475c3fd0

void __cdecl EmptyLinkFunctionForGeneratedCodeAtmosphericFogComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAttenuation @ 1475c3fe0

void __cdecl EmptyLinkFunctionForGeneratedCodeAttenuation(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMeshDeformerCollection @ 1475c3ff0

void __cdecl EmptyLinkFunctionForGeneratedCodeMeshDeformerCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMirrorDataTable @ 1475c4000

void __cdecl EmptyLinkFunctionForGeneratedCodeMirrorDataTable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeMotionTrajectoryTypes @ 1475c4010

void __cdecl EmptyLinkFunctionForGeneratedCodeMotionTrajectoryTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNodeMappingContainer @ 1475c4020

void __cdecl EmptyLinkFunctionForGeneratedCodeNodeMappingContainer(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeNodeMappingProviderInterface @ 1475c4030

void __cdecl EmptyLinkFunctionForGeneratedCodeNodeMappingProviderInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePoseAsset @ 1475c4040

void __cdecl EmptyLinkFunctionForGeneratedCodePoseAsset(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePreviewAssetAttachComponent @ 1475c4050

void __cdecl EmptyLinkFunctionForGeneratedCodePreviewAssetAttachComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePreviewCollectionInterface @ 1475c4060

void __cdecl EmptyLinkFunctionForGeneratedCodePreviewCollectionInterface(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodePreviewMeshCollection @ 1475c4070

void __cdecl EmptyLinkFunctionForGeneratedCodePreviewMeshCollection(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkeletalMeshActor @ 1475c4080

void __cdecl EmptyLinkFunctionForGeneratedCodeSkeletalMeshActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkeletalMeshVertexAttribute @ 1475c4090

void __cdecl EmptyLinkFunctionForGeneratedCodeSkeletalMeshVertexAttribute(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkeleton @ 1475c40a0

void __cdecl EmptyLinkFunctionForGeneratedCodeSkeleton(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkinWeightProfile @ 1475c40b0

void __cdecl EmptyLinkFunctionForGeneratedCodeSkinWeightProfile(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSkinWeightProfileManager @ 1475c40c0

void __cdecl EmptyLinkFunctionForGeneratedCodeSkinWeightProfileManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSmartName @ 1475c40d0

void __cdecl EmptyLinkFunctionForGeneratedCodeSmartName(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTimeStretchCurve @ 1475c40e0

void __cdecl EmptyLinkFunctionForGeneratedCodeTimeStretchCurve(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTrajectoryTypes @ 1475c40f0

void __cdecl EmptyLinkFunctionForGeneratedCodeTrajectoryTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeVariableFrameStrippingSettings @ 1475c4100

void __cdecl EmptyLinkFunctionForGeneratedCodeVariableFrameStrippingSettings(void)

{
  return;
}

// EndsWithBlueprint @ 1475c4110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl EndsWithBlueprint(FTopLevelAssetPath *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined1 auStack_468 [32];
  FName local_448 [2];
  TStringBuilderBase<wchar_t> local_438;
  wchar_t local_418 [512];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_468;
  local_438.Base = local_418;
  local_438.bIsDynamic = false;
  local_438.bIsExternal = false;
  local_438.CurPos = local_418;
  local_438.End = (wchar_t *)local_18;
  local_448[0] = param_1->AssetName;
  FName::ToString(local_448,&local_438);
  iVar1 = (int)((longlong)local_438.CurPos - (longlong)local_438.Base >> 1);
  lVar2 = (longlong)iVar1;
  if (9 < iVar1) {
    iVar1 = 9;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    iVar4 = iVar1;
  }
  if ((iVar4 == 9) &&
     (iVar1 = FGenericPlatformStricmp::Strnicmp(L"Blueprint",local_438.Base + (lVar2 - iVar4),9),
     iVar1 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_438);
  return bVar3;
}

// FOnPrimaryAssetBundlesChanged_DelegateWrapper @ 1475c6fa0

void __cdecl
FOnPrimaryAssetBundlesChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnPrimaryAssetClassListLoaded_DelegateWrapper @ 1475c6fb0

void __cdecl
FOnPrimaryAssetClassListLoaded_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  TArray<TSubclassOf<UObject>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = param_2->ArrayNum;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      ConstructItems<TSubclassOf<UObject>,TSubclassOf<UObject>,int>
                (local_18.AllocatorInstance.Data,(TSubclassOf<UObject> *)pFVar2,uVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnPrimaryAssetClassLoaded_DelegateWrapper @ 1475c7060

void __cdecl
FOnPrimaryAssetClassLoaded_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TSubclassOf<UObject> param_2)

{
  undefined8 local_res10 [3];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (*(UObject **)param_2.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_2.Class.field0_0x0);
  }
  local_res10[0] = *(undefined8 *)param_2.Class.field0_0x0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnPrimaryAssetListLoaded_DelegateWrapper @ 1475c70b0

void __cdecl
FOnPrimaryAssetListLoaded_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 << 3);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnPrimaryAssetLoaded_DelegateWrapper @ 1475c7160

void __cdecl
FOnPrimaryAssetLoaded_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UObject *param_2)

{
  UObject *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FindBoneByName @ 1475c9740

int __cdecl FindBoneByName(FName *param_1,TArray<FVirtualBone,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar4 = param_2->ArrayNum;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if (*(FName *)((param_2->AllocatorInstance).Data + lVar6 + 0x10) == *param_1) {
        return uVar5;
      }
      iVar4 = param_2->ArrayNum;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x18;
    } while ((int)uVar5 < iVar4);
  }
  return -1;
}

// FindRiffChunk @ 1475cae00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRiffChunkOld * __cdecl FindRiffChunk(FRiffChunkOld *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FRiffChunkOld *pFVar4;
  atomic<unsigned_char> *paVar5;
  ForAnyElementType FVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  char *pcVar10;
  
  if (param_1 == (FRiffChunkOld *)0x0) {
    iVar8 = 0x665;
    pcVar10 = "RiffChunkStart";
    paVar5 = &bGEnsureHasExecuted<8991919534923318885>;
  }
  else {
    if (param_2 != (uchar *)0x0) {
      if (param_2 <= param_1) {
        return (FRiffChunkOld *)0x0;
      }
      uVar9 = (ulonglong)_tls_index;
      do {
        if (param_1->ChunkID == param_3) {
          return param_1;
        }
        uVar1 = param_1->ChunkLen;
        if (uVar1 == 0) {
          return (FRiffChunkOld *)0x0;
        }
        if ((uVar1 & 1) == 0) {
LAB_1475caef0:
          param_1 = (FRiffChunkOld *)((longlong)&param_1[1].ChunkID + (ulonglong)uVar1);
        }
        else {
          if ((uchar *)((longlong)&param_1[2].ChunkID + (ulonglong)uVar1) < param_2) {
            iVar8 = *(int *)((longlong)&param_1[1].ChunkID + (ulonglong)uVar1);
            piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c
                            );
            if ((*piVar7 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
              RequiredChunkIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              RequiredChunkIds.ArrayNum = 2;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,2,0,&RequiredChunkIds.AllocatorInstance,2,&RequiredChunkIds.ArrayMax);
              *(undefined8 *)RequiredChunkIds.AllocatorInstance.Data = 0x6174616420746d66;
              atexit(`FWaveModInfo::GetRequiredWaveChunkIds'::__l2::
                     _dynamic_atexit_destructor_for__RequiredChunkIds__);
              _Init_thread_footer(&_TSS0);
            }
            for (FVar6.Data = RequiredChunkIds.AllocatorInstance.Data;
                FVar6.Data !=
                RequiredChunkIds.AllocatorInstance.Data + (longlong)RequiredChunkIds.ArrayNum * 4;
                FVar6.Data = FVar6.Data + 4) {
              if (*(int *)FVar6.Data == iVar8) goto LAB_1475caef0;
            }
            if ((*piVar7 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
              OptionalChunkIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              OptionalChunkIds.ArrayNum = 0xc;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,0xc,0,&OptionalChunkIds.AllocatorInstance,0xc,
                         &OptionalChunkIds.ArrayMax);
              FVar6 = OptionalChunkIds.AllocatorInstance;
              *(undefined8 *)OptionalChunkIds.AllocatorInstance.Data = 0x2065756374636166;
              *(undefined8 *)(FVar6.Data + 8) = 0x5453494c74736c70;
              *(undefined8 *)(FVar6.Data + 0x10) = 0x7478746c6c62616c;
              *(undefined8 *)(FVar6.Data + 0x18) = 0x6c706d7365746f6e;
              *(undefined8 *)(FVar6.Data + 0x20) = 0x6469636174736e69;
              *(undefined8 *)(FVar6.Data + 0x28) = 0x4c4d586974786562;
              atexit(`FWaveModInfo::GetOptionalWaveChunkIds'::__l2::
                     _dynamic_atexit_destructor_for__OptionalChunkIds__);
              _Init_thread_footer(&_TSS0);
            }
            for (FVar6.Data = OptionalChunkIds.AllocatorInstance.Data;
                FVar6.Data !=
                OptionalChunkIds.AllocatorInstance.Data + (longlong)OptionalChunkIds.ArrayNum * 4;
                FVar6.Data = FVar6.Data + 4) {
              if (*(int *)FVar6.Data == iVar8) goto LAB_1475caef0;
            }
          }
          param_1 = (FRiffChunkOld *)
                    ((longlong)&param_1[1].ChunkID +
                    ((ulonglong)(param_1->ChunkLen + 1) & 0xfffffffe));
        }
        if (param_2 <= param_1) {
          return (FRiffChunkOld *)0x0;
        }
      } while( true );
    }
    iVar8 = 0x66b;
    pcVar10 = "RiffChunkEnd";
    paVar5 = &bGEnsureHasExecuted<8991919534923318891>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar5,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Audio.cpp"
                     ,iVar8,pcVar10);
  if (!bVar3) {
    return (FRiffChunkOld *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FRiffChunkOld *)(*pcVar2)();
  return pFVar4;
}

// FinishCompilation @ 1475cb580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AsyncCompilationHelpers::FinishCompilation
          (TFunctionRef<AsyncCompilationHelpers::ICompilable_&___cdecl(int)> *param_1,int param_2,
          TFunctionRef<void___cdecl(AsyncCompilationHelpers::ICompilable_*)> *param_3)

{
  uint *puVar1;
  code *pcVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  FQueuedThreadPool *pFVar6;
  bool bVar7;
  char cVar8;
  longlong *plVar9;
  ForElementType<unsigned_int> FVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 auStack_158 [32];
  FObjectCacheContextScope local_138 [4];
  int local_134;
  int local_130;
  int local_12c;
  int local_128 [2];
  int local_120 [2];
  uint local_118;
  int local_114;
  int local_110;
  int local_108 [2];
  TFunctionRef<AsyncCompilationHelpers::ICompilable_&___cdecl(int)> *local_100;
  uint local_f8;
  int local_f4;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  longlong *local_e0;
  ForElementType<unsigned_int> local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  ForElementType<unsigned_int> local_c0;
  uint local_a8;
  int local_a4;
  ForElementType<unsigned_int> local_a0;
  uint local_88;
  int local_84;
  ulonglong local_80;
  
  if (param_2 < 1) {
    return;
  }
  local_80 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_110 = param_2;
  local_100 = param_1;
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AsyncCompilationHelpers.cpp"
                         ,0x69,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FObjectCacheContextScope::FObjectCacheContextScope(local_138);
  QueryPerformanceCounter(&local_f0);
  FAssetCompilingManager::Get();
  pFVar6 = GThreadPool;
  iVar12 = 0;
  do {
    local_128[0] = iVar12;
    plVar9 = (longlong *)(**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_128);
    (**(code **)(*plVar9 + 8))(plVar9,pFVar6,0);
    iVar12 = iVar12 + 1;
  } while (iVar12 < param_2);
  QueryPerformanceCounter(&local_e8);
  dVar5 = __real_4170000000000000;
  uVar18 = param_2 + 0x1f;
  uVar13 = uVar18 >> 5;
  iVar12 = 0;
  local_a4 = 0x80;
  local_c0.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_a8 = param_2;
  dVar3 = (double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (uVar18 >> 5 == 0) {
LAB_1475cb76a:
    local_84 = 0x80;
    local_a0.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88 = param_2;
    fVar4 = __real_3c83126f;
    if (uVar18 >> 5 == 0) goto LAB_1475cb840;
  }
  else {
    if (4 < uVar13) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_c0,0,uVar13,4);
      local_a4 = uVar13 << 5;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_c0;
    if (local_c0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_c0.SecondaryData;
    }
    if (uVar13 < 9) {
      iVar19 = -1;
    }
    else {
      iVar19 = 0xff;
    }
    memset((void *)FVar10,iVar19,(ulonglong)uVar13 << 2);
    uVar17 = local_a8 & 0x8000001f;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
    }
    if (uVar17 == 0) goto LAB_1475cb76a;
    FVar10 = (ForElementType<unsigned_int>)&local_c0;
    if (local_c0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_c0.SecondaryData;
    }
    puVar1 = (uint *)((longlong)FVar10 +
                     (longlong)((int)(local_a8 + ((int)local_a8 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar17 & 0x1f);
    local_84 = 0x80;
    local_a0.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88 = param_2;
  }
  local_84 = 0x80;
  local_a0.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88 = param_2;
  if (4 < uVar13) {
    TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
    ResizeAllocation(&local_a0,0,uVar13,4);
    local_84 = uVar13 << 5;
  }
  FVar10 = (ForElementType<unsigned_int>)&local_a0;
  if (local_a0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar10 = local_a0.SecondaryData;
  }
  if ((8 < uVar13) || (uVar18 >> 5 != 0)) {
    memset((void *)FVar10,0,(ulonglong)uVar13 << 2);
  }
  uVar18 = local_88 & 0x8000001f;
  if ((int)uVar18 < 0) {
    uVar18 = (uVar18 - 1 | 0xffffffe0) + 1;
  }
  fVar4 = __real_3c83126f;
  if (uVar18 != 0) {
    FVar10 = (ForElementType<unsigned_int>)&local_a0;
    if (local_a0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_a0.SecondaryData;
    }
    puVar1 = (uint *)((longlong)FVar10 +
                     (longlong)((int)(local_88 + ((int)local_88 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar18 & 0x1f);
  }
LAB_1475cb840:
  while( true ) {
    FVar10 = (ForElementType<unsigned_int>)&local_c0;
    if (local_c0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_c0.SecondaryData;
    }
    local_130 = 0;
    local_12c = (int)(local_a8 + 0x1f + ((int)(local_a8 + 0x1f) >> 0x1f & 0x1fU)) >> 5;
    uVar18 = local_a8 & 0x8000001f;
    if ((int)uVar18 < 0) {
      uVar18 = (uVar18 - 1 | 0xffffffe0) + 1;
    }
    iVar19 = local_12c + -1;
    uVar13 = 0xffffffff >> ((byte)(0x20 - uVar18) & 0x1f);
    if (0x1f < (int)(0x20 - uVar18)) {
      uVar13 = 0xffffffff;
    }
    uVar18 = 0xffffffff;
    if (iVar19 == 0) {
      uVar18 = uVar13;
    }
    local_118 = uVar13;
    local_114 = iVar19;
    local_d8 = FVar10;
    if (0 < local_12c) {
      local_134 = 0;
      do {
        iVar15 = local_134;
        uVar16 = *(uint *)((longlong)FVar10 + (longlong)local_130 * 4) & uVar18;
        uVar17 = *(uint *)((longlong)FVar10 + (longlong)local_130 * 4);
        uVar14 = uVar16;
        param_2 = local_110;
        if (uVar18 == 0xffffffff) {
          uVar16 = uVar17;
          uVar14 = uVar17;
        }
        while (local_110 = param_2, uVar16 != 0) {
          uVar18 = -uVar16 & uVar16;
          local_f8 = 0x1f;
          if (uVar18 != 0) {
            for (; uVar18 >> local_f8 == 0; local_f8 = local_f8 - 1) {
            }
          }
          uVar17 = 0;
          if (uVar18 != 0) {
            uVar17 = local_f8;
          }
          uVar16 = uVar16 & uVar16 - 1;
          local_120[0] = uVar17 + iVar15;
          plVar9 = (longlong *)(**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_120);
          cVar8 = (**(code **)(*plVar9 + 0x10))(plVar9,0);
          FVar10 = local_d8;
          param_1 = local_100;
          iVar19 = local_114;
          uVar13 = local_118;
          param_2 = local_110;
          if (cVar8 != '\0') {
            uVar14 = uVar14 & ~(1 << (uVar17 & 0x1f));
            local_e0 = plVar9;
            (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_e0);
            iVar12 = iVar12 + 1;
            FVar10 = local_d8;
            param_1 = local_100;
            iVar19 = local_114;
            uVar13 = local_118;
            param_2 = local_110;
          }
        }
        if (local_130 == iVar19) {
          uVar14 = uVar13 & uVar14;
        }
        local_134 = local_134 + 0x20;
        lVar11 = (longlong)local_130;
        local_130 = local_130 + 1;
        uVar18 = 0xffffffff;
        if (local_130 == iVar19) {
          uVar18 = uVar13;
        }
        *(uint *)((longlong)FVar10 + lVar11 * 4) = uVar14;
      } while (local_130 < local_12c);
    }
    if (param_2 <= iVar12) {
      if (local_a0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_a0.SecondaryData);
      }
      if (local_c0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_c0.SecondaryData);
      }
      FObjectCacheContextScope::~FObjectCacheContextScope(local_138);
      return;
    }
    FVar10 = (ForElementType<unsigned_int>)&local_c0;
    if (local_c0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar10 = local_c0.SecondaryData;
    }
    iVar19 = 0;
    lVar11 = 0;
    if (local_a8 + 0x1f >> 5 != 0) break;
LAB_1475cb9e6:
    iVar15 = -1;
LAB_1475cb9eb:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IncompleteJobIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AsyncCompilationHelpers.cpp"
                       ,0xbf,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
LAB_1475cba11:
    local_108[0] = iVar15;
    plVar9 = (longlong *)(**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_108);
    QueryPerformanceCounter(&local_d0);
    cVar8 = (**(code **)(*plVar9 + 0x10))
                      (plVar9,fVar4 - (float)(((double)local_d0.QuadPart *
                                               FGenericPlatformTime::SecondsPerCycle + dVar5) -
                                             dVar3));
    if (cVar8 == '\0') {
      QueryPerformanceCounter(&local_c8);
      dVar3 = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar5;
    }
  }
LAB_1475cb9d0:
  uVar18 = *(uint *)((longlong)FVar10 + lVar11 * 4);
  if (uVar18 == 0) goto code_r0x0001475cb9dc;
  local_f4 = 0;
  if (uVar18 != 0) {
    for (; (uVar18 >> local_f4 & 1) == 0; local_f4 = local_f4 + 1) {
    }
  }
  iVar15 = 0x20;
  if (uVar18 != 0) {
    iVar15 = local_f4;
  }
  iVar15 = iVar15 + iVar19 * 0x20;
  if ((int)local_a8 <= iVar15) goto LAB_1475cb9e6;
  if (iVar15 == -1) goto LAB_1475cb9eb;
  goto LAB_1475cba11;
code_r0x0001475cb9dc:
  iVar19 = iVar19 + 1;
  lVar11 = lVar11 + 1;
  if ((int)(local_a8 + 0x1f >> 5) <= iVar19) goto LAB_1475cb9e6;
  goto LAB_1475cb9d0;
}

// GetAudioPluginCustomSettingsClass @ 1475d1e80

UClass * __cdecl GetAudioPluginCustomSettingsClass(EAudioPlugin param_1)

{
  IAudioSourceDataOverrideFactory *pIVar1;
  UClass *pUVar2;
  IAudioOcclusionFactory *pIVar3;
  IAudioSpatializationFactory *pIVar4;
  
  if (param_1 == SPATIALIZATION) {
    pIVar4 = AudioPluginUtilities::GetDesiredSpatializationPlugin();
    if (pIVar4 != (IAudioSpatializationFactory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475d1ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar2 = (UClass *)
               (**(code **)((longlong)*pIVar4 + 0x38))(pIVar4,*(code **)((longlong)*pIVar4 + 0x38));
      return pUVar2;
    }
  }
  else {
    if (param_1 == REVERB) {
      pIVar3 = (IAudioOcclusionFactory *)AudioPluginUtilities::GetDesiredReverbPlugin();
    }
    else {
      if (param_1 != OCCLUSION) {
        if (param_1 == MODULATION) {
          return (UClass *)0x0;
        }
        if (param_1 != SOURCEDATAOVERRIDE) {
          return (UClass *)0x0;
        }
        pIVar1 = AudioPluginUtilities::GetDesiredSourceDataOverridePlugin();
        if (pIVar1 == (IAudioSourceDataOverrideFactory *)0x0) {
          return (UClass *)0x0;
        }
                    /* WARNING: Could not recover jumptable at 0x0001475d1eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pUVar2 = (UClass *)
                 (**(code **)((longlong)*pIVar1 + 0x28))
                           (pIVar1,*(code **)((longlong)*pIVar1 + 0x28));
        return pUVar2;
      }
      pIVar3 = AudioPluginUtilities::GetDesiredOcclusionPlugin();
    }
    if (pIVar3 != (IAudioOcclusionFactory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475d1ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar2 = (UClass *)
               (**(code **)((longlong)*pIVar3 + 0x30))(pIVar3,*(code **)((longlong)*pIVar3 + 0x30));
      return pUVar2;
    }
  }
  return (UClass *)0x0;
}

// GetComponentSpaceTransform @ 1475d3380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __cdecl
GetComponentSpaceTransform
          (TTransform<double> *__return_storage_ptr__,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          FReferenceSkeleton *param_3,int param_4)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTransform<double> *pTVar6;
  TTransform<double> *pTVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStackY_f8 [32];
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  lVar8 = (longlong)param_4;
  uVar9 = (uint)~param_4 >> 0x1f;
  uVar4 = 0;
  if (param_4 < param_2->ArrayNum) {
    uVar4 = uVar9;
  }
  if (uVar4 == 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar1)();
      return pTVar6;
    }
  }
  pTVar6 = (TTransform<double> *)((param_2->AllocatorInstance).Data + lVar8 * 0x60);
  uVar4 = 0;
  if (param_4 < param_1->ArrayNum) {
    uVar4 = uVar9;
  }
  if (uVar4 == 0) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TTransform<double> *)(*pcVar1)();
      return pTVar6;
    }
  }
  if ((param_1->AllocatorInstance).Data[lVar8] == (FScriptContainerElement)0x0) {
    iVar5 = FReferenceSkeleton::GetParentIndexInternal(param_3,param_4,&param_3->FinalRefBoneInfo);
    pTVar7 = GetComponentSpaceTransform(&local_b8,param_1,param_2,param_3,iVar5);
    UE::Math::TTransform<double>::Multiply(pTVar6,pTVar6,pTVar7);
    uVar4 = 0;
    if (param_4 < param_1->ArrayNum) {
      uVar4 = uVar9;
    }
    if (uVar4 == 0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar6 = (TTransform<double> *)(*pcVar1)();
        return pTVar6;
      }
    }
    (param_1->AllocatorInstance).Data[lVar8] = (FScriptContainerElement)0x1;
  }
  dVar2 = (pTVar6->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar6->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (pTVar6->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar6->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (pTVar6->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar6->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (pTVar6->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar6->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (pTVar6->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar6->Scale3D).ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (pTVar6->Scale3D).ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar2;
  return __return_storage_ptr__;
}

// IsAudioPluginEnabled @ 1475e1ad0

bool __cdecl IsAudioPluginEnabled(EAudioPlugin param_1)

{
  IAudioModulationFactory *pIVar1;
  IAudioOcclusionFactory *pIVar2;
  IAudioReverbFactory *pIVar3;
  IAudioSpatializationFactory *pIVar4;
  
  if (param_1 == SPATIALIZATION) {
    pIVar4 = AudioPluginUtilities::GetDesiredSpatializationPlugin();
    return pIVar4 != (IAudioSpatializationFactory *)0x0;
  }
  if (param_1 == REVERB) {
    pIVar3 = AudioPluginUtilities::GetDesiredReverbPlugin();
    return pIVar3 != (IAudioReverbFactory *)0x0;
  }
  if (param_1 == OCCLUSION) {
    pIVar2 = AudioPluginUtilities::GetDesiredOcclusionPlugin();
    return pIVar2 != (IAudioOcclusionFactory *)0x0;
  }
  if (param_1 != MODULATION) {
    return false;
  }
  pIVar1 = AudioPluginUtilities::GetDesiredModulationPlugin();
  return pIVar1 != (IAudioModulationFactory *)0x0;
}

// IsKnownChunkId @ 1475e22e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl IsKnownChunkId(uint param_1)

{
  ForAnyElementType FVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar2 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    RequiredChunkIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    RequiredChunkIds.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,2,0,&RequiredChunkIds.AllocatorInstance,2,&RequiredChunkIds.ArrayMax);
    *(undefined8 *)RequiredChunkIds.AllocatorInstance.Data = 0x6174616420746d66;
    atexit(`FWaveModInfo::GetRequiredWaveChunkIds'::__l2::
           _dynamic_atexit_destructor_for__RequiredChunkIds__);
    _Init_thread_footer(&_TSS0);
  }
  for (FVar1.Data = RequiredChunkIds.AllocatorInstance.Data;
      FVar1.Data !=
      RequiredChunkIds.AllocatorInstance.Data + (longlong)RequiredChunkIds.ArrayNum * 4;
      FVar1.Data = FVar1.Data + 4) {
    if (*(uint *)FVar1.Data == param_1) {
      return true;
    }
  }
  if ((*piVar2 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    OptionalChunkIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    OptionalChunkIds.ArrayNum = 0xc;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0xc,0,&OptionalChunkIds.AllocatorInstance,0xc,&OptionalChunkIds.ArrayMax);
    FVar1 = OptionalChunkIds.AllocatorInstance;
    *(undefined8 *)OptionalChunkIds.AllocatorInstance.Data = 0x2065756374636166;
    *(undefined8 *)(FVar1.Data + 8) = 0x5453494c74736c70;
    *(undefined8 *)(FVar1.Data + 0x10) = 0x7478746c6c62616c;
    *(undefined8 *)(FVar1.Data + 0x18) = 0x6c706d7365746f6e;
    *(undefined8 *)(FVar1.Data + 0x20) = 0x6469636174736e69;
    *(undefined8 *)(FVar1.Data + 0x28) = 0x4c4d586974786562;
    atexit(`FWaveModInfo::GetOptionalWaveChunkIds'::__l2::
           _dynamic_atexit_destructor_for__OptionalChunkIds__);
    _Init_thread_footer(&_TSS0);
  }
  FVar1.Data = OptionalChunkIds.AllocatorInstance.Data;
  while( true ) {
    if (FVar1.Data ==
        OptionalChunkIds.AllocatorInstance.Data + (longlong)OptionalChunkIds.ArrayNum * 4) {
      return false;
    }
    if (*(uint *)FVar1.Data == param_1) break;
    FVar1.Data = FVar1.Data + 4;
  }
  return true;
}

// IsSpatializationCVarEnabled @ 1475e2c10

bool __cdecl IsSpatializationCVarEnabled(void)

{
  return AllowAudioSpatializationCVar != 0;
}

// OnDefaultProfileCVarsChanged @ 1475e8360

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl OnDefaultProfileCVarsChanged(IConsoleVariable *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  FStreamingManagerCollection *pFVar7;
  IRenderAssetStreamingManager *pIVar8;
  UClass *pUVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  TObjectIterator<USkeletalMesh> local_58;
  FSkinnedMeshComponentRecreateRenderStateContext local_40;
  
  if (-1 < GSkinWeightProfilesLoadByDefaultMode) {
    if ((GSkinWeightProfilesLoadByDefaultMode & 0xfffffffdU) == 0) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
      if (GSkinWeightProfilesLoadByDefaultMode != 3) {
        return;
      }
    }
    bVar15 = GSkinWeightProfilesLoadByDefaultMode == 3;
    pFVar7 = IStreamingManager::Get_Concurrent();
    if (pFVar7 != (FStreamingManagerCollection *)0x0) {
      pFVar7 = IStreamingManager::Get();
      bVar4 = FStreamingManagerCollection::IsRenderAssetStreamingEnabled(pFVar7,SkeletalMesh);
      if (bVar4) {
        pFVar7 = IStreamingManager::Get();
        pIVar8 = FStreamingManagerCollection::GetRenderAssetStreamingManager(pFVar7);
        (**(code **)(*(longlong *)pIVar8 + 0x20))(pIVar8,0,0);
      }
    }
    local_58.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ObjectArray.ArrayNum = 0;
    local_58.ObjectArray.ArrayMax = 0;
    local_58.Index = 0xffffffff;
    EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar9 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    GetObjectsOfClass(pUVar9,&local_58.ObjectArray,true,RF_ClassDefaultObject,
                      EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<USkeletalMesh>::Advance(&local_58);
      lVar13 = (longlong)local_58.Index;
      if ((local_58.Index < 0) || (local_58.ObjectArray.ArrayNum <= local_58.Index)) break;
      uVar12 = 0;
      if (local_58.Index < local_58.ObjectArray.ArrayNum) {
        uVar12 = (uint)~local_58.Index >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar10 = (longlong *)
                (**(code **)(**(longlong **)
                               (local_58.ObjectArray.AllocatorInstance.Data + lVar13 * 8) + 0x398))
                          ();
      if (plVar10 != (longlong *)0x0) {
        lVar13 = (longlong)local_58.Index;
        uVar12 = 0;
        if (local_58.Index < local_58.ObjectArray.ArrayNum) {
          uVar12 = (uint)~local_58.Index >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FSkinnedMeshComponentRecreateRenderStateContext::
        FSkinnedMeshComponentRecreateRenderStateContext
                  (&local_40,
                   *(USkinnedAsset **)(local_58.ObjectArray.AllocatorInstance.Data + lVar13 * 8),
                   false);
        iVar11 = (int)plVar10[1];
        uVar12 = 0;
        if (0 < iVar11) {
          lVar13 = 0;
          do {
            uVar6 = 0;
            if ((int)uVar12 < iVar11) {
              uVar6 = ~uVar12 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            lVar1 = *(longlong *)(lVar13 + *plVar10);
            if (bVar3) {
              lVar14 = (longlong)local_58.Index;
              uVar6 = 0;
              if (local_58.Index < local_58.ObjectArray.ArrayNum) {
                uVar6 = (uint)~local_58.Index >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FSkinWeightProfilesData::ClearDynamicDefaultSkinWeightProfile
                        ((FSkinWeightProfilesData *)(lVar1 + 0x328),
                         *(USkeletalMesh **)
                          (local_58.ObjectArray.AllocatorInstance.Data + lVar14 * 8),uVar12);
            }
            else if (bVar15) {
              lVar14 = (longlong)local_58.Index;
              uVar6 = 0;
              if (local_58.Index < local_58.ObjectArray.ArrayNum) {
                uVar6 = (uint)~local_58.Index >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FSkinWeightProfilesData::ClearDynamicDefaultSkinWeightProfile
                        ((FSkinWeightProfilesData *)(lVar1 + 0x328),
                         *(USkeletalMesh **)
                          (local_58.ObjectArray.AllocatorInstance.Data + lVar14 * 8),uVar12);
              lVar14 = (longlong)local_58.Index;
              uVar6 = 0;
              if (local_58.Index < local_58.ObjectArray.ArrayNum) {
                uVar6 = (uint)~local_58.Index >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FSkinWeightProfilesData::SetDynamicDefaultSkinWeightProfile
                        ((FSkinWeightProfilesData *)(lVar1 + 0x328),
                         *(USkeletalMesh **)
                          (local_58.ObjectArray.AllocatorInstance.Data + lVar14 * 8),uVar12,false);
            }
            iVar11 = (int)plVar10[1];
            uVar12 = uVar12 + 1;
            lVar13 = lVar13 + 8;
          } while ((int)uVar12 < iVar11);
        }
        FSkinnedMeshComponentRecreateRenderStateContext::
        ~FSkinnedMeshComponentRecreateRenderStateContext(&local_40);
      }
    }
    if (local_58.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.ObjectArray.AllocatorInstance.Data);
    }
  }
  return;
}

// RemoveVirtualBonePrefix @ 1475f4e10

FName __cdecl VirtualBoneNameHelpers::RemoveVirtualBonePrefix(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  int iVar4;
  longlong *in_RDX;
  int iVar5;
  
  iVar5 = VirtualBonePrefix.Data.ArrayNum + -1;
  if (VirtualBonePrefix.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  iVar4 = (int)in_RDX[1] + -1;
  if ((int)in_RDX[1] == 0) {
    iVar4 = 0;
  }
  if ((iVar4 <= iVar5) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InName.Len() > PrefixLength",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                         ,0x65,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
  if (-1 < iVar5) {
    iVar4 = (int)in_RDX[1] + -1;
    if ((int)in_RDX[1] == 0) {
      iVar4 = 0;
    }
    if (iVar5 < iVar4) goto LAB_1475f4ebb;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x113,
                     L"String index out of bounds: Index %i from a string with a length of %i");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
LAB_1475f4ebb:
  ::FName::FName((FName *)param_1,(wchar_t *)(*in_RDX + (longlong)iVar5 * 2));
  return (FName)param_1;
}

// SerializeForLog @ 1475fac50

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __cdecl SerializeForLog(FCbWriter *param_1,FPrimaryAssetRules *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  UEnum *this;
  FName local_res10;
  FString local_f8;
  char *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uchar *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  char *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  char *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TStringView<char8_t> local_78;
  TStringView<char8_t> local_68;
  TStringView<char8_t> local_58;
  TStringView<char8_t> local_48;
  TStringView<char8_t> local_38;
  TStringView<char8_t> local_28;
  TStringView<wchar_t> local_18;
  
  FCbWriter::BeginObject(param_1);
  uStack_e0 = 5;
  local_d8 = "PrimaryAssetRules";
  iStack_d0 = 0x11;
  local_e8 = "$type";
  local_78._12_4_ = uStack_dc;
  local_78.Size = 5;
  local_78.DataPtr = "$type";
  FCbWriter::SetName(param_1,&local_78);
  local_68._12_4_ = uStack_cc;
  local_68.Size = iStack_d0;
  local_68.DataPtr = local_d8;
  FCbWriter::AddString(param_1,&local_68);
  iVar1 = param_2->Priority;
  local_c8 = "Priority";
  uStack_c0 = 8;
  local_58._12_4_ = uStack_bc;
  local_58.Size = 8;
  local_58.DataPtr = "Priority";
  FCbWriter::SetName(param_1,&local_58);
  FCbWriter::AddInteger(param_1,iVar1);
  iVar1 = param_2->ChunkId;
  local_b8 = "ChunkId";
  uStack_b0 = 7;
  local_48._12_4_ = uStack_ac;
  local_48.Size = 7;
  local_48.DataPtr = "ChunkId";
  FCbWriter::SetName(param_1,&local_48);
  FCbWriter::AddInteger(param_1,iVar1);
  bVar3 = param_2->bApplyRecursively;
  local_a8 = "Recursive";
  uStack_a0 = 9;
  local_38._12_4_ = uStack_9c;
  local_38.Size = 9;
  local_38.DataPtr = "Recursive";
  FCbWriter::SetName(param_1,&local_38);
  FCbWriter::AddBool(param_1,bVar3);
  this = Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton;
  if (Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton == (UEnum *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Engine();
    this = GetStaticEnum(Z_Construct_UEnum_Engine_EPrimaryAssetCookRule,(UObject *)pUVar4,
                         L"EPrimaryAssetCookRule");
    Z_Registration_Info_UEnum_EPrimaryAssetCookRule.OuterSingleton = this;
    if (this == (UEnum *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("EnumClass != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0xca4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  UEnum::GetNameByValue(this,(long64)&local_res10);
  FName::ToString(&local_res10,&local_f8);
  local_88 = local_f8.Data.AllocatorInstance.Data;
  uStack_90 = 8;
  iStack_80 = local_f8.Data.ArrayNum + -1;
  if (local_f8.Data.ArrayNum == 0) {
    iStack_80 = 0;
  }
  local_98 = "CookRule";
  local_28._12_4_ = uStack_8c;
  local_28.Size = 8;
  local_28.DataPtr = "CookRule";
  FCbWriter::SetName(param_1,&local_28);
  local_18._12_4_ = uStack_7c;
  local_18.Size = iStack_80;
  local_18.DataPtr = (wchar_t *)local_88;
  FCbWriter::AddString(param_1,&local_18);
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  FCbWriter::EndObject(param_1);
  return;
}

// SerializeReferencePose @ 1475fb000

void __cdecl SerializeReferencePose(FArchive *param_1,FReferencePose *param_2,UObject *param_3)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,param_2);
  TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
            (param_1,&param_2->ReferencePose);
  return;
}

// SerializeWaveFile @ 1475fb050

void __cdecl
SerializeWaveFile(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,uchar *param_2,
                 int param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_res18 [4];
  
  uVar8 = param_3 + 0x2c;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &param_1->ArrayNum;
  piVar2 = &param_1->ArrayMax;
  *piVar1 = 0;
  if (*piVar2 != uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar8,&param_1->AllocatorInstance,0,piVar2);
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,uVar8,&param_1->AllocatorInstance,piVar1,piVar2);
  memset((param_1->AllocatorInstance).Data + iVar5,0,(longlong)(int)uVar8);
  local_res18[0] = 1;
  if ((*piVar1 < 1) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res18[0] = 2;
  *(param_1->AllocatorInstance).Data = (FScriptContainerElement)0x52;
  if ((*piVar1 < 2) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_res18[0] = 3;
  (param_1->AllocatorInstance).Data[1] = (FScriptContainerElement)0x49;
  if ((*piVar1 < 3) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_1->AllocatorInstance).Data[2] = (FScriptContainerElement)0x46;
  local_res18[0] = 4;
  uVar8 = 0;
  if ((*piVar1 < 4) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_1->AllocatorInstance).Data[3] = (FScriptContainerElement)0x46;
  WriteUInt32ToByteArrayLE(param_1,(int *)local_res18,param_3 + 0x24);
  uVar7 = local_res18[0];
  lVar9 = (longlong)(int)local_res18[0];
  uVar10 = local_res18[0] + 1;
  uVar6 = uVar8;
  if ((int)local_res18[0] < *piVar1) {
    uVar6 = ~local_res18[0] >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (local_res18[0] = uVar10,
     bVar4 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_1->AllocatorInstance).Data[lVar9] = (FScriptContainerElement)0x57;
  uVar6 = uVar7 + 2;
  uVar11 = uVar8;
  if ((int)uVar10 < *piVar1) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (local_res18[0] = uVar6,
     bVar4 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar11 = uVar7 + 3;
  (param_1->AllocatorInstance).Data[(int)uVar10] = (FScriptContainerElement)0x41;
  uVar10 = uVar8;
  if ((int)uVar6 < *piVar1) {
    uVar10 = ~uVar6 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_res18[0] = uVar11,
     bVar4 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar10 = uVar7 + 4;
  (param_1->AllocatorInstance).Data[(int)uVar6] = (FScriptContainerElement)0x56;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_res18[0] = uVar10,
     bVar4 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar12 = uVar7 + 5;
  (param_1->AllocatorInstance).Data[(int)uVar11] = (FScriptContainerElement)0x45;
  uVar6 = 0;
  uVar8 = uVar6;
  if ((int)uVar10 < *piVar1) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (local_res18[0] = uVar12,
     bVar4 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = uVar7 + 6;
  (param_1->AllocatorInstance).Data[(int)uVar10] = (FScriptContainerElement)0x66;
  uVar10 = uVar6;
  if ((int)uVar12 < *piVar1) {
    uVar10 = ~uVar12 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_res18[0] = uVar8,
     bVar4 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar11 = uVar7 + 7;
  (param_1->AllocatorInstance).Data[(int)uVar12] = (FScriptContainerElement)0x6d;
  uVar10 = uVar6;
  if ((int)uVar8 < *piVar1) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_res18[0] = uVar11,
     bVar4 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_1->AllocatorInstance).Data[(int)uVar8] = (FScriptContainerElement)0x74;
  local_res18[0] = uVar7 + 8;
  uVar8 = uVar6;
  if ((int)uVar11 < *piVar1) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_1->AllocatorInstance).Data[(int)uVar11] = (FScriptContainerElement)0x20;
  WriteUInt32ToByteArrayLE(param_1,(int *)local_res18,0x10);
  WriteUInt16ToByteArrayLE(param_1,(int *)local_res18,1);
  WriteUInt16ToByteArrayLE(param_1,(int *)local_res18,(ushort)param_4);
  WriteUInt32ToByteArrayLE(param_1,(int *)local_res18,param_5);
  WriteUInt32ToByteArrayLE(param_1,(int *)local_res18,param_4 * param_5 * 2);
  WriteUInt16ToByteArrayLE(param_1,(int *)local_res18,2);
  WriteUInt16ToByteArrayLE(param_1,(int *)local_res18,0x10);
  uVar8 = local_res18[0];
  lVar9 = (longlong)(int)local_res18[0];
  uVar10 = local_res18[0] + 1;
  uVar7 = uVar6;
  if ((int)local_res18[0] < *piVar1) {
    uVar7 = ~local_res18[0] >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (local_res18[0] = uVar10,
     bVar4 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_1->AllocatorInstance).Data[lVar9] = (FScriptContainerElement)0x64;
  uVar7 = uVar8 + 2;
  uVar11 = uVar6;
  if ((int)uVar10 < *piVar1) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (local_res18[0] = uVar7,
     bVar4 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar11 = uVar8 + 3;
  (param_1->AllocatorInstance).Data[(int)uVar10] = (FScriptContainerElement)0x61;
  uVar10 = uVar6;
  if ((int)uVar7 < *piVar1) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (local_res18[0] = uVar11,
     bVar4 = FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_1->AllocatorInstance).Data[(int)uVar7] = (FScriptContainerElement)0x74;
  local_res18[0] = uVar8 + 4;
  if ((int)uVar11 < *piVar1) {
    uVar6 = ~uVar11 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (param_1->AllocatorInstance).Data[(int)uVar11] = (FScriptContainerElement)0x61;
  WriteUInt32ToByteArrayLE(param_1,(int *)local_res18,param_3);
  lVar9 = (longlong)(int)local_res18[0];
  uVar8 = 0;
  if ((int)local_res18[0] < *piVar1) {
    uVar8 = ~local_res18[0] >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  memcpy((param_1->AllocatorInstance).Data + lVar9,param_2,(longlong)param_3);
  return;
}

// SkipPrefix @ 1475fe3b0

wchar_t * __cdecl SkipPrefix(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = VirtualBoneNameHelpers::VirtualBonePrefix.Data.ArrayNum + -1;
  iVar4 = (param_1->Data).ArrayNum;
  if (VirtualBoneNameHelpers::VirtualBonePrefix.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  iVar5 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  if ((iVar5 <= iVar6) &&
     (bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InName.Len() > PrefixLength",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                         ,0x65,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
  if (-1 < iVar6) {
    iVar5 = (param_1->Data).ArrayNum;
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
    if (iVar6 < iVar4) goto LAB_1475fe453;
  }
  bVar2 = FDebug::CheckVerifyFailedImpl2
                    ("IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                     ,0x113,
                     L"String index out of bounds: Index %i from a string with a length of %i");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pwVar3 = (wchar_t *)(*pcVar1)();
    return pwVar3;
  }
LAB_1475fe453:
  return (wchar_t *)((param_1->Data).AllocatorInstance.Data + (longlong)iVar6 * 2);
}

// WriteUInt16ToByteArrayLE @ 147604400

void __cdecl
WriteUInt16ToByteArrayLE
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,int *param_2,ushort param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  (param_1->AllocatorInstance).Data[(int)uVar1] = SUB21(param_3,0);
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  (param_1->AllocatorInstance).Data[(int)uVar1] = SUB21(param_3 >> 8,0);
  return;
}

// WriteUInt32ToByteArrayLE @ 147604500

void __cdecl
WriteUInt32ToByteArrayLE
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  (param_1->AllocatorInstance).Data[(int)uVar1] = SUB41(param_3,0);
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  (param_1->AllocatorInstance).Data[(int)uVar1] = SUB41(param_3 >> 8,0);
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  (param_1->AllocatorInstance).Data[(int)uVar1] = SUB41(param_3 >> 0x10,0);
  uVar1 = *param_2;
  *param_2 = uVar1 + 1;
  uVar4 = 0;
  if ((int)uVar1 < param_1->ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  (param_1->AllocatorInstance).Data[(int)uVar1] = SUB41(param_3 >> 0x18,0);
  return;
}

// Z_Construct_UClass_AAtmosphericFog_NoRegister @ 1476046b0

UClass * __cdecl Z_Construct_UClass_AAtmosphericFog_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAtmosphericFog.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AtmosphericFog",
               &Z_Registration_Info_UClass_AAtmosphericFog.InnerSingleton,
               AAtmosphericFog::StaticRegisterNativesAAtmosphericFog,0x2c8,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AAtmosphericFog>,InternalVTableHelperCtorCaller<AAtmosphericFog>,
               local_res8,AInfo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAtmosphericFog.InnerSingleton;
}

// Z_Construct_UClass_ASkeletalMeshActor_NoRegister @ 147604770

UClass * __cdecl Z_Construct_UClass_ASkeletalMeshActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshActor",
               &Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton,
               ASkeletalMeshActor::StaticRegisterNativesASkeletalMeshActor,0x340,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ASkeletalMeshActor>,
               InternalVTableHelperCtorCaller<ASkeletalMeshActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASkeletalMeshActor.InnerSingleton;
}

// Z_Construct_UClass_UAssetManager_NoRegister @ 147604830

UClass * __cdecl Z_Construct_UClass_UAssetManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAssetManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AssetManager",
               &Z_Registration_Info_UClass_UAssetManager.InnerSingleton,
               UAssetManager::StaticRegisterNativesUAssetManager,0x528,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAssetManager>,
               InternalVTableHelperCtorCaller<UAssetManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAssetManager.InnerSingleton;
}

// Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister @ 1476048e0

UClass * __cdecl Z_Construct_UClass_UAsyncActionLoadPrimaryAssetBase_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAssetBase",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.InnerSingleton,
               UAsyncActionLoadPrimaryAssetBase::
               StaticRegisterNativesUAsyncActionLoadPrimaryAssetBase,0x78,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAsyncActionLoadPrimaryAssetBase>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetBase>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetBase.InnerSingleton;
}

// Z_Construct_UClass_UMirrorDataTable_NoRegister @ 1476049a0

UClass * __cdecl Z_Construct_UClass_UMirrorDataTable_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMirrorDataTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UDataTable::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MirrorDataTable",
               &Z_Registration_Info_UClass_UMirrorDataTable.InnerSingleton,
               UMirrorDataTable::StaticRegisterNativesUMirrorDataTable,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMirrorDataTable>,
               InternalVTableHelperCtorCaller<UMirrorDataTable>,local_res8,UDataTable::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMirrorDataTable.InnerSingleton;
}

// Z_Construct_UClass_UNodeMappingContainer_NoRegister @ 147604a60

UClass * __cdecl Z_Construct_UClass_UNodeMappingContainer_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNodeMappingContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NodeMappingContainer",
               &Z_Registration_Info_UClass_UNodeMappingContainer.InnerSingleton,
               UNodeMappingContainer::StaticRegisterNativesUNodeMappingContainer,0x168,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UNodeMappingContainer>,
               InternalVTableHelperCtorCaller<UNodeMappingContainer>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNodeMappingContainer.InnerSingleton;
}

// Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister @ 147604b10

UClass * __cdecl Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UNodeMappingProviderInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"NodeMappingProviderInterface",
               &Z_Registration_Info_UClass_UNodeMappingProviderInterface.InnerSingleton,
               UNodeMappingProviderInterface::StaticRegisterNativesUNodeMappingProviderInterface,
               0x28,8,CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UNodeMappingProviderInterface>,
               InternalVTableHelperCtorCaller<UNodeMappingProviderInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNodeMappingProviderInterface.InnerSingleton;
}

// Z_Construct_UClass_UPoseAsset_NoRegister @ 147604b20

UClass * __cdecl Z_Construct_UClass_UPoseAsset_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PoseAsset",&Z_Registration_Info_UClass_UPoseAsset.InnerSingleton,
               UPoseAsset::StaticRegisterNativesUPoseAsset,0x110,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPoseAsset>,InternalVTableHelperCtorCaller<UPoseAsset>,
               local_res8,UAnimationAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseAsset.InnerSingleton;
}

// Z_Construct_UClass_UPreviewCollectionInterface_NoRegister @ 147604be0

UClass * __cdecl Z_Construct_UClass_UPreviewCollectionInterface_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPreviewCollectionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PreviewCollectionInterface",
               &Z_Registration_Info_UClass_UPreviewCollectionInterface.InnerSingleton,
               UPreviewCollectionInterface::StaticRegisterNativesUPreviewCollectionInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPreviewCollectionInterface>,
               InternalVTableHelperCtorCaller<UPreviewCollectionInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPreviewCollectionInterface.InnerSingleton;
}

// Z_Construct_UClass_UPreviewMeshCollection_NoRegister @ 147604ca0

UClass * __cdecl Z_Construct_UClass_UPreviewMeshCollection_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPreviewMeshCollection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PreviewMeshCollection",
               &Z_Registration_Info_UClass_UPreviewMeshCollection.InnerSingleton,
               UPreviewMeshCollection::StaticRegisterNativesUPreviewMeshCollection,0x50,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UPreviewMeshCollection>,
               InternalVTableHelperCtorCaller<UPreviewMeshCollection>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPreviewMeshCollection.InnerSingleton;
}

// Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary_NoRegister @ 147604d60

UClass * __cdecl Z_Construct_UClass_UTransformTrajectoryBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TransformTrajectoryBlueprintLibrary",
               &Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.InnerSingleton,
               UTransformTrajectoryBlueprintLibrary::
               StaticRegisterNativesUTransformTrajectoryBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTransformTrajectoryBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UTransformTrajectoryBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTransformTrajectoryBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UVariableFrameStrippingSettings_NoRegister @ 147604e20

UClass * __cdecl Z_Construct_UClass_UVariableFrameStrippingSettings_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVariableFrameStrippingSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VariableFrameStrippingSettings",
               &Z_Registration_Info_UClass_UVariableFrameStrippingSettings.InnerSingleton,
               UVariableFrameStrippingSettings::StaticRegisterNativesUVariableFrameStrippingSettings
               ,0x30,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVariableFrameStrippingSettings>,
               InternalVTableHelperCtorCaller<UVariableFrameStrippingSettings>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVariableFrameStrippingSettings.InnerSingleton;
}

// Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod @ 147604ed0

UEnum * __cdecl Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod(void)

{
  if (Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.InnerSingleton ==
      (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.InnerSingleton
               ,&Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod_Statics::
                 EnumParams);
  }
  return Z_Registration_Info_UEnum_EPreviewAnimationBlueprintApplicationMethod.InnerSingleton;
}

// Z_Construct_UEnum_Engine_ETimeStretchCurveMapping @ 147604f10

UEnum * __cdecl Z_Construct_UEnum_Engine_ETimeStretchCurveMapping(void)

{
  if (Z_Registration_Info_UEnum_ETimeStretchCurveMapping.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_ETimeStretchCurveMapping.InnerSingleton,
               &Z_Construct_UEnum_Engine_ETimeStretchCurveMapping_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_ETimeStretchCurveMapping.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride @ 147604f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimParentNodeAssetOverride.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAnimParentNodeAssetOverride.InnerSingleton,
               &Z_Construct_UScriptStruct_FAnimParentNodeAssetOverride_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAnimParentNodeAssetOverride.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAnimParentNodeAssetOverride.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAssetCompileData @ 147604fd0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAssetCompileData(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAssetCompileData.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAssetCompileData.InnerSingleton,
               &Z_Construct_UScriptStruct_FAssetCompileData_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAssetCompileData.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAssetCompileData.InnerSingleton;
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

// Z_Construct_UScriptStruct_FAssetManagerSearchRules @ 147605050

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAssetManagerSearchRules(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAssetManagerSearchRules.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAssetManagerSearchRules.InnerSingleton,
               &Z_Construct_UScriptStruct_FAssetManagerSearchRules_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAssetManagerSearchRules.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAssetManagerSearchRules.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBaseAttenuationSettings @ 1476050d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBaseAttenuationSettings(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBaseAttenuationSettings.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBaseAttenuationSettings.InnerSingleton,
               &Z_Construct_UScriptStruct_FBaseAttenuationSettings_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBaseAttenuationSettings.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FBaseAttenuationSettings.InnerSingleton;
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

// Z_Construct_UScriptStruct_FBoneReductionSetting @ 147605150

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FBoneReductionSetting(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FBoneReductionSetting.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FBoneReductionSetting.InnerSingleton,
               &Z_Construct_UScriptStruct_FBoneReductionSetting_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FBoneReductionSetting.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FBoneReductionSetting.InnerSingleton;
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

// Z_Construct_UScriptStruct_FMirrorTableRow @ 1476051d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FMirrorTableRow(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FMirrorTableRow.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FMirrorTableRow.InnerSingleton,
               &Z_Construct_UScriptStruct_FMirrorTableRow_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FMirrorTableRow.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FMirrorTableRow.InnerSingleton;
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

// Z_Construct_UScriptStruct_FNameMapping @ 147605250

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FNameMapping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FNameMapping.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FNameMapping.InnerSingleton,
               &Z_Construct_UScriptStruct_FNameMapping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FNameMapping.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FNameMapping.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPreviewAssetAttachContainer @ 1476052d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPreviewAssetAttachContainer(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPreviewAssetAttachContainer.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPreviewAssetAttachContainer.InnerSingleton,
               &Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPreviewAssetAttachContainer.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FPreviewAssetAttachContainer.InnerSingleton;
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

// Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo @ 147605350

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetTypeInfo.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FPrimaryAssetTypeInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FPrimaryAssetTypeInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FPrimaryAssetTypeInfo.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FPrimaryAssetTypeInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FReferencePose @ 1476053d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FReferencePose(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FReferencePose.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FReferencePose.InnerSingleton,
               &Z_Construct_UScriptStruct_FReferencePose_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FReferencePose.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FReferencePose.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo @ 147605450

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshVertexAttributeInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSkeletalMeshVertexAttributeInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FSkeletalMeshVertexAttributeInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshVertexAttributeInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSkeletalMeshVertexAttributeInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSkeletonToMeshLinkup @ 1476054d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSkeletonToMeshLinkup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSkeletonToMeshLinkup.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSkeletonToMeshLinkup.InnerSingleton,
               &Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSkeletonToMeshLinkup.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FSkeletonToMeshLinkup.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSkinWeightProfileInfo @ 147605550

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSkinWeightProfileInfo(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSkinWeightProfileInfo.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSkinWeightProfileInfo.InnerSingleton,
               &Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSkinWeightProfileInfo.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSkinWeightProfileInfo.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSkinWeightProfileManagerTickFunction @ 1476055d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSkinWeightProfileManagerTickFunction(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSkinWeightProfileManagerTickFunction.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSkinWeightProfileManagerTickFunction.
                InnerSingleton,
               &Z_Construct_UScriptStruct_FSkinWeightProfileManagerTickFunction_Statics::
                StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSkinWeightProfileManagerTickFunction.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSkinWeightProfileManagerTickFunction.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSmartName @ 147605650

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSmartName(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSmartName.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSmartName.InnerSingleton,
               &Z_Construct_UScriptStruct_FSmartName_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSmartName.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSmartName.InnerSingleton;
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

// Z_Construct_UScriptStruct_FSmartNameMapping @ 1476056d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FSmartNameMapping(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FSmartNameMapping.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FSmartNameMapping.InnerSingleton,
               &Z_Construct_UScriptStruct_FSmartNameMapping_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FSmartNameMapping.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FSmartNameMapping.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTimeStretchCurve @ 147605750

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTimeStretchCurve(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTimeStretchCurve.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTimeStretchCurve.InnerSingleton,
               &Z_Construct_UScriptStruct_FTimeStretchCurve_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTimeStretchCurve.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTimeStretchCurve.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTimeStretchCurveInstance @ 1476057d0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTimeStretchCurveInstance(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTimeStretchCurveInstance.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTimeStretchCurveInstance.InnerSingleton,
               &Z_Construct_UScriptStruct_FTimeStretchCurveInstance_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTimeStretchCurveInstance.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTimeStretchCurveInstance.InnerSingleton;
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

// Z_Construct_UScriptStruct_FTrajectorySample @ 147605850

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTrajectorySample(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTrajectorySample.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTrajectorySample.InnerSingleton,
               &Z_Construct_UScriptStruct_FTrajectorySample_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTrajectorySample.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTrajectorySample.InnerSingleton;
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

// AssetSearchRootsVirtualPath'' @ 1503e7580

void __cdecl `dynamic_atexit_destructor_for_'UAssetManager::AssetSearchRootsVirtualPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UAssetManager::AssetSearchRootsVirtualPath.Data.AllocatorInstance.Data;
  if (UAssetManager::AssetSearchRootsVirtualPath.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UAssetManager::AssetSearchRootsVirtualPath.Data.AllocatorInstance.Data !=
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

// DynamicSearchRootsVirtualPath'' @ 1503e75a0

void __cdecl `dynamic_atexit_destructor_for_'UAssetManager::DynamicSearchRootsVirtualPath__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = UAssetManager::DynamicSearchRootsVirtualPath.Data.AllocatorInstance.Data;
  if (UAssetManager::DynamicSearchRootsVirtualPath.Data.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (UAssetManager::DynamicSearchRootsVirtualPath.Data.AllocatorInstance.Data !=
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

// InvalidHandle'' @ 1503e75c0

void __cdecl `dynamic_atexit_destructor_for_'FPrimaryAssetLoadState::InvalidHandle__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FPrimaryAssetLoadState::InvalidHandle.SharedReferenceCount.ReferenceController);
  return;
}

// OnAssetManagerCreatedDelegate'' @ 1503e75e0

void __cdecl `dynamic_atexit_destructor_for_'UAssetManager::OnAssetManagerCreatedDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UAssetManager::OnAssetManagerCreatedDelegate._8_8_,
             UAssetManager::OnAssetManagerCreatedDelegate._16_4_);
  if (UAssetManager::OnAssetManagerCreatedDelegate._8_8_ != 0) {
    FMemory::Free((void *)UAssetManager::OnAssetManagerCreatedDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UAssetManager::OnAssetManagerCreatedDelegate);
  return;
}

// OnCompletedInitialScanDelegate'' @ 1503e7620

void __cdecl `dynamic_atexit_destructor_for_'UAssetManager::OnCompletedInitialScanDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UAssetManager::OnCompletedInitialScanDelegate._8_8_,
             UAssetManager::OnCompletedInitialScanDelegate._16_4_);
  if (UAssetManager::OnCompletedInitialScanDelegate._8_8_ != 0) {
    FMemory::Free((void *)UAssetManager::OnCompletedInitialScanDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UAssetManager::OnCompletedInitialScanDelegate);
  return;
}

// OnPickOverrideSkinWeightProfile'' @ 1503e7660

void __cdecl
`dynamic_atexit_destructor_for_'FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile__(void)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile,
             (FWriteAccessScope *)&local_28);
  if ((FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile._16_4_ != 0) &&
     (FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)
               &FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile.field_0x8,0,0,0x10);
    FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  if (FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile._8_8_ != 0) {
    FMemory::Free((void *)FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &FSkinWeightProfilesData::OnPickOverrideSkinWeightProfile);
  return;
}

// WorldManagers'' @ 1503e7700

void __cdecl `dynamic_atexit_destructor_for_'FSkinWeightProfileManager::WorldManagers__(void)

{
  FSkinWeightProfileManager::WorldManagers._72_4_ = 0;
  if (FSkinWeightProfileManager::WorldManagers._64_8_ != 0) {
    FMemory::Free((void *)FSkinWeightProfileManager::WorldManagers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UWorld_*,FSkinWeightProfileManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UWorld_*,FSkinWeightProfileManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UWorld_*,FSkinWeightProfileManager_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FSkinWeightProfileManager::WorldManagers);
  return;
}

// `dynamic_atexit_destructor_for_'CHandleDelayedLoads'' @ 1503e7740

void __cdecl _dynamic_atexit_destructor_for__CHandleDelayedLoads__(void)

{
  CHandleDelayedLoads._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CHandleDelayedLoads);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowAudioSpatializationCVar'' @ 1503e7760

void __cdecl _dynamic_atexit_destructor_for__CVarAllowAudioSpatializationCVar__(void)

{
  CVarAllowAudioSpatializationCVar._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowAudioSpatializationCVar);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowCPU'' @ 1503e7780

void __cdecl _dynamic_atexit_destructor_for__CVarAllowCPU__(void)

{
  CVarAllowCPU._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarAllowCPU);
  return;
}

// `dynamic_atexit_destructor_for_'CVarAllowIncompatibleSkeletalMeshMerge'' @ 1503e77a0

void __cdecl _dynamic_atexit_destructor_for__CVarAllowIncompatibleSkeletalMeshMerge__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarAllowIncompatibleSkeletalMeshMerge);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBypassPlayWhenSilent'' @ 1503e77c0

void __cdecl _dynamic_atexit_destructor_for__CVarBypassPlayWhenSilent__(void)

{
  CVarBypassPlayWhenSilent._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBypassPlayWhenSilent);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDisableStereoSpread'' @ 1503e77e0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableStereoSpread__(void)

{
  CVarDisableStereoSpread._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableStereoSpread);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpAssetRegistryInfo'' @ 1503e7800

void __cdecl _dynamic_atexit_destructor_for__CVarDumpAssetRegistryInfo__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpAssetRegistryInfo);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpAssetTypeSummary'' @ 1503e7820

void __cdecl _dynamic_atexit_destructor_for__CVarDumpAssetTypeSummary__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpAssetTypeSummary);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpBundlesForAsset'' @ 1503e7840

void __cdecl _dynamic_atexit_destructor_for__CVarDumpBundlesForAsset__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpBundlesForAsset);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpLoadedAssetState'' @ 1503e7860

void __cdecl _dynamic_atexit_destructor_for__CVarDumpLoadedAssetState__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpLoadedAssetState);
  return;
}

// `dynamic_atexit_destructor_for_'CVarDumpReferencersForPackage'' @ 1503e7880

void __cdecl _dynamic_atexit_destructor_for__CVarDumpReferencersForPackage__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDumpReferencersForPackage);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceSkinWeightProfileManagerAsyncTaskOnGT'' @ 1503e78a0

void __cdecl _dynamic_atexit_destructor_for__CVarForceSkinWeightProfileManagerAsyncTaskOnGT__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarForceSkinWeightProfileManagerAsyncTaskOnGT);
  return;
}

// `dynamic_atexit_destructor_for_'CVarLoadPrimaryAssetsWithType'' @ 1503e78c0

void __cdecl _dynamic_atexit_destructor_for__CVarLoadPrimaryAssetsWithType__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarLoadPrimaryAssetsWithType);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMinVolumeThreshold'' @ 1503e78e0

void __cdecl _dynamic_atexit_destructor_for__CVarMinVolumeThreshold__(void)

{
  CVarMinVolumeThreshold._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMinVolumeThreshold);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMotionTrajectoryDebug'' @ 1503e7900

void __cdecl _dynamic_atexit_destructor_for__CVarMotionTrajectoryDebug__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMotionTrajectoryDebug);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMotionTrajectoryDebugOptions'' @ 1503e7920

void __cdecl _dynamic_atexit_destructor_for__CVarMotionTrajectoryDebugOptions__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMotionTrajectoryDebugOptions);
  return;
}

// `dynamic_atexit_destructor_for_'CVarMotionTrajectoryDebugStride'' @ 1503e7940

void __cdecl _dynamic_atexit_destructor_for__CVarMotionTrajectoryDebugStride__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarMotionTrajectoryDebugStride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarOcclusionFilterScaleEnabled'' @ 1503e7960

void __cdecl _dynamic_atexit_destructor_for__CVarOcclusionFilterScaleEnabled__(void)

{
  CVarOcclusionFilterScaleEnabled._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarOcclusionFilterScaleEnabled);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkinWeightProfilesAllowedFromLOD'' @ 1503e7980

void __cdecl _dynamic_atexit_destructor_for__CVarSkinWeightProfilesAllowedFromLOD__(void)

{
  CVarSkinWeightProfilesAllowedFromLOD._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkinWeightProfilesAllowedFromLOD);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkinWeightProfilesDefaultLODOverride'' @ 1503e79a0

void __cdecl _dynamic_atexit_destructor_for__CVarSkinWeightProfilesDefaultLODOverride__(void)

{
  CVarSkinWeightProfilesDefaultLODOverride._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkinWeightProfilesDefaultLODOverride);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkinWeightsLoadByDefaultMode'' @ 1503e79c0

void __cdecl _dynamic_atexit_destructor_for__CVarSkinWeightsLoadByDefaultMode__(void)

{
  CVarSkinWeightsLoadByDefaultMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSkinWeightsLoadByDefaultMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipHasPendingInitOrStreamingSkeletalMesh'' @ 1503e79e0

void __cdecl _dynamic_atexit_destructor_for__CVarSkipHasPendingInitOrStreamingSkeletalMesh__(void)

{
  CVarSkipHasPendingInitOrStreamingSkeletalMesh._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkipHasPendingInitOrStreamingSkeletalMesh);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSkipLODWithoutDataOrStreamingRequest'' @ 1503e7a00

void __cdecl _dynamic_atexit_destructor_for__CVarSkipLODWithoutDataOrStreamingRequest__(void)

{
  CVarSkipLODWithoutDataOrStreamingRequest._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSkipLODWithoutDataOrStreamingRequest);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUnloadPrimaryAssetsWithType'' @ 1503e7a20

void __cdecl _dynamic_atexit_destructor_for__CVarUnloadPrimaryAssetsWithType__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUnloadPrimaryAssetsWithType);
  return;
}

// `dynamic_atexit_destructor_for_'DefaultMapping'' @ 1503e7a40

void __cdecl UE::Anim::_dynamic_atexit_destructor_for__DefaultMapping__(void)

{
  if (DefaultMapping.RetargetingTable.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(DefaultMapping.RetargetingTable.AllocatorInstance.Data);
  }
  if (DefaultMapping.TargetToSourceBoneIndexes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(DefaultMapping.TargetToSourceBoneIndexes.AllocatorInstance.Data);
  }
  if (DefaultMapping.SourceToTargetBoneIndexes.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(DefaultMapping.SourceToTargetBoneIndexes.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 1503e7a90

void __cdecl
`FSkeletonRemapping::GetSourceToTargetCurveMapping'::__l2::_dynamic_atexit_destructor_for__Dummy__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Dummy.AllocatorInstance.Data;
  if (::Dummy.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Dummy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'EmptyTransformArray'' @ 1503e7ab0

void __cdecl
`UPoseAsset::GetRetargetTransforms'::__l12::_dynamic_atexit_destructor_for__EmptyTransformArray__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptyTransformArray.AllocatorInstance.Data;
  if (EmptyTransformArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptyTransformArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'IssuedWarnings'' @ 1503e7ad0

void __cdecl
`UAssetManager::ScanPathsForPrimaryAssets'::__l88::_dynamic_atexit_destructor_for__IssuedWarnings__
          (void)

{
  IssuedWarnings.HashSize = 0;
  if (IssuedWarnings.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)IssuedWarnings.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetType,FPrimaryAssetType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimaryAssetType,FPrimaryAssetType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&IssuedWarnings.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'LogAssetManager'' @ 1503e7b10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAssetManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAssetManager);
  return;
}

// `dynamic_atexit_destructor_for_'LogAsyncCompilation'' @ 1503e7b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAsyncCompilation__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAsyncCompilation);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudio'' @ 1503e7b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudio__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudio);
  return;
}

// `dynamic_atexit_destructor_for_'LogAudioDebug'' @ 1503e7b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAudioDebug__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAudioDebug);
  return;
}

// `dynamic_atexit_destructor_for_'LogSkinWeightProfileManager'' @ 1503e7b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSkinWeightProfileManager__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSkinWeightProfileManager);
  return;
}

// `dynamic_atexit_destructor_for_'OptionalChunkIds'' @ 1503e7bb0

void __cdecl
`FWaveModInfo::GetOptionalWaveChunkIds'::__l2::_dynamic_atexit_destructor_for__OptionalChunkIds__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = OptionalChunkIds.AllocatorInstance.Data;
  if (OptionalChunkIds.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (OptionalChunkIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'RequiredChunkIds'' @ 1503e7bd0

void __cdecl
`FWaveModInfo::GetRequiredWaveChunkIds'::__l2::_dynamic_atexit_destructor_for__RequiredChunkIds__
          (void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RequiredChunkIds.AllocatorInstance.Data;
  if (RequiredChunkIds.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RequiredChunkIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'Singleton'' @ 1503e7bf0

void __cdecl `FAssetCompilingManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             ::Singleton.PackageScopeEvent._8_8_,::Singleton.PackageScopeEvent._16_4_);
  if (::Singleton.PackageScopeEvent._8_8_ != 0) {
    FMemory::Free((void *)::Singleton.PackageScopeEvent._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&::Singleton.PackageScopeEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             ::Singleton.AssetPostCompileEvent._40_8_,::Singleton.AssetPostCompileEvent._48_4_);
  if (::Singleton.AssetPostCompileEvent._40_8_ != 0) {
    FMemory::Free((void *)::Singleton.AssetPostCompileEvent._40_8_);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&::Singleton.AssetPostCompileEvent);
  if (::Singleton.AssetCompilingManagersWithValidDependencies.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.AssetCompilingManagersWithValidDependencies.AllocatorInstance.Data);
  }
  if (::Singleton.AssetCompilingManagers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(::Singleton.AssetCompilingManagers.AllocatorInstance.Data);
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'SmartNameRWLock'' @ 1503e7c90

void __cdecl `anonymous_namespace'::_dynamic_atexit_destructor_for__SmartNameRWLock__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&SmartNameRWLock);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001503e7cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&SmartNameRWLock);
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

// `dynamic_atexit_destructor_for_'VirtualBonePrefix'' @ 1503e7cf0

void __cdecl VirtualBoneNameHelpers::_dynamic_atexit_destructor_for__VirtualBonePrefix__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = VirtualBonePrefix.Data.AllocatorInstance.Data;
  if (VirtualBonePrefix.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (VirtualBonePrefix.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

