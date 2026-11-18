// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 88

// GetBoneTranslationRetargetingMode @ 1474004a0

Type __thiscall
USkeleton::GetBoneTranslationRetargetingMode(USkeleton *this,int param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  Type TVar4;
  
  if (((!param_2) && (-1 < param_1)) && (param_1 < (this->BoneTree).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->BoneTree).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4 = (*pcVar1)();
        return TVar4;
      }
    }
    return (Type)(byte)(this->BoneTree).AllocatorInstance.Data[param_1];
  }
  return Animation;
}

// StaticClass @ 1475891e0

UClass * __cdecl USkeleton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeleton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Skeleton",&Z_Registration_Info_UClass_USkeleton.InnerSingleton,
               StaticRegisterNativesUSkeleton,0x388,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeleton>,InternalVTableHelperCtorCaller<USkeleton>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeleton.InnerSingleton;
}

// USkeleton @ 1475a7ec0

USkeleton * __thiscall USkeleton::USkeleton(USkeleton *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BoneTree).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->BoneTree).ArrayNum = 0;
  (this->BoneTree).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  FReferenceSkeleton::FReferenceSkeleton(&this->ReferenceSkeleton,true);
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  this_00 = &(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x18;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->VirtualBoneGuid).A = 0;
  (this->VirtualBoneGuid).B = 0;
  (this->VirtualBoneGuid).C = 0;
  (this->VirtualBoneGuid).D = 0;
  (this->VirtualBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualBones).ArrayNum = 0;
  (this->VirtualBones).ArrayMax = 0;
  (this->CompatibleSkeletons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompatibleSkeletons).ArrayNum = 0;
  (this->CompatibleSkeletons).ArrayMax = 0;
  this->bUseRetargetModesFromCompatibleSkeleton = false;
  (this->Sockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sockets).ArrayNum = 0;
  (this->Sockets).ArrayMax = 0;
  *(undefined8 *)&this->AnimRetargetSources = 0;
  *(undefined8 *)&(this->AnimRetargetSources).field_0x8 = 0;
  *(undefined8 *)&(this->AnimRetargetSources).field_0x20 = 0;
  *(undefined4 *)&(this->AnimRetargetSources).field_0x28 = 0;
  *(undefined4 *)&(this->AnimRetargetSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimRetargetSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimRetargetSources).field_0x34 = 0;
  *(undefined8 *)&(this->AnimRetargetSources).field_0x40 = 0;
  *(undefined4 *)&(this->AnimRetargetSources).field_0x48 = 0;
  *(undefined8 *)&(this->SmartNames_DEPRECATED).NameMappings = 0;
  *(undefined8 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x8 = 0;
  *(undefined8 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x20 = 0;
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x28 = 0;
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x2c = 0x80;
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x34 = 0;
  *(undefined8 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x40 = 0;
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x48 = 0;
  (this->ExistingMarkerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExistingMarkerNames).ArrayNum = 0;
  (this->ExistingMarkerNames).ArrayMax = 0;
  (this->BlendProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendProfiles).ArrayNum = 0;
  (this->BlendProfiles).ArrayMax = 0;
  (this->SlotGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotGroups).ArrayNum = 0;
  (this->SlotGroups).ArrayMax = 0;
  *(undefined8 *)&this->SlotToGroupNameMap = 0;
  *(undefined8 *)&(this->SlotToGroupNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotToGroupNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotToGroupNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x48 = 0;
  *(undefined8 *)&this->OnRetargetSourceChanged = 0;
  *(undefined8 *)&(this->OnRetargetSourceChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnRetargetSourceChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnRetargetSourceChanged).field_0x18 = 2;
  (this->SkinnedAssetLinkupCacheLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->SkinnedAssetLinkupCache = 0;
  *(undefined8 *)&(this->SkinnedAssetLinkupCache).field_0x8 = 0;
  *(undefined8 *)&(this->SkinnedAssetLinkupCache).field_0x20 = 0;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x28 = 0;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x34 = 0;
  *(undefined8 *)&(this->SkinnedAssetLinkupCache).field_0x40 = 0;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x48 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  return this;
}

// USkeleton @ 1475a8100

USkeleton * __thiscall USkeleton::USkeleton(USkeleton *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  USkeleton *local_res8;
  undefined1 local_38 [24];
  FUtf8String local_20;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BoneTree).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  (this->BoneTree).ArrayNum = 0;
  (this->BoneTree).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  FReferenceSkeleton::FReferenceSkeleton(&this->ReferenceSkeleton,true);
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  this_00 = &(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x18;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  (this->VirtualBoneGuid).A = 0;
  (this->VirtualBoneGuid).B = 0;
  (this->VirtualBoneGuid).C = 0;
  (this->VirtualBoneGuid).D = 0;
  (this->VirtualBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VirtualBones).ArrayNum = 0;
  (this->VirtualBones).ArrayMax = 0;
  (this->CompatibleSkeletons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompatibleSkeletons).ArrayNum = 0;
  (this->CompatibleSkeletons).ArrayMax = 0;
  this->bUseRetargetModesFromCompatibleSkeleton = false;
  (this->Sockets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sockets).ArrayNum = 0;
  (this->Sockets).ArrayMax = 0;
  *(undefined8 *)&this->AnimRetargetSources = 0;
  *(undefined8 *)&(this->AnimRetargetSources).field_0x8 = 0;
  *(undefined8 *)&(this->AnimRetargetSources).field_0x20 = 0;
  *(undefined4 *)&(this->AnimRetargetSources).field_0x28 = 0;
  *(undefined4 *)&(this->AnimRetargetSources).field_0x2c = 0x80;
  *(undefined4 *)&(this->AnimRetargetSources).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AnimRetargetSources).field_0x34 = 0;
  *(undefined8 *)&(this->AnimRetargetSources).field_0x40 = 0;
  *(undefined4 *)&(this->AnimRetargetSources).field_0x48 = 0;
  *(undefined8 *)&(this->SmartNames_DEPRECATED).NameMappings = 0;
  *(undefined8 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x8 = 0;
  *(undefined8 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x20 = 0;
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x28 = 0;
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x2c = 0x80;
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x34 = 0;
  *(undefined8 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x40 = 0;
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x48 = 0;
  (this->ExistingMarkerNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExistingMarkerNames).ArrayNum = 0;
  (this->ExistingMarkerNames).ArrayMax = 0;
  (this->BlendProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendProfiles).ArrayNum = 0;
  (this->BlendProfiles).ArrayMax = 0;
  (this->SlotGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SlotGroups).ArrayNum = 0;
  (this->SlotGroups).ArrayMax = 0;
  *(undefined8 *)&this->SlotToGroupNameMap = 0;
  *(undefined8 *)&(this->SlotToGroupNameMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotToGroupNameMap).field_0x20 = 0;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotToGroupNameMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x48 = 0;
  *(undefined8 *)&this->OnRetargetSourceChanged = 0;
  *(undefined8 *)&(this->OnRetargetSourceChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnRetargetSourceChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnRetargetSourceChanged).field_0x18 = 2;
  (this->SkinnedAssetLinkupCacheLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->SkinnedAssetLinkupCache = 0;
  *(undefined8 *)&(this->SkinnedAssetLinkupCache).field_0x8 = 0;
  *(undefined8 *)&(this->SkinnedAssetLinkupCache).field_0x20 = 0;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x28 = 0;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x34 = 0;
  *(undefined8 *)&(this->SkinnedAssetLinkupCache).field_0x40 = 0;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x48 = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->AssetUserData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetUserData).ArrayNum = 0;
  (this->AssetUserData).ArrayMax = 0;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_38._0_8_ = 0;
  local_38._16_8_ = 0;
  local_38._8_8_ = 0;
  FUtf8String::Reset(&local_20,0);
  local_res8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res8);
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr = local_38._0_8_;
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8 = local_38._8_8_;
  *(undefined8 *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x10 = local_38._16_8_;
  if ((FUtf8String *)this_00 != &local_20) {
    if (*(void **)this_00 != (void *)0x0) {
      FMemory::Free(*(void **)this_00);
    }
    *(FScriptContainerElement **)this_00 = local_20.Data.AllocatorInstance.Data;
    *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x20 = local_20.Data.ArrayNum;
    *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x24 = local_20.Data.ArrayMax;
    local_20.Data.ArrayNum = 0;
    local_20.Data.ArrayMax = 0;
    local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  if ((this->_padding_ & 0x10) != 0) {
    TMulticastDelegateRegistration<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy>
    ::AddStatic<>(&FCoreUObjectDelegates::OnPackageReloaded,
                  (_func___cdecl_void_EPackageReloadPhase_FPackageReloadedEvent_ptr *)&local_res8);
  }
  return this;
}

// ~USkeleton @ 1475aacb0

void __thiscall USkeleton::~USkeleton(USkeleton *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_PreviewMeshProvider__;
  pFVar1 = (this->AssetUserData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SkinnedAssetLinkupCache).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SkinnedAssetLinkupCache);
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->SkinnedAssetLinkupCacheLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->SkinnedAssetLinkupCacheLock);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRetargetSourceChanged).field_0x8,
             *(int *)&(this->OnRetargetSourceChanged).field_0x10);
  pvVar2 = *(void **)&(this->OnRetargetSourceChanged).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRetargetSourceChanged);
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->SlotToGroupNameMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SlotToGroupNameMap);
  DestructItems<FAnimSlotGroup,int>
            ((FAnimSlotGroup *)(this->SlotGroups).AllocatorInstance.Data,(this->SlotGroups).ArrayNum
            );
  pFVar1 = (this->SlotGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlendProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ExistingMarkerNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->SmartNames_DEPRECATED).NameMappings.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SmartNames_DEPRECATED).NameMappings.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FSmartNameMapping>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SmartNames_DEPRECATED);
  *(undefined4 *)&(this->AnimRetargetSources).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AnimRetargetSources).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FReferencePose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FReferencePose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FReferencePose>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnimRetargetSources);
  pFVar1 = (this->Sockets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSoftObjectPtr<USkeleton>,int>
            ((TSoftObjectPtr<USkeleton> *)(this->CompatibleSkeletons).AllocatorInstance.Data,
             (this->CompatibleSkeletons).ArrayNum);
  pFVar1 = (this->CompatibleSkeletons).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VirtualBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FReferenceSkeleton::~FReferenceSkeleton(&this->ReferenceSkeleton);
  pFVar1 = (this->BoneTree).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInterface_PreviewMeshProvider__6B_;
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AccumulateCurveMetaData @ 1475af4c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
USkeleton::AccumulateCurveMetaData(USkeleton *this,FName param_1,bool param_2,bool param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  UAnimCurveMetaData *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((param_2) || (param_3)) {
    pUVar6 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                       ((IInterface_AssetUserData *)&this->_padding_);
    lVar8 = 0;
    if (pUVar6 == (UAnimCurveMetaData *)0x0) {
      local_c8 = 0;
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = Z_Construct_UClass_UAnimCurveMetaData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar7);
      local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_b8._56_8_ = (UPackage *)0x0;
      local_b8._16_4_ = 0;
      local_b8._20_4_ = 0;
      local_b8._24_4_ = RF_Transactional;
      local_b8._40_8_ = (UObject *)0x0;
      local_b8[0x20] = false;
      local_b8._8_8_ = this;
      pUVar6 = (UAnimCurveMetaData *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar9 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      (**(code **)(this->_padding_ + 0x10))(&this->_padding_,pUVar6);
    }
    (**(code **)(pUVar6->_padding_ + 0x30))(&pUVar6->_padding_,param_1,1);
    pUVar6 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                       ((IInterface_AssetUserData *)&this->_padding_);
    if (((pUVar6 == (UAnimCurveMetaData *)0x0) ||
        (lVar8 = (**(code **)(pUVar6->_padding_ + 0x20))(&pUVar6->_padding_,param_1), lVar8 == 0))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("FoundCurveMetaData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                              ,0x72a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar1 = *(byte *)(lVar8 + 0x11);
    bVar2 = *(byte *)(lVar8 + 0x12);
    bVar5 = bVar1 | param_2;
    bVar10 = bVar2 | param_3;
    *(byte *)(lVar8 + 0x11) = bVar5;
    *(byte *)(lVar8 + 0x12) = bVar10;
    if ((bVar1 != bVar5) || (bVar2 != bVar10)) {
      UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    }
  }
  return;
}

// AddAssetUserData @ 1475b0fa0

void __thiscall USkeleton::AddAssetUserData(USkeleton *this,UAssetUserData *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSoftObjectPtr<USkeleton> *pTVar5;
  UObject *local_res10;
  UAssetUserData *local_18 [2];
  
  if (param_1 != (UAssetUserData *)0x0) {
    local_res10 = *(UObject **)&param_1->field_0x10;
    pcVar2 = *(code **)(this->_padding_ + 0x38);
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res10);
    }
    (*pcVar2)(this,&local_res10);
    pTVar5 = &this->CachedSoftObjectPtr;
    local_18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if (((*(UAssetUserData ***)&pTVar5->SoftObjectPtr <= local_18) &&
        (local_18 <
         *(UAssetUserData ***)&pTVar5->SoftObjectPtr +
         *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0xc)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8;
    puVar1 = &(this->CachedSoftObjectPtr).SoftObjectPtr.field_0xc;
    if (iVar4 == *(int *)puVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pTVar5,(int *)puVar1);
    }
    *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8 = iVar4 + 1;
    *(UAssetUserData **)(*(longlong *)&pTVar5->SoftObjectPtr + (longlong)iVar4 * 8) = local_18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18[0] != (UAssetUserData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18[0]);
    }
  }
  return;
}

// AddCompatibleSkeleton @ 1475b14c0

void __thiscall USkeleton::AddCompatibleSkeleton(USkeleton *this,USkeleton *param_1)

{
  USkeleton *local_res8;
  undefined1 local_38 [24];
  FUtf8String local_20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_38._0_8_ = 0;
  local_38._16_8_ = 0;
  local_38._8_8_ = 0;
  FUtf8String::Reset(&local_20,0);
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res8);
  TArray<TSoftObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TSoftObjectPtr<USkeleton>_>
            (&this->CompatibleSkeletons,(TSoftObjectPtr<USkeleton> *)local_38);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// AddCompatibleSkeletonSoft @ 1475b1570

void __thiscall
USkeleton::AddCompatibleSkeletonSoft(USkeleton *this,TSoftObjectPtr<USkeleton> *param_1)

{
  TArray<TSoftObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TSoftObjectPtr<USkeleton>_const_&>(&this->CompatibleSkeletons,param_1);
  return;
}

// AddCurveMetaData @ 1475b1620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall USkeleton::AddCurveMetaData(USkeleton *this,FName param_1,bool param_2)

{
  undefined1 uVar1;
  FName FVar2;
  UClass *pUVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  FName local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  FVar2 = (FName)IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                           ((IInterface_AssetUserData *)&this->_padding_);
  if (FVar2 == (FName)0x0) {
    local_b8 = FVar2;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar3 = Z_Construct_UClass_UAnimCurveMetaData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar3);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_Transactional;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    local_a8._16_8_ = FVar2;
    FVar2 = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar4 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    (**(code **)(this->_padding_ + 0x10))(&this->_padding_,FVar2);
  }
  uVar1 = (**(code **)(*(longlong *)((longlong)FVar2 + 0x28) + 0x30))
                    ((longlong *)((longlong)FVar2 + 0x28),param_1,param_2);
  return (bool)uVar1;
}

// AddMeshLinkupData @ 1475b1cc0

FSkeletonToMeshLinkup * __thiscall
USkeleton::AddMeshLinkupData(USkeleton *this,USkinnedAsset *param_1)

{
  FPlatformRWLock *SRWLock;
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FSkeletonToMeshLinkup *pFVar4;
  bool bVar5;
  FSkeletonToMeshLinkup *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  TMap<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>_>
  *this_00;
  int iVar12;
  int local_res8 [2];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FSkeletonToMeshLinkup *local_res20;
  USkinnedAsset *local_48;
  FWeakObjectPtr *local_40;
  FSkeletonToMeshLinkup **local_38;
  
  pFVar6 = ::operator_new(0x20);
  local_res20 = (FSkeletonToMeshLinkup *)0x0;
  if (pFVar6 != (FSkeletonToMeshLinkup *)0x0) {
    (pFVar6->SkeletonToMeshTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->SkeletonToMeshTable).ArrayNum = 0;
    (pFVar6->SkeletonToMeshTable).ArrayMax = 0;
    (pFVar6->MeshToSkeletonTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->MeshToSkeletonTable).ArrayNum = 0;
    (pFVar6->MeshToSkeletonTable).ArrayMax = 0;
    local_res20 = pFVar6;
  }
  BuildLinkupData(this,param_1,local_res20);
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  uVar7 = 0;
  uVar8 = uVar7;
  if (param_1 != (USkinnedAsset *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_48 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_48);
    uVar7 = local_res10.ObjectIndex;
    local_res18 = local_res10;
    uVar8 = local_res10.ObjectSerialNumber;
  }
  SRWLock = &this->SkinnedAssetLinkupCacheLock;
  uVar9 = uVar7 - uVar8 ^ uVar8 >> 0xd;
  uVar7 = (-0x61c88647 - uVar9) - uVar8 ^ uVar9 << 8;
  uVar11 = (uVar8 - uVar7) - uVar9 ^ uVar7 >> 0xd;
  uVar9 = (uVar9 - uVar11) - uVar7 ^ uVar11 >> 0xc;
  uVar8 = (uVar7 - uVar9) - uVar11 ^ uVar9 << 0x10;
  uVar11 = (uVar11 - uVar8) - uVar9 ^ uVar8 >> 5;
  uVar7 = (uVar9 - uVar11) - uVar8 ^ uVar11 >> 3;
  uVar8 = (uVar8 - uVar7) - uVar11 ^ uVar7 << 10;
  uVar8 = (uVar11 - uVar8) - uVar7 ^ uVar8 >> 0xf;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FSkeletonToMeshLinkup *)(*pcVar3)();
    return pFVar6;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00 = &this->SkinnedAssetLinkupCache;
  if (*(int *)&(this->SkinnedAssetLinkupCache).field_0x8 !=
      *(int *)&(this->SkinnedAssetLinkupCache).field_0x34) {
    puVar10 = *(undefined1 **)&(this->SkinnedAssetLinkupCache).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->SkinnedAssetLinkupCache).field_0x38;
    }
    iVar12 = *(int *)(puVar10 +
                     (ulonglong)(*(int *)&(this->SkinnedAssetLinkupCache).field_0x48 - 1U & uVar8) *
                     4);
    if (iVar12 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x18;
        if ((*(int *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar12 * 0x18) ==
             local_res18.ObjectIndex) && (*(int *)(lVar1 + 4) == local_res18.ObjectSerialNumber)) {
          if (iVar12 != -1) {
            pFVar6 = (FSkeletonToMeshLinkup *)(lVar1 + 8);
            if (lVar1 == 0) {
              pFVar6 = (FSkeletonToMeshLinkup *)0x0;
            }
            if (pFVar6 != (FSkeletonToMeshLinkup *)0x0) {
              pFVar6 = (FSkeletonToMeshLinkup *)(pFVar6->SkeletonToMeshTable).AllocatorInstance.Data
              ;
              goto LAB_1475b1edf;
            }
          }
          break;
        }
        iVar12 = *(int *)(lVar1 + 0x10);
      } while (iVar12 != -1);
    }
  }
  local_40 = &local_res18;
  local_38 = &local_res20;
  TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<TObjectKey<USkinnedAsset>_const_&,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_&&>_>
            ((TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,
             (TPairInitializer<TObjectKey<USkinnedAsset>_const_&,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_&&>
              *)(ulonglong)uVar8,(bool *)&local_40);
  pFVar6 = *(FSkeletonToMeshLinkup **)
            (*(longlong *)&this_00->field_0x0 + 8 + (longlong)local_res8[0] * 0x18);
LAB_1475b1edf:
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  pFVar4 = local_res20;
  if (local_res20 != (FSkeletonToMeshLinkup *)0x0) {
    pFVar2 = (local_res20->MeshToSkeletonTable).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar4->SkeletonToMeshTable).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar4,0x20);
  }
  return pFVar6;
}

// AddNewNamedVirtualBone @ 1475b2160

bool __thiscall
USkeleton::AddNewNamedVirtualBone(USkeleton *this,FName param_1,FName param_2,FName param_3)

{
  int *piVar1;
  TArray<FVirtualBone,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  FString *this_00;
  FGuid *pFVar12;
  FName *pFVar13;
  FName local_res20;
  undefined1 local_58 [8];
  FString local_50;
  FGuid local_40;
  
  local_res20 = param_3;
  this_00 = ::FName::ToString(&local_res20,&local_50);
  iVar11 = VirtualBoneNameHelpers::VirtualBonePrefix.Data.ArrayNum + -1;
  FVar5 = VirtualBoneNameHelpers::VirtualBonePrefix.Data.AllocatorInstance;
  if (VirtualBoneNameHelpers::VirtualBonePrefix.Data.ArrayNum == 0) {
    iVar11 = 0;
    FVar5.Data = (FScriptContainerElement *)L"";
  }
  bVar9 = ::FString::StartsWith(this_00,(wchar_t *)FVar5.Data,iVar11,IgnoreCase);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if (bVar9) {
    pTVar2 = &this->VirtualBones;
    iVar11 = (this->VirtualBones).ArrayNum;
    pFVar13 = (FName *)(pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar13 + (longlong)iVar11 * 3;
    while( true ) {
      if ((this->VirtualBones).ArrayNum != iVar11) {
        local_58[0] = 0;
        `TCheckedPointerIterator<FVirtualBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_58);
      }
      if (pFVar13 == pFVar3) {
        iVar11 = (this->VirtualBones).ArrayNum;
        piVar1 = &(this->VirtualBones).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x418,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->VirtualBones).ArrayNum = iVar11 + 1;
        pFVar3 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 0x18);
        pFVar3[2] = local_res20;
        *pFVar3 = param_1;
        pFVar3[1] = param_2;
        pFVar12 = FGuid::NewGuid(&local_40);
        uVar6 = pFVar12->B;
        uVar7 = pFVar12->C;
        uVar8 = pFVar12->D;
        (this->VirtualBoneGuid).A = pFVar12->A;
        (this->VirtualBoneGuid).B = uVar6;
        (this->VirtualBoneGuid).C = uVar7;
        (this->VirtualBoneGuid).D = uVar8;
        if (((((this->VirtualBoneGuid).D == 0 && (this->VirtualBoneGuid).C == 0) &&
             (this->VirtualBoneGuid).B == 0) && (this->VirtualBoneGuid).A == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("VirtualBoneGuid.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                               ,0x6fc,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        HandleVirtualBoneChanges(this);
        return true;
      }
      if (((*pFVar13 == param_1) && (pFVar13[1] == param_2)) || (pFVar13[2] == local_res20)) break;
      pFVar13 = pFVar13 + 3;
    }
  }
  return false;
}

// AddNewVirtualBone @ 1475b2320

bool __thiscall USkeleton::AddNewVirtualBone(USkeleton *this,FName param_1,FName param_2)

{
  bool bVar1;
  FName local_res20;
  
  bVar1 = AddNewVirtualBone(this,param_1,param_2,&local_res20);
  return bVar1;
}

// AddNewVirtualBone @ 1475b2340

bool __thiscall
USkeleton::AddNewVirtualBone(USkeleton *this,FName param_1,FName param_2,FName *param_3)

{
  int *piVar1;
  TArray<FVirtualBone,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  FString *pFVar9;
  FString *pFVar10;
  FName *pFVar11;
  FGuid *pFVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  FName *pFVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FName local_b8;
  FName FStack_b0;
  FName local_a8;
  FString local_a0;
  FString local_90;
  FString local_80;
  FName local_70;
  FString local_68;
  FString local_58;
  FGuid local_48;
  
  pTVar2 = &this->VirtualBones;
  iVar8 = (this->VirtualBones).ArrayNum;
  pFVar15 = (FName *)(pTVar2->AllocatorInstance).Data;
  pFVar11 = pFVar15 + (longlong)iVar8 * 3;
  while( true ) {
    if ((this->VirtualBones).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVirtualBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar15 == pFVar11) break;
    if ((*pFVar15 == param_1) && (pFVar15[1] == param_2)) {
      return false;
    }
    pFVar15 = pFVar15 + 3;
  }
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_b8 = param_1;
  FStack_b0 = param_2;
  pFVar9 = ::FName::ToString(&FStack_b0,&local_58);
  pFVar10 = ::FName::ToString(&local_b8,&local_68);
  ::FString::ConcatFC(&local_80,pFVar10,L"_");
  ::FString::ConcatFF(&local_90,&local_80,pFVar9);
  ::FString::ConcatFF(&local_a0,&VirtualBoneNameHelpers::VirtualBonePrefix,&local_90);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar14.Data = local_a0.Data.AllocatorInstance.Data;
  }
  pFVar11 = ::FName::FName(&local_70,(wchar_t *)FVar14.Data);
  local_a8 = *pFVar11;
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  pFVar11 = (FName *)(pTVar2->AllocatorInstance).Data;
  if (((pFVar11 <= &local_b8) && (&local_b8 < pFVar11 + (longlong)(this->VirtualBones).ArrayMax * 3)
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  iVar8 = (this->VirtualBones).ArrayNum;
  piVar1 = &(this->VirtualBones).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x418,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->VirtualBones).ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  pFVar11 = (FName *)(pFVar3 + (longlong)iVar8 * 0x18);
  *pFVar11 = local_b8;
  pFVar11[1] = FStack_b0;
  *(FName *)(pFVar3 + (longlong)iVar8 * 0x18 + 0x10) = local_a8;
  iVar8 = (this->VirtualBones).ArrayNum;
  uVar13 = iVar8 - 1;
  uVar16 = 0;
  if ((int)uVar13 < iVar8) {
    uVar16 = ~uVar13 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  *param_3 = *(FName *)((pTVar2->AllocatorInstance).Data +
                       (longlong)(this->VirtualBones).ArrayNum * 0x18 + -8);
  pFVar12 = FGuid::NewGuid(&local_48);
  uVar16 = pFVar12->B;
  uVar13 = pFVar12->C;
  uVar5 = pFVar12->D;
  (this->VirtualBoneGuid).A = pFVar12->A;
  (this->VirtualBoneGuid).B = uVar16;
  (this->VirtualBoneGuid).C = uVar13;
  (this->VirtualBoneGuid).D = uVar5;
  if (((((this->VirtualBoneGuid).D == 0 && (this->VirtualBoneGuid).C == 0) &&
       (this->VirtualBoneGuid).B == 0) && (this->VirtualBoneGuid).A == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("VirtualBoneGuid.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                         ,0x6fc,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    uVar7 = (*pcVar4)();
    return (bool)uVar7;
  }
  HandleVirtualBoneChanges(this);
  return true;
}

// AddSlotGroupName @ 1475b2a20

bool __thiscall USkeleton::AddSlotGroupName(USkeleton *this,FName *param_1)

{
  TArray<FAnimSlotGroup,TSizedDefaultAllocator<32>_> *this_00;
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FName *pFVar7;
  uint uVar8;
  
  this_00 = &this->SlotGroups;
  pFVar7 = (FName *)(this_00->AllocatorInstance).Data;
  pFVar1 = pFVar7 + (longlong)(this->SlotGroups).ArrayNum * 3;
  if (pFVar7 != pFVar1) {
    do {
      if (*pFVar7 == *param_1) {
        return false;
      }
      pFVar7 = pFVar7 + 3;
    } while (pFVar7 != pFVar1);
  }
  TArray<FAnimSlotGroup,TSizedDefaultAllocator<32>_>::AddZeroed(this_00,1);
  iVar2 = (this->SlotGroups).ArrayNum;
  uVar8 = iVar2 - 1;
  uVar6 = 0;
  if ((int)uVar8 < iVar2) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  *(FName *)((this_00->AllocatorInstance).Data +
            (longlong)(this->SlotGroups).ArrayNum * 0x18 + -0x18) = *param_1;
  return true;
}

// BeginDestroy @ 1475b5550

void __thiscall USkeleton::BeginDestroy(USkeleton *this)

{
  UObject::BeginDestroy((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::OnPackageReloaded,this);
    return;
  }
  return;
}

// BuildLinkupData @ 1475b5d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USkeleton::BuildLinkupData(USkeleton *this,USkinnedAsset *param_1,FSkeletonToMeshLinkup *param_2)

{
  int *piVar1;
  uint uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  TTuple<FName,int> *pTVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  FName local_98;
  FName local_90;
  FName local_88;
  int *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  lVar7 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
  uVar2 = *(uint *)(lVar7 + 0x28);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar9 = &(param_2->MeshToSkeletonTable).ArrayMax;
  piVar1 = &(param_2->MeshToSkeletonTable).ArrayNum;
  *piVar1 = 0;
  local_80 = piVar1;
  if (*piVar9 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,&(param_2->MeshToSkeletonTable).AllocatorInstance,0,piVar9);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar2,&(param_2->MeshToSkeletonTable).AllocatorInstance,piVar1,piVar9);
  uVar14 = 0;
  uVar12 = uVar14;
  uVar16 = uVar14;
  if (0 < (longlong)(int)uVar2) {
    do {
      uVar11 = (uint)uVar14;
      uVar6 = 0;
      if ((int)uVar11 < *(int *)(lVar7 + 0x28)) {
        uVar6 = ~uVar11 >> 0x1f;
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
      iVar15 = -1;
      local_98 = *(FName *)(uVar12 + *(longlong *)(lVar7 + 0x20));
      if (local_98 == (FName)0x0) {
LAB_1475b5e63:
        if (1 < (byte)LogAnimation._0_1_) {
          ::FName::ToString(&local_98,&local_58);
          local_90.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
          local_90.Number = *(uint *)&param_1->field_0x1c;
          ::FName::ToString(&local_90,&local_68);
          if (this == (USkeleton *)0x0) {
            ::FString::FString(&local_78,L"None");
          }
          else {
            local_88 = (FName)this->_padding_;
            ::FName::ToString(&local_88,&local_78);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        pTVar8 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                         *)&(this->ReferenceSkeleton).FinalNameToIndexMap,local_98);
        piVar9 = (int *)&pTVar8->field_0x8;
        if (pTVar8 == (TTuple<FName,int> *)0x0) {
          piVar9 = (int *)0x0;
        }
        if ((piVar9 == (int *)0x0) || (iVar15 = *piVar9, iVar15 == -1)) goto LAB_1475b5e63;
      }
      uVar6 = 0;
      if ((int)uVar11 < *local_80) {
        uVar6 = ~uVar11 >> 0x1f;
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
      uVar14 = (ulonglong)(uVar11 + 1);
      *(int *)((param_2->MeshToSkeletonTable).AllocatorInstance.Data + uVar16 * 4) = iVar15;
      uVar16 = uVar16 + 1;
      uVar12 = uVar12 + 0xc;
    } while ((longlong)uVar16 < (longlong)(int)uVar2);
  }
  uVar12 = 0;
  uVar2 = (this->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar9 = &(param_2->SkeletonToMeshTable).ArrayMax;
  (param_2->SkeletonToMeshTable).ArrayNum = 0;
  piVar1 = &(param_2->SkeletonToMeshTable).ArrayNum;
  if (*piVar9 != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar2,(ForAnyElementType *)param_2,0,piVar9);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar2,(ForAnyElementType *)param_2,piVar1,piVar9);
  uVar16 = uVar12;
  uVar14 = uVar12;
  if (0 < (int)uVar2) {
    do {
      uVar11 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar11 < (this->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
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
      uVar13 = 0xffffffff;
      FVar3 = *(FName *)((this->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data + uVar14)
      ;
      if (FVar3 != (FName)0x0) {
        pTVar8 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                         *)(lVar7 + 0x90),FVar3);
        puVar10 = (undefined4 *)&pTVar8->field_0x8;
        if (pTVar8 == (TTuple<FName,int> *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        if (puVar10 != (undefined4 *)0x0) {
          uVar13 = *puVar10;
        }
      }
      uVar6 = 0;
      if ((int)uVar11 < *piVar1) {
        uVar6 = ~uVar11 >> 0x1f;
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
      uVar12 = (ulonglong)(uVar11 + 1);
      *(undefined4 *)((param_2->SkeletonToMeshTable).AllocatorInstance.Data + uVar16 * 4) = uVar13;
      uVar16 = uVar16 + 1;
      uVar14 = uVar14 + 0xc;
    } while ((longlong)uVar16 < (longlong)(int)uVar2);
  }
  return;
}

// BuildSlotToGroupMap @ 1475b6180

void __thiscall USkeleton::BuildSlotToGroupMap(USkeleton *this,bool param_1)

{
  undefined1 *puVar1;
  TMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_> *this_00;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *this_01
  ;
  FName *pFVar9;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *pTVar10
  ;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  undefined1 *puVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint uVar22;
  FName *pFVar23;
  char local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_108 [4];
  uint local_104;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
  *local_100;
  FName *local_f8;
  TPairInitializer<FName_const_&,FName_const_&> local_f0;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
  *local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined1 *local_d0;
  undefined4 uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  longlong local_80;
  FScriptContainerElement *local_78;
  undefined4 local_54;
  
  this_00 = &this->SlotToGroupNameMap;
  bVar11 = 1 < *(int *)&(this->SlotToGroupNameMap).field_0x48;
  local_res10[0] = param_1;
  local_100 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
               *)this_00;
  if (!bVar11) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                    *)this_00);
  }
  puVar1 = &(this->SlotToGroupNameMap).field_0xc;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x34 = 0;
  iVar4 = *(int *)&(this->SlotToGroupNameMap).field_0x2c;
  *(undefined4 *)&(this->SlotToGroupNameMap).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->SlotToGroupNameMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SlotToGroupNameMap).field_0x10,0);
  }
  if (bVar11) {
    *(undefined4 *)&(this->SlotToGroupNameMap).field_0x48 = 1;
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Rehash((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            *)this_00);
  }
  local_104 = (this->SlotGroups).ArrayNum;
  uVar21 = (ulonglong)(int)local_104;
  pFVar16 = (this->SlotGroups).AllocatorInstance.Data;
  pFVar2 = pFVar16 + uVar21 * 0x18;
  pFVar18 = pFVar16 + 0x10;
  while( true ) {
    if ((this->SlotGroups).ArrayNum != (int)uVar21) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FAnimSlotGroup,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    this_01 = local_100;
    if (pFVar16 == pFVar2) break;
    lVar13 = *(longlong *)(pFVar18 + -8);
    iVar4 = *(int *)pFVar18;
    lVar12 = lVar13 + (longlong)iVar4 * 8;
    while( true ) {
      if (*(int *)pFVar18 != iVar4) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (lVar13 == lVar12) break;
      local_80 = lVar13;
      local_78 = pFVar16;
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,FName_const_&>_>(this_01,&local_f0,(bool *)&local_80);
      lVar13 = lVar13 + 8;
    }
    uVar21 = (ulonglong)local_104;
    pFVar16 = pFVar16 + 0x18;
    pFVar18 = pFVar18 + 0x18;
  }
  if (local_res10[0] != '\0') {
    local_104 = (this->SlotGroups).ArrayNum;
    uVar21 = (ulonglong)(int)local_104;
    pFVar23 = (FName *)(this->SlotGroups).AllocatorInstance.Data;
    local_f0.Value = pFVar23 + uVar21 * 3;
    puVar14 = &pFVar23[2].Number;
    while( true ) {
      pFVar9 = local_f0.Value;
      local_f8 = pFVar23;
      if ((this->SlotGroups).ArrayNum != (int)uVar21) {
        local_res10[0] = '\0';
        `TCheckedPointerIterator<FAnimSlotGroup,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar23 == pFVar9) break;
      uVar15 = (((FName *)(puVar14 + -1))->ComparisonIndex).Value;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      (((FName *)(puVar14 + -1))->ComparisonIndex).Value = 0;
      if (*puVar14 != uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar15,(ForAnyElementType *)(puVar14 + -3),0,(int *)puVar14);
      }
      puVar1 = &(this->SlotToGroupNameMap).field_0x10;
      iStack_d8 = 0;
      iVar4 = *(int *)&(this->SlotToGroupNameMap).field_0x28;
      uStack_d4 = 1;
      local_c0 = 0;
      iStack_c4 = 0;
      if (iVar4 != 0) {
        puVar6 = *(uint **)&(this->SlotToGroupNameMap).field_0x20;
        puVar20 = (uint *)puVar1;
        if (puVar6 != (uint *)0x0) {
          puVar20 = puVar6;
        }
        uVar15 = *puVar20;
        iStack_d8 = 0;
        local_c0 = 0;
        while (uVar15 == 0) {
          lVar12 = (longlong)iStack_d8;
          local_c0 = local_c0 + 0x20;
          iStack_d8 = iStack_d8 + 1;
          iStack_c4 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d8) goto LAB_1475b63df;
          uVar15 = puVar20[lVar12 + 1];
        }
        uStack_d4 = -uVar15 & uVar15;
        uVar21 = (ulonglong)uStack_d4 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_f0.Key._4_4_ = (int)lVar12;
        iStack_c4 = local_c0 + -1 + local_f0.Key._4_4_;
        if (iVar4 < iStack_c4) {
          iStack_c4 = iVar4;
        }
      }
LAB_1475b63df:
      uStack_bc = local_54;
      iStack_b8 = *(int *)&(this->SlotToGroupNameMap).field_0x8 -
                  *(int *)&(this->SlotToGroupNameMap).field_0x34;
      uVar15 = *(uint *)&(this->SlotToGroupNameMap).field_0x28;
      local_e0 = this_01;
      uVar22 = uVar15 & 0xffffffe0;
      TStack_a8._padding_ = CONCAT44(uStack_d4,iStack_d8);
      uStack_c8 = 0xffffffff;
      TStack_a8.CurrentBitIndex = iStack_c4;
      TStack_a8.UnvisitedBitMask = 0xffffffff;
      local_b0 = this_01;
      iVar17 = (int)uVar15 >> 5;
      TStack_a8._28_4_ = local_54;
      TStack_a8.BaseBitIndex = local_c0;
      uStack_88 = CONCAT44(uStack_b4,iStack_b8);
      local_d0 = puVar1;
      TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar23 = local_f8;
      uVar5 = *(uint *)&(this->SlotToGroupNameMap).field_0x28;
      if (uVar15 != uVar5) {
        puVar7 = *(undefined1 **)&(this->SlotToGroupNameMap).field_0x20;
        puVar19 = puVar1;
        if (puVar7 != (undefined1 *)0x0) {
          puVar19 = puVar7;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
        while (uVar15 == 0) {
          lVar12 = (longlong)iVar17;
          uVar22 = uVar22 + 0x20;
          iVar17 = iVar17 + 1;
          uVar15 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_1475b6500;
          uVar15 = *(uint *)(puVar19 + lVar12 * 4 + 4);
        }
        uVar21 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        local_100 = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                     *)CONCAT44(local_100._4_4_,(int)lVar12);
        uVar15 = (int)lVar12 + -1 + uVar22;
        if ((int)uVar5 < (int)uVar15) {
          uVar15 = uVar5;
        }
      }
LAB_1475b6500:
      while( true ) {
        pTVar10 = local_b0;
        if (*(int *)&(local_b0->Elements).field_0x8 - *(int *)&(local_b0->Elements).field_0x34 !=
            (int)uStack_88) {
          local_108[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
        }
        if (((TStack_a8.CurrentBitIndex == uVar15) &&
            (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar10 == this_01)) break;
        puVar3 = (undefined8 *)
                 (*(longlong *)&pTVar10->Elements + (longlong)TStack_a8.CurrentBitIndex * 0x18);
        if (*(FName *)(puVar3 + 1) == *pFVar23) {
          if (((*(undefined8 **)(puVar14 + -3) <= puVar3) &&
              (puVar3 < *(undefined8 **)(puVar14 + -3) + (int)*puVar14)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar22 = (((FName *)(puVar14 + -1))->ComparisonIndex).Value;
          if (uVar22 == *puVar14) {
            uVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,(ForAnyElementType *)(puVar14 + -3),(int *)puVar14);
          }
          (((FName *)(puVar14 + -1))->ComparisonIndex).Value = uVar22 + 1;
          *(undefined8 *)(*(longlong *)(puVar14 + -3) + (longlong)(int)uVar22 * 8) = *puVar3;
        }
        TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
      }
      pFVar23 = pFVar23 + 3;
      uVar21 = (ulonglong)local_104;
      puVar14 = puVar14 + 6;
    }
  }
  return;
}

// ClearCacheData @ 1475b9fa0

void __thiscall USkeleton::ClearCacheData(USkeleton *this)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TMap<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>_>
  *this_00;
  
  SRWLock = &this->SkinnedAssetLinkupCacheLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00 = &this->SkinnedAssetLinkupCache;
  bVar4 = 1 < *(int *)&(this->SkinnedAssetLinkupCache).field_0x48;
  if (!bVar4) {
    TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->SkinnedAssetLinkupCache).field_0x8);
  puVar1 = &(this->SkinnedAssetLinkupCache).field_0xc;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x34 = 0;
  iVar2 = *(int *)&(this->SkinnedAssetLinkupCache).field_0x2c;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SkinnedAssetLinkupCache).field_0x10,0
              );
  }
  if (bVar4) {
    *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x48 = 1;
    TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// ContainsSlotName @ 1475bb540

bool __thiscall USkeleton::ContainsSlotName(USkeleton *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->SlotToGroupNameMap).field_0x8 !=
      *(int *)&(this->SlotToGroupNameMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SlotToGroupNameMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SlotToGroupNameMap).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SlotToGroupNameMap).field_0x48 - 1U &
                              FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->SlotToGroupNameMap + (longlong)iVar3 * 0x18) == FVar1)
        goto LAB_1475bb5bd;
        iVar3 = *(int *)(*(longlong *)&this->SlotToGroupNameMap + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1475bb5bd:
  return iVar3 != -1;
}

// ConvertToFReferenceSkeleton @ 1475bb600

void __thiscall USkeleton::ConvertToFReferenceSkeleton(USkeleton *this)

{
  return;
}

// CreateNewBlendProfile @ 1475bccc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UBlendProfile * __thiscall USkeleton::CreateNewBlendProfile(USkeleton *this,FName *param_1)

{
  int *piVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UBlendProfile *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  TArray<TObjectPtr<UBlendProfile>,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStack_f8 [32];
  UBlendProfile **local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  UBlendProfile *local_a8 [2];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FVar2 = *param_1;
  if (FVar2 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = Z_Construct_UClass_UBlendProfile_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar7);
  local_98._48_8_ = (FObjectInstancingGraph *)0x0;
  local_98._56_8_ = (UPackage *)0x0;
  local_98._24_4_ = RF_Transactional|RF_Public;
  local_98._40_8_ = (UObject *)0x0;
  local_98[0x20] = false;
  local_98._8_8_ = this;
  local_98._16_8_ = FVar2;
  pUVar8 = (UBlendProfile *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar9 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  pTVar11 = &this->BlendProfiles;
  local_a8[0] = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  pFVar3 = (pTVar11->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_a8) &&
     (lVar10 = (longlong)(this->BlendProfiles).ArrayMax,
     (FScriptContainerElement *)local_a8 < pFVar3 + lVar10 * 8)) {
    local_c0 = (longlong)(this->BlendProfiles).ArrayNum;
    local_b8 = 8;
    local_d8 = local_a8;
    local_d0 = pFVar3;
    local_c8 = lVar10;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UBlendProfile *)(*pcVar4)();
      return pUVar8;
    }
  }
  iVar6 = (this->BlendProfiles).ArrayNum;
  piVar1 = &(this->BlendProfiles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar11->AllocatorInstance,piVar1);
  }
  (this->BlendProfiles).ArrayNum = iVar6 + 1;
  *(UBlendProfile **)((pTVar11->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_a8[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8[0] != (UBlendProfile *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_a8[0]);
  }
  return pUVar8;
}

// CreateReferenceSkeletonFromMesh @ 1475bd2a0

bool __thiscall
USkeleton::CreateReferenceSkeletonFromMesh
          (USkeleton *this,USkinnedAsset *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FReferenceSkeleton *pFVar9;
  longlong lVar10;
  FReferenceSkeleton *this_00;
  TTuple<FName,int> *pTVar11;
  int *piVar12;
  uint uVar13;
  size_t _Size;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  bool bVar16;
  FMeshBoneInfo local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId909,"USkeleton::CreateReferenceSkeletonFromMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
               ,0x38d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId909);
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pFVar9 = (FReferenceSkeleton *)(**(code **)(*(longlong *)param_1 + 0x318))(param_1);
  FAnimationRuntime::ExcludeBonesWithNoParents(param_2,pFVar9,&local_48);
  iVar6 = local_48.ArrayNum;
  _Size = (size_t)local_48.ArrayNum;
  pFVar9 = &this->ReferenceSkeleton;
  if (local_48.ArrayNum < 1) {
    bVar4 = false;
  }
  else {
    FReferenceSkeleton::Empty(pFVar9,local_48.ArrayNum);
    piVar12 = &(this->BoneTree).ArrayNum;
    *piVar12 = 0;
    piVar1 = &(this->BoneTree).ArrayMax;
    if ((this->BoneTree).ArrayMax != iVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar6,&(this->BoneTree).AllocatorInstance,0,piVar1);
    }
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar6,&(this->BoneTree).AllocatorInstance,piVar12,piVar1);
    memset((this->BoneTree).AllocatorInstance.Data + iVar6,0,_Size);
    uVar13 = 0;
    if (0 < local_48.ArrayNum) {
      lVar15 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar13 < local_48.ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar14 = local_48.AllocatorInstance.Data + lVar15;
        lVar10 = (**(code **)(*(longlong *)param_1 + 0x318))();
        uVar7 = *(uint *)pFVar14;
        uVar8 = 0;
        if ((int)uVar7 < *(int *)(lVar10 + 0x28)) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        local_58.Name = *(FName *)(*(longlong *)(lVar10 + 0x20) + (longlong)(int)uVar7 * 0xc);
        local_58.ParentIndex =
             *(int *)(*(longlong *)(lVar10 + 0x20) + 8 + (longlong)(int)uVar7 * 0xc);
        if (*(uint *)pFVar14 == 0) {
          local_58.ParentIndex = -1;
          iVar6 = local_58.ParentIndex;
        }
        else {
          this_00 = (FReferenceSkeleton *)(**(code **)(*(longlong *)param_1 + 0x318))(param_1);
          uVar8 = FReferenceSkeleton::GetParentIndexInternal
                            (this_00,*(uint *)pFVar14,&this_00->FinalRefBoneInfo);
          lVar10 = (**(code **)(*(longlong *)param_1 + 0x318))();
          uVar7 = 0;
          if ((int)uVar8 < *(int *)(lVar10 + 0x28)) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          FVar2 = *(FName *)(*(longlong *)(lVar10 + 0x20) + (longlong)(int)uVar8 * 0xc);
          iVar6 = -1;
          if (FVar2 != (FName)0x0) {
            pTVar11 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                              *)&(this->ReferenceSkeleton).RawNameToIndexMap,FVar2);
            piVar12 = (int *)&pTVar11->field_0x8;
            if (pTVar11 == (TTuple<FName,int> *)0x0) {
              piVar12 = (int *)0x0;
            }
            if (piVar12 != (int *)0x0) {
              iVar6 = *piVar12;
            }
          }
        }
        local_58.ParentIndex = iVar6;
        lVar10 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
        uVar7 = *(uint *)pFVar14;
        uVar8 = 0;
        if ((int)uVar7 < *(int *)(lVar10 + 0x38)) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar4 = (this->ReferenceSkeleton).bOnlyOneRootAllowed;
        lVar10 = *(longlong *)(lVar10 + 0x30);
        (this->ReferenceSkeleton).bOnlyOneRootAllowed = true;
        FReferenceSkeleton::Add
                  (pFVar9,&local_58,(TTransform<double> *)((longlong)(int)uVar7 * 0x60 + lVar10));
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 4;
        (this->ReferenceSkeleton).bOnlyOneRootAllowed = bVar4;
      } while ((int)uVar13 < local_48.ArrayNum);
    }
    bVar4 = true;
  }
  FReferenceSkeleton::RebuildRefSkeleton(pFVar9,this,true);
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// DoesParentChainMatch @ 1475c1e50

bool __thiscall USkeleton::DoesParentChainMatch(USkeleton *this,int param_1,USkinnedAsset *param_2)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FReferenceSkeleton *this_00;
  TTuple<FName,int> *pTVar10;
  int *piVar11;
  bool bVar12;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId598,"USkeleton::DoesParentChainMatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
               ,0x256);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId598);
  }
  this_00 = (FReferenceSkeleton *)(**(code **)(*(longlong *)param_2 + 0x318))(param_2);
  if (param_1 == 0) {
    if (((this_00->FinalRefBoneInfo).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar2 = *(longlong *)(this_00->FinalRefBoneInfo).AllocatorInstance.Data;
    if (((this->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    bVar5 = *(longlong *)(this->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data == lVar2;
  }
  else {
    uVar7 = 0;
    if (param_1 < (this->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FVar3 = *(FName *)((this->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data +
                      (longlong)param_1 * 0xc);
    if (FVar3 != (FName)0x0) {
      pTVar10 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)&this_00->FinalNameToIndexMap,FVar3);
      piVar11 = (int *)&pTVar10->field_0x8;
      if (pTVar10 == (TTuple<FName,int> *)0x0) {
        piVar11 = (int *)0x0;
      }
      if ((piVar11 != (int *)0x0) && (iVar1 = *piVar11, iVar1 != -1)) {
        uVar7 = FReferenceSkeleton::GetParentIndexInternal
                          (&this->ReferenceSkeleton,param_1,
                           &(this->ReferenceSkeleton).FinalRefBoneInfo);
        for (uVar8 = FReferenceSkeleton::GetParentIndexInternal
                               (this_00,iVar1,&this_00->FinalRefBoneInfo);
            (uVar7 != 0xffffffff && (uVar8 != 0xffffffff));
            uVar8 = FReferenceSkeleton::GetParentIndexInternal
                              (this_00,uVar8,&this_00->FinalRefBoneInfo)) {
          uVar9 = 0;
          if ((int)uVar8 < (this_00->FinalRefBoneInfo).ArrayNum) {
            uVar9 = ~uVar8 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar2 = *(longlong *)
                   ((this_00->FinalRefBoneInfo).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc)
          ;
          uVar9 = 0;
          if ((int)uVar7 < (this->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
            uVar9 = ~uVar7 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          if (*(longlong *)
               ((this->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data +
               (longlong)(int)uVar7 * 0xc) != lVar2) goto LAB_1475c2110;
          uVar7 = FReferenceSkeleton::GetParentIndexInternal
                            (&this->ReferenceSkeleton,uVar7,
                             &(this->ReferenceSkeleton).FinalRefBoneInfo);
        }
        bVar5 = uVar7 == uVar8;
        goto LAB_1475c2117;
      }
    }
LAB_1475c2110:
    bVar5 = false;
  }
LAB_1475c2117:
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar5;
}

// FindAnimSlotGroup @ 1475c9070

FAnimSlotGroup * __thiscall USkeleton::FindAnimSlotGroup(USkeleton *this,FName *param_1)

{
  FAnimSlotGroup *pFVar1;
  FAnimSlotGroup *pFVar2;
  
  pFVar2 = (FAnimSlotGroup *)(this->SlotGroups).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->SlotGroups).ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (pFVar2->GroupName == *param_1) {
        return pFVar2;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return (FAnimSlotGroup *)0x0;
}

// FindAnimSlotGroup @ 1475c90b0

FAnimSlotGroup * __thiscall USkeleton::FindAnimSlotGroup(USkeleton *this,FName *param_1)

{
  FAnimSlotGroup *pFVar1;
  FAnimSlotGroup *pFVar2;
  
  pFVar2 = (FAnimSlotGroup *)(this->SlotGroups).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->SlotGroups).ArrayNum;
  if (pFVar2 != pFVar1) {
    do {
      if (pFVar2->GroupName == *param_1) {
        return pFVar2;
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1);
  }
  return (FAnimSlotGroup *)0x0;
}

// FindOrAddMeshLinkupData @ 1475ca960

FSkeletonToMeshLinkup * __thiscall
USkeleton::FindOrAddMeshLinkupData(USkeleton *this,USkinnedAsset *param_1)

{
  FPlatformRWLock *SRWLock;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSkeletonToMeshLinkup *pFVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  FWeakObjectPtr local_res8;
  USkinnedAsset *local_res10;
  
  SRWLock = &this->SkinnedAssetLinkupCacheLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSkeletonToMeshLinkup *)(*pcVar2)();
    return pFVar4;
  }
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  puVar9 = (undefined8 *)0x0;
  puVar5 = puVar9;
  iVar12 = 0;
  if (param_1 != (USkinnedAsset *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    puVar5 = (undefined8 *)((ulonglong)local_res8 >> 0x20);
    iVar12 = local_res8.ObjectIndex;
  }
  iVar11 = (int)puVar5;
  uVar7 = iVar12 - iVar11 ^ (uint)((ulonglong)puVar5 >> 0xd);
  uVar6 = (-0x61c88647 - uVar7) - iVar11 ^ uVar7 << 8;
  uVar10 = (iVar11 - uVar6) - uVar7 ^ uVar6 >> 0xd;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar7) - uVar10 ^ uVar7 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar7 ^ uVar6 >> 5;
  uVar7 = (uVar7 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar10 ^ uVar7 << 10;
  if (*(int *)&(this->SkinnedAssetLinkupCache).field_0x8 !=
      *(int *)&(this->SkinnedAssetLinkupCache).field_0x34) {
    puVar8 = *(undefined1 **)&(this->SkinnedAssetLinkupCache).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SkinnedAssetLinkupCache).field_0x38;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->SkinnedAssetLinkupCache).field_0x48 - 1U &
                              ((uVar10 - uVar6) - uVar7 ^ uVar6 >> 0xf)) * 4);
    if (iVar1 != -1) {
      do {
        puVar5 = (undefined8 *)
                 (*(longlong *)&this->SkinnedAssetLinkupCache + (longlong)iVar1 * 0x18);
        if ((*(int *)(*(longlong *)&this->SkinnedAssetLinkupCache + (longlong)iVar1 * 0x18) ==
             iVar12) && (*(int *)((longlong)puVar5 + 4) == iVar11)) {
          if (iVar1 != -1) goto LAB_1475caafc;
          break;
        }
        iVar1 = *(int *)(puVar5 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar5 = puVar9;
LAB_1475caafc:
  puVar13 = puVar5 + 1;
  if (puVar5 == (undefined8 *)0x0) {
    puVar13 = puVar9;
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  if (puVar13 == (undefined8 *)0x0) {
    pFVar4 = AddMeshLinkupData(this,param_1);
  }
  else {
    pFVar4 = (FSkeletonToMeshLinkup *)*puVar13;
  }
  return pFVar4;
}

// FindSocket @ 1475cb260

USkeletalMeshSocket * __thiscall USkeleton::FindSocket(USkeleton *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  USkeletalMeshSocket *pUVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_1 == (FName)0x0) {
    return (USkeletalMeshSocket *)0x0;
  }
  uVar5 = 0;
  if (0 < (this->Sockets).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Sockets).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (USkeletalMeshSocket *)(*pcVar1)();
        return pUVar4;
      }
      pUVar4 = *(USkeletalMeshSocket **)((this->Sockets).AllocatorInstance.Data + lVar6);
      if ((pUVar4 != (USkeletalMeshSocket *)0x0) && (pUVar4->SocketName == param_1)) {
        return pUVar4;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Sockets).ArrayNum);
  }
  return (USkeletalMeshSocket *)0x0;
}

// FindSocketAndIndex @ 1475cb330

USkeletalMeshSocket * __thiscall
USkeleton::FindSocketAndIndex(USkeleton *this,FName param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  USkeletalMeshSocket *pUVar4;
  uint uVar5;
  longlong lVar6;
  
  *param_2 = -1;
  if ((param_1 != (FName)0x0) && (uVar5 = 0, 0 < (this->Sockets).ArrayNum)) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->Sockets).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (USkeletalMeshSocket *)(*pcVar1)();
        return pUVar4;
      }
      pUVar4 = *(USkeletalMeshSocket **)((this->Sockets).AllocatorInstance.Data + lVar6);
      if ((pUVar4 != (USkeletalMeshSocket *)0x0) && (pUVar4->SocketName == param_1)) {
        *param_2 = uVar5;
        return pUVar4;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Sockets).ArrayNum);
  }
  return (USkeletalMeshSocket *)0x0;
}

// ForEachCurveMetaData @ 1475cbdb0

void __thiscall
USkeleton::ForEachCurveMetaData
          (USkeleton *this,TFunctionRef<void___cdecl(FName,FCurveMetaData_const_&)> *param_1)

{
  UAnimCurveMetaData *pUVar1;
  
  pUVar1 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                     ((IInterface_AssetUserData *)&this->_padding_);
  if (pUVar1 != (UAnimCurveMetaData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475cbdd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x10))(&pUVar1->_padding_,param_1);
    return;
  }
  return;
}

// GetAnimCurveUidVersion @ 1475ce4a0

ushort __thiscall USkeleton::GetAnimCurveUidVersion(USkeleton *this)

{
  ushort uVar1;
  UAnimCurveMetaData *pUVar2;
  
  pUVar2 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                     ((IInterface_AssetUserData *)&this->_padding_);
  if (pUVar2 != (UAnimCurveMetaData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475ce4be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(pUVar2->_padding_ + 0x48))(&pUVar2->_padding_);
    return uVar1;
  }
  return 0;
}

// GetAssetUserDataArray @ 1475d1bb0

TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> * __thiscall
USkeleton::GetAssetUserDataArray(USkeleton *this)

{
  return (TArray<UAssetUserData_*,TSizedDefaultAllocator<32>_> *)&this->CachedSoftObjectPtr;
}

// GetAssetUserDataOfClass @ 1475d1bc0

UAssetUserData * __thiscall
USkeleton::GetAssetUserDataOfClass(USkeleton *this,TSubclassOf<UAssetUserData> param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  UAssetUserData *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x30))();
  uVar8 = 0;
  iVar9 = (int)plVar4[1];
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar8 < iVar9) {
        uVar3 = ~uVar8 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pUVar5 = (UAssetUserData *)(*pcVar1)();
        return pUVar5;
      }
      pUVar5 = *(UAssetUserData **)(lVar10 + *plVar4);
      if (pUVar5 != (UAssetUserData *)0x0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_1475d1c76;
LAB_1475d1ca4:
          pUVar7 = (UObject *)0x0;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1475d1ca4;
          UE::GC::MarkAsReachable(pUVar7);
LAB_1475d1c76:
          pUVar6 = UAssetUserData::StaticClass();
          if (pUVar6 == (UClass *)0x0) goto LAB_1475d1ca4;
          iVar9 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar9) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar9 * 8)
              != &pUVar6->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_1475d1ca4;
        }
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) +
             (longlong)*(int *)&pUVar7[1].field_0x10 * 8) == &pUVar7[1].field_0x8)) {
          return pUVar5;
        }
      }
      iVar9 = (int)plVar4[1];
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar9);
  }
  return (UAssetUserData *)0x0;
}

// GetBlendProfile @ 1475d2720

UBlendProfile * __thiscall USkeleton::GetBlendProfile(USkeleton *this,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->BlendProfiles).AllocatorInstance.Data;
  iVar2 = (this->BlendProfiles).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->BlendProfiles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UBlendProfile>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((FName)(*(UBlendProfile **)pFVar3)->_padding_ == *param_1) {
      return *(UBlendProfile **)pFVar3;
    }
    pFVar3 = pFVar3 + 8;
  }
  return (UBlendProfile *)0x0;
}

// GetCurveMetaData @ 1475d3bc0

FCurveMetaData * __thiscall USkeleton::GetCurveMetaData(USkeleton *this,FName param_1)

{
  UAnimCurveMetaData *pUVar1;
  FCurveMetaData *pFVar2;
  
  pUVar1 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                     ((IInterface_AssetUserData *)&this->_padding_);
  if (pUVar1 != (UAnimCurveMetaData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475d3be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FCurveMetaData *)(**(code **)(pUVar1->_padding_ + 0x20))(&pUVar1->_padding_,param_1);
    return pFVar2;
  }
  return (FCurveMetaData *)0x0;
}

// GetCurveMetaData @ 1475d3c00

FCurveMetaData * __thiscall USkeleton::GetCurveMetaData(USkeleton *this,FName param_1)

{
  UAnimCurveMetaData *pUVar1;
  FCurveMetaData *pFVar2;
  
  pUVar1 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                     ((IInterface_AssetUserData *)&this->_padding_);
  if (pUVar1 != (UAnimCurveMetaData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475d3c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FCurveMetaData *)(**(code **)(pUVar1->_padding_ + 0x28))(&pUVar1->_padding_,param_1);
    return pFVar2;
  }
  return (FCurveMetaData *)0x0;
}

// GetCurveMetaDataNames @ 1475d3c40

void __thiscall
USkeleton::GetCurveMetaDataNames(USkeleton *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  UAnimCurveMetaData *pUVar1;
  
  pUVar1 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                     ((IInterface_AssetUserData *)&this->_padding_);
  if (pUVar1 != (UAnimCurveMetaData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475d3c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x38))(&pUVar1->_padding_,param_1);
    return;
  }
  return;
}

// GetMeshBoneIndexFromSkeletonBoneIndex @ 1475d54f0

int __thiscall
USkeleton::GetMeshBoneIndexFromSkeletonBoneIndex(USkeleton *this,USkinnedAsset *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSkeletonToMeshLinkup *pFVar4;
  uint uVar5;
  
  if (param_2 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkeletonBoneIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                       ,0x488,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar4 = FindOrAddMeshLinkupData(this,param_1);
  uVar5 = 0;
  if (param_2 < (pFVar4->SkeletonToMeshTable).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((pFVar4->SkeletonToMeshTable).AllocatorInstance.Data + (longlong)param_2 * 4);
}

// GetNumCurveMetaData @ 1475d6220

int __thiscall USkeleton::GetNumCurveMetaData(USkeleton *this)

{
  int iVar1;
  UAnimCurveMetaData *pUVar2;
  
  pUVar2 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                     ((IInterface_AssetUserData *)&this->_padding_);
  if (pUVar2 != (UAnimCurveMetaData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475d623e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(pUVar2->_padding_ + 0x18))(&pUVar2->_padding_);
    return iVar1;
  }
  return 0;
}

// GetOrCreateCurveMetaDataObject @ 1475d6570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAnimCurveMetaData * __thiscall USkeleton::GetOrCreateCurveMetaDataObject(USkeleton *this)

{
  FName FVar1;
  UClass *pUVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FVar1 = (FName)IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                           ((IInterface_AssetUserData *)&this->_padding_);
  if (FVar1 == (FName)0x0) {
    local_a8 = FVar1;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar2 = Z_Construct_UClass_UAnimCurveMetaData_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar2);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transactional;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    FVar1 = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar3 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar3 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    (**(code **)(this->_padding_ + 0x10))(&this->_padding_,FVar1);
  }
  return (UAnimCurveMetaData *)FVar1;
}

// GetPreviewMesh @ 1475d7b90

USkeletalMesh * __thiscall USkeleton::GetPreviewMesh(USkeleton *this,bool param_1)

{
  return (USkeletalMesh *)0x0;
}

// GetPreviewMesh @ 1475d7ba0

USkeletalMesh * __thiscall USkeleton::GetPreviewMesh(USkeleton *this)

{
  return (USkeletalMesh *)0x0;
}

// GetPrivateStaticClass @ 1475dc010

UClass * __cdecl USkeleton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USkeleton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Skeleton",&Z_Registration_Info_UClass_USkeleton.InnerSingleton,
               StaticRegisterNativesUSkeleton,0x388,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USkeleton>,InternalVTableHelperCtorCaller<USkeleton>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeleton.InnerSingleton;
}

// GetRawAnimationTrackIndex @ 1475dc230

int __thiscall
USkeleton::GetRawAnimationTrackIndex(USkeleton *this,int param_1,UAnimSequence *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 *local_res20;
  
  if (param_1 == -1) {
    return -1;
  }
  UAnimSequence::GetCompressedData(param_2);
  piVar1 = (int *)*local_res20;
  piVar2 = piVar1;
  while( true ) {
    if (piVar2 == piVar1 + *(int *)(local_res20 + 1)) {
      return -1;
    }
    if (*piVar2 == param_1) break;
    piVar2 = piVar2 + 1;
  }
  return (int)((longlong)piVar2 - (longlong)piVar1 >> 2);
}

// GetRefLocalPoses @ 1475dcab0

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
USkeleton::GetRefLocalPoses(USkeleton *this,FName param_1)

{
  FReferencePose *pFVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar2 = &(this->ReferenceSkeleton).FinalRefBonePose;
  if (param_1 != (FName)0x0) {
    pFVar1 = TMapBase<FName,FReferencePose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>_>
             ::Find((TMapBase<FName,FReferencePose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>_>
                     *)&this->AnimRetargetSources,param_1);
    if (pFVar1 != (FReferencePose *)0x0) {
      pTVar2 = &pFVar1->ReferencePose;
    }
  }
  return pTVar2;
}

// GetSkeletonBoneIndexFromMeshBoneIndex @ 1475ddc60

int __thiscall
USkeleton::GetSkeletonBoneIndexFromMeshBoneIndex(USkeleton *this,USkinnedAsset *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FSkeletonToMeshLinkup *pFVar5;
  
  if (param_2 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MeshBoneIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                       ,0x481,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  pFVar5 = FindOrAddMeshLinkupData(this,param_1);
  uVar4 = 0;
  if (param_2 < (pFVar5->MeshToSkeletonTable).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return *(int *)((pFVar5->MeshToSkeletonTable).AllocatorInstance.Data + (longlong)param_2 * 4);
}

// GetSkeletonRemapping @ 1475ddd30

FSkeletonRemapping * __thiscall USkeleton::GetSkeletonRemapping(USkeleton *this,USkeleton *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSkeletonRemapping *pFVar3;
  
  if (UE::Anim::GSkeletonRemappingRegistry == (FSkeletonRemappingRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GSkeletonRemappingRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletonRemappingRegistry.cpp"
                       ,0x32,
                       L"Skeleton remapping registry is not instanced. It is only valid to access this while the engine module is loaded."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSkeletonRemapping *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = UE::Anim::FSkeletonRemappingRegistry::GetRemapping
                     (UE::Anim::GSkeletonRemappingRegistry,param_1,this);
  return pFVar3;
}

// GetSlotGroupName @ 1475ddda0

FName __thiscall USkeleton::GetSlotGroupName(USkeleton *this,FName *param_1)

{
  FName *pFVar1;
  FName *in_R8;
  
  pFVar1 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->SlotToGroupNameMap,*in_R8);
  if (pFVar1 != (FName *)0x0) {
    *param_1 = *pFVar1;
    return (FName)param_1;
  }
  *param_1 = FAnimSlotGroup::DefaultGroupName;
  return (FName)param_1;
}

// GetSlotGroups @ 1475dddf0

TArray<FAnimSlotGroup,TSizedDefaultAllocator<32>_> * __thiscall
USkeleton::GetSlotGroups(USkeleton *this)

{
  return &this->SlotGroups;
}

// GetUseRetargetModesFromCompatibleSkeleton @ 1475ded50

bool __thiscall USkeleton::GetUseRetargetModesFromCompatibleSkeleton(USkeleton *this)

{
  return this->bUseRetargetModesFromCompatibleSkeleton;
}

// HandlePackageReloaded @ 1475df4d0

void __cdecl
USkeleton::HandlePackageReloaded(EPackageReloadPhase param_1,FPackageReloadedEvent *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  USkeleton *this;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *pTVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  if (param_1 == PostPackageFixup) {
    pTVar8 = ObjectPtrDecay<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>_>,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_>
                       (&param_2->RepointedObjects);
    iVar3 = *(int *)&pTVar8->field_0x28;
    iVar12 = 0;
    uVar6 = 1;
    iVar14 = 0;
    puVar1 = &pTVar8->field_0x10;
    iVar7 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&pTVar8->field_0x20;
      if (*(uint **)&pTVar8->field_0x20 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1475df58d;
        uVar11 = puVar15[lVar9 + 1];
      }
      uVar6 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = (int)lVar9 + -1 + iVar14;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_1475df58d:
    uVar11 = *(uint *)&pTVar8->field_0x28;
    uVar10 = uVar11 & 0xffffffe0;
    TStack_50._padding_ = CONCAT44(uVar6,iVar12);
    TStack_50.CurrentBitIndex = iVar7;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_50._28_4_ = iVar7;
    TStack_50.BaseBitIndex = iVar14;
    uStack_30 = CONCAT44(uStack_5c,*(int *)&pTVar8->field_0x8 - *(int *)&pTVar8->field_0x34);
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)&pTVar8->field_0x28;
    if (uVar11 != uVar6) {
      puVar13 = *(undefined1 **)&pTVar8->field_0x20;
      if (*(undefined1 **)&pTVar8->field_0x20 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_1475df6a0;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar10;
      if ((int)uVar6 < (int)uVar11) {
        uVar11 = uVar6;
      }
    }
LAB_1475df6a0:
    while( true ) {
      if (*(int *)&pTVar8->field_0x8 - *(int *)&pTVar8->field_0x34 != (int)uStack_30) {
        `TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_50.CurrentBitIndex == uVar11) &&
         (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      this = *(USkeleton **)(*(longlong *)pTVar8 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
      if ((this != (USkeleton *)0x0) &&
         (bVar5 = UObjectBaseUtility::IsA<USkeleton>((UObjectBaseUtility *)this), bVar5)) {
        HandleVirtualBoneChanges(this);
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    }
  }
  return;
}

// HandleVirtualBoneChanges @ 1475df9c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USkeleton::HandleVirtualBoneChanges(USkeleton *this)

{
  FPlatformRWLock *SRWLock;
  USkinnedMeshComponent *this_00;
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  UClass *pUVar4;
  USkeleton *pUVar5;
  FReferenceSkeleton *this_01;
  UAnimCurveMetaData *pUVar6;
  USkinnedAsset *pUVar7;
  UWorld *pUVar8;
  UActorComponent *pUVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  FWeakObjectPtr local_res8;
  USkinnedAsset *local_res10;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  UWorld *local_98;
  USkinnedMeshComponent *local_90;
  FComponentReregisterContextBase local_88;
  FWeakObjectPtr local_80;
  FWeakObjectPtr FStack_78;
  TObjectIterator<USkeletalMesh> local_70;
  TObjectIterator<USkinnedMeshComponent> local_58;
  
  FReferenceSkeleton::RebuildRefSkeleton(&this->ReferenceSkeleton,this,false);
  if (UE::Anim::GSkeletonRemappingRegistry == (FSkeletonRemappingRegistry *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GSkeletonRemappingRegistry",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\SkeletonRemappingRegistry.cpp"
                       ,0x32,
                       L"Skeleton remapping registry is not instanced. It is only valid to access this while the engine module is loaded."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Anim::FSkeletonRemappingRegistry::RefreshMappings(UE::Anim::GSkeletonRemappingRegistry,this);
  local_70.Index = 0xffffffff;
  local_70.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ObjectArray.ArrayNum = 0;
  local_70.ObjectArray.ArrayMax = 0;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar4 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  GetObjectsOfClass(pUVar4,&local_70.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<USkeletalMesh>::Advance(&local_70);
  while( true ) {
    lVar11 = (longlong)local_70.Index;
    if (local_70.Index < 0) break;
    if (local_70.ObjectArray.ArrayNum <= local_70.Index) break;
    uVar10 = 0;
    if (local_70.Index < local_70.ObjectArray.ArrayNum) {
      uVar10 = (uint)~local_70.Index >> 0x1f;
    }
    if (uVar10 == 0) {
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
    pUVar7 = *(USkinnedAsset **)(local_70.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    pUVar5 = (USkeleton *)(**(code **)(*(longlong *)pUVar7 + 0x408))(pUVar7);
    if (pUVar5 == this) {
      this_01 = (FReferenceSkeleton *)(**(code **)(*(longlong *)pUVar7 + 800))(pUVar7);
      FReferenceSkeleton::RebuildRefSkeleton(this_01,this,false);
      SRWLock = &this->SkinnedAssetLinkupCacheLock;
      if (SRWLock == (FPlatformRWLock *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      local_res18 = local_res8;
      if (*(int *)&(this->SkinnedAssetLinkupCache).field_0x8 !=
          *(int *)&(this->SkinnedAssetLinkupCache).field_0x34) {
        uVar10 = local_res8.ObjectIndex - local_res8.ObjectSerialNumber ^
                 (uint)local_res8.ObjectSerialNumber >> 0xd;
        uVar12 = (-0x61c88647 - local_res8.ObjectSerialNumber) - uVar10 ^ uVar10 << 8;
        uVar13 = (local_res8.ObjectSerialNumber - uVar12) - uVar10 ^ uVar12 >> 0xd;
        uVar10 = (uVar10 - uVar13) - uVar12 ^ uVar13 >> 0xc;
        uVar12 = (uVar12 - uVar10) - uVar13 ^ uVar10 << 0x10;
        uVar13 = (uVar13 - uVar12) - uVar10 ^ uVar12 >> 5;
        uVar10 = (uVar10 - uVar13) - uVar12 ^ uVar13 >> 3;
        uVar12 = (uVar12 - uVar10) - uVar13 ^ uVar10 << 10;
        TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
        ::RemoveImpl<TObjectKey<USkinnedAsset>_>
                  ((TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
                    *)&this->SkinnedAssetLinkupCache,(uVar13 - uVar12) - uVar10 ^ uVar12 >> 0xf,
                   (TObjectKey<USkinnedAsset> *)&local_res18);
      }
      if (SRWLock != (FPlatformRWLock *)0x0) {
        ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
      }
      AddMeshLinkupData(this,pUVar7);
    }
    TObjectIterator<USkeletalMesh>::Advance(&local_70);
  }
  if (local_70.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ObjectArray.AllocatorInstance.Data);
  }
  pUVar6 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                     ((IInterface_AssetUserData *)&this->_padding_);
  if (pUVar6 != (UAnimCurveMetaData *)0x0) {
    (**(code **)(pUVar6->_padding_ + 0x40))(&pUVar6->_padding_,this);
  }
  local_58.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ObjectArray.ArrayNum = 0;
  local_58.ObjectArray.ArrayMax = 0;
  local_58.Index = 0xffffffff;
  EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar4 = Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
  GetObjectsOfClass(pUVar4,&local_58.ObjectArray,true,RF_ClassDefaultObject,
                    EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<USkinnedMeshComponent>::Advance(&local_58);
    lVar11 = (longlong)local_58.Index;
    if (local_58.Index < 0) break;
    if (local_58.ObjectArray.ArrayNum <= local_58.Index) break;
    uVar10 = 0;
    if (local_58.Index < local_58.ObjectArray.ArrayNum) {
      uVar10 = (uint)~local_58.Index >> 0x1f;
    }
    if (uVar10 == 0) {
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
    this_00 = *(USkinnedMeshComponent **)(local_58.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    if (this_00 != (USkinnedMeshComponent *)0x0) {
      bVar2 = UObjectBaseUtility::IsTemplate
                        ((UObjectBaseUtility *)this_00,RF_ArchetypeObject|RF_ClassDefaultObject);
      if (!bVar2) {
        pUVar7 = USkinnedMeshComponent::GetSkinnedAsset(this_00);
        if (pUVar7 != (USkinnedAsset *)0x0) {
          pUVar5 = (USkeleton *)(**(code **)(*(longlong *)pUVar7 + 0x408))(pUVar7);
          if (pUVar5 == this) {
            local_88.ScenesToUpdateAllPrimitiveSceneInfos =
                 (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                  *)0x0;
            local_res20 = 0;
            local_80.ObjectIndex = 0;
            local_80.ObjectSerialNumber = 0;
            FStack_78.ObjectIndex = 0;
            FStack_78.ObjectSerialNumber = 0;
            FWeakObjectPtr::operator=(&FStack_78,(FObjectPtr)&local_res20);
            local_88.ScenesToUpdateAllPrimitiveSceneInfos =
                 (TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                  *)0x0;
            local_98 = FComponentReregisterContextBase::UnRegister
                                 (&local_88,(UActorComponent *)this_00);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UWorld *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)local_98);
            }
            FWeakObjectPtr::operator=(&FStack_78,(FObjectPtr)&local_98);
            bVar2 = FWeakObjectPtr::IsValid(&FStack_78);
            local_90 = (USkinnedMeshComponent *)0x0;
            if (bVar2) {
              local_90 = this_00;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_90 != (USkinnedMeshComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_90);
            }
            FWeakObjectPtr::operator=(&local_80,(FObjectPtr)&local_90);
            bVar2 = FWeakObjectPtr::IsValid(&local_80);
            if (bVar2) {
              bVar2 = FWeakObjectPtr::IsValid(&FStack_78);
              if (bVar2) {
                pUVar8 = (UWorld *)FWeakObjectPtr::Get(&FStack_78);
                pUVar9 = (UActorComponent *)FWeakObjectPtr::Get(&local_80);
                FComponentReregisterContextBase::ReRegister(&local_88,pUVar9,pUVar8);
              }
            }
          }
        }
      }
    }
  }
  if (local_58.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// IsCompatibleMesh @ 1475e1c60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall USkeleton::IsCompatibleMesh(USkeleton *this,USkinnedAsset *param_1,bool param_2)

{
  int iVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  FReferenceSkeleton *this_00;
  TTuple<FName,int> *pTVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  int local_res8;
  FName local_res20;
  longlong local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId642,"USkeleton::IsCompatibleMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
               ,0x282);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId642);
  }
  local_res8 = 0;
  this_00 = (FReferenceSkeleton *)(**(code **)(*(longlong *)param_1 + 0x318))(param_1);
  uVar12 = 0;
  iVar1 = (this_00->RawRefBoneInfo).ArrayNum;
  iVar11 = 0;
  if (0 < iVar1) {
    local_88 = 0;
    uVar13 = uVar12;
    do {
      uVar10 = (uint)uVar12;
      uVar6 = 0;
      if ((int)uVar10 < (this_00->FinalRefBoneInfo).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_res20 = *(FName *)((this_00->FinalRefBoneInfo).AllocatorInstance.Data + local_88);
      iVar11 = -1;
      if (local_res20 != (FName)0x0) {
        pTVar8 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                         *)&(this->ReferenceSkeleton).FinalNameToIndexMap,local_res20);
        piVar9 = (int *)&pTVar8->field_0x8;
        if (pTVar8 == (TTuple<FName,int> *)0x0) {
          piVar9 = (int *)0x0;
        }
        if (piVar9 != (int *)0x0) {
          iVar11 = *piVar9;
        }
      }
      if (iVar11 == -1) {
        iVar11 = -1;
        do {
          if ((int)uVar12 == -1) {
LAB_1475e1ff1:
            if ((byte)LogAnimation._0_1_ < 6) goto LAB_1475e2040;
            ::FName::ToString(&local_res20,&local_58);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
            goto LAB_1475e2036;
          }
          uVar6 = FReferenceSkeleton::GetParentIndexInternal
                            (this_00,(int)uVar12,&this_00->FinalRefBoneInfo);
          uVar12 = (ulonglong)(int)uVar6;
          if (uVar6 != 0xffffffff) {
            uVar7 = 0;
            if ((int)uVar6 < (this_00->FinalRefBoneInfo).ArrayNum) {
              uVar7 = ~uVar6 >> 0x1f;
            }
            if ((uVar7 == 0) &&
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
            iVar11 = -1;
            FVar2 = *(FName *)((this_00->FinalRefBoneInfo).AllocatorInstance.Data + uVar12 * 0xc);
            if (FVar2 != (FName)0x0) {
              pTVar8 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                               *)&(this->ReferenceSkeleton).FinalNameToIndexMap,FVar2);
              piVar9 = (int *)&pTVar8->field_0x8;
              if (pTVar8 == (TTuple<FName,int> *)0x0) {
                piVar9 = (int *)0x0;
              }
              if (piVar9 != (int *)0x0) {
                iVar11 = *piVar9;
              }
            }
            if (uVar6 == 0) {
              if (iVar11 == -1) goto LAB_1475e1ff1;
              break;
            }
          }
        } while (iVar11 == -1);
        if ((param_2) && (bVar4 = DoesParentChainMatch(this,iVar11,param_1), !bVar4)) {
          if (5 < (byte)LogAnimation._0_1_) {
            ::FName::ToString(&local_res20,&local_68);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
            goto LAB_1475e2036;
          }
          goto LAB_1475e2040;
        }
      }
      else {
        local_res8 = local_res8 + 1;
        if ((param_2) && (bVar4 = DoesParentChainMatch(this,iVar11,param_1), !bVar4)) {
          if (5 < (byte)LogAnimation._0_1_) {
            ::FName::ToString(&local_res20,&local_78);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
LAB_1475e2036:
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
LAB_1475e2040:
          bVar4 = false;
          goto LAB_1475e1f2e;
        }
      }
      uVar12 = (ulonglong)(uVar10 + 1);
      local_88 = local_88 + 0xc;
      uVar13 = uVar13 + 1;
      iVar11 = local_res8;
    } while ((longlong)uVar13 < (longlong)iVar1);
  }
  bVar4 = 0 < iVar11;
LAB_1475e1f2e:
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// IsPostLoadThreadSafe @ 1475e2a70

bool __thiscall USkeleton::IsPostLoadThreadSafe(USkeleton *this)

{
  return true;
}

// MergeAllBonesToBoneTree @ 1475e5590

bool __thiscall
USkeleton::MergeAllBonesToBoneTree(USkeleton *this,USkinnedAsset *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId884,"USkeleton::MergeAllBonesToBoneTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
               ,0x374);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId884);
  }
  if (param_1 != (USkinnedAsset *)0x0) {
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    lVar5 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,*(int *)(lVar5 + 8),&local_28.AllocatorInstance,&local_28.ArrayNum,
               &local_28.ArrayMax);
    uVar7 = 0;
    lVar5 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
    if (0 < *(int *)(lVar5 + 8)) {
      lVar5 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < local_28.ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        *(uint *)(local_28.AllocatorInstance.Data + lVar5) = uVar7;
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 4;
        lVar6 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
      } while ((int)uVar7 < *(int *)(lVar6 + 8));
    }
    if (0 < local_28.ArrayNum) {
      bVar2 = MergeBonesToBoneTree(this,param_1,&local_28,param_2);
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      goto LAB_1475e5720;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  bVar2 = false;
LAB_1475e5720:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar2;
}

// MergeBonesToBoneTree @ 1475e5760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
USkeleton::MergeBonesToBoneTree
          (USkeleton *this,USkinnedAsset *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  undefined1 *puVar1;
  FPlatformRWLock *SRWLock;
  TMap<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>_>
  *this_00;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  USkinnedAsset *pUVar6;
  USkeleton *pUVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FReferenceSkeleton *pFVar13;
  longlong lVar14;
  TTuple<FName,int> *pTVar15;
  FReferenceSkeleton *this_01;
  FName FVar16;
  uint uVar17;
  FNameEntryId FVar18;
  ulonglong uVar19;
  int *piVar20;
  FName FVar21;
  FName FVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  FName FVar25;
  ulonglong uVar26;
  ForElementType<unsigned_int> FVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  undefined1 auStackY_1b8 [32];
  undefined1 local_167;
  undefined1 local_166 [2];
  uint local_164;
  FScriptContainerElement *local_160;
  USkinnedAsset *local_158;
  TArray<int,TSizedDefaultAllocator<32>_> local_150;
  uint local_140;
  uint local_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_130;
  undefined4 local_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  FMeshBoneInfo local_118;
  USkeleton *local_108;
  FName local_100;
  undefined4 local_f8;
  int local_f4;
  TPairInitializer<FName_const_&,FBoneNode_const_&> local_f0;
  FScriptContainerElement *local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  undefined1 local_a0 [8];
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar10 = false;
  SRWLock = &this->SkinnedAssetLinkupCacheLock;
  local_158 = param_1;
  local_108 = this;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    uVar9 = (*pcVar4)();
    return (bool)uVar9;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this_00 = &this->SkinnedAssetLinkupCache;
  bVar8 = 1 < *(int *)&(this->SkinnedAssetLinkupCache).field_0x48;
  if (!bVar8) {
    TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->SkinnedAssetLinkupCache).field_0x8);
  puVar1 = &(this->SkinnedAssetLinkupCache).field_0xc;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x34 = 0;
  iVar11 = *(int *)&(this->SkinnedAssetLinkupCache).field_0x2c;
  *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x28 = 0;
  if ((iVar11 < 0) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SkinnedAssetLinkupCache).field_0x10,0
              );
  }
  if (bVar8) {
    *(undefined4 *)&(this->SkinnedAssetLinkupCache).field_0x48 = 1;
    TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  pTVar5 = CVarAllowIncompatibleSkeletalMeshMerge.Ref;
  if ((this->BoneTree).ArrayNum == 0) {
    bVar10 = CreateReferenceSkeletonFromMesh(this,param_1,param_2);
  }
  else {
    bVar8 = IsInParallelGameThread();
    if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar9 = (*pcVar4)();
      return (bool)uVar9;
    }
    bVar8 = IsCompatibleMesh(this,param_1,pTVar5->ShadowedValue[0] == false);
    if (bVar8) {
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId970,"USkeleton::MergeBonesToBoneTree::CompatibleBranch",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                   ,0x3ca);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId970);
      }
      local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.ArrayNum = 0;
      local_150.ArrayMax = 0;
      pFVar13 = (FReferenceSkeleton *)(**(code **)(*(longlong *)param_1 + 0x318))(param_1);
      FAnimationRuntime::ExcludeBonesWithNoParents(param_2,pFVar13,&local_150);
      uVar19 = (ulonglong)local_150.ArrayNum;
      local_164 = local_150.ArrayNum;
      local_160 = local_150.AllocatorInstance.Data + uVar19 * 4;
      uVar26 = uVar19;
      FVar24.Data = local_150.AllocatorInstance.Data;
      while( true ) {
        pFVar23 = local_160;
        pFVar13 = &this->ReferenceSkeleton;
        if ((int)uVar19 != (int)uVar26) {
          local_167 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_167)
          ;
        }
        if (FVar24.Data == pFVar23) break;
        uVar29 = *(uint *)FVar24.Data;
        lVar14 = (**(code **)(*(longlong *)param_1 + 0x318))();
        uVar28 = ~uVar29 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar29 < *(int *)(lVar14 + 0x28)) {
          uVar12 = uVar28;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        lVar30 = (longlong)(int)uVar29 * 0xc;
        FVar16 = *(FName *)(lVar30 + *(longlong *)(lVar14 + 0x20));
        if (FVar16 == (FName)0x0) {
LAB_1475e5a50:
          lVar14 = (**(code **)(*(longlong *)local_158 + 0x318))(local_158);
          uVar12 = 0;
          if ((int)uVar29 < *(int *)(lVar14 + 0x28)) {
            uVar12 = uVar28;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          param_1 = local_158;
          local_118.Name = *(FName *)(*(longlong *)(lVar14 + 0x20) + lVar30);
          local_118.ParentIndex = *(int *)(*(longlong *)(lVar14 + 0x20) + 8 + lVar30);
          if ((this->ReferenceSkeleton).RawRefBoneInfo.ArrayNum == 0) {
            local_118.ParentIndex = -1;
            iVar11 = local_118.ParentIndex;
          }
          else {
            pFVar13 = (FReferenceSkeleton *)(**(code **)(*(longlong *)local_158 + 0x318))(local_158)
            ;
            this_01 = (FReferenceSkeleton *)(**(code **)(*(longlong *)param_1 + 0x318))(param_1);
            FReferenceSkeleton::GetParentIndexInternal(this_01,uVar29,&this_01->FinalRefBoneInfo);
            FVar16 = FReferenceSkeleton::GetBoneName(pFVar13,(int)local_a0);
            iVar11 = -1;
            if (*(FName *)FVar16 != (FName)0x0) {
              pTVar15 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                                *)&(this->ReferenceSkeleton).RawNameToIndexMap,*(FName *)FVar16);
              piVar20 = (int *)&pTVar15->field_0x8;
              if (pTVar15 == (TTuple<FName,int> *)0x0) {
                piVar20 = (int *)0x0;
              }
              if (piVar20 != (int *)0x0) {
                iVar11 = *piVar20;
              }
            }
          }
          local_118.ParentIndex = iVar11;
          lVar14 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
          uVar12 = 0;
          if ((int)uVar29 < *(int *)(lVar14 + 0x38)) {
            uVar12 = uVar28;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            uVar9 = (*pcVar4)();
            return (bool)uVar9;
          }
          lVar14 = *(longlong *)(lVar14 + 0x30);
          bVar8 = (this->ReferenceSkeleton).bOnlyOneRootAllowed;
          (this->ReferenceSkeleton).bOnlyOneRootAllowed = true;
          FReferenceSkeleton::Add
                    (&this->ReferenceSkeleton,&local_118,
                     (TTransform<double> *)((longlong)(int)uVar29 * 0x60 + lVar14));
          (this->ReferenceSkeleton).bOnlyOneRootAllowed = bVar8;
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (1,1,1,&(this->BoneTree).AllocatorInstance,&(this->BoneTree).ArrayNum,
                              &(this->BoneTree).ArrayMax);
          DefaultConstructItems<FBoneNode,int>((this->BoneTree).AllocatorInstance.Data + iVar11,1);
          uVar19 = local_150._8_8_ & 0xffffffff;
          FVar24.Data = FVar24.Data + 4;
          uVar26 = (ulonglong)local_164;
        }
        else {
          pTVar15 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            *)&(this->ReferenceSkeleton).RawNameToIndexMap,FVar16);
          piVar20 = (int *)&pTVar15->field_0x8;
          if (pTVar15 == (TTuple<FName,int> *)0x0) {
            piVar20 = (int *)0x0;
          }
          if ((piVar20 == (int *)0x0) || (*piVar20 == -1)) goto LAB_1475e5a50;
          uVar19 = local_150._8_8_ & 0xffffffff;
          uVar26 = (ulonglong)local_164;
          FVar24.Data = FVar24.Data + 4;
          param_1 = local_158;
        }
      }
      FReferenceSkeleton::RebuildRefSkeleton(pFVar13,this,true);
      uVar29 = (this->BoneTree).ArrayNum;
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (ForElementType<unsigned_int>)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = -1;
      local_64 = 0;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = 0;
      local_164 = uVar29;
      if ((uVar29 != (this->ReferenceSkeleton).RawRefBoneInfo.ArrayNum) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumBones == ReferenceSkeleton.GetRawRefBoneInfo().Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                             ,0x3f2,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        uVar9 = (*pcVar4)();
        return (bool)uVar9;
      }
      uVar19 = (ulonglong)local_150.ArrayNum;
      local_140 = local_150.ArrayNum;
      local_e0 = local_150.AllocatorInstance.Data + uVar19 * 4;
      uVar26 = uVar19;
      FVar24.Data = local_150.AllocatorInstance.Data;
      do {
        pFVar23 = local_e0;
        local_160 = FVar24.Data;
        if ((int)uVar19 != (int)uVar26) {
          local_166[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_166);
        }
        pUVar6 = local_158;
        if (FVar24.Data == pFVar23) {
          uVar29 = 0;
          if (0 < local_98._8_4_ - local_64) {
            piVar20 = &(this->BoneTree).ArrayMax;
            (this->BoneTree).ArrayNum = 0;
            if ((this->BoneTree).ArrayMax < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,0,&(this->BoneTree).AllocatorInstance,0,piVar20);
            }
            if (0 < (int)local_164) {
              local_160 = (FScriptContainerElement *)0x0;
              do {
                pFVar23 = local_160;
                uVar12 = 0;
                if ((int)uVar29 < (this->ReferenceSkeleton).RawRefBoneInfo.ArrayNum) {
                  uVar12 = ~uVar29 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                lVar14 = *(longlong *)
                          (pFVar23 +
                          (longlong)(this->ReferenceSkeleton).RawRefBoneInfo.AllocatorInstance.Data)
                ;
                uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar14);
                if (local_98._8_4_ != local_64) {
                  FVar24.Data = local_60;
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    FVar24.Data = local_58.Data;
                  }
                  iVar11 = *(int *)(FVar24.Data +
                                   (ulonglong)
                                   (local_50 - 1 & (int)((ulonglong)lVar14 >> 0x20) + uVar12) * 4);
                  while (iVar11 != -1) {
                    pFVar23 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar11 * 0x14);
                    if (*(longlong *)(local_98._0_8_ + (longlong)iVar11 * 0x14) == lVar14) {
                      if (pFVar23 == (FScriptContainerElement *)0x0) goto LAB_1475e6330;
                      goto LAB_1475e6356;
                    }
                    iVar11 = *(int *)(pFVar23 + 0xc);
                  }
                }
                pFVar23 = (FScriptContainerElement *)0x0;
LAB_1475e6330:
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x288,L"");
                if (bVar8) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
LAB_1475e6356:
                pFVar3 = (this->BoneTree).AllocatorInstance.Data;
                pFVar23 = pFVar23 + 8;
                if (((pFVar3 <= pFVar23) && (pFVar23 < pFVar3 + *piVar20)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                iVar11 = (this->BoneTree).ArrayNum;
                if (iVar11 == *piVar20) {
                  iVar11 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x101,&(this->BoneTree).AllocatorInstance,piVar20);
                }
                (this->BoneTree).ArrayNum = iVar11 + 1;
                uVar29 = uVar29 + 1;
                local_160 = local_160 + 0xc;
                (this->BoneTree).AllocatorInstance.Data[iVar11] = *pFVar23;
              } while ((int)uVar29 < (int)local_164);
            }
            pFVar13 = &this->ReferenceSkeleton;
          }
          local_50 = 0;
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,FBoneNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,FBoneNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FName,FBoneNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)local_98);
          FReferenceSkeleton::RebuildRefSkeleton(pFVar13,this,true);
          if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.AllocatorInstance.Data);
          }
          if (!bVar10) {
            return true;
          }
          FCpuProfilerTrace::OutputEndEvent();
          return true;
        }
        uVar12 = *(uint *)FVar24.Data;
        lVar14 = (**(code **)(*(longlong *)local_158 + 0x318))(local_158);
        uVar28 = 0;
        if ((int)uVar12 < *(int *)(lVar14 + 0x28)) {
          uVar28 = ~uVar12 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        FVar16 = *(FName *)(*(longlong *)(lVar14 + 0x20) + (longlong)(int)uVar12 * 0xc);
        local_f0.Value = (FBoneNode *)FVar16;
        if (FVar16 != (FName)0x0) {
          pTVar15 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                            *)&(this->ReferenceSkeleton).RawNameToIndexMap,FVar16);
          piVar20 = (int *)&pTVar15->field_0x8;
          if (pTVar15 == (TTuple<FName,int> *)0x0) {
            piVar20 = (int *)0x0;
          }
          if (piVar20 != (int *)0x0) {
            iVar11 = *piVar20;
            if (iVar11 != -1) {
              pFVar13 = (FReferenceSkeleton *)(**(code **)(*(longlong *)pUVar6 + 0x318))(pUVar6);
              uVar12 = FReferenceSkeleton::GetParentIndexInternal
                                 (pFVar13,uVar12,&pFVar13->FinalRefBoneInfo);
              uVar28 = FReferenceSkeleton::GetParentIndexInternal
                                 (&this->ReferenceSkeleton,iVar11,
                                  &(this->ReferenceSkeleton).RawRefBoneInfo);
              if (uVar12 == 0xffffffff) {
                FVar25.ComparisonIndex.Value = 0;
                FVar25.Number = 0;
              }
              else {
                lVar14 = (**(code **)(*(longlong *)local_158 + 0x318))(local_158);
                uVar17 = 0;
                if ((int)uVar12 < *(int *)(lVar14 + 0x28)) {
                  uVar17 = ~uVar12 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                FVar25 = *(FName *)(*(longlong *)(lVar14 + 0x20) + (longlong)(int)uVar12 * 0xc);
              }
              FVar21.ComparisonIndex.Value = 0;
              FVar21.Number = 0;
              FVar22 = FVar21;
              local_100 = FVar25;
              if (uVar28 != 0xffffffff) {
                uVar12 = 0;
                if ((int)uVar28 < (this->ReferenceSkeleton).RawRefBoneInfo.ArrayNum) {
                  uVar12 = ~uVar28 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar4 = (code *)swi(3);
                  uVar9 = (*pcVar4)();
                  return (bool)uVar9;
                }
                FVar22 = *(FName *)((this->ReferenceSkeleton).RawRefBoneInfo.AllocatorInstance.Data
                                   + (longlong)(int)uVar28 * 0xc);
              }
              if (FVar25 != FVar22) {
                if ((local_98._8_4_ == local_64) && (uVar29 != 0)) {
                  if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
                    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar29);
                  }
                  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_98,uVar29);
                  uVar12 = 1;
                  if (3 < uVar29) {
                    uVar26 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
                    lVar14 = 0x3f;
                    if (uVar26 != 0) {
                      for (; uVar26 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                      }
                    }
                    local_f8 = (undefined4)lVar14;
                    uVar12 = 1 << ((byte)lVar14 & 0x1f);
                  }
                  if ((local_50 == 0) || ((int)local_50 < (int)uVar12)) {
                    local_50 = uVar12;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_58,0,0,4);
                    }
                    if (uVar12 != 0) {
                      uVar28 = uVar12;
                      if (uVar12 < 2) {
                        if (local_58.Data != (FScriptContainerElement *)0x0) {
                          uVar28 = 0;
                          goto LAB_1475e5f39;
                        }
                      }
                      else {
LAB_1475e5f39:
                        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                  (&local_58,0,uVar28,4);
                      }
                      if (0 < (int)uVar12) {
                        uVar26 = (ulonglong)uVar12;
                        FVar25 = FVar21;
                        do {
                          FVar24.Data = local_60;
                          if (local_58.Data != (FScriptContainerElement *)0x0) {
                            FVar24.Data = local_58.Data;
                          }
                          uVar19 = (longlong)(int)uVar12 - 1U & (ulonglong)FVar25;
                          FVar25 = (FName)((longlong)FVar25 + 1);
                          *(undefined4 *)(FVar24.Data + uVar19 * 4) = 0xffffffff;
                          uVar26 = uVar26 - 1;
                        } while (uVar26 != 0);
                      }
                    }
                    if (local_50 != 0) {
                      pTStack_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                      local_138 = 0;
                      uStack_134 = 1;
                      uStack_124 = 0;
                      uStack_120 = 0;
                      if (local_70 != 0) {
                        FVar27 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                        if (local_78 != (ForElementType<unsigned_int>)0x0) {
                          FVar27 = local_78;
                        }
                        uVar12 = *(uint *)FVar27;
                        FVar22 = FVar21;
                        while (uVar12 == 0) {
                          FVar22.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value + 0x20;
                          FVar22.Number = 0;
                          FVar18 = FVar21.ComparisonIndex.Value;
                          FVar21.ComparisonIndex.Value = FVar18.Value + 1;
                          FVar21.Number = 0;
                          local_138 = FVar21.ComparisonIndex.Value;
                          uStack_120 = FVar22.ComparisonIndex.Value;
                          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 <
                              (int)FVar21.ComparisonIndex.Value) goto LAB_1475e603d;
                          uVar12 = ((uint *)((longlong)FVar27 + 4))[(int)FVar18.Value];
                        }
                        uStack_134 = -uVar12 & uVar12;
                        uVar26 = (ulonglong)uStack_134 * 2 + 1;
                        lVar14 = 0x3f;
                        if (uVar26 != 0) {
                          for (; uVar26 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                          }
                        }
                        local_f4 = (int)lVar14;
                        FVar21.ComparisonIndex.Value = (uStack_120 - 1) + local_f4;
                        FVar21.Number = 0;
                        uStack_124 = FVar21.ComparisonIndex.Value;
                        if ((int)local_70 < (int)FVar21.ComparisonIndex.Value) {
LAB_1475e603d:
                          FVar21.Number = 0;
                          FVar21.ComparisonIndex.Value = local_70;
                          uStack_124 = local_70;
                        }
                      }
                      local_128 = 0xffffffff;
                      local_d8 = (longlong *)local_98;
                      local_d0._padding_ = CONCAT44(uStack_134,local_138);
                      local_d0.CurrentBitIndex = uStack_124;
                      local_d0.UnvisitedBitMask = 0xffffffff;
                      local_d0._28_4_ = uStack_11c;
                      local_d0.BaseBitIndex = uStack_120;
                      local_d0.Array = pTStack_130;
                      if ((int)FVar21.ComparisonIndex.Value.Value < (int)local_70) {
                        do {
                          FVar18 = FVar21.ComparisonIndex.Value;
                          uVar2 = *(undefined8 *)(*local_d8 + (longlong)(int)FVar18.Value * 0x14);
                          lVar14 = *local_d8 + (longlong)(int)FVar18.Value * 0x14;
                          uVar12 = ::GetTypeHash((FNameEntryId)(uint)uVar2);
                          uVar12 = local_50 - 1 & uVar12 + (int)((ulonglong)uVar2 >> 0x20);
                          *(uint *)(lVar14 + 0x10) = uVar12;
                          FVar24.Data = local_60;
                          if (local_58.Data != (FScriptContainerElement *)0x0) {
                            FVar24.Data = local_58.Data;
                          }
                          uVar26 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
                          *(undefined4 *)(lVar14 + 0xc) = *(undefined4 *)(FVar24.Data + uVar26 * 4);
                          *(uint *)(FVar24.Data + uVar26 * 4) = FVar18.Value;
                          local_d0.UnvisitedBitMask =
                               local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
                          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                    (&local_d0);
                          FVar21.Number = 0;
                          FVar21.ComparisonIndex.Value = local_d0.CurrentBitIndex;
                        } while (local_d0.CurrentBitIndex < (local_d0.Array)->NumBits);
                      }
                    }
                  }
                  pUVar7 = local_108;
                  uVar12 = local_164;
                  uVar28 = 0;
                  if (0 < (int)uVar29) {
                    lVar30 = 0;
                    lVar14 = 0;
                    do {
                      uVar29 = 0;
                      if ((int)uVar28 < (pUVar7->BoneTree).ArrayNum) {
                        uVar29 = ~uVar28 >> 0x1f;
                      }
                      if ((uVar29 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar4 = (code *)swi(3);
                        uVar9 = (*pcVar4)();
                        return (bool)uVar9;
                      }
                      pFVar23 = (pUVar7->BoneTree).AllocatorInstance.Data;
                      uVar29 = 0;
                      if ((int)uVar28 < (pUVar7->ReferenceSkeleton).RawRefBoneInfo.ArrayNum) {
                        uVar29 = ~uVar28 >> 0x1f;
                      }
                      if ((uVar29 == 0) &&
                         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar8)) {
                        pcVar4 = (code *)swi(3);
                        uVar9 = (*pcVar4)();
                        return (bool)uVar9;
                      }
                      local_a8 = pFVar23 + lVar30;
                      local_b0 = (pUVar7->ReferenceSkeleton).RawRefBoneInfo.AllocatorInstance.Data +
                                 lVar14;
                      TSet<TTuple<FName,FBoneNode>,TDefaultMapHashableKeyFuncs<FName,FBoneNode,0>,FDefaultSetAllocator>
                      ::Emplace<TPairInitializer<FName_const_&,FBoneNode_const_&>_>
                                ((TSet<TTuple<FName,FBoneNode>,TDefaultMapHashableKeyFuncs<FName,FBoneNode,0>,FDefaultSetAllocator>
                                  *)local_98,&local_f0,(bool *)&local_b0);
                      uVar28 = uVar28 + 1;
                      lVar30 = lVar30 + 1;
                      lVar14 = lVar14 + 0xc;
                      FVar16 = (FName)local_f0.Value;
                      this = local_108;
                      uVar29 = local_164;
                    } while ((int)uVar28 < (int)uVar12);
                  }
                }
                pFVar13 = &this->ReferenceSkeleton;
                bVar8 = (this->ReferenceSkeleton).bOnlyOneRootAllowed;
                (this->ReferenceSkeleton).bOnlyOneRootAllowed = true;
                FReferenceSkeleton::SetParent(pFVar13,FVar16,local_100);
                (this->ReferenceSkeleton).bOnlyOneRootAllowed = bVar8;
                goto LAB_1475e6208;
              }
            }
            pFVar13 = &this->ReferenceSkeleton;
          }
        }
LAB_1475e6208:
        uVar19 = local_150._8_8_ & 0xffffffff;
        FVar24.Data = local_160 + 4;
        uVar26 = (ulonglong)local_140;
      } while( true );
    }
  }
  return bVar10;
}

// PostDuplicate @ 1475e9480

void __thiscall USkeleton::PostDuplicate(USkeleton *this,bool param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FGuid *pFVar6;
  FGuid FStack_18;
  
  if (param_1) {
    return;
  }
  pFVar6 = FGuid::NewGuid(&FStack_18);
  uVar2 = pFVar6->B;
  uVar3 = pFVar6->C;
  uVar4 = pFVar6->D;
  (this->Guid).A = pFVar6->A;
  (this->Guid).B = uVar2;
  (this->Guid).C = uVar3;
  (this->Guid).D = uVar4;
  if ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Guid.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                       ,0x6f6,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// PostInitProperties @ 1475e9e60

void __thiscall USkeleton::PostInitProperties(USkeleton *this)

{
  bool bVar1;
  
  UObject::PostInitProperties((UObject *)this);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    RegenerateGuid(this);
    return;
  }
  return;
}

// PostLoad @ 1475e9ff0

void __thiscall USkeleton::PostLoad(USkeleton *this)

{
  TArray<TSoftObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UAnimCurveMetaData *pUVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  UObject::PostLoad((UObject *)this);
  FLLMScope::FLLMScope(local_res8,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Animation,true);
  if (((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Guid.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                            ,0x163,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar1 = &this->CompatibleSkeletons;
  FVar8.Data = (FScriptContainerElement *)0x0;
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  iVar5 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  pFVar2 = pFVar7 + (longlong)(this->CompatibleSkeletons).ArrayNum * 0x28;
  do {
    if (pFVar7 == pFVar2) {
      if (pTVar1 != (TArray<TSoftObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_> *)&local_38) {
        DestructItems<TSoftObjectPtr<USkeleton>,int>
                  ((TSoftObjectPtr<USkeleton> *)(pTVar1->AllocatorInstance).Data,
                   (this->CompatibleSkeletons).ArrayNum);
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        FVar8.Data = (FScriptContainerElement *)0x0;
        (pTVar1->AllocatorInstance).Data = local_38.Data;
        iVar5 = 0;
        (this->CompatibleSkeletons).ArrayNum = (int)local_30;
        (this->CompatibleSkeletons).ArrayMax = local_30._4_4_;
        local_30 = 0;
        local_38.Data = (FScriptContainerElement *)0x0;
      }
      DestructItems<TSoftObjectPtr<USkeleton>,int>((TSoftObjectPtr<USkeleton> *)FVar8.Data,iVar5);
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      pUVar6 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                         ((IInterface_AssetUserData *)&this->_padding_);
      if (pUVar6 != (UAnimCurveMetaData *)0x0) {
        (**(code **)(pUVar6->_padding_ + 0x40))(&pUVar6->_padding_,this);
      }
      FMemScope::~FMemScope(&local_res10);
      FLLMScope::~FLLMScope(local_res8);
      return;
    }
    if (*(longlong *)(pFVar7 + 8) != 0) {
      if ((FVar8.Data <= pFVar7) &&
         (local_30._4_4_ = (int)((ulonglong)local_30 >> 0x20), lVar9 = (longlong)local_30._4_4_,
         pFVar7 < FVar8.Data + lVar9 * 0x28)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
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
        FVar8.Data = local_38.Data;
        iVar5 = (int)local_30;
      }
      if (iVar5 == local_30._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&local_38,(int *)((longlong)&local_30 + 4));
        FVar8.Data = local_38.Data;
      }
      local_30 = CONCAT44(local_30._4_4_,iVar5 + 1);
      *(undefined8 *)(FVar8.Data + (longlong)iVar5 * 0x28) = *(undefined8 *)pFVar7;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(FVar8.Data + ((longlong)iVar5 * 5 + 1) * 8),
                 (FSoftObjectPath *)(pFVar7 + 8));
      FVar8.Data = local_38.Data;
      iVar5 = (int)local_30;
    }
    pFVar7 = pFVar7 + 0x28;
  } while( true );
}

// RebuildLinkup @ 1475ebf20

void __thiscall USkeleton::RebuildLinkup(USkeleton *this,USkinnedAsset *param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  USkinnedAsset *local_res18 [2];
  
  SRWLock = &this->SkinnedAssetLinkupCacheLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  uVar3 = 0;
  uVar4 = uVar3;
  if (param_1 != (USkinnedAsset *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    uVar3 = local_res8.ObjectIndex;
    local_res10 = local_res8;
    uVar4 = local_res8.ObjectSerialNumber;
  }
  if (*(int *)&(this->SkinnedAssetLinkupCache).field_0x8 !=
      *(int *)&(this->SkinnedAssetLinkupCache).field_0x34) {
    uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
    uVar6 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
    uVar5 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 0xd;
    uVar4 = (uVar3 - uVar5) - uVar6 ^ uVar5 >> 0xc;
    uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar3 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 3;
    uVar5 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 10;
    TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TObjectKey<USkinnedAsset>_>
              ((TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
                *)&this->SkinnedAssetLinkupCache,(uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xf,
               (TObjectKey<USkinnedAsset> *)&local_res10);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  AddMeshLinkupData(this,param_1);
  return;
}

// RecreateBoneTree @ 1475ecc50

bool __thiscall USkeleton::RecreateBoneTree(USkeleton *this,USkinnedAsset *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  if (param_1 == (USkinnedAsset *)0x0) {
    return false;
  }
  RegenerateGuid(this);
  uVar8 = 0;
  piVar1 = &(this->BoneTree).ArrayMax;
  (this->BoneTree).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->BoneTree).AllocatorInstance,0,piVar1);
  }
  FReferenceSkeleton::Empty(&this->ReferenceSkeleton,0);
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId884,"USkeleton::MergeAllBonesToBoneTree",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
               ,0x374);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId884);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  lVar6 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,*(int *)(lVar6 + 8),&local_28.AllocatorInstance,&local_28.ArrayNum,
             &local_28.ArrayMax);
  lVar6 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
  uVar9 = uVar8;
  if (0 < *(int *)(lVar6 + 8)) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < local_28.ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *(uint *)(local_28.AllocatorInstance.Data + uVar9) = uVar7;
      uVar8 = (ulonglong)(uVar7 + 1);
      lVar6 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
      uVar9 = uVar9 + 4;
    } while ((int)(uVar7 + 1) < *(int *)(lVar6 + 8));
  }
  if (local_28.ArrayNum < 1) {
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar3 = false;
  }
  else {
    bVar3 = MergeBonesToBoneTree(this,param_1,&local_28,true);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
      return bVar3;
    }
  }
  return bVar3;
}

// RefreshSkeletonMetaData @ 1475ed870

void __thiscall USkeleton::RefreshSkeletonMetaData(USkeleton *this)

{
  UAnimCurveMetaData *pUVar1;
  
  pUVar1 = IInterface_AssetUserData::GetAssetUserData<UAnimCurveMetaData>
                     ((IInterface_AssetUserData *)&this->_padding_);
  if (pUVar1 != (UAnimCurveMetaData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001475ed896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x40))(&pUVar1->_padding_,this);
    return;
  }
  return;
}

// RegenerateGuid @ 1475ed8b0

void __thiscall USkeleton::RegenerateGuid(USkeleton *this)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FGuid *pFVar6;
  FGuid local_18;
  
  pFVar6 = FGuid::NewGuid(&local_18);
  uVar2 = pFVar6->B;
  uVar3 = pFVar6->C;
  uVar4 = pFVar6->D;
  (this->Guid).A = pFVar6->A;
  (this->Guid).B = uVar2;
  (this->Guid).C = uVar3;
  (this->Guid).D = uVar4;
  if ((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) && (this->Guid).A == 0)
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Guid.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                       ,0x6f6,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RegenerateVirtualBoneGuid @ 1475ed9d0

void __thiscall USkeleton::RegenerateVirtualBoneGuid(USkeleton *this)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  FGuid *pFVar6;
  FGuid local_18;
  
  pFVar6 = FGuid::NewGuid(&local_18);
  uVar2 = pFVar6->B;
  uVar3 = pFVar6->C;
  uVar4 = pFVar6->D;
  (this->VirtualBoneGuid).A = pFVar6->A;
  (this->VirtualBoneGuid).B = uVar2;
  (this->VirtualBoneGuid).C = uVar3;
  (this->VirtualBoneGuid).D = uVar4;
  if ((((this->VirtualBoneGuid).D == 0 && (this->VirtualBoneGuid).C == 0) &&
      (this->VirtualBoneGuid).B == 0) && (this->VirtualBoneGuid).A == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("VirtualBoneGuid.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                       ,0x6fc,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RegisterSlotNode @ 1475edc80

bool __thiscall USkeleton::RegisterSlotNode(USkeleton *this,FName *param_1)

{
  bool bVar1;
  
  bVar1 = ContainsSlotName(this,param_1);
  if (!bVar1) {
    SetSlotGroupName(this,param_1,&FAnimSlotGroup::DefaultGroupName);
    return true;
  }
  return false;
}

// RemoveCompatibleSkeleton @ 1475f38e0

void __thiscall
USkeleton::RemoveCompatibleSkeleton(USkeleton *this,TSoftObjectPtr<USkeleton> *param_1)

{
  TArray<TSoftObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_>::Remove
            (&this->CompatibleSkeletons,param_1);
  return;
}

// RemoveCompatibleSkeleton @ 1475f3900

void __thiscall USkeleton::RemoveCompatibleSkeleton(USkeleton *this,USkeleton *param_1)

{
  USkeleton *local_res8;
  undefined1 local_38 [24];
  FUtf8String local_20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_38._0_8_ = 0;
  local_38._16_8_ = 0;
  local_38._8_8_ = 0;
  FUtf8String::Reset(&local_20,0);
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USkeleton *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res8);
  TArray<TSoftObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_>::Remove
            (&this->CompatibleSkeletons,(TSoftObjectPtr<USkeleton> *)local_38);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// RemoveLinkup @ 1475f4280

void __thiscall USkeleton::RemoveLinkup(USkeleton *this,USkinnedAsset *param_1)

{
  FPlatformRWLock *SRWLock;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  USkinnedAsset *local_res18;
  
  SRWLock = &this->SkinnedAssetLinkupCacheLock;
  if (SRWLock == (FPlatformRWLock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  uVar3 = 0;
  uVar4 = uVar3;
  if (param_1 != (USkinnedAsset *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    uVar3 = local_res8.ObjectIndex;
    local_res10 = local_res8;
    uVar4 = local_res8.ObjectSerialNumber;
  }
  if (*(int *)&(this->SkinnedAssetLinkupCache).field_0x8 !=
      *(int *)&(this->SkinnedAssetLinkupCache).field_0x34) {
    uVar3 = uVar3 - uVar4 ^ uVar4 >> 0xd;
    uVar6 = (-0x61c88647 - uVar3) - uVar4 ^ uVar3 << 8;
    uVar5 = (uVar4 - uVar6) - uVar3 ^ uVar6 >> 0xd;
    uVar4 = (uVar3 - uVar5) - uVar6 ^ uVar5 >> 0xc;
    uVar6 = (uVar6 - uVar4) - uVar5 ^ uVar4 << 0x10;
    uVar3 = (uVar5 - uVar6) - uVar4 ^ uVar6 >> 5;
    uVar4 = (uVar4 - uVar3) - uVar6 ^ uVar3 >> 3;
    uVar5 = (uVar6 - uVar4) - uVar3 ^ uVar4 << 10;
    TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
    ::RemoveImpl<TObjectKey<USkinnedAsset>_>
              ((TSet<TTuple<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>_>,TDefaultMapHashableKeyFuncs<TObjectKey<USkinnedAsset>,TUniquePtr<FSkeletonToMeshLinkup,TDefaultDelete<FSkeletonToMeshLinkup>_>,0>,FDefaultSetAllocator>
                *)&this->SkinnedAssetLinkupCache,(uVar3 - uVar5) - uVar4 ^ uVar5 >> 0xf,
               (TObjectKey<USkinnedAsset> *)&local_res10);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  return;
}

// RemoveSlotGroup @ 1475f4880

void __thiscall USkeleton::RemoveSlotGroup(USkeleton *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  FName FVar3;
  FName *pFVar4;
  uint uVar5;
  longlong lVar6;
  FName *pFVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FName FVar12;
  int iVar13;
  bool bVar14;
  FName local_res18;
  
  pFVar7 = (FName *)(this->SlotGroups).AllocatorInstance.Data;
  pFVar4 = pFVar7 + (longlong)(this->SlotGroups).ArrayNum * 3;
  if (pFVar7 != pFVar4) {
    do {
      if (*pFVar7 == *param_1) goto LAB_1475f48c6;
      pFVar7 = pFVar7 + 3;
    } while (pFVar7 != pFVar4);
  }
  pFVar7 = (FName *)0x0;
LAB_1475f48c6:
  FVar12 = pFVar7[1];
  uVar2 = pFVar7[2].ComparisonIndex.Value;
  FVar1 = (FName)((longlong)FVar12 + (longlong)(int)uVar2 * 8);
  while( true ) {
    if (pFVar7[2].ComparisonIndex.Value != uVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res18)
      ;
    }
    if (FVar12 == FVar1) break;
    FVar3 = *(FName *)FVar12;
    local_res18 = FVar3;
    if (*(int *)&(this->SlotToGroupNameMap).field_0x8 !=
        *(int *)&(this->SlotToGroupNameMap).field_0x34) {
      uVar5 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      RemoveImpl<FName>((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                         *)&this->SlotToGroupNameMap,FVar3.Number + uVar5,&local_res18);
    }
    FVar12 = (FName)((longlong)FVar12 + 8);
  }
  iVar10 = (this->SlotGroups).ArrayNum;
  lVar6 = (longlong)iVar10;
  if (iVar10 != 0) {
    iVar13 = 0;
    pFVar4 = (FName *)(this->SlotGroups).AllocatorInstance.Data;
    bVar14 = *pFVar4 != *param_1;
    lVar8 = 0;
    iVar10 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar11 = iVar10 + 1;
      if (lVar8 < lVar6) {
        pFVar7 = pFVar4 + lVar8 * 3;
        do {
          if (bVar14 != (*pFVar7 != *param_1)) break;
          iVar11 = iVar11 + 1;
          lVar8 = lVar8 + 1;
          pFVar7 = pFVar7 + 3;
        } while (lVar8 < lVar6);
      }
      iVar9 = iVar11 - iVar10;
      if (bVar14 == false) {
        DestructItems<FAnimSlotGroup,int>((FAnimSlotGroup *)(pFVar4 + (longlong)iVar10 * 3),iVar9);
      }
      else {
        if (iVar13 != iVar10) {
          memmove(pFVar4 + (longlong)iVar13 * 3,pFVar4 + (longlong)iVar10 * 3,(longlong)iVar9 * 0x18
                 );
        }
        iVar13 = iVar13 + iVar9;
      }
      bVar14 = (bool)(bVar14 ^ 1);
      iVar10 = iVar11;
    } while (lVar8 < lVar6);
    (this->SlotGroups).ArrayNum = iVar13;
  }
  return;
}

// RemoveSlotName @ 1475f4a30

void __thiscall USkeleton::RemoveSlotName(USkeleton *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName *pFVar6;
  longlong lVar7;
  FName FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  FName *local_res8;
  FName local_res18;
  
  pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->SlotToGroupNameMap,*param_1);
  FVar8 = FAnimSlotGroup::DefaultGroupName;
  if (pFVar6 != (FName *)0x0) {
    FVar8 = *pFVar6;
  }
  FVar1 = *param_1;
  if (*(int *)&(this->SlotToGroupNameMap).field_0x8 !=
      *(int *)&(this->SlotToGroupNameMap).field_0x34) {
    local_res18 = FVar1;
    uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    iVar5 = TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                                 *)&this->SlotToGroupNameMap,FVar1.Number + uVar4,&local_res18);
    if (0 < iVar5) {
      local_res8 = (FName *)(this->SlotGroups).AllocatorInstance.Data;
      pFVar6 = local_res8 + (longlong)(this->SlotGroups).ArrayNum * 3;
      for (; local_res8 != pFVar6; local_res8 = local_res8 + 3) {
        if (*local_res8 == FVar8) goto LAB_1475f4af0;
      }
      local_res8 = (FName *)0x0;
LAB_1475f4af0:
      if ((((ulonglong)local_res8[1] <= param_1) &&
          (param_1 < (FName *)((longlong)local_res8[1] + (longlong)(int)local_res8[2].Number * 8)))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = local_res8[2].ComparisonIndex.Value;
      lVar7 = (longlong)(int)uVar4;
      if (uVar4 != 0) {
        uVar11 = 0;
        FVar8 = local_res8[1];
        bVar3 = *(FName *)FVar8 != *param_1;
        lVar9 = 0;
        uVar4 = 0;
        do {
          lVar9 = lVar9 + 1;
          uVar10 = uVar4 + 1;
          if (lVar9 < lVar7) {
            do {
              if (bVar3 != (*(FName *)((longlong)FVar8 + lVar9 * 8) != *param_1)) break;
              uVar10 = uVar10 + 1;
              lVar9 = lVar9 + 1;
            } while (lVar9 < lVar7);
          }
          if (bVar3 != false) {
            if (uVar11 != uVar4) {
              memmove((longlong *)((longlong)FVar8 + (longlong)(int)uVar11 * 8),
                      (longlong *)((longlong)FVar8 + (longlong)(int)uVar4 * 8),
                      (longlong)(int)(uVar10 - uVar4) << 3);
            }
            uVar11 = uVar11 + (uVar10 - uVar4);
          }
          bVar3 = (bool)(bVar3 ^ 1);
          uVar4 = uVar10;
        } while (lVar9 < lVar7);
        local_res8[2].ComparisonIndex.Value = uVar11;
      }
    }
  }
  return;
}

// RemoveUserDataOfClass @ 1475f4c30

void __thiscall
USkeleton::RemoveUserDataOfClass(USkeleton *this,TSubclassOf<UAssetUserData> param_1)

{
  void *_Dst;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  uint uVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  
  pUVar10 = (UObject *)0x0;
  pUVar7 = pUVar10;
  pUVar9 = pUVar10;
  if (0 < *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8) {
    do {
      uVar8 = (uint)pUVar7;
      uVar4 = 0;
      if ((int)uVar8 < *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8) {
        uVar4 = ~uVar8 >> 0x1f;
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
      lVar1 = *(longlong *)
               (&pUVar9->field_0x0 + *(longlong *)&(this->CachedSoftObjectPtr).SoftObjectPtr);
      if (lVar1 != 0) {
        pUVar7 = *(UObject **)param_1.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar7 != (UObject *)0x0) goto LAB_1475f4cee;
LAB_1475f4d1c:
          pUVar7 = pUVar10;
        }
        else {
          if (pUVar7 == (UObject *)0x0) goto LAB_1475f4d1c;
          UE::GC::MarkAsReachable(pUVar7);
LAB_1475f4cee:
          pUVar6 = UAssetUserData::StaticClass();
          if (pUVar6 == (UClass *)0x0) goto LAB_1475f4d1c;
          iVar5 = (int)pUVar6->_padding_;
          if ((*(int *)&pUVar7[1].field_0x10 < iVar5) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar5 * 8)
              != &pUVar6->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_1475f4d1c;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if ((*(int *)&pUVar7[1].field_0x10 <= *(int *)(lVar1 + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)&pUVar7[1].field_0x10 * 8) ==
            &pUVar7[1].field_0x8)) {
          uVar4 = 0;
          if ((int)uVar8 < *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          _Dst = (void *)(*(longlong *)&(this->CachedSoftObjectPtr).SoftObjectPtr +
                         (longlong)(int)uVar8 * 8);
          iVar5 = (*(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8 - uVar8) + -1;
          if (iVar5 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar5 << 3);
          }
          iVar5 = *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8 + -1;
          *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8 = iVar5;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)&this->CachedSoftObjectPtr,iVar5,
                     (int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0xc);
          return;
        }
      }
      pUVar7 = (UObject *)(ulonglong)(uVar8 + 1);
      pUVar9 = (UObject *)&pUVar9->field_0x8;
    } while ((int)(uVar8 + 1) < *(int *)&(this->CachedSoftObjectPtr).SoftObjectPtr.field_0x8);
  }
  return;
}

// RemoveVirtualBones @ 1475f4ef0

void __thiscall
USkeleton::RemoveVirtualBones(USkeleton *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  TTuple<FName,int> *pTVar8;
  FGuid *pFVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FName *pFVar14;
  uint uVar15;
  int *piVar16;
  FName *pFVar17;
  FName *pFVar18;
  ulonglong uVar19;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  uint local_64;
  FName *local_60;
  FGuid local_58;
  
  local_64 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)local_64;
  pFVar17 = (FName *)(param_1->AllocatorInstance).Data;
  local_60 = pFVar17 + uVar10;
  pFVar14 = local_60;
  local_res10 = param_1;
  do {
    while( true ) {
      uVar12 = 0;
      if (local_res10->ArrayNum != (int)uVar10) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar17 == pFVar14) {
        pFVar9 = FGuid::NewGuid(&local_58);
        uVar7 = pFVar9->B;
        uVar15 = pFVar9->C;
        uVar5 = pFVar9->D;
        (this->VirtualBoneGuid).A = pFVar9->A;
        (this->VirtualBoneGuid).B = uVar7;
        (this->VirtualBoneGuid).C = uVar15;
        (this->VirtualBoneGuid).D = uVar5;
        if (((((this->VirtualBoneGuid).D == 0 && (this->VirtualBoneGuid).C == 0) &&
             (this->VirtualBoneGuid).B == 0) && (this->VirtualBoneGuid).A == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("VirtualBoneGuid.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                               ,0x6fc,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        HandleVirtualBoneChanges(this);
        pFVar13 = (this->BlendProfiles).AllocatorInstance.Data;
        iVar11 = (this->BlendProfiles).ArrayNum;
        pFVar1 = pFVar13 + (longlong)iVar11 * 8;
        while( true ) {
          if ((this->BlendProfiles).ArrayNum != iVar11) {
            `TCheckedPointerIterator<TObjectPtr<UBlendProfile>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_68);
          }
          if (pFVar13 == pFVar1) break;
          UBlendProfile::RefreshBoneEntriesFromName(*(UBlendProfile **)pFVar13);
          pFVar13 = pFVar13 + 8;
        }
        return;
      }
      iVar11 = (this->VirtualBones).ArrayNum;
      uVar10 = uVar12;
      uVar19 = uVar12;
      if (0 < iVar11) break;
LAB_1475f51a9:
      pFVar17 = pFVar17 + 1;
      uVar10 = (ulonglong)local_64;
    }
    do {
      uVar15 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar15 < iVar11) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = local_60;
      if (*(FName *)((this->VirtualBones).AllocatorInstance.Data + uVar12 + 0x10) == *pFVar17) {
        if (uVar15 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar15 < (this->VirtualBones).ArrayNum) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar11 = (this->VirtualBones).ArrayNum;
          pFVar18 = (FName *)(this->VirtualBones).AllocatorInstance.Data;
          FVar3 = pFVar18[uVar19 * 3];
          pFVar14 = pFVar18 + (longlong)iVar11 * 3;
          while( true ) {
            if ((this->VirtualBones).ArrayNum != iVar11) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FVirtualBone,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (pFVar18 == pFVar14) break;
            if (*pFVar18 == *pFVar17) {
              *pFVar18 = FVar3;
            }
            pFVar18 = pFVar18 + 3;
          }
          uVar7 = 0;
          if ((int)uVar15 < (this->VirtualBones).ArrayNum) {
            uVar7 = ~uVar15 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar1 = (this->VirtualBones).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18;
          iVar11 = (this->VirtualBones).ArrayNum + ~uVar15;
          if (iVar11 != 0) {
            memmove(pFVar1,pFVar1 + 0x18,(longlong)iVar11 * 0x18);
          }
          piVar16 = &(this->VirtualBones).ArrayNum;
          *piVar16 = *piVar16 + -1;
          pFVar14 = local_60;
          if (*pFVar17 != (FName)0x0) {
            pTVar8 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                     ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                             *)&(this->ReferenceSkeleton).FinalNameToIndexMap,*pFVar17);
            piVar16 = (int *)&pTVar8->field_0x8;
            if (pTVar8 == (TTuple<FName,int> *)0x0) {
              piVar16 = (int *)0x0;
            }
            pFVar14 = local_60;
            if ((piVar16 != (int *)0x0) && (iVar11 = *piVar16, iVar11 != -1)) {
              pFVar13 = (this->BlendProfiles).AllocatorInstance.Data;
              iVar2 = (this->BlendProfiles).ArrayNum;
              pFVar1 = pFVar13 + (longlong)iVar2 * 8;
              while( true ) {
                if ((this->BlendProfiles).ArrayNum != iVar2) {
                  local_res20[0] = 0;
                  `TCheckedPointerIterator<TObjectPtr<UBlendProfile>,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_res20);
                }
                pFVar14 = local_60;
                if (pFVar13 == pFVar1) break;
                UBlendProfile::RemoveEntry(*(UBlendProfile **)pFVar13,iVar11);
                pFVar13 = pFVar13 + 8;
              }
            }
          }
        }
        goto LAB_1475f51a9;
      }
      iVar11 = (this->VirtualBones).ArrayNum;
      uVar12 = uVar12 + 0x18;
      uVar10 = (ulonglong)(uVar15 + 1);
      uVar19 = uVar19 + 1;
    } while ((int)(uVar15 + 1) < iVar11);
    pFVar17 = pFVar17 + 1;
    uVar10 = (ulonglong)local_64;
  } while( true );
}

// RenameBlendProfile @ 1475f55a0

UBlendProfile * __thiscall
USkeleton::RenameBlendProfile(USkeleton *this,FName *param_1,FName *param_2)

{
  code *pcVar1;
  char cVar2;
  UBlendProfile *pUVar3;
  FString *pFVar4;
  UBlendProfile *pUVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  pUVar3 = GetBlendProfile(this,param_2);
  if (pUVar3 == (UBlendProfile *)0x0) {
    pUVar3 = GetBlendProfile(this,param_1);
    if (pUVar3 != (UBlendProfile *)0x0) {
      pcVar1 = *(code **)(pUVar3->_padding_ + 0x170);
      pFVar4 = ::FName::ToString(param_2,&local_18);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      cVar2 = (*pcVar1)(pUVar3,pwVar6,this,0x10);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      pUVar5 = (UBlendProfile *)0x0;
      if (cVar2 != '\0') {
        pUVar5 = pUVar3;
      }
      return pUVar5;
    }
  }
  return (UBlendProfile *)0x0;
}

// RenameSlotName @ 1475f5660

void __thiscall USkeleton::RenameSlotName(USkeleton *this,FName *param_1,FName *param_2)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FName local_res8;
  
  bVar2 = ContainsSlotName(this,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainsSlotName(OldName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                         ,0x692,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->SlotToGroupNameMap,*param_1);
  local_res8 = FAnimSlotGroup::DefaultGroupName;
  if (pFVar3 != (FName *)0x0) {
    local_res8 = *pFVar3;
  }
  RemoveSlotName(this,param_1);
  SetSlotGroupName(this,param_2,&local_res8);
  return;
}

// RenameVirtualBone @ 1475f5700

void __thiscall USkeleton::RenameVirtualBone(USkeleton *this,FName param_1,FName param_2)

{
  FName *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  FGuid *pFVar10;
  TTuple<FName,int> *pTVar11;
  FScriptContainerElement *pFVar12;
  FName *pFVar13;
  int *piVar14;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  FGuid local_48;
  
  iVar3 = (this->VirtualBones).ArrayNum;
  pFVar13 = (FName *)(this->VirtualBones).AllocatorInstance.Data;
  bVar9 = false;
  pFVar1 = pFVar13 + (longlong)iVar3 * 3;
  while( true ) {
    if ((this->VirtualBones).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FVirtualBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar13 == pFVar1) break;
    if ((pFVar13[2] == param_1) && (pFVar13[2] = param_2, !bVar9)) {
      bVar9 = true;
    }
    if ((*pFVar13 == param_1) && (*pFVar13 = param_2, !bVar9)) {
      bVar9 = true;
    }
    pFVar13 = pFVar13 + 3;
  }
  if (bVar9) {
    pFVar10 = FGuid::NewGuid(&local_48);
    uVar6 = pFVar10->B;
    uVar7 = pFVar10->C;
    uVar8 = pFVar10->D;
    (this->VirtualBoneGuid).A = pFVar10->A;
    (this->VirtualBoneGuid).B = uVar6;
    (this->VirtualBoneGuid).C = uVar7;
    (this->VirtualBoneGuid).D = uVar8;
    if (((((this->VirtualBoneGuid).D == 0 && (this->VirtualBoneGuid).C == 0) &&
         (this->VirtualBoneGuid).B == 0) && (this->VirtualBoneGuid).A == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("VirtualBoneGuid.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                           ,0x6fc,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    HandleVirtualBoneChanges(this);
    if (param_2 != (FName)0x0) {
      pTVar11 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                        *)&(this->ReferenceSkeleton).FinalNameToIndexMap,param_2);
      piVar14 = (int *)&pTVar11->field_0x8;
      if (pTVar11 == (TTuple<FName,int> *)0x0) {
        piVar14 = (int *)0x0;
      }
      if ((piVar14 != (int *)0x0) && (iVar3 = *piVar14, iVar3 != -1)) {
        pFVar12 = (this->BlendProfiles).AllocatorInstance.Data;
        iVar4 = (this->BlendProfiles).ArrayNum;
        pFVar2 = pFVar12 + (longlong)iVar4 * 8;
        while( true ) {
          if ((this->BlendProfiles).ArrayNum != iVar4) {
            `TCheckedPointerIterator<TObjectPtr<UBlendProfile>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res20);
          }
          if (pFVar12 == pFVar2) break;
          UBlendProfile::RefreshBoneEntry(*(UBlendProfile **)pFVar12,iVar3);
          pFVar12 = pFVar12 + 8;
        }
      }
    }
  }
  return;
}

// Serialize @ 1475fa320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USkeleton::Serialize(USkeleton *this,FArchive *param_1)

{
  FReferenceSkeleton *pFVar1;
  TArray<FMeshBoneInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TMap<FName,FReferencePose,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>_>
  *pTVar4;
  longlong lVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_USkeleton::Serialize(FArchive_&)_::_2_::FStat_STAT_Skeleton_Serialize>
  FVar19;
  FGuid *pFVar20;
  ulonglong uVar21;
  TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
  *this_00;
  FName FVar22;
  int iVar23;
  uint uVar24;
  FScriptContainerElement *local_res18;
  uint local_res20 [2];
  uint local_1a8;
  FColor_u_0 local_1a4;
  undefined8 local_1a0;
  FName local_198;
  undefined8 local_190;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_188;
  FName local_178;
  TPairInitializer<FName_const_&,FReferencePose_const_&> local_168;
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  longlong *local_118;
  undefined1 auStack_110 [16];
  uint uStack_100;
  uint uStack_fc;
  longlong local_f8;
  TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
  *pTStack_f0;
  TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
  *local_e8;
  undefined2 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  FName local_c8;
  FName local_c0;
  FString local_b8;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
  *pTStack_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
  *pTStack_50;
  FGuid local_48;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  iVar23 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Skeleton_Serialize ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USkeleton::Serialize(FArchive_&)_::_2_::FStat_STAT_Skeleton_Serialize>
         )0x0) {
      pFVar18 = ::FName::FName(&local_c8,"STAT_Skeleton_Serialize");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Skeleton_Serialize,*pFVar18,
                 L"USkeleton::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",L"LoadTime",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar19 = StatPtr_STAT_Skeleton_Serialize;
  if (StatPtr_STAT_Skeleton_Serialize ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USkeleton::Serialize(FArchive_&)_::_2_::FStat_STAT_Skeleton_Serialize>
       )0x0) {
    pFVar18 = ::FName::FName(&local_c0,"STAT_Skeleton_Serialize");
    FVar19 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_USkeleton::Serialize(FArchive_&)_::_2_::FStat_STAT_Skeleton_Serialize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Skeleton_Serialize,*pFVar18,
                          L"USkeleton::Serialize","STATGROUP_LoadTime","STATCAT_Advanced",
                          L"LoadTime",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar19;
  bVar12 = false;
  bVar11 = false;
  local_178.ComparisonIndex.Value = 0;
  local_178.Number = 0;
  bVar16 = false;
  bVar15 = false;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_1475fa4d7:
    bVar12 = bVar16;
    bVar11 = bVar15;
    bVar15 = false;
    FVar22 = local_178;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a4._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar11 = true;
      bVar16 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_198.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                   ,0x196);
        bVar12 = true;
        bVar11 = true;
        bVar16 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1475fa4d7;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar15 = true;
  }
  UObject::Serialize((UObject *)this,param_1);
  if (0x135 < *(int *)&param_1->field_0x40) {
    pFVar1 = &this->ReferenceSkeleton;
    TArrayPrivateFriend::Serialize<FMeshBoneInfo,TSizedDefaultAllocator<32>_>
              (param_1,&pFVar1->RawRefBoneInfo);
    TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
              (param_1,&(this->ReferenceSkeleton).RawRefBonePose);
    iVar17 = (int)*(undefined8 *)&param_1->field_0x40;
    if (0x135 < iVar17) {
      TSetPrivateFriend::
      Serialize<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                (param_1,(TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)&(this->ReferenceSkeleton).RawNameToIndexMap);
      iVar17 = (int)*(undefined8 *)&param_1->field_0x40;
    }
    if ((param_1->field_0x28 & 1) != 0) {
      if (((iVar17 < 0x138) && (0 < (this->ReferenceSkeleton).RawRefBoneInfo.ArrayNum)) &&
         (pFVar7 = (pFVar1->RawRefBoneInfo).AllocatorInstance.Data, *(int *)(pFVar7 + 8) != -1)) {
        *(undefined4 *)(pFVar7 + 8) = 0xffffffff;
      }
      if ((param_1->field_0x28 & 1) != 0) {
        pTVar2 = &(this->ReferenceSkeleton).FinalRefBoneInfo;
        if ((FReferenceSkeleton *)pTVar2 != pFVar1) {
          iVar17 = (this->ReferenceSkeleton).RawRefBoneInfo.ArrayNum;
          piVar3 = &(this->ReferenceSkeleton).FinalRefBoneInfo.ArrayMax;
          local_res18 = (pFVar1->RawRefBoneInfo).AllocatorInstance.Data;
          iVar6 = *piVar3;
          (this->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum = iVar17;
          if ((iVar17 == 0) && (iVar6 == 0)) {
            *piVar3 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar17,iVar6,&pTVar2->AllocatorInstance,iVar17,piVar3);
            if (iVar17 != 0) {
              memcpy((pTVar2->AllocatorInstance).Data,local_res18,(longlong)iVar17 * 0xc);
            }
          }
        }
        TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                  (&(this->ReferenceSkeleton).FinalRefBonePose,
                   &(this->ReferenceSkeleton).RawRefBonePose);
        TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
        operator=((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&(this->ReferenceSkeleton).FinalNameToIndexMap,
                  (TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                   *)&(this->ReferenceSkeleton).RawNameToIndexMap);
      }
    }
  }
  if (*(int *)&param_1->field_0x40 < 0x14b) {
    pTVar4 = &this->AnimRetargetSources;
    TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
                *)pTVar4);
    local_e0 = 0;
    stack0xfffffffffffffef8 = local_78._16_16_;
    local_118 = (longlong *)local_78._0_8_;
    auStack_110._0_8_ = local_78._8_8_;
    local_f8 = local_58;
    pTStack_f0 = pTStack_50;
    uVar21 = local_78._24_8_ >> 0x20;
    local_e8 = (TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
                *)pTVar4;
    if (*(int *)(local_78._16_8_ + 0x18) <= local_78._28_4_) goto LAB_1475fa9c7;
    do {
      plVar8 = local_118;
      lVar5 = (longlong)(int)uVar21 * 0x28;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,*local_118 + lVar5);
      lVar9 = *plVar8;
      (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar9 + 8 + lVar5);
      TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
                (param_1,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                         (lVar9 + 0x10 + lVar5));
      uStack_100 = uStack_100 & ~auStack_110._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_110);
      uVar21 = (ulonglong)uStack_fc;
    } while ((int)uStack_fc < *(int *)(auStack_110._8_8_ + 0x18));
    if (((char)local_e0 == '\0') || (local_e0._1_1_ == '\0')) goto LAB_1475fa9c7;
    uVar24 = *(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34;
    this_00 = local_e8;
    if (uVar24 < 4) {
LAB_1475fa9a8:
      iVar23 = 1;
    }
    else {
      uVar21 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_168.Value._0_4_ = (undefined4)lVar5;
      iVar23 = 1 << ((byte)lVar5 & 0x1f);
    }
  }
  else {
    plVar8 = *(longlong **)&param_1->field_0x8;
    if ((param_1->field_0x28 & 1) != 0) {
      if ((uint *)plVar8[1] < (uint *)*plVar8 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))();
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,local_res20);
        }
      }
      else {
        local_res20[0] = *(uint *)*plVar8;
        *plVar8 = *plVar8 + 4;
      }
      local_1a0 = 0;
      local_190 = 0;
      local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.ArrayNum = 0;
      local_188.ArrayMax = 0;
      TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
      ::Empty((TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
               *)&this->AnimRetargetSources,local_res20[0]);
      if (0 < (int)local_res20[0]) {
        local_d8 = &local_1a0;
        local_d0 = &local_190;
        do {
          (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_1a0);
          (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
          (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_190);
          TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
                    (param_1,&local_188);
          TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FReferencePose_const_&>_>
                    ((TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
                      *)&this->AnimRetargetSources,&local_168,(bool *)&local_d8);
          iVar23 = iVar23 + 1;
        } while (iVar23 < (int)local_res20[0]);
      }
      if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.AllocatorInstance.Data);
      }
      goto LAB_1475fa9c7;
    }
    pTVar4 = &this->AnimRetargetSources;
    local_1a8 = *(int *)&(this->AnimRetargetSources).field_0x8 -
                *(int *)&(this->AnimRetargetSources).field_0x34;
    if ((uint *)plVar8[1] < (uint *)*plVar8 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))();
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_1a8);
      }
    }
    else {
      local_1a8 = *(uint *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_a8,
               (TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
                *)pTVar4);
    local_120 = 0;
    stack0xfffffffffffffeb8 = local_a8._16_16_;
    local_158 = (longlong *)local_a8._0_8_;
    auStack_150._0_8_ = local_a8._8_8_;
    local_138 = local_88;
    pTStack_130 = pTStack_80;
    uVar21 = local_a8._24_8_ >> 0x20;
    local_128 = (TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
                 *)pTVar4;
    if (*(int *)(local_a8._16_8_ + 0x18) <= local_a8._28_4_) goto LAB_1475fa9c7;
    do {
      plVar8 = local_158;
      lVar5 = (longlong)(int)uVar21 * 0x28;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,*local_158 + lVar5);
      lVar9 = *plVar8;
      (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimPhysObjectVersion::GUID);
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,lVar9 + 8 + lVar5);
      TArrayPrivateFriend::Serialize<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>
                (param_1,(TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                         (lVar9 + 0x10 + lVar5));
      uStack_140 = uStack_140 & ~auStack_150._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
      uVar21 = (ulonglong)uStack_13c;
    } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
    if (((char)local_120 == '\0') || (local_120._1_1_ == '\0')) goto LAB_1475fa9c7;
    uVar24 = *(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34;
    this_00 = local_128;
    if (uVar24 < 4) goto LAB_1475fa9a8;
    uVar21 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_168.Key._4_4_ = (undefined4)lVar5;
    iVar23 = 1 << ((byte)lVar5 & 0x1f);
  }
  if (((0 < (int)uVar24) && (this_00->HashSize < iVar23)) || (iVar23 < this_00->HashSize)) {
    this_00->HashSize = iVar23;
    TSet<TTuple<FName,FReferencePose>,TDefaultMapHashableKeyFuncs<FName,FReferencePose,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
LAB_1475fa9c7:
  if (*(int *)&param_1->field_0x40 < 0x152) {
    if (2 < (byte)LogAnimation._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_b8,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    pFVar20 = FGuid::NewGuid(&local_48);
    uVar24 = pFVar20->B;
    uVar13 = pFVar20->C;
    uVar14 = pFVar20->D;
    (this->Guid).A = pFVar20->A;
    (this->Guid).B = uVar24;
    (this->Guid).C = uVar13;
    (this->Guid).D = uVar14;
    if (((((this->Guid).D == 0 && (this->Guid).C == 0) && (this->Guid).B == 0) &&
         (this->Guid).A == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Guid.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                            ,0x6f6,L""), bVar16)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    ::operator<<(param_1,&this->Guid);
  }
  if (0x183 < *(int *)&param_1->field_0x40) {
    UObjectBaseUtility::IsTemplate
              ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
    TSetPrivateFriend::
    Serialize<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
              (param_1,(TSet<TTuple<FName,FSmartNameMapping>,TDefaultMapHashableKeyFuncs<FName,FSmartNameMapping,0>,FDefaultSetAllocator>
                        *)&this->SmartNames_DEPRECATED);
  }
  BuildSlotToGroupMap(this,*(int *)&param_1->field_0x40 < 0x1f5);
  iVar23 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if ((1 < iVar23) &&
     (FStripDataFlags::FStripDataFlags
                ((FStripDataFlags *)&local_res18,param_1,'\0',&GOldestLoadablePackageFileUEVersion),
     ((ulonglong)local_res18 & 1) == 0)) {
    TArrayPrivateFriend::Serialize<FName,TSizedDefaultAllocator<32>_>
              (param_1,&this->ExistingMarkerNames);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    FReferenceSkeleton::RebuildRefSkeleton(&this->ReferenceSkeleton,this,false);
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar15) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// Serialize @ 1475fac20

void __thiscall USkeleton::Serialize(USkeleton *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetBoneTranslationRetargetingMode @ 1475fb7c0

void __thiscall
USkeleton::SetBoneTranslationRetargetingMode(USkeleton *this,int param_1,Type param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (param_1 < (this->BoneTree).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (this->BoneTree).AllocatorInstance.Data[param_1] = SUB41(param_2,0);
  if (param_3) {
    uVar6 = param_1 + 1;
    iVar1 = (this->ReferenceSkeleton).RawRefBoneInfo.ArrayNum;
    for (lVar7 = (longlong)(int)uVar6; lVar7 < iVar1; lVar7 = lVar7 + 1) {
      if ((param_1 != -1) && (param_1 < (int)uVar6)) {
        iVar4 = FReferenceSkeleton::GetParentIndexInternal
                          (&this->ReferenceSkeleton,uVar6,
                           &(this->ReferenceSkeleton).FinalRefBoneInfo);
        do {
          if (iVar4 == param_1) {
            uVar5 = 0;
            if ((int)uVar6 < (this->BoneTree).ArrayNum) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            (this->BoneTree).AllocatorInstance.Data[lVar7] = SUB41(param_2,0);
            break;
          }
          iVar4 = FReferenceSkeleton::GetParentIndexInternal
                            (&this->ReferenceSkeleton,iVar4,
                             &(this->ReferenceSkeleton).FinalRefBoneInfo);
        } while (iVar4 != -1);
      }
      uVar6 = uVar6 + 1;
    }
  }
  return;
}

// SetPreviewMesh @ 1475fd450

void __thiscall USkeleton::SetPreviewMesh(USkeleton *this,USkeletalMesh *param_1,bool param_2)

{
  return;
}

// SetSlotGroupName @ 1475fd720

void __thiscall USkeleton::SetSlotGroupName(USkeleton *this,FName *param_1,FName *param_2)

{
  FName FVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  uint uVar9;
  FName *pFVar10;
  FName *pFVar11;
  FName FVar12;
  FName *local_38;
  FName *local_30;
  
  pFVar8 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>::
           Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                 *)&this->SlotToGroupNameMap,*param_1);
  if (pFVar8 == (FName *)0x0) goto LAB_1475fd8c8;
  if (*pFVar8 != *param_2) {
    pFVar10 = (FName *)(this->SlotGroups).AllocatorInstance.Data;
    pFVar11 = pFVar10 + (longlong)(this->SlotGroups).ArrayNum * 3;
    for (; pFVar10 != pFVar11; pFVar10 = pFVar10 + 3) {
      if (*pFVar10 == *pFVar8) {
        uVar7 = pFVar10[2].ComparisonIndex.Value;
        FVar2 = pFVar10[1];
        FVar1 = (FName)((longlong)FVar2 + (longlong)(int)uVar7 * 8);
        if (FVar2 != FVar1) {
          FVar12 = FVar2;
          goto LAB_1475fd7d0;
        }
        break;
      }
    }
  }
  goto LAB_1475fd8bb;
  while (FVar12 = (FName)((longlong)FVar12 + 8), FVar12 != FVar1) {
LAB_1475fd7d0:
    if (*(FName *)FVar12 == *param_1) {
      uVar9 = (uint)((longlong)FVar12 - (longlong)FVar2 >> 3);
      if (uVar9 != 0xffffffff) {
        uVar5 = 0;
        if ((int)(uVar9 + 1) <= (int)uVar7) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
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
        uVar7 = pFVar10[2].ComparisonIndex.Value;
        FVar1 = pFVar10[1];
        iVar6 = uVar7 + ~uVar9;
        if (1 < iVar6) {
          iVar6 = 1;
        }
        if (iVar6 != 0) {
          memmove((FScriptContainerElement *)((longlong)FVar1 + (longlong)(int)uVar9 * 8),
                  (FScriptContainerElement *)((longlong)FVar1 + (longlong)(int)(uVar7 - iVar6) * 8),
                  (longlong)iVar6 << 3);
        }
        pFVar10[2].ComparisonIndex.Value = pFVar10[2].ComparisonIndex.Value - 1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,(ForAnyElementType *)(pFVar10 + 1),pFVar10[2].ComparisonIndex.Value,
                   (int *)&pFVar10[2].Number);
      }
      break;
    }
  }
LAB_1475fd8bb:
  if (*pFVar8 == *param_2) {
    return;
  }
LAB_1475fd8c8:
  pFVar11 = (FName *)(this->SlotGroups).AllocatorInstance.Data;
  pFVar8 = pFVar11 + (longlong)(this->SlotGroups).ArrayNum * 3;
  if (pFVar11 != pFVar8) {
    do {
      if (*pFVar11 == *param_2) {
        if (pFVar11 != (FName *)0x0) goto LAB_1475fd988;
        break;
      }
      pFVar11 = pFVar11 + 3;
    } while (pFVar11 != pFVar8);
  }
  TArray<FAnimSlotGroup,TSizedDefaultAllocator<32>_>::AddZeroed(&this->SlotGroups,1);
  iVar6 = (this->SlotGroups).ArrayNum;
  uVar9 = iVar6 - 1;
  uVar7 = 0;
  if ((int)uVar9 < iVar6) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar11 = (FName *)((this->SlotGroups).AllocatorInstance.Data +
                     ((longlong)(this->SlotGroups).ArrayNum * 3 + -3) * 8);
  *pFVar11 = *param_2;
LAB_1475fd988:
  if ((((ulonglong)pFVar11[1] <= param_1) &&
      (param_1 < (FName *)((longlong)pFVar11[1] + (longlong)(int)pFVar11[2].Number * 8))) &&
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
  uVar7 = pFVar11[2].ComparisonIndex.Value;
  if (uVar7 == pFVar11[2].Number) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)(pFVar11 + 1),(int *)&pFVar11[2].Number);
  }
  pFVar11[2].ComparisonIndex.Value = uVar7 + 1;
  *(FName *)((longlong)pFVar11[1] + (longlong)(int)uVar7 * 8) = *param_1;
  local_38 = param_1;
  local_30 = param_2;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,FName_const_&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              *)&this->SlotToGroupNameMap,
             (TPairInitializer<FName_const_&,FName_const_&> *)&stack0x00000008,(bool *)&local_38);
  return;
}

// SetUseRetargetModesFromCompatibleSkeleton @ 1475fdcc0

void __thiscall USkeleton::SetUseRetargetModesFromCompatibleSkeleton(USkeleton *this,bool param_1)

{
  this->bUseRetargetModesFromCompatibleSkeleton = param_1;
  return;
}

// StaticRegisterNativesUSkeleton @ 1475fee30

void __cdecl USkeleton::StaticRegisterNativesUSkeleton(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_USkeleton_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateReferencePoseFromMesh @ 147602ff0

void __thiscall USkeleton::UpdateReferencePoseFromMesh(USkeleton *this,USkinnedAsset *param_1)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  longlong lVar22;
  TTuple<FName,int> *pTVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  uint *puVar28;
  longlong lVar29;
  longlong lVar30;
  
  if ((param_1 == (USkinnedAsset *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSkinnedAsset",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\Skeleton.cpp"
                          ,0x352,L""), bVar21)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar27 = 0;
  if (0 < (this->ReferenceSkeleton).RawRefBoneInfo.ArrayNum) {
    lVar29 = 0;
    lVar30 = 0;
    do {
      lVar22 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
      uVar24 = 0;
      if ((int)uVar27 < (this->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum) {
        uVar24 = ~uVar27 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = *(FName *)((this->ReferenceSkeleton).FinalRefBoneInfo.AllocatorInstance.Data + lVar30)
      ;
      if (FVar4 != (FName)0x0) {
        pTVar23 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)(lVar22 + 0x40),FVar4);
        puVar28 = (uint *)&pTVar23->field_0x8;
        if (pTVar23 == (TTuple<FName,int> *)0x0) {
          puVar28 = (uint *)0x0;
        }
        if (puVar28 != (uint *)0x0) {
          uVar24 = *puVar28;
          if (uVar24 != 0xffffffff) {
            lVar22 = (**(code **)(*(longlong *)param_1 + 0x318))(param_1);
            uVar25 = 0;
            if ((int)uVar24 < *(int *)(lVar22 + 0x38)) {
              uVar25 = ~uVar24 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar22 = *(longlong *)(lVar22 + 0x30);
            lVar26 = (longlong)(int)uVar24 * 0x60;
            puVar3 = (undefined8 *)(lVar26 + 0x10 + lVar22);
            uVar11 = *puVar3;
            uVar12 = puVar3[1];
            puVar3 = (undefined8 *)(lVar26 + 0x20 + lVar22);
            uVar13 = *puVar3;
            uVar14 = puVar3[1];
            puVar1 = (undefined4 *)(lVar26 + lVar22);
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            puVar3 = (undefined8 *)(lVar26 + 0x30 + lVar22);
            uVar15 = *puVar3;
            uVar16 = puVar3[1];
            puVar3 = (undefined8 *)(lVar26 + 0x50 + lVar22);
            uVar17 = *puVar3;
            uVar18 = puVar3[1];
            puVar3 = (undefined8 *)(lVar26 + 0x40 + lVar22);
            uVar19 = *puVar3;
            uVar20 = puVar3[1];
            uVar24 = 0;
            if ((int)uVar27 < (this->ReferenceSkeleton).RawRefBonePose.ArrayNum) {
              uVar24 = ~uVar27 >> 0x1f;
            }
            if ((uVar24 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar5 = (this->ReferenceSkeleton).RawRefBonePose.AllocatorInstance.Data;
            pFVar2 = pFVar5 + lVar29;
            *(undefined4 *)pFVar2 = uVar7;
            *(undefined4 *)(pFVar2 + 4) = uVar8;
            *(undefined4 *)(pFVar2 + 8) = uVar9;
            *(undefined4 *)(pFVar2 + 0xc) = uVar10;
            *(undefined8 *)(pFVar5 + lVar29 + 0x10) = uVar11;
            *(undefined8 *)(pFVar5 + lVar29 + 0x10 + 8) = uVar12;
            *(undefined8 *)(pFVar5 + lVar29 + 0x20) = uVar13;
            *(undefined8 *)(pFVar5 + lVar29 + 0x20 + 8) = uVar14;
            *(undefined8 *)(pFVar5 + lVar29 + 0x30) = uVar15;
            *(undefined8 *)(pFVar5 + lVar29 + 0x30 + 8) = uVar16;
            *(undefined8 *)(pFVar5 + lVar29 + 0x40) = uVar19;
            *(undefined8 *)(pFVar5 + lVar29 + 0x40 + 8) = uVar20;
            *(undefined8 *)(pFVar5 + lVar29 + 0x50) = uVar17;
            *(undefined8 *)(pFVar5 + lVar29 + 0x50 + 8) = uVar18;
          }
        }
      }
      uVar27 = uVar27 + 1;
      lVar30 = lVar30 + 0xc;
      lVar29 = lVar29 + 0x60;
    } while ((int)uVar27 < (this->ReferenceSkeleton).RawRefBoneInfo.ArrayNum);
  }
  UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
  FReferenceSkeleton::RebuildRefSkeleton(&this->ReferenceSkeleton,this,true);
  return;
}

// _getUObject @ 147605900

UObject * __thiscall USkeleton::_getUObject(USkeleton *this)

{
  return (UObject *)&this[-1].CachedSoftObjectPtr.SoftObjectPtr.field_0x10;
}

// _getUObject`adjustor{8}' @ 14760590c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl USkeleton::_getUObject`adjustor{8}'
   (void)const __ptr64 */

UObject * __thiscall USkeleton::_getUObject_adjustor_8__(USkeleton *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((USkeleton *)&this[-1].AssetUserData.ArrayNum);
  return (UObject *)pUVar1;
}

// execAddCompatibleSkeleton @ 147605920

void __cdecl USkeleton::execAddCompatibleSkeleton(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  UObject *local_res10;
  undefined1 local_38 [24];
  FUtf8String local_20;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_38._0_8_ = 0;
  local_38._16_8_ = 0;
  local_38._8_8_ = 0;
  FUtf8String::Reset(&local_20,0);
  local_res10 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)local_38,(FObjectPtr)&local_res10);
  TArray<TSoftObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TSoftObjectPtr<USkeleton>_>
            ((TArray<TSoftObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_> *)(param_1 + 10),
             (TSoftObjectPtr<USkeleton> *)local_38);
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// execAddCompatibleSkeletonSoft @ 147605a30

void __cdecl
USkeleton::execAddCompatibleSkeletonSoft(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TSoftObjectPtr<USkeleton> *pTVar2;
  undefined1 local_38 [24];
  FUtf8String local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_38._0_8_ = 0;
  local_38._16_8_ = 0;
  local_38._8_8_ = 0;
  FUtf8String::Reset(&local_20,0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pTVar2 = (TSoftObjectPtr<USkeleton> *)local_38;
  if ((TSoftObjectPtr<USkeleton> *)param_2->MostRecentPropertyAddress !=
      (TSoftObjectPtr<USkeleton> *)0x0) {
    pTVar2 = (TSoftObjectPtr<USkeleton> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<TSoftObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TSoftObjectPtr<USkeleton>_const_&>
            ((TArray<TSoftObjectPtr<USkeleton>,TSizedDefaultAllocator<32>_> *)(param_1 + 10),pTVar2)
  ;
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetBlendProfile @ 147606a10

void __cdecl USkeleton::execGetBlendProfile(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UBlendProfile *pUVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetBlendProfile((USkeleton *)param_1,pFVar3);
  *(UBlendProfile **)param_3 = pUVar2;
  return;
}

