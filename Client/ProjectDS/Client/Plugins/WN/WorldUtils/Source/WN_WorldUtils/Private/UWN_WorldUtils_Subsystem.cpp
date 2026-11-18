// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 50

// StaticClass @ 14a025a10

UClass * __cdecl UWN_WorldUtils_Subsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_WorldUtils_Subsystem",
               &Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.InnerSingleton,
               StaticRegisterNativesUWN_WorldUtils_Subsystem,0x288,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_WorldUtils_Subsystem>,
               InternalVTableHelperCtorCaller<UWN_WorldUtils_Subsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.InnerSingleton;
}

// UWN_WorldUtils_Subsystem @ 14a02df70

UWN_WorldUtils_Subsystem * __thiscall
UWN_WorldUtils_Subsystem::UWN_WorldUtils_Subsystem
          (UWN_WorldUtils_Subsystem *this,FVTableHelper *param_1)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->WN_OnOcclusionVolumeEnter = 0;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeEnter).field_0x8 = 0;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeEnter).field_0x10 = 0;
  *(undefined8 *)&this->WN_OnOcclusionVolumeLeave = 0;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeLeave).field_0x8 = 0;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeLeave).field_0x10 = 0;
  (this->CurrentOcclusionVolume).field0_0x0.DebugPtr = (AWN_OcclusionVolume *)0x0;
  (this->ViewExtension).Object = (FWN_ViewExtension *)0x0;
  (this->ViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->CustomHiddenPrimitiveIDs).Elements = 0;
  *(undefined8 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x20 = 0;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeEnter).field_0x18 = 2;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeLeave).field_0x18 = 2;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  (this->CustomHiddenPrimitiveIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CustomHiddenPrimitiveIDs).HashSize = 0;
  *(undefined8 *)&(this->VolumeShownPrimitiveIDs).Elements = 0;
  *(undefined8 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  (this->VolumeShownPrimitiveIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VolumeShownPrimitiveIDs).HashSize = 0;
  *(undefined8 *)&this->VolumeObserverModes = 0;
  *(undefined8 *)&(this->VolumeObserverModes).field_0x8 = 0;
  *(undefined8 *)&(this->VolumeObserverModes).field_0x20 = 0;
  *(undefined4 *)&(this->VolumeObserverModes).field_0x28 = 0;
  *(undefined4 *)&(this->VolumeObserverModes).field_0x2c = 0x80;
  *(undefined4 *)&(this->VolumeObserverModes).field_0x34 = 0;
  *(undefined4 *)&(this->VolumeObserverModes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VolumeObserverModes).field_0x40 = 0;
  *(undefined4 *)&(this->VolumeObserverModes).field_0x48 = 0;
  this->CurrentZoneDistrictId = 0;
  (this->CurrentAmbientSoundInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentAmbientSoundInfos).ArrayNum = 0;
  (this->CurrentAmbientSoundInfos).ArrayMax = 0;
  *(undefined8 *)&this->WN_OnBGMVolumeChange = 0;
  *(undefined8 *)&(this->WN_OnBGMVolumeChange).field_0x8 = 0;
  *(undefined8 *)&(this->WN_OnBGMVolumeChange).field_0x10 = 0;
  *(undefined8 *)&this->WN_OnAmbientSoundChange = 0;
  *(undefined8 *)&(this->WN_OnAmbientSoundChange).field_0x8 = 0;
  *(undefined8 *)&(this->WN_OnAmbientSoundChange).field_0x10 = 0;
  (this->CurrentBGMVolume).field0_0x0.DebugPtr = (AWN_BGMVolume *)0x0;
  *(undefined8 *)&(this->CurrentAmbientSoundVolumes).Elements = 0;
  *(undefined8 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x20 = 0;
  *(undefined8 *)&(this->WN_OnBGMVolumeChange).field_0x18 = 2;
  *(undefined8 *)&(this->WN_OnAmbientSoundChange).field_0x18 = 2;
  *(undefined4 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x30 = 0xffffffff;
  (this->CurrentAmbientSoundVolumes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentAmbientSoundVolumes).HashSize = 0;
  (this->WorldInfo).field0_0x0.DebugPtr = (UWN_WorldInfo *)0x0;
  (this->WorldEditInfo).field0_0x0.DebugPtr = (UWN_WorldEditInfo *)0x0;
  (this->CachedWorldBounds).IsValid = '\0';
  return this;
}

// UWN_WorldUtils_Subsystem @ 14a02e160

UWN_WorldUtils_Subsystem * __thiscall
UWN_WorldUtils_Subsystem::UWN_WorldUtils_Subsystem(UWN_WorldUtils_Subsystem *this)

{
  UTickableWorldSubsystem::UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->WN_OnOcclusionVolumeEnter = 0;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeEnter).field_0x8 = 0;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeEnter).field_0x10 = 0;
  *(undefined8 *)&this->WN_OnOcclusionVolumeLeave = 0;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeLeave).field_0x8 = 0;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeLeave).field_0x10 = 0;
  (this->CurrentOcclusionVolume).field0_0x0.DebugPtr = (AWN_OcclusionVolume *)0x0;
  (this->ViewExtension).Object = (FWN_ViewExtension *)0x0;
  (this->ViewExtension).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->CustomHiddenPrimitiveIDs).Elements = 0;
  *(undefined8 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x20 = 0;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeEnter).field_0x18 = 2;
  *(undefined8 *)&(this->WN_OnOcclusionVolumeLeave).field_0x18 = 2;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  (this->CustomHiddenPrimitiveIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CustomHiddenPrimitiveIDs).HashSize = 0;
  *(undefined8 *)&(this->VolumeShownPrimitiveIDs).Elements = 0;
  *(undefined8 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  (this->VolumeShownPrimitiveIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VolumeShownPrimitiveIDs).HashSize = 0;
  *(undefined8 *)&this->VolumeObserverModes = 0;
  *(undefined8 *)&(this->VolumeObserverModes).field_0x8 = 0;
  *(undefined8 *)&(this->VolumeObserverModes).field_0x20 = 0;
  *(undefined4 *)&(this->VolumeObserverModes).field_0x28 = 0;
  *(undefined4 *)&(this->VolumeObserverModes).field_0x2c = 0x80;
  *(undefined4 *)&(this->VolumeObserverModes).field_0x34 = 0;
  *(undefined4 *)&(this->VolumeObserverModes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VolumeObserverModes).field_0x40 = 0;
  *(undefined4 *)&(this->VolumeObserverModes).field_0x48 = 0;
  this->CurrentZoneDistrictId = 0;
  (this->CurrentAmbientSoundInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentAmbientSoundInfos).ArrayNum = 0;
  (this->CurrentAmbientSoundInfos).ArrayMax = 0;
  *(undefined8 *)&this->WN_OnBGMVolumeChange = 0;
  *(undefined8 *)&(this->WN_OnBGMVolumeChange).field_0x8 = 0;
  *(undefined8 *)&(this->WN_OnBGMVolumeChange).field_0x10 = 0;
  *(undefined8 *)&this->WN_OnAmbientSoundChange = 0;
  *(undefined8 *)&(this->WN_OnAmbientSoundChange).field_0x8 = 0;
  *(undefined8 *)&(this->WN_OnAmbientSoundChange).field_0x10 = 0;
  (this->CurrentBGMVolume).field0_0x0.DebugPtr = (AWN_BGMVolume *)0x0;
  *(undefined8 *)&(this->CurrentAmbientSoundVolumes).Elements = 0;
  *(undefined8 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x20 = 0;
  *(undefined8 *)&(this->WN_OnBGMVolumeChange).field_0x18 = 2;
  *(undefined8 *)&(this->WN_OnAmbientSoundChange).field_0x18 = 2;
  *(undefined4 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->CurrentAmbientSoundVolumes).Elements.field_0x30 = 0xffffffff;
  (this->CurrentAmbientSoundVolumes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentAmbientSoundVolumes).HashSize = 0;
  (this->WorldInfo).field0_0x0.DebugPtr = (UWN_WorldInfo *)0x0;
  (this->WorldEditInfo).field0_0x0.DebugPtr = (UWN_WorldEditInfo *)0x0;
  (this->CachedWorldBounds).IsValid = '\0';
  return this;
}

// ~UWN_WorldUtils_Subsystem @ 14a02ed70

void __thiscall UWN_WorldUtils_Subsystem::~UWN_WorldUtils_Subsystem(UWN_WorldUtils_Subsystem *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
  (this->CurrentAmbientSoundVolumes).HashSize = 0;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  FVar1 = (this->CurrentAmbientSoundVolumes).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UWN_AmbientSoundVolumeComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UWN_AmbientSoundVolumeComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CurrentAmbientSoundVolumes).Elements);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WN_OnAmbientSoundChange).field_0x8,
             *(int *)&(this->WN_OnAmbientSoundChange).field_0x10);
  pvVar2 = *(void **)&(this->WN_OnAmbientSoundChange).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WN_OnAmbientSoundChange);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WN_OnBGMVolumeChange).field_0x8,
             *(int *)&(this->WN_OnBGMVolumeChange).field_0x10);
  pvVar2 = *(void **)&(this->WN_OnBGMVolumeChange).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WN_OnBGMVolumeChange);
  DestructItems<FWN_AmbientSoundInfo,int>
            ((FWN_AmbientSoundInfo *)(this->CurrentAmbientSoundInfos).AllocatorInstance.Data,
             (this->CurrentAmbientSoundInfos).ArrayNum);
  pFVar3 = (this->CurrentAmbientSoundInfos).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->VolumeObserverModes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->VolumeObserverModes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,enum_EWN_VolumeObserverMode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,enum_EWN_VolumeObserverMode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->VolumeObserverModes);
  (this->VolumeShownPrimitiveIDs).HashSize = 0;
  FVar1 = (this->VolumeShownPrimitiveIDs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VolumeShownPrimitiveIDs).Elements);
  (this->CustomHiddenPrimitiveIDs).HashSize = 0;
  FVar1 = (this->CustomHiddenPrimitiveIDs).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CustomHiddenPrimitiveIDs).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ViewExtension).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WN_OnOcclusionVolumeLeave).field_0x8,
             *(int *)&(this->WN_OnOcclusionVolumeLeave).field_0x10);
  pvVar2 = *(void **)&(this->WN_OnOcclusionVolumeLeave).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WN_OnOcclusionVolumeLeave);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WN_OnOcclusionVolumeEnter).field_0x8,
             *(int *)&(this->WN_OnOcclusionVolumeEnter).field_0x10);
  pvVar2 = *(void **)&(this->WN_OnOcclusionVolumeEnter).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WN_OnOcclusionVolumeEnter);
  UTickableWorldSubsystem::~UTickableWorldSubsystem((UTickableWorldSubsystem *)this);
  return;
}

// operator() @ 14a02f350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `UWN_WorldUtils_Subsystem::GetSoundInfos'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  ulonglong uVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  UWorld *this_00;
  UWN_CommonSubsystem *this_01;
  UClass *pUVar9;
  TTuple<UClass_*,EWN_VolumeObserverMode> *pTVar10;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar11;
  byte bVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  UObject *pUVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar20;
  UObject *pUVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [4];
  int local_124;
  UObject *local_120;
  int local_118;
  FWeakObjectPtr local_110;
  longlong *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  UObject *pUVar19;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_124 = -1;
  this_00 = UWorldSubsystem::GetWorld(*(UWorldSubsystem **)this);
  if ((this_00 == (UWorld *)0x0) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7190265352222147217>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                         ,0x291,"world != nullptr"), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_01 = UWorld::GetSubsystem<UWN_CommonSubsystem>(this_00);
  pUVar21 = (UObject *)0x0;
  iVar13 = -1;
  if (this_01 != (UWN_CommonSubsystem *)0x0) {
    lVar22 = *(longlong *)this;
    pUVar9 = Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister();
    pTVar10 = TSet<TTuple<UClass_*,enum_EWN_VolumeObserverMode>,TDefaultMapHashableKeyFuncs<UClass_*,enum_EWN_VolumeObserverMode,0>,FDefaultSetAllocator>
              ::Find((void *)(lVar22 + 0x140),pUVar9);
    if ((pTVar10 == (TTuple<UClass_*,EWN_VolumeObserverMode> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UWN_CommonSubsystem::GetVolumesEntered
              (this_01,(TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                        *)local_88,pTVar10->field_0x8);
    uVar15 = local_60;
    uStack_fc = 1;
    local_e8 = 0;
    pUVar19 = pUVar21;
    uStack_ec = 0;
    if (local_60 != 0) {
      puVar20 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar20 = local_68;
      }
      pUVar16 = pUVar21;
      local_e8 = 0;
      for (uVar18 = *puVar20; uVar18 == 0; uVar18 = puVar20[(int)uVar18]) {
        uVar18 = (int)pUVar19 + 1;
        pUVar19 = (UObject *)(ulonglong)uVar18;
        local_e8 = (int)pUVar16 + 0x20;
        pUVar16 = (UObject *)(ulonglong)local_e8;
        uStack_ec = local_60;
        if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_14a02f4c1;
      }
      uStack_fc = ~(uVar18 - 1) & uVar18;
      uVar2 = (ulonglong)uStack_fc * 2 + 1;
      lVar22 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_118 = (int)lVar22;
      uStack_ec = local_118 + -1 + local_e8;
      if ((int)local_60 < (int)uStack_ec) {
        uStack_ec = local_60;
      }
    }
LAB_14a02f4c1:
    local_108 = (longlong *)local_88;
    uStack_e4 = local_8c;
    local_f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    uVar18 = local_60 & 0xffffffe0;
    iStack_e0 = local_88._8_4_ - local_54;
    uStack_f0 = 0xffffffff;
    TStack_d0.CurrentBitIndex = uStack_ec;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    uStack_100 = SUB84(pUVar19,0);
    TStack_d0._padding_ = CONCAT44(uStack_fc,uStack_100);
    iVar13 = (int)local_60 >> 5;
    TStack_d0._28_4_ = local_8c;
    TStack_d0.BaseBitIndex = local_e8;
    uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
    bVar12 = (byte)local_60;
    local_d8 = local_108;
    TStack_d0.Array = local_f8;
    if (((int)local_60 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar15 != local_60) {
      puVar20 = (uint *)(local_88 + 0x10);
      if (local_68 != (uint *)0x0) {
        puVar20 = local_68;
      }
      uVar15 = -1 << (bVar12 & 0x1f) & puVar20[iVar13];
      while (uVar15 == 0) {
        iVar13 = iVar13 + 1;
        uVar18 = uVar18 + 0x20;
        uVar15 = local_60;
        if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar13)
        goto LAB_14a02f5d0;
        uVar15 = puVar20[iVar13];
      }
      uVar2 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      uVar15 = (int)lVar22 + -1 + uVar18;
      if ((int)local_60 < (int)uVar15) {
        uVar15 = local_60;
      }
    }
LAB_14a02f5d0:
    do {
      plVar6 = local_d8;
      if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
        `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if (((TStack_d0.CurrentBitIndex == uVar15) &&
          (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
         (plVar6 == (longlong *)local_88)) goto LAB_14a02f6c4;
      local_110 = *(FWeakObjectPtr *)(*plVar6 + (longlong)TStack_d0.CurrentBitIndex * 0x10);
      TVar11 = FWeakObjectPtr::Pin(&local_110);
                    /* WARNING: Load size is inaccurate */
      pUVar19 = *TVar11.Object;
      *(undefined8 *)TVar11.Object = 0;
      if (local_120 != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject(local_120);
        local_120 = (UObject *)0x0;
      }
      if (pUVar19 == (UObject *)0x0) {
LAB_14a02f681:
        pUVar16 = pUVar21;
        if (pUVar19 != (UObject *)0x0) goto LAB_14a02f689;
      }
      else {
        pUVar9 = Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister();
        iVar13 = (int)pUVar9->_padding_;
        if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar13) ||
           (pUVar16 = pUVar19,
           (longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar13 * 8) !=
           &pUVar9->_padding_)) goto LAB_14a02f681;
LAB_14a02f689:
        UEStrongObjectPtr_Private::ReleaseUObject(pUVar19);
        if (pUVar16 != (UObject *)0x0) {
          UWN_WorldUtils_Subsystem::SelectAmbientSoundInfos
                    (*(UWN_WorldUtils_Subsystem **)this,
                     (FWN_AmbientSoundInfo *)&pUVar16[0x2a].field_0x18,
                     *(TArray<FWN_AmbientSoundInfo,TSizedDefaultAllocator<32>_> **)
                      ((longlong)this + 8),&local_124);
        }
      }
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    } while( true );
  }
LAB_14a02f6e4:
  lVar22 = *(longlong *)((longlong)this + 0x10);
  if (*(longlong *)(lVar22 + 0x10) != 0) {
    if (iVar13 < *(int *)(lVar22 + 0x3c)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (*piVar1 < 0) {
        DestructItems<FWN_AmbientSoundInfo,int>
                  ((FWN_AmbientSoundInfo *)pFVar3->Data,*(int *)&pFVar3[1].Data);
        *(undefined4 *)&pFVar3[1].Data = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,0,pFVar3,0,piVar1);
        }
        lVar22 = *(longlong *)((longlong)this + 0x10);
        iVar13 = *(int *)(lVar22 + 0x3c);
      }
      else {
        DestructItems<FWN_AmbientSoundInfo,int>
                  ((FWN_AmbientSoundInfo *)pFVar3->Data,*(int *)&pFVar3[1].Data);
        *(undefined4 *)&pFVar3[1].Data = 0;
        lVar22 = *(longlong *)((longlong)this + 0x10);
        iVar13 = *(int *)(lVar22 + 0x3c);
      }
    }
    else if (iVar13 != *(int *)(lVar22 + 0x3c)) goto LAB_14a02f7e3;
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    iVar8 = *(int *)&pFVar3[1].Data;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar8 + 1;
    pFVar14 = pFVar3->Data;
    lVar17 = (longlong)iVar8 * 0x50;
    *(undefined ***)(pFVar14 + lVar17) = &___7FWN_AmbientSoundInfo__6B_;
    *(undefined8 *)(pFVar14 + lVar17 + 8) = *(undefined8 *)(lVar22 + 8);
    uVar5 = *(undefined8 *)(lVar22 + 0x18);
    *(undefined8 *)(pFVar14 + lVar17 + 0x10) = *(undefined8 *)(lVar22 + 0x10);
    *(undefined8 *)(pFVar14 + lVar17 + 0x10 + 8) = uVar5;
    FUtf8String::FUtf8String
              ((FUtf8String *)(pFVar14 + lVar17 + 0x20),(FUtf8String *)(lVar22 + 0x20));
    *(undefined4 *)(pFVar14 + lVar17 + 0x30) = *(undefined4 *)(lVar22 + 0x30);
    *(undefined4 *)(pFVar14 + lVar17 + 0x34) = *(undefined4 *)(lVar22 + 0x34);
    *(undefined4 *)(pFVar14 + lVar17 + 0x38) = *(undefined4 *)(lVar22 + 0x38);
    *(undefined4 *)(pFVar14 + lVar17 + 0x3c) = *(undefined4 *)(lVar22 + 0x3c);
    uVar5 = *(undefined8 *)(lVar22 + 0x48);
    *(undefined8 *)(pFVar14 + lVar17 + 0x40) = *(undefined8 *)(lVar22 + 0x40);
    *(undefined8 *)(pFVar14 + lVar17 + 0x40 + 8) = uVar5;
  }
LAB_14a02f7e3:
  lVar22 = *(longlong *)((longlong)this + 0x18);
  if (*(longlong *)(lVar22 + 0x10) != 0) {
    if (iVar13 < *(int *)(lVar22 + 0x3c)) {
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      if (*piVar1 < 0) {
        DestructItems<FWN_AmbientSoundInfo,int>
                  ((FWN_AmbientSoundInfo *)pFVar3->Data,*(int *)&pFVar3[1].Data);
        *(undefined4 *)&pFVar3[1].Data = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,0,pFVar3,0,piVar1);
        }
      }
      else {
        DestructItems<FWN_AmbientSoundInfo,int>
                  ((FWN_AmbientSoundInfo *)pFVar3->Data,*(int *)&pFVar3[1].Data);
        *(undefined4 *)&pFVar3[1].Data = 0;
      }
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      lVar22 = *(longlong *)((longlong)this + 0x18);
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      iVar13 = *(int *)&pFVar3[1].Data;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar13 + 1;
      pFVar14 = pFVar3->Data;
      lVar17 = (longlong)iVar13 * 0x50;
      *(undefined ***)(pFVar14 + lVar17) = &___7FWN_AmbientSoundInfo__6B_;
      *(undefined8 *)(pFVar14 + lVar17 + 8) = *(undefined8 *)(lVar22 + 8);
      uVar5 = *(undefined8 *)(lVar22 + 0x18);
      *(undefined8 *)(pFVar14 + lVar17 + 0x10) = *(undefined8 *)(lVar22 + 0x10);
      *(undefined8 *)(pFVar14 + lVar17 + 0x10 + 8) = uVar5;
      FUtf8String::FUtf8String
                ((FUtf8String *)(pFVar14 + lVar17 + 0x20),(FUtf8String *)(lVar22 + 0x20));
      *(undefined4 *)(pFVar14 + lVar17 + 0x30) = *(undefined4 *)(lVar22 + 0x30);
      *(undefined4 *)(pFVar14 + lVar17 + 0x34) = *(undefined4 *)(lVar22 + 0x34);
      *(undefined4 *)(pFVar14 + lVar17 + 0x38) = *(undefined4 *)(lVar22 + 0x38);
      *(undefined4 *)(pFVar14 + lVar17 + 0x3c) = *(undefined4 *)(lVar22 + 0x3c);
      uVar23 = *(undefined4 *)(lVar22 + 0x40);
      uVar24 = *(undefined4 *)(lVar22 + 0x44);
      uVar25 = *(undefined4 *)(lVar22 + 0x48);
      uVar26 = *(undefined4 *)(lVar22 + 0x4c);
    }
    else {
      if (iVar13 != *(int *)(lVar22 + 0x3c)) {
        return;
      }
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
      iVar13 = *(int *)&pFVar3[1].Data;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,pFVar3,piVar1);
      }
      *(int *)&pFVar3[1].Data = iVar13 + 1;
      pFVar14 = pFVar3->Data;
      lVar17 = (longlong)iVar13 * 0x50;
      *(undefined ***)(pFVar14 + lVar17) = &___7FWN_AmbientSoundInfo__6B_;
      *(undefined8 *)(pFVar14 + lVar17 + 8) = *(undefined8 *)(lVar22 + 8);
      uVar5 = *(undefined8 *)(lVar22 + 0x18);
      *(undefined8 *)(pFVar14 + lVar17 + 0x10) = *(undefined8 *)(lVar22 + 0x10);
      *(undefined8 *)(pFVar14 + lVar17 + 0x10 + 8) = uVar5;
      FUtf8String::FUtf8String
                ((FUtf8String *)(pFVar14 + lVar17 + 0x20),(FUtf8String *)(lVar22 + 0x20));
      *(undefined4 *)(pFVar14 + lVar17 + 0x30) = *(undefined4 *)(lVar22 + 0x30);
      *(undefined4 *)(pFVar14 + lVar17 + 0x34) = *(undefined4 *)(lVar22 + 0x34);
      *(undefined4 *)(pFVar14 + lVar17 + 0x38) = *(undefined4 *)(lVar22 + 0x38);
      *(undefined4 *)(pFVar14 + lVar17 + 0x3c) = *(undefined4 *)(lVar22 + 0x3c);
      uVar23 = *(undefined4 *)(lVar22 + 0x40);
      uVar24 = *(undefined4 *)(lVar22 + 0x44);
      uVar25 = *(undefined4 *)(lVar22 + 0x48);
      uVar26 = *(undefined4 *)(lVar22 + 0x4c);
    }
    pFVar14 = pFVar14 + lVar17 + 0x40;
    *(undefined4 *)pFVar14 = uVar23;
    *(undefined4 *)(pFVar14 + 4) = uVar24;
    *(undefined4 *)(pFVar14 + 8) = uVar25;
    *(undefined4 *)(pFVar14 + 0xc) = uVar26;
  }
  return;
LAB_14a02f6c4:
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  iVar13 = local_124;
  goto LAB_14a02f6e4;
}

// AddHiddenPrimitive @ 14a0316c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UWN_WorldUtils_Subsystem::AddHiddenPrimitive
          (UWN_WorldUtils_Subsystem *this,UPrimitiveComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  uint local_res10 [2];
  FPrimitiveComponentId local_res18 [2];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_28;
  
  if ((param_1 != (UPrimitiveComponent *)0x0) && ((param_1->field_0x98 & 1) != 0)) {
    local_res10[0] = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    Emplace<FPrimitiveComponentId>(&this->CustomHiddenPrimitiveIDs,local_res18,(bool *)local_res10);
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    USceneComponent::GetChildrenComponents((USceneComponent *)param_1,true,&local_28);
    iVar4 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar6.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar4) {
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar6.Data == pFVar1) break;
      lVar3 = *(longlong *)FVar6.Data;
      if (lVar3 != 0) {
        pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if (((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
             &pUVar5->_padding_)) && ((*(byte *)(lVar3 + 0x98) & 1) != 0)) {
          local_res10[0] = *(uint *)(lVar3 + 0x344);
          TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          ::Emplace<FPrimitiveComponentId>
                    (&this->CustomHiddenPrimitiveIDs,local_res18,(bool *)local_res10);
        }
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// AddHiddenPrimitiveOnly @ 14a0317e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UWN_WorldUtils_Subsystem::AddHiddenPrimitiveOnly
          (UWN_WorldUtils_Subsystem *this,UPrimitiveComponent *param_1)

{
  uint local_res10 [2];
  FPrimitiveComponentId local_res18 [4];
  
  if ((param_1 != (UPrimitiveComponent *)0x0) && ((param_1->field_0x98 & 1) != 0)) {
    local_res10[0] = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    Emplace<FPrimitiveComponentId>(&this->CustomHiddenPrimitiveIDs,local_res18,(bool *)local_res10);
  }
  return;
}

// AddToPrimitiveSet @ 14a031820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UWN_WorldUtils_Subsystem::AddToPrimitiveSet
          (UWN_WorldUtils_Subsystem *this,UPrimitiveComponent *param_1,
          TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          *param_2)

{
  uint local_res10 [4];
  FPrimitiveComponentId local_res20 [2];
  
  if ((param_1 != (UPrimitiveComponent *)0x0) && ((param_1->field_0x98 & 1) != 0)) {
    local_res10[0] = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    Emplace<FPrimitiveComponentId>(param_2,local_res20,(bool *)local_res10);
    return true;
  }
  return false;
}

// BeginDestroy @ 14a031b60

void __thiscall UWN_WorldUtils_Subsystem::BeginDestroy(UWN_WorldUtils_Subsystem *this)

{
  UWN_WorldUtils_Subsystem *apUStackX_8 [4];
  
  UObject::BeginDestroy((UObject *)this);
  if ((char)this->_padding_ != '\0') {
    apUStackX_8[0] = this;
    `UTickableWorldSubsystem::BeginDestroy'::__l2::<lambda_1>::operator()(apUStackX_8);
  }
  return;
}

// CacheWorldBounds @ 14a032390

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UWN_WorldUtils_Subsystem::CacheWorldBounds(UWN_WorldUtils_Subsystem *this,UWN_WorldInfo *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined8 local_18;
  
  dVar3 = _UNK_151a30ea8;
  dVar2 = _UNK_151a30e98;
  dVar1 = ___xmm_4290000000000000c290000000000000;
  dVar5 = _UNK_151444fc8;
  dVar4 = ___xmm_42900000000000004290000000000000;
  if (param_1 != (UWN_WorldInfo *)0x0) {
    if ((param_1->WorldBounds).IsValid == '\0') {
      local_48 = ___xmm_c290000000000000c290000000000000;
      dStack_40 = _UNK_151a30ea8;
      local_18 = CONCAT71(local_18._1_7_,1);
      local_38 = ___xmm_4290000000000000c290000000000000;
      dStack_30 = _UNK_151a30e98;
    }
    else {
      local_38 = (param_1->WorldBounds).Min.field0_0x0._s_0.Z;
      dStack_30 = (param_1->WorldBounds).Max.field0_0x0._s_0.X;
      local_48 = (param_1->WorldBounds).Min.field0_0x0._s_0.X;
      dStack_40 = (param_1->WorldBounds).Min.field0_0x0._s_0.Y;
      local_18._0_1_ = (param_1->WorldBounds).IsValid;
      local_18._1_1_ = (param_1->WorldBounds).Pad[0];
      local_18._2_1_ = (param_1->WorldBounds).Pad[1];
      local_18._3_1_ = (param_1->WorldBounds).Pad[2];
      local_18._4_1_ = (param_1->WorldBounds).Pad[3];
      local_18._5_1_ = (param_1->WorldBounds).Pad[4];
      local_18._6_1_ = (param_1->WorldBounds).Pad[5];
      local_18._7_1_ = (param_1->WorldBounds).Pad[6];
      dVar4 = (param_1->WorldBounds).Max.field0_0x0._s_0.Y;
      dVar5 = (param_1->WorldBounds).Max.field0_0x0._s_0.Z;
    }
    (this->CachedWorldBounds).Min.field0_0x0._s_0.X = local_48;
    (this->CachedWorldBounds).Min.field0_0x0._s_0.Y = dStack_40;
    (this->CachedWorldBounds).Min.field0_0x0._s_0.Z = local_38;
    (this->CachedWorldBounds).Max.field0_0x0._s_0.X = dStack_30;
    (this->CachedWorldBounds).Max.field0_0x0._s_0.Y = dVar4;
    (this->CachedWorldBounds).Max.field0_0x0._s_0.Z = dVar5;
    (this->CachedWorldBounds).IsValid = (undefined1)local_18;
    (this->CachedWorldBounds).Pad[0] = local_18._1_1_;
    (this->CachedWorldBounds).Pad[1] = local_18._2_1_;
    (this->CachedWorldBounds).Pad[2] = local_18._3_1_;
    (this->CachedWorldBounds).Pad[3] = local_18._4_1_;
    (this->CachedWorldBounds).Pad[4] = local_18._5_1_;
    (this->CachedWorldBounds).Pad[5] = local_18._6_1_;
    (this->CachedWorldBounds).Pad[6] = local_18._7_1_;
    return;
  }
  (this->CachedWorldBounds).Min.field0_0x0._s_0.X = ___xmm_c290000000000000c290000000000000;
  (this->CachedWorldBounds).Min.field0_0x0._s_0.Y = dVar3;
  (this->CachedWorldBounds).Min.field0_0x0._s_0.Z = dVar1;
  (this->CachedWorldBounds).Max.field0_0x0._s_0.X = dVar2;
  (this->CachedWorldBounds).Max.field0_0x0._s_0.Y = dVar4;
  (this->CachedWorldBounds).Max.field0_0x0._s_0.Z = dVar5;
  (this->CachedWorldBounds).IsValid = 1;
  (this->CachedWorldBounds).Pad[0] = local_18._1_1_;
  (this->CachedWorldBounds).Pad[1] = local_18._2_1_;
  (this->CachedWorldBounds).Pad[2] = local_18._3_1_;
  (this->CachedWorldBounds).Pad[3] = local_18._4_1_;
  (this->CachedWorldBounds).Pad[4] = local_18._5_1_;
  (this->CachedWorldBounds).Pad[5] = local_18._6_1_;
  (this->CachedWorldBounds).Pad[6] = local_18._7_1_;
  return;
}

// CanCheckVolumeChange @ 14a0324b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UWN_WorldUtils_Subsystem::CanCheckVolumeChange
          (UWN_WorldUtils_Subsystem *this,UClass *param_1,EWN_VolumeObserverMode param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UClass *pUVar4;
  UWorld *this_00;
  TTuple<UClass_*,EWN_VolumeObserverMode> *pTVar5;
  
  pUVar4 = UWN_ZoneVolumeComponent::StaticClass();
  if (param_1 == pUVar4) {
    this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
    bVar2 = UWorld::IsGameWorld(this_00);
    if (bVar2) {
      return false;
    }
  }
  pTVar5 = TSet<TTuple<UClass_*,enum_EWN_VolumeObserverMode>,TDefaultMapHashableKeyFuncs<UClass_*,enum_EWN_VolumeObserverMode,0>,FDefaultSetAllocator>
           ::Find(&this->VolumeObserverModes,param_1);
  if (pTVar5 == (TTuple<UClass_*,EWN_VolumeObserverMode> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return param_2 == pTVar5->field_0x8;
}

// ClearCustomedHiddenPrimitives @ 14a032580

void __thiscall
UWN_WorldUtils_Subsystem::ClearCustomedHiddenPrimitives(UWN_WorldUtils_Subsystem *this)

{
  undefined1 *puVar1;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *this_00
  ;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->CustomHiddenPrimitiveIDs;
  bVar3 = 1 < (this->CustomHiddenPrimitiveIDs).HashSize;
  if (!bVar3) {
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    UnhashElements(this_00);
  }
  puVar1 = &(this->CustomHiddenPrimitiveIDs).Elements.field_0xc;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x2c;
  *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->CustomHiddenPrimitiveIDs).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->CustomHiddenPrimitiveIDs).HashSize = 1;
    TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
    Rehash(this_00);
  }
  return;
}

// Deinitialize @ 14a032b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWN_WorldUtils_Subsystem::Deinitialize(UWN_WorldUtils_Subsystem *this)

{
  GWN_WorldUtilsSubsystem = (UWN_WorldUtils_Subsystem *)0x0;
  if (4 < (byte)WorldUtils._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&WorldUtils);
  }
  UTickableWorldSubsystem::Deinitialize((UTickableWorldSubsystem *)this);
  return;
}

// GetPrivateStaticClass @ 14a034e40

UClass * __cdecl UWN_WorldUtils_Subsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_WorldUtils_Subsystem",
               &Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.InnerSingleton,
               StaticRegisterNativesUWN_WorldUtils_Subsystem,0x288,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWN_WorldUtils_Subsystem>,
               InternalVTableHelperCtorCaller<UWN_WorldUtils_Subsystem>,local_res8,
               UTickableWorldSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_WorldUtils_Subsystem.InnerSingleton;
}

// GetSoundInfos @ 14a034fc0

void __thiscall
UWN_WorldUtils_Subsystem::GetSoundInfos
          (UWN_WorldUtils_Subsystem *this,int param_1,FWN_BGMSoundInfo *param_2,
          TArray<FWN_AmbientSoundInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  UWN_WorldInfo *pUVar1;
  FWN_BGMSoundInfo *pFVar2;
  FWN_AmbientSoundInfo *pFVar3;
  uint uVar4;
  undefined1 local_d8 [32];
  FUtf8String local_b8;
  float local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  FGuid local_98;
  UWN_WorldUtils_Subsystem *local_88;
  TArray<FWN_AmbientSoundInfo,TSizedDefaultAllocator<32>_> *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_68 [80];
  
  FWN_AmbientSoundInfo::FWN_AmbientSoundInfo((FWN_AmbientSoundInfo *)local_68);
  FWN_AmbientSoundInfo::FWN_AmbientSoundInfo((FWN_AmbientSoundInfo *)local_d8);
  pFVar3 = (FWN_AmbientSoundInfo *)(param_3->AllocatorInstance).Data;
  if (param_3->ArrayMax < 0) {
    DestructItems<FWN_AmbientSoundInfo,int>(pFVar3,param_3->ArrayNum);
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
  }
  else {
    DestructItems<FWN_AmbientSoundInfo,int>(pFVar3,param_3->ArrayNum);
    param_3->ArrayNum = 0;
  }
  *(undefined8 *)&(param_2->BGM).SoftObjectPtr = 0;
  *(undefined8 *)&(param_2->BGM).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(param_2->BGM).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)&(param_2->BGM).SoftObjectPtr.field_0x18,0);
  param_2->SoundFadeInTime = 0.0;
  param_2->SoundFadeOutTime = 0.0;
  param_2->SoundDelayTime = 0.0;
  if (param_1 < 0xf4241) goto LAB_14a035165;
  pUVar1 = (this->WorldInfo).field0_0x0.DebugPtr;
  local_78 = local_68;
  uVar4 = (uint)param_1 / 1000;
  local_70 = local_d8;
  local_88 = this;
  local_80 = param_3;
  if (pUVar1 != (UWN_WorldInfo *)0x0) {
    if ((char)((char)uVar4 * '\x18' + (char)param_1) == '\0') {
      if (uVar4 == 0) goto LAB_14a035155;
      pFVar2 = TMapBase<int,FWN_BGMSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_BGMSoundInfo,0>_>
               ::Find((TMapBase<int,FWN_BGMSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_BGMSoundInfo,0>_>
                       *)&pUVar1->BGMSoundInfos,uVar4);
    }
    else {
      pFVar2 = TMapBase<int,FWN_BGMSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_BGMSoundInfo,0>_>
               ::Find((TMapBase<int,FWN_BGMSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_BGMSoundInfo,0>_>
                       *)&pUVar1->BGMSoundInfos,param_1);
      uVar4 = param_1;
    }
    pFVar3 = TMapBase<int,FWN_AmbientSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_AmbientSoundInfo,0>_>
             ::Find((TMapBase<int,FWN_AmbientSoundInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_AmbientSoundInfo,0>_>
                     *)&pUVar1->AmbientSoundInfos,uVar4);
    if (pFVar2 != (FWN_BGMSoundInfo *)0x0) {
      FWN_BGMSoundInfo::operator=(param_2,pFVar2);
    }
    if (pFVar3 != (FWN_AmbientSoundInfo *)0x0) {
      local_d8._8_8_ = *(undefined8 *)&(pFVar3->AmbientSound).SoftObjectPtr;
      local_d8._16_8_ = *(undefined8 *)&(pFVar3->AmbientSound).SoftObjectPtr.field_0x8;
      local_d8._24_8_ = *(undefined8 *)&(pFVar3->AmbientSound).SoftObjectPtr.field_0x10;
      FUtf8String::operator=
                (&local_b8,(FUtf8String *)&(pFVar3->AmbientSound).SoftObjectPtr.field_0x18);
      local_a8 = pFVar3->SoundFadeInTime;
      local_a4 = pFVar3->SoundFadeOutTime;
      local_a0 = pFVar3->SoundDelayTime;
      local_9c = pFVar3->AmbientSoundPriority;
      local_98.A = (pFVar3->Guid).A;
      local_98.B = (pFVar3->Guid).B;
      local_98.C = (pFVar3->Guid).C;
      local_98.D = (pFVar3->Guid).D;
    }
  }
LAB_14a035155:
  this->CurrentZoneDistrictId = param_1;
  `UWN_WorldUtils_Subsystem::GetSoundInfos'::__l2::<lambda_1>::operator()(&local_88);
LAB_14a035165:
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if ((void *)local_68._32_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._32_8_);
  }
  return;
}

// GetStatId @ 14a0351b0

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall UWN_WorldUtils_Subsystem::GetStatId(UWN_WorldUtils_Subsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_WorldUtils_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_WorldUtils_Subsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UWN_WorldUtils_Subsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_WorldUtils_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_WorldUtils_Subsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UWN_WorldUtils_Subsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UWN_WorldUtils_Subsystem,*pFVar1,
                   L"UWN_WorldUtils_Subsystem","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables"
                   ,true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UWN_WorldUtils_Subsystem;
  if (StatPtr_UWN_WorldUtils_Subsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_WorldUtils_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_WorldUtils_Subsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UWN_WorldUtils_Subsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UWN_WorldUtils_Subsystem::GetStatId(void)const_::_2_::FStat_UWN_WorldUtils_Subsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UWN_WorldUtils_Subsystem,*pFVar1,
                         L"UWN_WorldUtils_Subsystem","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableGameObjectWorld @ 14a035350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UWN_WorldUtils_Subsystem::GetTickableGameObjectWorld(UWN_WorldUtils_Subsystem *this)

{
  UWorld *pUVar1;
  
  pUVar1 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].CachedWorldBounds);
  return pUVar1;
}

// GetWorldBounds @ 14a035390

TBox<double> * __thiscall
UWN_WorldUtils_Subsystem::GetWorldBounds
          (UWN_WorldUtils_Subsystem *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uchar uVar10;
  uchar uVar11;
  uchar uVar12;
  
  dVar1 = (this->CachedWorldBounds).Min.field0_0x0._s_0.Y;
  dVar2 = (this->CachedWorldBounds).Min.field0_0x0._s_0.Z;
  dVar3 = (this->CachedWorldBounds).Max.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->CachedWorldBounds).Min.field0_0x0._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedWorldBounds).Max.field0_0x0._s_0.Y;
  dVar4 = (this->CachedWorldBounds).Max.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar3;
  uVar5 = (this->CachedWorldBounds).IsValid;
  uVar6 = (this->CachedWorldBounds).Pad[0];
  uVar7 = (this->CachedWorldBounds).Pad[1];
  uVar8 = (this->CachedWorldBounds).Pad[2];
  uVar9 = (this->CachedWorldBounds).Pad[3];
  uVar10 = (this->CachedWorldBounds).Pad[4];
  uVar11 = (this->CachedWorldBounds).Pad[5];
  uVar12 = (this->CachedWorldBounds).Pad[6];
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar4;
  __return_storage_ptr__->IsValid = uVar5;
  __return_storage_ptr__->Pad[0] = uVar6;
  __return_storage_ptr__->Pad[1] = uVar7;
  __return_storage_ptr__->Pad[2] = uVar8;
  __return_storage_ptr__->Pad[3] = uVar9;
  __return_storage_ptr__->Pad[4] = uVar10;
  __return_storage_ptr__->Pad[5] = uVar11;
  __return_storage_ptr__->Pad[6] = uVar12;
  return __return_storage_ptr__;
}

// HideActorVolumePrimitives @ 14a0355a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWN_WorldUtils_Subsystem::HideActorVolumePrimitives(UWN_WorldUtils_Subsystem *this,AActor *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  UClass *pUVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  UClass *local_100;
  longlong local_f8 [24];
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  if (param_1 == (AActor *)0x0) {
    return;
  }
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar7 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  local_2c = 0x18;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 == (UClass *)0x0) goto LAB_14a03563d;
  }
  else {
    pUVar9 = pUVar7;
    if (pUVar5 == (UClass *)0x0) goto LAB_14a03563d;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar9 = pUVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar9 = pUVar5;
    }
  }
LAB_14a03563d:
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100 = pUVar5;
  if (pUVar9 == pUVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f8);
  }
  iVar2 = local_30;
  plVar8 = local_f8;
  if (local_38 != (longlong *)0x0) {
    plVar8 = local_38;
  }
  plVar1 = plVar8 + local_30;
  while( true ) {
    if (local_30 != iVar2) {
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_108);
    }
    if (plVar8 == plVar1) break;
    lVar3 = *plVar8;
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x98) & 1) != 0)) {
      local_100 = (UClass *)CONCAT44(local_100._4_4_,*(uint *)(lVar3 + 0x344));
      if (*(int *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x8 !=
          *(int *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x34) {
        TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
        RemoveImpl<FPrimitiveComponentId>
                  (&this->VolumeShownPrimitiveIDs,*(uint *)(lVar3 + 0x344),
                   (FPrimitiveComponentId *)&local_100);
      }
    }
    plVar8 = plVar8 + 1;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// Initialize @ 14a0359b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UWN_WorldUtils_Subsystem::Initialize
          (UWN_WorldUtils_Subsystem *this,FSubsystemCollectionBase *param_1)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  FWN_ViewExtension *this_00;
  UWorld *this_01;
  UObject *pUVar9;
  UClass *pUVar10;
  double *pdVar11;
  undefined1 local_1c8;
  undefined1 local_1c7;
  undefined1 local_1c6;
  undefined1 local_1c5;
  FAutoRegister local_1c4 [12];
  FWN_ViewExtension *local_1b8;
  FSharedReferencer<1> FStack_1b0;
  FSoftObjectPath local_1a8;
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  TRawPtrProxy<FWN_ViewExtension> local_178;
  UClass *local_170;
  UClass *local_168;
  UClass *local_160;
  UClass *local_158 [2];
  TSharedRef<FWN_ViewExtension,1> local_148;
  TSharedRef<ISceneViewExtension,1> local_138;
  UClass **local_128;
  undefined1 *local_120;
  UClass **local_118;
  undefined1 *local_110;
  UClass **local_108;
  undefined1 *local_100;
  UClass **local_f8;
  undefined1 *local_f0;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  undefined1 local_60;
  undefined1 local_28;
  undefined7 uStack_27;
  
  UTickableWorldSubsystem::Initialize((UTickableWorldSubsystem *)this,param_1);
  GWN_WorldUtilsSubsystem = this;
  if ((GEngine->ViewExtensions).Object == (FSceneViewExtensions *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = ::operator_new(0x30);
  if (this_00 == (FWN_ViewExtension *)0x0) {
    this_00 = (FWN_ViewExtension *)0x0;
  }
  else {
    FSceneViewExtensionBase::FSceneViewExtensionBase((FSceneViewExtensionBase *)this_00,local_1c4);
    this_00->Subsystem = this;
    this_00->_padding_ = (longlong)&___7FWN_ViewExtension__6B_;
    if (((this_00->_padding_ != 0) && (this_00->_padding_ != 0)) &&
       (0 < *(int *)(this_00->_padding_ + 8))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  local_178.Object = this_00;
  TSharedRef<FWN_ViewExtension,1>::TSharedRef<FWN_ViewExtension,1><FWN_ViewExtension>
            (&local_148,&local_178);
  local_138.Object = (ISceneViewExtension *)local_148.Object;
  local_138.SharedReferenceCount.ReferenceController =
       local_148.SharedReferenceCount.ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSceneViewExtensions::RegisterExtension(&local_138);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  local_1b8 = local_148.Object;
  FStack_1b0.ReferenceController = local_148.SharedReferenceCount.ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ViewExtension != (TSharedPtr<FWN_ViewExtension,1> *)&local_1b8) {
    (this->ViewExtension).Object = local_148.Object;
    local_1b8 = (FWN_ViewExtension *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ViewExtension).SharedReferenceCount,&FStack_1b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  if (4 < (byte)WorldUtils._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&WorldUtils);
  }
  this_01 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  UWorld::IsGameWorld(this_01);
  local_1c8 = 2;
  local_170 = UWN_ZoneVolumeComponent::StaticClass();
  local_128 = &local_170;
  local_120 = &local_1c8;
  TSet<TTuple<UClass_*,enum_EWN_VolumeObserverMode>,TDefaultMapHashableKeyFuncs<UClass_*,enum_EWN_VolumeObserverMode,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UClass_*_&&,enum_EWN_VolumeObserverMode_&&>_>
            (&this->VolumeObserverModes,
             (TPairInitializer<UClass_*_&&,EWN_VolumeObserverMode_&&> *)local_188,(bool *)&local_128
            );
  local_1c7 = 2;
  local_168 = UWN_OcclusionVolumeComponent::StaticClass();
  local_118 = &local_168;
  local_110 = &local_1c7;
  TSet<TTuple<UClass_*,enum_EWN_VolumeObserverMode>,TDefaultMapHashableKeyFuncs<UClass_*,enum_EWN_VolumeObserverMode,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UClass_*_&&,enum_EWN_VolumeObserverMode_&&>_>
            (&this->VolumeObserverModes,
             (TPairInitializer<UClass_*_&&,EWN_VolumeObserverMode_&&> *)(local_188 + 4),
             (bool *)&local_118);
  local_1c6 = 2;
  local_160 = Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister();
  local_108 = &local_160;
  local_100 = &local_1c6;
  TSet<TTuple<UClass_*,enum_EWN_VolumeObserverMode>,TDefaultMapHashableKeyFuncs<UClass_*,enum_EWN_VolumeObserverMode,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UClass_*_&&,enum_EWN_VolumeObserverMode_&&>_>
            (&this->VolumeObserverModes,
             (TPairInitializer<UClass_*_&&,EWN_VolumeObserverMode_&&> *)local_180,(bool *)&local_108
            );
  local_1c5 = 2;
  local_158[0] = UWN_BGMVolumeComponent::StaticClass();
  local_f8 = local_158;
  local_f0 = &local_1c5;
  TSet<TTuple<UClass_*,enum_EWN_VolumeObserverMode>,TDefaultMapHashableKeyFuncs<UClass_*,enum_EWN_VolumeObserverMode,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UClass_*_&&,enum_EWN_VolumeObserverMode_&&>_>
            (&this->VolumeObserverModes,
             (TPairInitializer<UClass_*_&&,EWN_VolumeObserverMode_&&> *)(local_180 + 4),
             (bool *)&local_f8);
  uStack_e0 = 0x2d;
  local_e8 = L"/Game/Generated/WorldInfo/DSMapInfo.DSMapInfo";
  local_d8._12_4_ = uStack_dc;
  local_d8.Size = 0x2d;
  local_d8.DataPtr = L"/Game/Generated/WorldInfo/DSMapInfo.DSMapInfo";
  local_1a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_1a8.AssetPath.PackageName.Number = 0;
  local_1a8.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_1a8.AssetPath.AssetName.Number = 0;
  local_1a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.SubPathString.Data.ArrayNum = 0;
  local_1a8.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_1a8,&local_d8);
  pUVar9 = FSoftObjectPath::TryLoad(&local_1a8,(FUObjectSerializeContext *)0x0);
  if (pUVar9 != (UObject *)0x0) {
    pUVar10 = UWN_WorldInfo::StaticClass();
    iVar2 = (int)pUVar10->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar10->_padding_)) goto LAB_14a035c9b;
  }
  pUVar9 = (UObject *)0x0;
LAB_14a035c9b:
  dVar7 = _UNK_151a30ea8;
  dVar6 = _UNK_151a30e98;
  dVar5 = ___xmm_4290000000000000c290000000000000;
  dVar4 = _UNK_151444fc8;
  dVar1 = ___xmm_42900000000000004290000000000000;
  if (pUVar9 == (UObject *)0x0) {
    (this->CachedWorldBounds).Min.field0_0x0._s_0.X = ___xmm_c290000000000000c290000000000000;
    (this->CachedWorldBounds).Min.field0_0x0._s_0.Y = dVar7;
    local_28 = 1;
    (this->CachedWorldBounds).Min.field0_0x0._s_0.Z = dVar5;
    (this->CachedWorldBounds).Max.field0_0x0._s_0.X = dVar6;
    (this->CachedWorldBounds).Max.field0_0x0._s_0.Y = dVar1;
    (this->CachedWorldBounds).Max.field0_0x0._s_0.Z = dVar4;
    (this->CachedWorldBounds).IsValid = 1;
    (this->CachedWorldBounds).Pad[0] = (char)uStack_27;
    (this->CachedWorldBounds).Pad[1] = (char)((uint7)uStack_27 >> 8);
    (this->CachedWorldBounds).Pad[2] = (char)((uint7)uStack_27 >> 0x10);
    (this->CachedWorldBounds).Pad[3] = (char)((uint7)uStack_27 >> 0x18);
    (this->CachedWorldBounds).Pad[4] = (char)((uint7)uStack_27 >> 0x20);
    (this->CachedWorldBounds).Pad[5] = (char)((uint7)uStack_27 >> 0x28);
    (this->CachedWorldBounds).Pad[6] = (char)((uint7)uStack_27 >> 0x30);
  }
  else {
    if (pUVar9[7].field_0x10 == '\0') {
      pdVar11 = &local_90;
      local_90 = ___xmm_c290000000000000c290000000000000;
      dStack_88 = _UNK_151a30ea8;
      local_60 = 1;
      local_70 = ___xmm_42900000000000004290000000000000;
      dStack_68 = _UNK_151444fc8;
      local_80 = ___xmm_4290000000000000c290000000000000;
      dStack_78 = _UNK_151a30e98;
    }
    else {
      pdVar11 = &local_c8;
      local_c8 = *(double *)&pUVar9[6].field_0x8;
      uStack_c0 = *(undefined8 *)&pUVar9[6].field_0x10;
      local_b8 = *(undefined8 *)&pUVar9[6].field_0x18;
      uStack_b0 = *(undefined8 *)&pUVar9[6].field_0x20;
      local_a8 = *(undefined8 *)(pUVar9 + 7);
      uStack_a0 = *(undefined8 *)&pUVar9[7].field_0x8;
      local_98 = *(undefined8 *)&pUVar9[7].field_0x10;
    }
    dVar1 = pdVar11[1];
    dVar4 = pdVar11[2];
    dVar5 = pdVar11[3];
    (this->CachedWorldBounds).Min.field0_0x0._s_0.X = *pdVar11;
    (this->CachedWorldBounds).Min.field0_0x0._s_0.Y = dVar1;
    dVar6 = pdVar11[4];
    dVar7 = pdVar11[5];
    (this->CachedWorldBounds).Min.field0_0x0._s_0.Z = dVar4;
    (this->CachedWorldBounds).Max.field0_0x0._s_0.X = dVar5;
    dVar1 = pdVar11[6];
    (this->CachedWorldBounds).Max.field0_0x0._s_0.Y = dVar6;
    (this->CachedWorldBounds).Max.field0_0x0._s_0.Z = dVar7;
    *(double *)&(this->CachedWorldBounds).IsValid = dVar1;
  }
  if (local_1a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// IsRegisteredInCustomPrimitive @ 14a036500

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UWN_WorldUtils_Subsystem::IsRegisteredInCustomPrimitive
          (UWN_WorldUtils_Subsystem *this,UPrimitiveComponent *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  uVar1 = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
  if (*(int *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x8 !=
      *(int *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x34) {
    FVar4 = (this->CustomHiddenPrimitiveIDs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->CustomHiddenPrimitiveIDs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->CustomHiddenPrimitiveIDs).HashSize - 1U & uVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->CustomHiddenPrimitiveIDs).Elements;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar3 * 0xc) == uVar1) {
          return true;
        }
        iVar3 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// IsTickableInEditor @ 14a0365d0

bool __thiscall UWN_WorldUtils_Subsystem::IsTickableInEditor(UWN_WorldUtils_Subsystem *this)

{
  return (bool)(~(byte)(*(uint *)((longlong)&this[-1].CachedWorldBounds.Min.field0_0x0 + 8) >> 4) &
               1);
}

// IsTickableWhenPaused @ 14a0365f0

bool __thiscall UWN_WorldUtils_Subsystem::IsTickableWhenPaused(UWN_WorldUtils_Subsystem *this)

{
  return (bool)(~(byte)(*(uint *)((longlong)&this[-1].CachedWorldBounds.Min.field0_0x0 + 8) >> 4) &
               1);
}

// LoadWorldInfo @ 14a036610

bool __thiscall
UWN_WorldUtils_Subsystem::LoadWorldInfo(UWN_WorldUtils_Subsystem *this,FSoftObjectPath *param_1)

{
  int iVar1;
  UWN_WorldInfo *pUVar2;
  UClass *pUVar3;
  FScriptContainerElement *pFVar4;
  
  if ((this->WorldInfo).field0_0x0.DebugPtr != (UWN_WorldInfo *)0x0) {
    pFVar4 = (param_1->SubPathString).Data.AllocatorInstance.Data;
    goto LAB_14a0366bc;
  }
  pUVar2 = (UWN_WorldInfo *)FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
  if (pUVar2 == (UWN_WorldInfo *)0x0) {
LAB_14a03666d:
    pUVar2 = (UWN_WorldInfo *)0x0;
  }
  else {
    pUVar3 = UWN_WorldInfo::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) goto LAB_14a03666d;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (UWN_WorldInfo *)0x0)) {
    (this->WorldInfo).field0_0x0.DebugPtr = pUVar2;
    if (pUVar2 == (UWN_WorldInfo *)0x0) {
      pFVar4 = (param_1->SubPathString).Data.AllocatorInstance.Data;
LAB_14a0366bc:
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      return false;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
    (this->WorldInfo).field0_0x0.DebugPtr = pUVar2;
  }
  pFVar4 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return true;
}

// OnAmbientSoundVolumeChange @ 14a036760

void __thiscall
UWN_WorldUtils_Subsystem::OnAmbientSoundVolumeChange
          (UWN_WorldUtils_Subsystem *this,
          TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FScriptContainerElement *_Src;
  TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0 TVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  UWN_WorldUtils_Subsystem *pUVar8;
  TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0 *pTVar9;
  TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
  *pTVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  TArray<TObjectPtr<UWN_AmbientSoundVolumeComponent>,TSizedDefaultAllocator<32>_> *pTVar16;
  uint uVar17;
  ForElementType<FSetElementId> FVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  undefined1 *puVar22;
  uint *puVar23;
  ForAnyElementType FVar24;
  TSet<TObjectPtr<UWN_AmbientSoundVolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_AmbientSoundVolumeComponent>,0>,FDefaultSetAllocator>
  *this_01;
  undefined1 local_158;
  undefined1 local_157 [7];
  TSet<TObjectPtr<UWN_AmbientSoundVolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_AmbientSoundVolumeComponent>,0>,FDefaultSetAllocator>
  *local_150;
  ForAnyElementType local_148;
  int local_140;
  int local_13c;
  UWN_WorldUtils_Subsystem *local_138;
  TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
  *local_130;
  int local_128;
  int local_124;
  TObjectPtr<UWN_AmbientSoundVolumeComponent> local_120;
  TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0 local_118;
  TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0 *local_110;
  TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0 local_108;
  TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0 local_100;
  TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  TArray<TObjectPtr<UWN_AmbientSoundVolumeComponent>,TSizedDefaultAllocator<32>_> local_68 [2];
  undefined4 local_3c;
  
  this_01 = &this->CurrentAmbientSoundVolumes;
  local_150 = this_01;
  local_138 = this;
  local_130 = param_1;
  pTVar16 = TSet<TObjectPtr<UWN_AmbientSoundVolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_AmbientSoundVolumeComponent>,0>,FDefaultSetAllocator>
            ::Array(this_01,local_68);
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = pTVar16->ArrayNum;
  lVar20 = (longlong)local_140;
  _Src = (pTVar16->AllocatorInstance).Data;
  if (local_140 == 0) {
    local_13c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_140,0,&local_148,local_140,&local_13c);
    memcpy(local_148.Data,_Src,lVar20 << 3);
  }
  if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68[0].AllocatorInstance.Data);
  }
  iVar19 = local_140;
  local_110 = (TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0 *)
              (local_148.Data + (longlong)local_140 * 8);
  FVar24.Data = local_148.Data;
  while( true ) {
    pTVar9 = local_110;
    if (local_140 != iVar19) {
      local_158 = 0;
      `TCheckedPointerIterator<UWN_AmbientSoundVolumeComponent_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_158);
    }
    if ((TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0 *)FVar24.Data == pTVar9) break;
    TVar3 = (TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0)
            *(TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0 *)FVar24.Data;
    uVar17 = ((uint)((ulonglong)TVar3.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)TVar3.DebugPtr >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    uVar17 = uVar17 >> 0x10 ^ uVar17;
    if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
      FVar4 = (param_1->Hash).SecondaryData;
      FVar18 = (ForElementType<FSetElementId>)&param_1->Hash;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FVar18 = FVar4;
      }
      iVar14 = *(int *)((longlong)FVar18 + (ulonglong)(param_1->HashSize - 1U & uVar17) * 4);
      if (iVar14 != -1) {
        do {
          if (*(UWN_AmbientSoundVolumeComponent **)
               (*(longlong *)&param_1->Elements + (longlong)iVar14 * 0x10) == TVar3.DebugPtr)
          goto LAB_14a0369da;
          iVar14 = *(int *)(*(longlong *)&param_1->Elements + 8 + (longlong)iVar14 * 0x10);
        } while (iVar14 != -1);
      }
    }
    local_118 = TVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar3.DebugPtr != (UWN_AmbientSoundVolumeComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.DebugPtr != (UWN_AmbientSoundVolumeComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      TSet<TObjectPtr<UWN_AmbientSoundVolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_AmbientSoundVolumeComponent>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_>
                (this_01,uVar17,
                 (TObjectPtr<UWN_AmbientSoundVolumeComponent_const_> *)&local_118.ObjectPtr);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->WN_OnAmbientSoundChange,(FWriteAccessScope *)&local_98);
    puVar1 = &(this->WN_OnAmbientSoundChange).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar13 = false;
    uVar17 = *(int *)&(this->WN_OnAmbientSoundChange).field_0x10 - 1;
    if (-1 < (int)uVar17) {
      lVar20 = (longlong)(int)uVar17 << 4;
      bVar13 = false;
      do {
        uVar21 = 0;
        if ((int)uVar17 < *(int *)&(this->WN_OnAmbientSoundChange).field_0x10) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&(this->WN_OnAmbientSoundChange).field_0x8;
        if (((*(int *)(lVar20 + 8 + lVar5) == 0) ||
            (plVar6 = *(longlong **)(lVar20 + lVar5), plVar6 == (longlong *)0x0)) ||
           (cVar12 = (**(code **)(*plVar6 + 0x68))(), cVar12 == '\0')) {
          bVar13 = true;
        }
        lVar20 = lVar20 + -0x10;
        uVar17 = uVar17 - 1;
        param_1 = local_130;
      } while (-1 < (int)uVar17);
    }
    puVar1 = &(this->WN_OnAmbientSoundChange).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar13) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->WN_OnAmbientSoundChange,false);
    }
    this = local_138;
    this_01 = local_150;
    if (local_98.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      this = local_138;
      this_01 = local_150;
    }
LAB_14a0369da:
    FVar24.Data = FVar24.Data + 8;
  }
  iVar19 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_f0 = 0;
  local_d8 = 0;
  uStack_ec = 1;
  iStack_dc = 0;
  if (iVar19 != 0) {
    puVar23 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar17 = *puVar23;
    while (uVar17 == 0) {
      lVar20 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14a036a6e;
      uVar17 = puVar23[lVar20 + 1];
    }
    uStack_ec = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_ec * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_128 = (int)lVar20;
    iStack_dc = local_d8 + -1 + local_128;
    if (iVar19 < iStack_dc) {
      iStack_dc = iVar19;
    }
  }
LAB_14a036a6e:
  uVar17 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_d4 = local_3c;
  uVar21 = uVar17 & 0xffffffe0;
  iStack_d0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_e0 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
  TStack_c0.CurrentBitIndex = iStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar17 >> 5;
  TStack_c0._28_4_ = local_3c;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = param_1;
  local_e8 = puVar1;
  local_c8 = param_1;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (((int)uVar17 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar15 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar17 != uVar15) {
    puVar22 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar19 * 4);
    while (uVar17 == 0) {
      lVar20 = (longlong)iVar19;
      uVar21 = uVar21 + 0x20;
      iVar19 = iVar19 + 1;
      uVar17 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14a036b60;
      uVar17 = *(uint *)(puVar22 + lVar20 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_124 = (int)lVar20;
    uVar17 = local_124 + -1 + uVar21;
    if ((int)uVar15 < (int)uVar17) {
      uVar17 = uVar15;
    }
  }
LAB_14a036b60:
  do {
    pTVar10 = local_c8;
    if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
        (int)uStack_a0) {
      local_157[0] = 0;
      `TSparseArray<TSparseSetElement<UWN_AmbientSoundVolumeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_157);
    }
    if (((TStack_c0.CurrentBitIndex == uVar17) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == param_1)
       ) {
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data);
      }
      param_1->HashSize = 0;
      FVar4 = (param_1->Hash).SecondaryData;
      if (FVar4 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar4);
      }
      TSparseArray<TSparseSetElement<UWN_AmbientSoundVolumeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UWN_AmbientSoundVolumeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&param_1->Elements);
      return;
    }
    TVar3 = (TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0)
            ((TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_u_0 *)
            (*(longlong *)&pTVar10->Elements + (longlong)TStack_c0.CurrentBitIndex * 0x10))->
            DebugPtr;
    local_108 = TVar3;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar3.DebugPtr != (UWN_AmbientSoundVolumeComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.DebugPtr != (UWN_AmbientSoundVolumeComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
    }
    uVar21 = ((uint)((ulonglong)TVar3.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)TVar3.DebugPtr >> 4)) * -0x7a143595;
    uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
    iVar19 = TSet<TObjectPtr<UWN_AmbientSoundVolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_AmbientSoundVolumeComponent>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<TObjectPtr<UWN_AmbientSoundVolumeComponent_const_>_>
                       (this_01,uVar21 >> 0x10 ^ uVar21,
                        (TObjectPtr<UWN_AmbientSoundVolumeComponent_const_> *)&local_108.ObjectPtr);
    if (iVar19 == -1) {
      local_100 = TVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.DebugPtr != (UWN_AmbientSoundVolumeComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      TSet<TObjectPtr<UWN_AmbientSoundVolumeComponent>,DefaultKeyFuncs<TObjectPtr<UWN_AmbientSoundVolumeComponent>,0>,FDefaultSetAllocator>
      ::Emplace<TObjectPtr<UWN_AmbientSoundVolumeComponent>_>(this_01,&local_120,(bool *)&local_100)
      ;
      pUVar8 = local_138;
      this_00 = &local_138->WN_OnAmbientSoundChange;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_80);
      puVar22 = &(pUVar8->WN_OnAmbientSoundChange).field_0x1c;
      *(int *)puVar22 = *(int *)puVar22 + 1;
      bVar13 = false;
      uVar21 = *(int *)&(pUVar8->WN_OnAmbientSoundChange).field_0x10 - 1;
      if (-1 < (int)uVar21) {
        lVar20 = (longlong)(int)uVar21 << 4;
        bVar13 = false;
        do {
          uVar15 = 0;
          if ((int)uVar21 < *(int *)&(pUVar8->WN_OnAmbientSoundChange).field_0x10) {
            uVar15 = ~uVar21 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)&(pUVar8->WN_OnAmbientSoundChange).field_0x8;
          if (((*(int *)(lVar5 + 8 + lVar20) == 0) ||
              (plVar6 = *(longlong **)(lVar5 + lVar20), plVar6 == (longlong *)0x0)) ||
             (cVar12 = (**(code **)(*plVar6 + 0x68))(), cVar12 == '\0')) {
            bVar13 = true;
          }
          lVar20 = lVar20 + -0x10;
          uVar21 = uVar21 - 1;
          param_1 = local_130;
        } while (-1 < (int)uVar21);
      }
      puVar22 = &(pUVar8->WN_OnAmbientSoundChange).field_0x1c;
      *(int *)puVar22 = *(int *)puVar22 + -1;
      if (bVar13) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      this_01 = local_150;
      if (local_80.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
        this_01 = local_150;
      }
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// OnBGMVolumeChange @ 14a036d90

void __thiscall
UWN_WorldUtils_Subsystem::OnBGMVolumeChange(UWN_WorldUtils_Subsystem *this,AWN_BGMVolume *param_1)

{
  AWN_BGMVolume *pAVar1;
  bool bVar2;
  
  pAVar1 = (this->CurrentBGMVolume).field0_0x0.DebugPtr;
  if (pAVar1 == (AWN_BGMVolume *)0x0) {
    bVar2 = param_1 == (AWN_BGMVolume *)0x0;
  }
  else {
    bVar2 = pAVar1 == param_1;
  }
  if (!bVar2) {
    pAVar1 = param_1;
    if (param_1 == (AWN_BGMVolume *)0x0) {
      pAVar1 = (AWN_BGMVolume *)0x0;
    }
    TMulticastDelegate<void___cdecl(AWN_BGMVolume_*),FDefaultDelegateUserPolicy>::Broadcast
              (&this->WN_OnBGMVolumeChange,pAVar1);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AWN_BGMVolume *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->CurrentBGMVolume).field0_0x0.DebugPtr = param_1;
  return;
}

// OnVolumeEnter @ 14a037020

void __thiscall
UWN_WorldUtils_Subsystem::OnVolumeEnter
          (UWN_WorldUtils_Subsystem *this,EWN_VolumeObserverMode param_1,TVector<double> *param_2,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_3)

{
  OnVolumeEnterLeave(this,param_1,param_3);
  return;
}

// OnVolumeEnterLeave @ 14a037030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UWN_WorldUtils_Subsystem::OnVolumeEnterLeave
          (UWN_WorldUtils_Subsystem *this,EWN_VolumeObserverMode param_1,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  AWN_OcclusionVolume *pAVar3;
  UWN_VolumeComponent *this_00;
  longlong lVar4;
  code *pcVar5;
  EWN_VolumeObserverMode EVar6;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  UWorld *pUVar14;
  AActor *pAVar15;
  AWN_BGMVolume *pAVar16;
  int iVar17;
  int iVar18;
  AWN_BGMVolume *pAVar19;
  AWN_OcclusionVolume *pAVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  uint *puVar26;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar27;
  double dVar28;
  float fVar29;
  undefined1 auStackY_328 [32];
  undefined1 local_2b6;
  EWN_VolumeObserverMode local_2b5;
  undefined1 local_2b4 [4];
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_2b0;
  int local_2a8;
  FWeakObjectPtr local_2a0;
  AWN_BGMVolume *local_298;
  UWN_WorldUtils_Subsystem *local_290;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_288;
  int iStack_280;
  uint uStack_27c;
  undefined1 *local_278;
  undefined4 uStack_270;
  int iStack_26c;
  int local_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  UWN_AmbientSoundVolumeComponent *local_248;
  FWeakObjectPtr local_240;
  UClass *local_238;
  UObject *local_230;
  FUObjectCppClassStaticFunctions local_228;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_220;
  int iStack_218;
  uint uStack_214;
  undefined1 *local_210;
  undefined4 uStack_208;
  int iStack_204;
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  TActorIteratorBase<FActorIterator> local_188;
  TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
  local_128;
  undefined4 local_bc;
  TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
  local_b8;
  ulonglong local_68;
  
  fVar29 = __real_bf800000;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_328;
  local_298 = (AWN_BGMVolume *)0x0;
  local_2a8 = -1;
  local_2b5 = param_1;
  local_2b0 = param_2;
  local_290 = this;
  pUVar12 = UWN_BGMVolumeComponent::StaticClass();
  bVar8 = CanCheckVolumeChange(this,pUVar12,param_1);
  local_b8.Elements._0_8_ = 0;
  local_b8.Elements._8_8_ = 0;
  local_b8.Elements._32_8_ = 0;
  local_b8.Elements._40_4_ = 0;
  local_b8.Elements._44_4_ = 0x80;
  local_b8.Elements._48_4_ = 0xffffffff;
  local_b8.Elements._52_4_ = 0;
  local_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_b8.HashSize = 0;
  pUVar12 = Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister();
  bVar9 = CanCheckVolumeChange(this,pUVar12,param_1);
  uVar11 = 1;
  pTVar27 = param_2;
  if ((this->CurrentOcclusionVolume).field0_0x0.DebugPtr != (AWN_OcclusionVolume *)0x0) {
    pUVar12 = UWN_OcclusionVolumeComponent::StaticClass();
    bVar10 = CanCheckVolumeChange(this,pUVar12,param_1);
    if (bVar10) {
      iVar18 = *(int *)&(param_2->Elements).field_0x28;
      puVar22 = &(param_2->Elements).field_0x10;
      iStack_280 = 0;
      local_268 = 0;
      uStack_27c = 1;
      iStack_26c = 0;
      if (iVar18 != 0) {
        puVar26 = *(uint **)&(param_2->Elements).field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)puVar22;
        }
        uStack_27c = *puVar26;
        while (uStack_27c == 0) {
          iStack_280 = iStack_280 + 1;
          local_268 = local_268 + 0x20;
          uStack_27c = 1;
          iStack_26c = iVar18;
          if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_280)
          goto LAB_14a0371bc;
          uStack_27c = puVar26[iStack_280];
        }
        uStack_27c = ~(uStack_27c - 1) & uStack_27c;
        uVar1 = (ulonglong)uStack_27c * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_258 = (int)lVar4;
        iStack_26c = local_268 + -1 + local_258;
        if (iVar18 < iStack_26c) {
          iStack_26c = iVar18;
        }
      }
LAB_14a0371bc:
      uStack_264 = local_bc;
      iStack_260 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
      uVar23 = *(uint *)&(param_2->Elements).field_0x28;
      TStack_1e8._padding_ = CONCAT44(uStack_27c,iStack_280);
      uVar21 = uVar23 & 0xffffffe0;
      uStack_270 = 0xffffffff;
      TStack_1e8.CurrentBitIndex = iStack_26c;
      TStack_1e8.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar23 >> 5;
      TStack_1e8._28_4_ = local_bc;
      TStack_1e8.BaseBitIndex = local_268;
      uStack_1c8 = CONCAT44(uStack_25c,iStack_260);
      local_288 = param_2;
      local_278 = puVar22;
      local_1f0 = param_2;
      TStack_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar22;
      if ((((int)uVar23 < 0) || (iVar18 < (int)uVar23)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = local_290;
      pTVar27 = local_2b0;
      uVar2 = *(uint *)&(param_2->Elements).field_0x28;
      if (uVar23 != uVar2) {
        puVar24 = *(undefined1 **)&(param_2->Elements).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar22;
        }
        uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar17 * 4);
        while (uVar23 == 0) {
          iVar17 = iVar17 + 1;
          uVar21 = uVar21 + 0x20;
          uVar23 = uVar2;
          if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar17)
          goto LAB_14a0372c0;
          uVar23 = *(uint *)(puVar24 + (longlong)iVar17 * 4);
        }
        uVar1 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_254 = (int)lVar4;
        uVar23 = (uVar21 - 1) + local_254;
        if ((int)uVar2 < (int)uVar23) {
          uVar23 = uVar2;
        }
      }
LAB_14a0372c0:
      do {
        pTVar7 = local_1f0;
        if (*(int *)&(local_1f0->Elements).field_0x8 - *(int *)&(local_1f0->Elements).field_0x34 !=
            (int)uStack_1c8) {
          local_2b6 = 0;
          `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b6);
        }
        if (((TStack_1e8.CurrentBitIndex == uVar23) &&
            (TStack_1e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
           (pTVar7 == pTVar27)) {
          TMulticastDelegate<void___cdecl(AWN_OcclusionVolume_*),FDefaultDelegateUserPolicy>::
          Broadcast(&this->WN_OnOcclusionVolumeLeave,
                    (this->CurrentOcclusionVolume).field0_0x0.DebugPtr);
          AWN_OcclusionVolume::UnbindToActorEvents
                    ((this->CurrentOcclusionVolume).field0_0x0.DebugPtr);
          SetCurrentOcclusionVolume(this,(AWN_OcclusionVolume *)0x0);
          pUVar14 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
          if (pUVar14 != (UWorld *)0x0) {
            local_238 = Z_Construct_UClass_AActor_NoRegister();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_238 != (UClass *)0x0)
               ) {
              UE::GC::MarkAsReachable((UObject *)local_238);
            }
            local_188.Flags = OnlyActiveLevels|SkipPendingKill;
            local_188.State.bIsSet = false;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_238 != (UClass *)0x0)
               ) {
              UE::GC::MarkAsReachable((UObject *)local_238);
            }
            FActorIteratorState::FActorIteratorState
                      (&local_188.State.TypedValue,pUVar14,(TSubclassOf<AActor>)&local_238);
            local_188.State.bIsSet = true;
            while( true ) {
              TActorIteratorBase<FActorIterator>::operator++(&local_188);
              if ((local_188.State.bIsSet == false) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (local_188.State.TypedValue.ReachedEnd != false) break;
              if ((local_188.State.bIsSet == false) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pAVar15 = FActorIteratorState::GetActorChecked(&local_188.State.TypedValue);
              SetComponentsVisibility<ULocalFogVolumeComponent>(pAVar15,true,true);
              SetComponentsVisibility<UVolumetricCloudComponent>(pAVar15,true,true);
              SetComponentsVisibility<USkyAtmosphereComponent>(pAVar15,true,true);
            }
            if (local_188.State.bIsSet != false) {
              UWorld::RemoveOnActorSpawnedHandler
                        (local_188.State.TypedValue.CurrentWorld,
                         local_188.State.TypedValue.ActorSpawnedDelegateHandle);
              if (local_188.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
              }
              if (local_188.State.TypedValue.ActorArray.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.State.TypedValue.ActorArray.AllocatorInstance.Data);
              }
            }
          }
          break;
        }
        local_240 = *(FWeakObjectPtr *)
                     (*(longlong *)&pTVar7->Elements + (longlong)TStack_1e8.CurrentBitIndex * 0x10);
        pUVar13 = FWeakObjectPtr::Get(&local_240);
        pAVar20 = *(AWN_OcclusionVolume **)&pUVar13[4].field_0x8;
        if (pAVar20 != (AWN_OcclusionVolume *)0x0) {
          pUVar12 = AWN_OcclusionVolume::StaticClass();
          iVar18 = (int)pUVar12->_padding_;
          if ((iVar18 <= *(int *)(pAVar20->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar20->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
              &pUVar12->_padding_)) {
            pAVar3 = (this->CurrentOcclusionVolume).field0_0x0.DebugPtr;
            if (pAVar3 == (AWN_OcclusionVolume *)0x0) {
              bVar10 = pAVar20 == (AWN_OcclusionVolume *)0x0;
            }
            else {
              bVar10 = pAVar3 == pAVar20;
            }
            if (bVar10) break;
          }
        }
        TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
      } while( true );
    }
  }
  iVar18 = *(int *)&(pTVar27->Elements).field_0x28;
  local_210 = &(pTVar27->Elements).field_0x10;
  iStack_218 = 0;
  local_200 = 0;
  iStack_204 = 0;
  if (iVar18 != 0) {
    puVar26 = *(uint **)&(pTVar27->Elements).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)local_210;
    }
    uVar23 = *puVar26;
    while (uVar23 == 0) {
      iStack_218 = iStack_218 + 1;
      local_200 = local_200 + 0x20;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_218) goto LAB_14a037593;
      uVar23 = puVar26[iStack_218];
    }
    uVar11 = ~(uVar23 - 1) & uVar23;
    uVar1 = (ulonglong)uVar11 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_250 = (int)lVar4;
    iStack_204 = local_200 + -1 + local_250;
    if (iVar18 < iStack_204) {
LAB_14a037593:
      iStack_204 = iVar18;
    }
  }
  puVar22 = &(pTVar27->Elements).field_0x10;
  iStack_1fc = iStack_26c;
  iStack_1f8 = *(int *)&(pTVar27->Elements).field_0x8 - *(int *)&(pTVar27->Elements).field_0x34;
  uVar23 = *(uint *)&(pTVar27->Elements).field_0x28;
  uStack_208 = 0xffffffff;
  TStack_1b8.CurrentBitIndex = iStack_204;
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  uVar21 = uVar23 & 0xffffffe0;
  TStack_1b8._padding_ = CONCAT44(uVar11,iStack_218);
  iVar18 = (int)uVar23 >> 5;
  TStack_1b8._28_4_ = iStack_26c;
  TStack_1b8.BaseBitIndex = local_200;
  uStack_198 = CONCAT44(uStack_1f4,iStack_1f8);
  local_220 = pTVar27;
  uStack_214 = uVar11;
  local_1c0 = pTVar27;
  TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_210;
  if ((((int)uVar23 < 0) || (*(int *)&(pTVar27->Elements).field_0x28 < (int)uVar23)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar6 = local_2b5;
  uVar11 = *(uint *)&(pTVar27->Elements).field_0x28;
  if (uVar23 != uVar11) {
    puVar24 = *(undefined1 **)&(pTVar27->Elements).field_0x20;
    puVar25 = puVar22;
    if (puVar24 != (undefined1 *)0x0) {
      puVar25 = puVar24;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar18 * 4);
    while (uVar23 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar23 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar18)
      goto LAB_14a0376b0;
      uVar23 = *(uint *)(puVar25 + (longlong)iVar18 * 4);
    }
    uVar1 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_24c = (int)lVar4;
    uVar23 = (uVar21 - 1) + local_24c;
    if ((int)uVar11 < (int)uVar23) {
      uVar23 = uVar11;
    }
  }
LAB_14a0376b0:
  do {
    pTVar27 = local_1c0;
    if (*(int *)&(local_1c0->Elements).field_0x8 - *(int *)&(local_1c0->Elements).field_0x34 !=
        (int)uStack_198) {
      local_2b4[0] = 0;
      `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_2b4);
    }
    pAVar19 = local_298;
    if (((TStack_1b8.CurrentBitIndex == uVar23) &&
        (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
       (pTVar27 == local_2b0)) {
      if (bVar8) {
        pAVar16 = (this->CurrentBGMVolume).field0_0x0.DebugPtr;
        if (pAVar16 == (AWN_BGMVolume *)0x0) {
          bVar8 = local_298 == (AWN_BGMVolume *)0x0;
        }
        else {
          bVar8 = pAVar16 == local_298;
        }
        if (!bVar8) {
          pAVar16 = local_298;
          if (local_298 == (AWN_BGMVolume *)0x0) {
            pAVar16 = (AWN_BGMVolume *)0x0;
          }
          TMulticastDelegate<void___cdecl(AWN_BGMVolume_*),FDefaultDelegateUserPolicy>::Broadcast
                    (&this->WN_OnBGMVolumeChange,pAVar16);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar19 != (AWN_BGMVolume *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar19);
        }
        (this->CurrentBGMVolume).field0_0x0.DebugPtr = pAVar19;
      }
      if (bVar9) {
        local_128.Elements._0_8_ = 0;
        local_128.Elements._8_8_ = 0;
        local_128.Elements._32_8_ = 0;
        local_128.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
        local_128.Elements._48_8_ = _UNK_150631d98;
        local_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_128.HashSize = 0;
        TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
        ::operator=(&local_128,&local_b8);
        OnAmbientSoundVolumeChange(this,&local_128);
      }
      local_b8.HashSize = 0;
      if (local_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UWN_AmbientSoundVolumeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UWN_AmbientSoundVolumeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_b8.Elements);
      return;
    }
    local_2a0 = *(FWeakObjectPtr *)
                 (*(longlong *)&pTVar27->Elements + (longlong)TStack_1b8.CurrentBitIndex * 0x10);
    pUVar13 = FWeakObjectPtr::Get(&local_2a0);
    pAVar19 = *(AWN_BGMVolume **)&pUVar13[4].field_0x8;
    if (pAVar19 == (AWN_BGMVolume *)0x0) {
LAB_14a037737:
      pAVar19 = (AWN_BGMVolume *)0x0;
    }
    else {
      pUVar12 = AWN_BGMVolume::StaticClass();
      iVar18 = (int)pUVar12->_padding_;
      if ((*(int *)(pAVar19->_padding_ + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar12->_padding_)) goto LAB_14a037737;
    }
    if ((bVar8) && (pAVar19 != (AWN_BGMVolume *)0x0)) {
      this_00 = (UWN_VolumeComponent *)(pAVar19->VolumeComponent).field0_0x0.DebugPtr;
      if ((this_00 == (UWN_VolumeComponent *)0x0) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7190265352222147935>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                              ,0x55f,"InVolumeComponent"), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar18 = pAVar19->BGMPriority;
      if ((local_2a8 < iVar18) ||
         ((local_2a8 == iVar18 &&
          (dVar28 = UWN_VolumeComponent::GetTimeSinceEnter(this_00,EVar6), iVar18 = local_2a8,
          dVar28 <= (double)fVar29)))) {
        local_2a8 = iVar18;
        local_298 = pAVar19;
        dVar28 = UWN_VolumeComponent::GetTimeSinceEnter(this_00,EVar6);
        fVar29 = (float)dVar28;
      }
    }
    pUVar13 = FWeakObjectPtr::Get(&local_2a0);
    if (pUVar13 == (UObject *)0x0) {
LAB_14a037805:
      pUVar13 = (UObject *)0x0;
    }
    else {
      pUVar12 = Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister();
      iVar18 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar12->_padding_)) goto LAB_14a037805;
    }
    local_230 = pUVar13;
    if ((bVar9) && (pUVar13 != (UObject *)0x0)) {
      TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
      ::Emplace<UWN_AmbientSoundVolumeComponent_*_const_&>(&local_b8,&local_248,(bool *)&local_230);
    }
    pUVar13 = FWeakObjectPtr::Get(&local_2a0);
    pAVar20 = *(AWN_OcclusionVolume **)&pUVar13[4].field_0x8;
    if (pAVar20 == (AWN_OcclusionVolume *)0x0) {
LAB_14a03786a:
      pAVar20 = (AWN_OcclusionVolume *)0x0;
    }
    else {
      pUVar12 = AWN_OcclusionVolume::StaticClass();
      iVar18 = (int)pUVar12->_padding_;
      if ((*(int *)(pAVar20->_padding_ + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar20->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar12->_padding_)) goto LAB_14a03786a;
    }
    if (Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton == (UClass *)0x0) {
      local_228.AddReferencedObjects = UActorComponent::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/WN_WorldUtils",L"WN_OcclusionVolumeComponent",
                 &Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton,
                 UWN_OcclusionVolumeComponent::StaticRegisterNativesUWN_OcclusionVolumeComponent,
                 0x6a0,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
                 InternalConstructor<UWN_OcclusionVolumeComponent>,
                 InternalVTableHelperCtorCaller<UWN_OcclusionVolumeComponent>,&local_228,
                 UWN_VolumeComponent::StaticClass,UObject::StaticClass);
    }
    bVar10 = CanCheckVolumeChange
                       (this,Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton,
                        EVar6);
    if (((bVar10) && (pAVar20 != (AWN_OcclusionVolume *)0x0)) &&
       ((pUVar13 = FWeakObjectPtr::Get(&local_2a0), pUVar13[0x2a].field_0x8 == '\0' ||
        (pUVar13[0x2a].field_0x9 == '\0')))) {
      SetCurrentOcclusionVolume(this,pAVar20);
    }
    TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
  } while( true );
}

// OnVolumeLeave @ 14a037ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UWN_WorldUtils_Subsystem::OnVolumeLeave
          (UWN_WorldUtils_Subsystem *this,EWN_VolumeObserverMode param_1,
          TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  AWN_OcclusionVolume *pAVar3;
  UWN_VolumeComponent *this_00;
  longlong lVar4;
  code *pcVar5;
  EWN_VolumeObserverMode EVar6;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  UWorld *pUVar14;
  AActor *pAVar15;
  AWN_BGMVolume *pAVar16;
  int iVar17;
  int iVar18;
  AWN_BGMVolume *pAVar19;
  AWN_OcclusionVolume *pAVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  uint *puVar26;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar27;
  double dVar28;
  float fVar29;
  undefined1 auStackY_328 [32];
  undefined1 uStack_2b6;
  EWN_VolumeObserverMode EStack_2b5;
  undefined1 auStack_2b4 [4];
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_2b0;
  int iStack_2a8;
  FWeakObjectPtr FStack_2a0;
  AWN_BGMVolume *pAStack_298;
  UWN_WorldUtils_Subsystem *pUStack_290;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_288;
  int iStack_280;
  uint uStack_27c;
  undefined1 *puStack_278;
  undefined4 uStack_270;
  int iStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  int iStack_258;
  int iStack_254;
  int iStack_250;
  int iStack_24c;
  UWN_AmbientSoundVolumeComponent *pUStack_248;
  FWeakObjectPtr FStack_240;
  UClass *pUStack_238;
  UObject *pUStack_230;
  FUObjectCppClassStaticFunctions FStack_228;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_220;
  int iStack_218;
  uint uStack_214;
  undefined1 *puStack_210;
  undefined4 uStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  int iStack_1f8;
  undefined4 uStack_1f4;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTStack_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  TActorIteratorBase<FActorIterator> TStack_188;
  TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
  TStack_128;
  undefined4 uStack_bc;
  TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
  TStack_b8;
  ulonglong uStack_68;
  
  fVar29 = __real_bf800000;
  uStack_68 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pAStack_298 = (AWN_BGMVolume *)0x0;
  iStack_2a8 = -1;
  EStack_2b5 = param_1;
  pTStack_2b0 = param_2;
  pUStack_290 = this;
  pUVar12 = UWN_BGMVolumeComponent::StaticClass();
  bVar8 = CanCheckVolumeChange(this,pUVar12,param_1);
  TStack_b8.Elements._0_8_ = 0;
  TStack_b8.Elements._8_8_ = 0;
  TStack_b8.Elements._32_8_ = 0;
  TStack_b8.Elements._40_4_ = 0;
  TStack_b8.Elements._44_4_ = 0x80;
  TStack_b8.Elements._48_4_ = 0xffffffff;
  TStack_b8.Elements._52_4_ = 0;
  TStack_b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_b8.HashSize = 0;
  pUVar12 = Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister();
  bVar9 = CanCheckVolumeChange(this,pUVar12,param_1);
  uVar11 = 1;
  pTVar27 = param_2;
  if ((this->CurrentOcclusionVolume).field0_0x0.DebugPtr != (AWN_OcclusionVolume *)0x0) {
    pUVar12 = UWN_OcclusionVolumeComponent::StaticClass();
    bVar10 = CanCheckVolumeChange(this,pUVar12,param_1);
    if (bVar10) {
      iVar18 = *(int *)&(param_2->Elements).field_0x28;
      puVar22 = &(param_2->Elements).field_0x10;
      iStack_280 = 0;
      iStack_268 = 0;
      uStack_27c = 1;
      iStack_26c = 0;
      if (iVar18 != 0) {
        puVar26 = *(uint **)&(param_2->Elements).field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)puVar22;
        }
        uStack_27c = *puVar26;
        while (uStack_27c == 0) {
          iStack_280 = iStack_280 + 1;
          iStack_268 = iStack_268 + 0x20;
          uStack_27c = 1;
          iStack_26c = iVar18;
          if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_280)
          goto LAB_14a0371bc;
          uStack_27c = puVar26[iStack_280];
        }
        uStack_27c = ~(uStack_27c - 1) & uStack_27c;
        uVar1 = (ulonglong)uStack_27c * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iStack_258 = (int)lVar4;
        iStack_26c = iStack_268 + -1 + iStack_258;
        if (iVar18 < iStack_26c) {
          iStack_26c = iVar18;
        }
      }
LAB_14a0371bc:
      uStack_264 = uStack_bc;
      iStack_260 = *(int *)&(param_2->Elements).field_0x8 - *(int *)&(param_2->Elements).field_0x34;
      uVar23 = *(uint *)&(param_2->Elements).field_0x28;
      TStack_1e8._padding_ = CONCAT44(uStack_27c,iStack_280);
      uVar21 = uVar23 & 0xffffffe0;
      uStack_270 = 0xffffffff;
      TStack_1e8.CurrentBitIndex = iStack_26c;
      TStack_1e8.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar23 >> 5;
      TStack_1e8._28_4_ = uStack_bc;
      TStack_1e8.BaseBitIndex = iStack_268;
      uStack_1c8 = CONCAT44(uStack_25c,iStack_260);
      pTStack_288 = param_2;
      puStack_278 = puVar22;
      pTStack_1f0 = param_2;
      TStack_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar22;
      if ((((int)uVar23 < 0) || (iVar18 < (int)uVar23)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this = pUStack_290;
      pTVar27 = pTStack_2b0;
      uVar2 = *(uint *)&(param_2->Elements).field_0x28;
      if (uVar23 != uVar2) {
        puVar24 = *(undefined1 **)&(param_2->Elements).field_0x20;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = puVar22;
        }
        uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar17 * 4);
        while (uVar23 == 0) {
          iVar17 = iVar17 + 1;
          uVar21 = uVar21 + 0x20;
          uVar23 = uVar2;
          if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar17)
          goto LAB_14a0372c0;
          uVar23 = *(uint *)(puVar24 + (longlong)iVar17 * 4);
        }
        uVar1 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iStack_254 = (int)lVar4;
        uVar23 = (uVar21 - 1) + iStack_254;
        if ((int)uVar2 < (int)uVar23) {
          uVar23 = uVar2;
        }
      }
LAB_14a0372c0:
      do {
        pTVar7 = pTStack_1f0;
        if (*(int *)&(pTStack_1f0->Elements).field_0x8 - *(int *)&(pTStack_1f0->Elements).field_0x34
            != (int)uStack_1c8) {
          uStack_2b6 = 0;
          `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_2b6);
        }
        if (((TStack_1e8.CurrentBitIndex == uVar23) &&
            (TStack_1e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
           (pTVar7 == pTVar27)) {
          TMulticastDelegate<void___cdecl(AWN_OcclusionVolume_*),FDefaultDelegateUserPolicy>::
          Broadcast(&this->WN_OnOcclusionVolumeLeave,
                    (this->CurrentOcclusionVolume).field0_0x0.DebugPtr);
          AWN_OcclusionVolume::UnbindToActorEvents
                    ((this->CurrentOcclusionVolume).field0_0x0.DebugPtr);
          SetCurrentOcclusionVolume(this,(AWN_OcclusionVolume *)0x0);
          pUVar14 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
          if (pUVar14 != (UWorld *)0x0) {
            pUStack_238 = Z_Construct_UClass_AActor_NoRegister();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUStack_238 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUStack_238);
            }
            TStack_188.Flags = OnlyActiveLevels|SkipPendingKill;
            TStack_188.State.bIsSet = false;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUStack_238 != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUStack_238);
            }
            FActorIteratorState::FActorIteratorState
                      (&TStack_188.State.TypedValue,pUVar14,(TSubclassOf<AActor>)&pUStack_238);
            TStack_188.State.bIsSet = true;
            while( true ) {
              TActorIteratorBase<FActorIterator>::operator++(&TStack_188);
              if ((TStack_188.State.bIsSet == false) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (TStack_188.State.TypedValue.ReachedEnd != false) break;
              if ((TStack_188.State.bIsSet == false) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar10)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pAVar15 = FActorIteratorState::GetActorChecked(&TStack_188.State.TypedValue);
              SetComponentsVisibility<ULocalFogVolumeComponent>(pAVar15,true,true);
              SetComponentsVisibility<UVolumetricCloudComponent>(pAVar15,true,true);
              SetComponentsVisibility<USkyAtmosphereComponent>(pAVar15,true,true);
            }
            if (TStack_188.State.bIsSet != false) {
              UWorld::RemoveOnActorSpawnedHandler
                        (TStack_188.State.TypedValue.CurrentWorld,
                         TStack_188.State.TypedValue.ActorSpawnedDelegateHandle);
              if (TStack_188.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(TStack_188.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
              }
              if (TStack_188.State.TypedValue.ActorArray.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(TStack_188.State.TypedValue.ActorArray.AllocatorInstance.Data);
              }
            }
          }
          break;
        }
        FStack_240 = *(FWeakObjectPtr *)
                      (*(longlong *)&pTVar7->Elements + (longlong)TStack_1e8.CurrentBitIndex * 0x10)
        ;
        pUVar13 = FWeakObjectPtr::Get(&FStack_240);
        pAVar20 = *(AWN_OcclusionVolume **)&pUVar13[4].field_0x8;
        if (pAVar20 != (AWN_OcclusionVolume *)0x0) {
          pUVar12 = AWN_OcclusionVolume::StaticClass();
          iVar18 = (int)pUVar12->_padding_;
          if ((iVar18 <= *(int *)(pAVar20->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar20->_padding_ + 0x30) + (longlong)iVar18 * 8) ==
              &pUVar12->_padding_)) {
            pAVar3 = (this->CurrentOcclusionVolume).field0_0x0.DebugPtr;
            if (pAVar3 == (AWN_OcclusionVolume *)0x0) {
              bVar10 = pAVar20 == (AWN_OcclusionVolume *)0x0;
            }
            else {
              bVar10 = pAVar3 == pAVar20;
            }
            if (bVar10) break;
          }
        }
        TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
      } while( true );
    }
  }
  iVar18 = *(int *)&(pTVar27->Elements).field_0x28;
  puStack_210 = &(pTVar27->Elements).field_0x10;
  iStack_218 = 0;
  iStack_200 = 0;
  iStack_204 = 0;
  if (iVar18 != 0) {
    puVar26 = *(uint **)&(pTVar27->Elements).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puStack_210;
    }
    uVar23 = *puVar26;
    while (uVar23 == 0) {
      iStack_218 = iStack_218 + 1;
      iStack_200 = iStack_200 + 0x20;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_218) goto LAB_14a037593;
      uVar23 = puVar26[iStack_218];
    }
    uVar11 = ~(uVar23 - 1) & uVar23;
    uVar1 = (ulonglong)uVar11 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_250 = (int)lVar4;
    iStack_204 = iStack_200 + -1 + iStack_250;
    if (iVar18 < iStack_204) {
LAB_14a037593:
      iStack_204 = iVar18;
    }
  }
  puVar22 = &(pTVar27->Elements).field_0x10;
  iStack_1fc = iStack_26c;
  iStack_1f8 = *(int *)&(pTVar27->Elements).field_0x8 - *(int *)&(pTVar27->Elements).field_0x34;
  uVar23 = *(uint *)&(pTVar27->Elements).field_0x28;
  uStack_208 = 0xffffffff;
  TStack_1b8.CurrentBitIndex = iStack_204;
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  uVar21 = uVar23 & 0xffffffe0;
  TStack_1b8._padding_ = CONCAT44(uVar11,iStack_218);
  iVar18 = (int)uVar23 >> 5;
  TStack_1b8._28_4_ = iStack_26c;
  TStack_1b8.BaseBitIndex = iStack_200;
  uStack_198 = CONCAT44(uStack_1f4,iStack_1f8);
  pTStack_220 = pTVar27;
  uStack_214 = uVar11;
  pTStack_1c0 = pTVar27;
  TStack_1b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_210;
  if ((((int)uVar23 < 0) || (*(int *)&(pTVar27->Elements).field_0x28 < (int)uVar23)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar6 = EStack_2b5;
  uVar11 = *(uint *)&(pTVar27->Elements).field_0x28;
  if (uVar23 != uVar11) {
    puVar24 = *(undefined1 **)&(pTVar27->Elements).field_0x20;
    puVar25 = puVar22;
    if (puVar24 != (undefined1 *)0x0) {
      puVar25 = puVar24;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar18 * 4);
    while (uVar23 == 0) {
      iVar18 = iVar18 + 1;
      uVar21 = uVar21 + 0x20;
      uVar23 = uVar11;
      if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar18)
      goto LAB_14a0376b0;
      uVar23 = *(uint *)(puVar25 + (longlong)iVar18 * 4);
    }
    uVar1 = (ulonglong)(~(uVar23 - 1) & uVar23) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_24c = (int)lVar4;
    uVar23 = (uVar21 - 1) + iStack_24c;
    if ((int)uVar11 < (int)uVar23) {
      uVar23 = uVar11;
    }
  }
LAB_14a0376b0:
  do {
    pTVar27 = pTStack_1c0;
    if (*(int *)&(pTStack_1c0->Elements).field_0x8 - *(int *)&(pTStack_1c0->Elements).field_0x34 !=
        (int)uStack_198) {
      auStack_2b4[0] = 0;
      `TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStack_2b4);
    }
    pAVar19 = pAStack_298;
    if (((TStack_1b8.CurrentBitIndex == uVar23) &&
        (TStack_1b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) &&
       (pTVar27 == pTStack_2b0)) {
      if (bVar8) {
        pAVar16 = (this->CurrentBGMVolume).field0_0x0.DebugPtr;
        if (pAVar16 == (AWN_BGMVolume *)0x0) {
          bVar8 = pAStack_298 == (AWN_BGMVolume *)0x0;
        }
        else {
          bVar8 = pAVar16 == pAStack_298;
        }
        if (!bVar8) {
          pAVar16 = pAStack_298;
          if (pAStack_298 == (AWN_BGMVolume *)0x0) {
            pAVar16 = (AWN_BGMVolume *)0x0;
          }
          TMulticastDelegate<void___cdecl(AWN_BGMVolume_*),FDefaultDelegateUserPolicy>::Broadcast
                    (&this->WN_OnBGMVolumeChange,pAVar16);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar19 != (AWN_BGMVolume *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar19);
        }
        (this->CurrentBGMVolume).field0_0x0.DebugPtr = pAVar19;
      }
      if (bVar9) {
        TStack_128.Elements._0_8_ = 0;
        TStack_128.Elements._8_8_ = 0;
        TStack_128.Elements._32_8_ = 0;
        TStack_128.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
        TStack_128.Elements._48_8_ = _UNK_150631d98;
        TStack_128.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        TStack_128.HashSize = 0;
        TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
        ::operator=(&TStack_128,&TStack_b8);
        OnAmbientSoundVolumeChange(this,&TStack_128);
      }
      TStack_b8.HashSize = 0;
      if (TStack_b8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)TStack_b8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<UWN_AmbientSoundVolumeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UWN_AmbientSoundVolumeComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&TStack_b8.Elements);
      return;
    }
    FStack_2a0 = *(FWeakObjectPtr *)
                  (*(longlong *)&pTVar27->Elements + (longlong)TStack_1b8.CurrentBitIndex * 0x10);
    pUVar13 = FWeakObjectPtr::Get(&FStack_2a0);
    pAVar19 = *(AWN_BGMVolume **)&pUVar13[4].field_0x8;
    if (pAVar19 == (AWN_BGMVolume *)0x0) {
LAB_14a037737:
      pAVar19 = (AWN_BGMVolume *)0x0;
    }
    else {
      pUVar12 = AWN_BGMVolume::StaticClass();
      iVar18 = (int)pUVar12->_padding_;
      if ((*(int *)(pAVar19->_padding_ + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar19->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar12->_padding_)) goto LAB_14a037737;
    }
    if ((bVar8) && (pAVar19 != (AWN_BGMVolume *)0x0)) {
      this_00 = (UWN_VolumeComponent *)(pAVar19->VolumeComponent).field0_0x0.DebugPtr;
      if ((this_00 == (UWN_VolumeComponent *)0x0) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7190265352222147935>,false,
                              "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                              ,0x55f,"InVolumeComponent"), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar18 = pAVar19->BGMPriority;
      if ((iStack_2a8 < iVar18) ||
         ((iStack_2a8 == iVar18 &&
          (dVar28 = UWN_VolumeComponent::GetTimeSinceEnter(this_00,EVar6), iVar18 = iStack_2a8,
          dVar28 <= (double)fVar29)))) {
        iStack_2a8 = iVar18;
        pAStack_298 = pAVar19;
        dVar28 = UWN_VolumeComponent::GetTimeSinceEnter(this_00,EVar6);
        fVar29 = (float)dVar28;
      }
    }
    pUVar13 = FWeakObjectPtr::Get(&FStack_2a0);
    if (pUVar13 == (UObject *)0x0) {
LAB_14a037805:
      pUVar13 = (UObject *)0x0;
    }
    else {
      pUVar12 = Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister();
      iVar18 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar12->_padding_)) goto LAB_14a037805;
    }
    pUStack_230 = pUVar13;
    if ((bVar9) && (pUVar13 != (UObject *)0x0)) {
      TSet<UWN_AmbientSoundVolumeComponent_*,DefaultKeyFuncs<UWN_AmbientSoundVolumeComponent_*,0>,FDefaultSetAllocator>
      ::Emplace<UWN_AmbientSoundVolumeComponent_*_const_&>
                (&TStack_b8,&pUStack_248,(bool *)&pUStack_230);
    }
    pUVar13 = FWeakObjectPtr::Get(&FStack_2a0);
    pAVar20 = *(AWN_OcclusionVolume **)&pUVar13[4].field_0x8;
    if (pAVar20 == (AWN_OcclusionVolume *)0x0) {
LAB_14a03786a:
      pAVar20 = (AWN_OcclusionVolume *)0x0;
    }
    else {
      pUVar12 = AWN_OcclusionVolume::StaticClass();
      iVar18 = (int)pUVar12->_padding_;
      if ((*(int *)(pAVar20->_padding_ + 0x38) < iVar18) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar20->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
          &pUVar12->_padding_)) goto LAB_14a03786a;
    }
    if (Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton == (UClass *)0x0) {
      FStack_228.AddReferencedObjects = UActorComponent::AddReferencedObjects;
      GetPrivateStaticClassBody
                (L"/Script/WN_WorldUtils",L"WN_OcclusionVolumeComponent",
                 &Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton,
                 UWN_OcclusionVolumeComponent::StaticRegisterNativesUWN_OcclusionVolumeComponent,
                 0x6a0,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
                 InternalConstructor<UWN_OcclusionVolumeComponent>,
                 InternalVTableHelperCtorCaller<UWN_OcclusionVolumeComponent>,&FStack_228,
                 UWN_VolumeComponent::StaticClass,UObject::StaticClass);
    }
    bVar10 = CanCheckVolumeChange
                       (this,Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton,
                        EVar6);
    if (((bVar10) && (pAVar20 != (AWN_OcclusionVolume *)0x0)) &&
       ((pUVar13 = FWeakObjectPtr::Get(&FStack_2a0), pUVar13[0x2a].field_0x8 == '\0' ||
        (pUVar13[0x2a].field_0x9 == '\0')))) {
      SetCurrentOcclusionVolume(this,pAVar20);
    }
    TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
  } while( true );
}

// PostInitialize @ 14a037fc0

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

void __thiscall UWN_WorldUtils_Subsystem::PostInitialize(UWN_WorldUtils_Subsystem *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UWN_CommonSubsystem *pUVar3;
  char *pcVar4;
  UObject *pUVar5;
  UFunction *pUVar6;
  char *pcVar7;
  char *pcVar8;
  <lambda_1> local_res10 [8];
  <lambda_1> local_res18 [8];
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_158;
  FWeakObjectPtr local_150;
  FName local_148;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_140;
  FWeakObjectPtr local_138;
  FName local_130;
  FName local_128;
  FName local_120;
  UWN_WorldUtils_Subsystem *local_118;
  FName *local_110;
  FName local_108;
  UWN_WorldUtils_Subsystem *local_100;
  FName *local_f8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_f0;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_e0;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FReadAccessScope local_a0;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  UWorldSubsystem::PostInitialize((UWorldSubsystem *)this);
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((this_00 == (UWorld *)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7190265352222146852>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                         ,0x124,"world != nullptr"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar3 = UWorld::GetSubsystem<UWN_CommonSubsystem>(this_00);
  if (pUVar3 == (UWN_CommonSubsystem *)0x0) {
    return;
  }
  pcVar4 = strstr("&UWN_WorldUtils_Subsystem::OnVolumeEnter","::");
  pcVar8 = &DAT_00000002;
  if (pcVar4 == (char *)0x0) {
LAB_14a03809a:
    pcVar7 = &DAT_00000002;
LAB_14a03809d:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar7 == (char *)0x0) goto LAB_14a03809a;
    pcVar7 = pcVar7 + 2;
    if (*pcVar7 == '0') goto LAB_14a03809d;
  }
  ::FName::FName(&local_120,pcVar7);
  if ((this == (UWN_WorldUtils_Subsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20 = local_120;
  local_158.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_150.ObjectIndex = 0;
  local_150.ObjectSerialNumber = 0;
  local_148.ComparisonIndex.Value = 0;
  local_148.Number = 0;
  if ((this == (UWN_WorldUtils_Subsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_118 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UWN_WorldUtils_Subsystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_150,(FObjectPtr)&local_118);
  local_148 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_158,&local_a0);
  if ((local_148 == (FName)0x0) ||
     (pUVar5 = FWeakObjectPtr::Get(&local_150), pUVar5 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a0);
LAB_14a0381cf:
    local_110 = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,enum_EWN_VolumeObserverMode,UE::Math::TVector<double>,TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>_const_&>
    ::__Internal_BindDynamic<UWN_WorldUtils_Subsystem>'::__l2::<lambda_1>::operator()(&local_110);
  }
  else {
    pUVar6 = UObject::FindFunction(pUVar5,local_148);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a0);
    if (pUVar6 == (UFunction *)0x0) goto LAB_14a0381cf;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_158,&local_70);
  local_f0.Object = local_150;
  local_f0.FunctionName = local_148;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnEnter,
             (FWriteAccessScope *)&local_d0);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar3->OnEnter).field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3->OnEnter,&local_f0);
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_158.AccessDetector);
  pcVar4 = strstr("&UWN_WorldUtils_Subsystem::OnVolumeLeave","::");
  if (pcVar4 == (char *)0x0) {
LAB_14a0382aa:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar7 = pcVar4;
      pcVar4 = strstr(pcVar7 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if ((pcVar7 == (char *)0x0) || (pcVar8 = pcVar7 + 2, pcVar7[2] == '0')) goto LAB_14a0382aa;
  }
  ::FName::FName(&local_108,pcVar8);
  if ((this == (UWN_WorldUtils_Subsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_140.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_138.ObjectIndex = 0;
  local_138.ObjectSerialNumber = 0;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  local_128 = local_108;
  if ((this == (UWN_WorldUtils_Subsystem *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_100 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UWN_WorldUtils_Subsystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_100);
  local_130 = local_128;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_140,&local_88);
  if ((local_130 == (FName)0x0) ||
     (pUVar5 = FWeakObjectPtr::Get(&local_138), pUVar5 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
  }
  else {
    pUVar6 = UObject::FindFunction(pUVar5,local_130);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    if (pUVar6 != (UFunction *)0x0) goto LAB_14a0383f4;
  }
  local_f8 = &local_128;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,enum_EWN_VolumeObserverMode,TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>_const_&>
  ::__Internal_BindDynamic<UWN_WorldUtils_Subsystem>'::__l2::<lambda_1>::operator()(&local_f8);
LAB_14a0383f4:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_140,&local_58);
  local_e0.Object = local_138;
  local_e0.FunctionName = local_130;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_58);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->OnLeave,
             (FWriteAccessScope *)&local_b8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&(pUVar3->OnLeave).field_0x8,local_res18,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar3->OnLeave,&local_e0);
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_140.AccessDetector);
  return;
}

// RemoveFromPrimitiveSet @ 14a0391a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UWN_WorldUtils_Subsystem::RemoveFromPrimitiveSet
          (UWN_WorldUtils_Subsystem *this,UPrimitiveComponent *param_1,
          TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          *param_2)

{
  FPrimitiveComponentId local_res10 [6];
  
  if ((param_1 != (UPrimitiveComponent *)0x0) && ((param_1->field_0x98 & 1) != 0)) {
    local_res10[0].PrimIDValue = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
    if (*(int *)&(param_2->Elements).field_0x8 != *(int *)&(param_2->Elements).field_0x34) {
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      RemoveImpl<FPrimitiveComponentId>(param_2,local_res10[0].PrimIDValue,local_res10);
    }
    return true;
  }
  return false;
}

// RemoveHiddenPrimitive @ 14a0391f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UWN_WorldUtils_Subsystem::RemoveHiddenPrimitive
          (UWN_WorldUtils_Subsystem *this,UPrimitiveComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  FPrimitiveComponentId local_res8 [2];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_28;
  
  if ((param_1 != (UPrimitiveComponent *)0x0) && ((param_1->field_0x98 & 1) != 0)) {
    local_res8[0].PrimIDValue = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
    if (*(int *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x8 !=
        *(int *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x34) {
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      RemoveImpl<FPrimitiveComponentId>
                (&this->CustomHiddenPrimitiveIDs,local_res8[0].PrimIDValue,local_res8);
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    USceneComponent::GetChildrenComponents((USceneComponent *)param_1,true,&local_28);
    iVar4 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar6.Data = local_28.AllocatorInstance.Data;
    while( true ) {
      if (local_28.ArrayNum != iVar4) {
        `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar6.Data == pFVar1) break;
      lVar3 = *(longlong *)FVar6.Data;
      if (lVar3 != 0) {
        pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar2 = (int)pUVar5->_padding_;
        if ((((iVar2 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar5->_padding_)) && ((*(byte *)(lVar3 + 0x98) & 1) != 0)) &&
           (local_res8[0].PrimIDValue = *(uint *)(lVar3 + 0x344),
           *(int *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x8 !=
           *(int *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x34)) {
          TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>
          ::RemoveImpl<FPrimitiveComponentId>
                    (&this->CustomHiddenPrimitiveIDs,local_res8[0].PrimIDValue,local_res8);
        }
      }
      FVar6.Data = FVar6.Data + 8;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
  }
  return;
}

// RemoveHiddenPrimitiveOnly @ 14a039310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UWN_WorldUtils_Subsystem::RemoveHiddenPrimitiveOnly
          (UWN_WorldUtils_Subsystem *this,UPrimitiveComponent *param_1)

{
  FPrimitiveComponentId local_res8 [8];
  
  if ((param_1 != (UPrimitiveComponent *)0x0) && ((param_1->field_0x98 & 1) != 0)) {
    local_res8[0].PrimIDValue = (param_1->SceneData).PrimitiveSceneId.PrimIDValue;
    if (*(int *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x8 !=
        *(int *)&(this->CustomHiddenPrimitiveIDs).Elements.field_0x34) {
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      RemoveImpl<FPrimitiveComponentId>
                (&this->CustomHiddenPrimitiveIDs,local_res8[0].PrimIDValue,local_res8);
    }
  }
  return;
}

// SelectAmbientSoundInfos @ 14a039720

void __thiscall
UWN_WorldUtils_Subsystem::SelectAmbientSoundInfos
          (UWN_WorldUtils_Subsystem *this,FWN_AmbientSoundInfo *param_1,
          TArray<FWN_AmbientSoundInfo,TSizedDefaultAllocator<32>_> *param_2,int *param_3)

{
  int *piVar1;
  FWN_AmbientSoundInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = param_1->AmbientSoundPriority;
  if (*param_3 < iVar5) {
    *param_3 = iVar5;
    piVar1 = &param_2->ArrayMax;
    pFVar2 = (FWN_AmbientSoundInfo *)(param_2->AllocatorInstance).Data;
    if (*piVar1 < 0) {
      DestructItems<FWN_AmbientSoundInfo,int>(pFVar2,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FWN_AmbientSoundInfo,int>(pFVar2,param_2->ArrayNum);
      param_2->ArrayNum = 0;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 != *piVar1) goto LAB_14a0397af;
  }
  else {
    if (*param_3 != iVar5) {
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 != param_2->ArrayMax) goto LAB_14a0397af;
  }
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x850,&param_2->AllocatorInstance,&param_2->ArrayMax);
LAB_14a0397af:
  param_2->ArrayNum = iVar5 + 1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  lVar6 = (longlong)iVar5 * 0x50;
  *(undefined ***)(pFVar3 + lVar6) = &___7FWN_AmbientSoundInfo__6B_;
  *(undefined8 *)(pFVar3 + lVar6 + 8) = *(undefined8 *)&(param_1->AmbientSound).SoftObjectPtr;
  uVar4 = *(undefined8 *)&(param_1->AmbientSound).SoftObjectPtr.field_0x10;
  *(undefined8 *)(pFVar3 + lVar6 + 0x10) =
       *(undefined8 *)&(param_1->AmbientSound).SoftObjectPtr.field_0x8;
  *(undefined8 *)(pFVar3 + lVar6 + 0x10 + 8) = uVar4;
  FUtf8String::FUtf8String
            ((FUtf8String *)(pFVar3 + lVar6 + 0x20),
             (FUtf8String *)&(param_1->AmbientSound).SoftObjectPtr.field_0x18);
  *(float *)(pFVar3 + lVar6 + 0x30) = param_1->SoundFadeInTime;
  *(float *)(pFVar3 + lVar6 + 0x34) = param_1->SoundFadeOutTime;
  *(float *)(pFVar3 + lVar6 + 0x38) = param_1->SoundDelayTime;
  *(int *)(pFVar3 + lVar6 + 0x3c) = param_1->AmbientSoundPriority;
  uVar4 = *(undefined8 *)&(param_1->Guid).C;
  *(undefined8 *)(pFVar3 + lVar6 + 0x40) = *(undefined8 *)&param_1->Guid;
  *(undefined8 *)(pFVar3 + lVar6 + 0x40 + 8) = uVar4;
  return;
}

// SelectBGMVolume @ 14a039830

void __thiscall
UWN_WorldUtils_Subsystem::SelectBGMVolume
          (UWN_WorldUtils_Subsystem *this,AWN_BGMVolume *param_1,EWN_VolumeObserverMode param_2,
          AWN_BGMVolume **param_3,int *param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  UWN_VolumeComponent *this_00;
  code *pcVar3;
  bool bVar4;
  double dVar5;
  
  this_00 = (UWN_VolumeComponent *)(param_1->VolumeComponent).field0_0x0.DebugPtr;
  if ((this_00 == (UWN_VolumeComponent *)0x0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7190265352222147935>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                         ,0x55f,"InVolumeComponent"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar2 = param_1->BGMPriority;
  if (*param_4 < iVar2) {
    *param_4 = iVar2;
    *param_3 = param_1;
    dVar5 = UWN_VolumeComponent::GetTimeSinceEnter(this_00,param_2);
    *param_5 = (float)dVar5;
  }
  else if ((*param_4 == iVar2) &&
          (fVar1 = *param_5, dVar5 = UWN_VolumeComponent::GetTimeSinceEnter(this_00,param_2),
          dVar5 <= (double)fVar1)) {
    *param_3 = param_1;
    dVar5 = UWN_VolumeComponent::GetTimeSinceEnter(this_00,param_2);
    *param_5 = (float)dVar5;
  }
  return;
}

// SetCurrentOcclusionVolume @ 14a039dc0

void __thiscall
UWN_WorldUtils_Subsystem::SetCurrentOcclusionVolume
          (UWN_WorldUtils_Subsystem *this,AWN_OcclusionVolume *param_1)

{
  undefined1 *puVar1;
  TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator> *this_00
  ;
  int iVar2;
  AWN_OcclusionVolume *pAVar3;
  bool bVar4;
  
  pAVar3 = (this->CurrentOcclusionVolume).field0_0x0.DebugPtr;
  if (pAVar3 == (AWN_OcclusionVolume *)0x0) {
    bVar4 = param_1 == (AWN_OcclusionVolume *)0x0;
  }
  else {
    bVar4 = pAVar3 == param_1;
  }
  if (!bVar4) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AWN_OcclusionVolume *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->CurrentOcclusionVolume).field0_0x0.DebugPtr = param_1;
    this_00 = &this->VolumeShownPrimitiveIDs;
    bVar4 = 1 < (this->VolumeShownPrimitiveIDs).HashSize;
    if (!bVar4) {
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      UnhashElements(this_00);
    }
    puVar1 = &(this->VolumeShownPrimitiveIDs).Elements.field_0xc;
    *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x34 = 0;
    *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x2c;
    *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->VolumeShownPrimitiveIDs).Elements.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->VolumeShownPrimitiveIDs).Elements.field_0x10,0);
    }
    if (bVar4) {
      (this->VolumeShownPrimitiveIDs).HashSize = 1;
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      Rehash(this_00);
    }
    pAVar3 = (this->CurrentOcclusionVolume).field0_0x0.DebugPtr;
    if (pAVar3 != (AWN_OcclusionVolume *)0x0) {
      TMulticastDelegate<void___cdecl(AWN_OcclusionVolume_*),FDefaultDelegateUserPolicy>::Broadcast
                (&this->WN_OnOcclusionVolumeEnter,pAVar3);
      UpdateVolumePrimitives(this);
    }
  }
  return;
}

// SetCustomAmbientSoundVolumeObserverPos @ 14a039ee0

void __thiscall
UWN_WorldUtils_Subsystem::SetCustomAmbientSoundVolumeObserverPos
          (UWN_WorldUtils_Subsystem *this,TVector<double> *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister();
  SetCustomVolumeObserverPosition(this,pUVar1,param_1);
  return;
}

// SetCustomBGMVolumeObserverPos @ 14a039f20

void __thiscall
UWN_WorldUtils_Subsystem::SetCustomBGMVolumeObserverPos
          (UWN_WorldUtils_Subsystem *this,TVector<double> *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = UWN_BGMVolumeComponent::StaticClass();
  SetCustomVolumeObserverPosition(this,pUVar1,param_1);
  return;
}

// SetCustomOcclusionVolumeObserverPos @ 14a039f60

void __thiscall
UWN_WorldUtils_Subsystem::SetCustomOcclusionVolumeObserverPos
          (UWN_WorldUtils_Subsystem *this,TVector<double> *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = UWN_OcclusionVolumeComponent::StaticClass();
  SetCustomVolumeObserverPosition(this,pUVar1,param_1);
  return;
}

// SetCustomVolumeObserverPosition @ 14a039fa0

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
UWN_WorldUtils_Subsystem::SetCustomVolumeObserverPosition
          (UWN_WorldUtils_Subsystem *this,UClass *param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UWN_CommonSubsystem *this_01;
  
  this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if (this_00 == (UWorld *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7190265352222147377>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                       ,0x331,"world != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_01 = UWorld::GetSubsystem<UWN_CommonSubsystem>(this_00);
  if (this_01 != (UWN_CommonSubsystem *)0x0) {
    UWN_CommonSubsystem::SetCustomPositionForClass(this_01,param_1,param_2);
  }
  return;
}

// SetCustomZoneVolumeObserverPos @ 14a03a020

void __thiscall
UWN_WorldUtils_Subsystem::SetCustomZoneVolumeObserverPos
          (UWN_WorldUtils_Subsystem *this,TVector<double> *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = UWN_ZoneVolumeComponent::StaticClass();
  SetCustomVolumeObserverPosition(this,pUVar1,param_1);
  return;
}

// SetObserverMode @ 14a03a0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UWN_WorldUtils_Subsystem::SetObserverMode
          (UWN_WorldUtils_Subsystem *this,UClass *param_1,EWN_VolumeObserverMode param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<UClass_*,EWN_VolumeObserverMode> *pTVar4;
  UWorld *this_00;
  UWN_CommonSubsystem *this_01;
  undefined1 *puVar5;
  undefined1 auStackY_b8 [32];
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pTVar4 = TSet<TTuple<UClass_*,enum_EWN_VolumeObserverMode>,TDefaultMapHashableKeyFuncs<UClass_*,enum_EWN_VolumeObserverMode,0>,FDefaultSetAllocator>
           ::Find(&this->VolumeObserverModes,param_1);
  puVar5 = &pTVar4->field_0x8;
  if (pTVar4 == (TTuple<UClass_*,EWN_VolumeObserverMode> *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  if (puVar5 == (undefined1 *)0x0) {
    bVar2 = false;
  }
  else {
    pTVar4 = TSet<TTuple<UClass_*,enum_EWN_VolumeObserverMode>,TDefaultMapHashableKeyFuncs<UClass_*,enum_EWN_VolumeObserverMode,0>,FDefaultSetAllocator>
             ::Find(&this->VolumeObserverModes,param_1);
    if (pTVar4 == (TTuple<UClass_*,EWN_VolumeObserverMode> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (pTVar4->field_0x8 != param_2) {
      pTVar4 = TSet<TTuple<UClass_*,enum_EWN_VolumeObserverMode>,TDefaultMapHashableKeyFuncs<UClass_*,enum_EWN_VolumeObserverMode,0>,FDefaultSetAllocator>
               ::Find(&this->VolumeObserverModes,param_1);
      if (pTVar4 == (TTuple<UClass_*,EWN_VolumeObserverMode> *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      pTVar4->field_0x8 = param_2;
      this_00 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
      if (this_00 == (UWorld *)0x0) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7190265352222147333>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                           ,0x305,"world != nullptr");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      this_01 = UWorld::GetSubsystem<UWN_CommonSubsystem>(this_00);
      if (this_01 != (UWN_CommonSubsystem *)0x0) {
        UWN_CommonSubsystem::GetVolumesEntered(this_01,&local_88,param_2);
        OnVolumeEnterLeave(this,param_2,&local_88);
        local_88.HashSize = 0;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_88.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_88.Elements);
      }
    }
    bVar2 = true;
  }
  return bVar2;
}

// ShouldCreateSubsystem @ 14a03a520

bool __thiscall
UWN_WorldUtils_Subsystem::ShouldCreateSubsystem(UWN_WorldUtils_Subsystem *this,UObject *param_1)

{
  return true;
}

// ShowActorVolumePrimitives @ 14a03a530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWN_WorldUtils_Subsystem::ShowActorVolumePrimitives(UWN_WorldUtils_Subsystem *this,AActor *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  UClass *pUVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  UClass *local_100;
  undefined4 local_f8 [2];
  longlong local_f0 [24];
  longlong *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  if (param_1 == (AActor *)0x0) {
    return;
  }
  local_20 = __security_cookie.value ^ (ulonglong)auStack_128;
  pUVar7 = (UClass *)0x0;
  pUVar9 = (UClass *)0x0;
  local_24 = 0x18;
  local_30 = (longlong *)0x0;
  local_28 = 0;
  pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 == (UClass *)0x0) goto LAB_14a03a5cd;
  }
  else {
    pUVar9 = pUVar7;
    if (pUVar5 == (UClass *)0x0) goto LAB_14a03a5cd;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
  pUVar9 = pUVar7;
  if (pUVar6 != (UClass *)0x0) {
    iVar2 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar2 * 8) != &pUVar6->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar9 = pUVar5;
    }
  }
LAB_14a03a5cd:
  pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
  local_100 = pUVar5;
  if (pUVar9 == pUVar7) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f0);
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,1,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_100,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_f0);
  }
  iVar2 = local_28;
  plVar8 = local_f0;
  if (local_30 != (longlong *)0x0) {
    plVar8 = local_30;
  }
  plVar1 = plVar8 + local_28;
  while( true ) {
    if (local_28 != iVar2) {
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_108);
    }
    if (plVar8 == plVar1) break;
    lVar3 = *plVar8;
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x98) & 1) != 0)) {
      local_f8[0] = *(undefined4 *)(lVar3 + 0x344);
      TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>::
      Emplace<FPrimitiveComponentId>
                (&this->VolumeShownPrimitiveIDs,(FPrimitiveComponentId *)&local_100,(bool *)local_f8
                );
    }
    plVar8 = plVar8 + 1;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}

// StaticRegisterNativesUWN_WorldUtils_Subsystem @ 14a03a830

void __cdecl UWN_WorldUtils_Subsystem::StaticRegisterNativesUWN_WorldUtils_Subsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UWN_WorldUtils_Subsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Tick @ 14a03a890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWN_WorldUtils_Subsystem::Tick(UWN_WorldUtils_Subsystem *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  TVector<double> local_58;
  TVector<double> local_40;
  TVector<double> local_28;
  
  UTickableWorldSubsystem::Tick((UTickableWorldSubsystem *)this,param_1);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].CachedWorldBounds);
  WN_GetObserverPos(pUVar3,&local_28,&local_40,&local_58);
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)&this[-1].CachedWorldBounds);
  if (pUVar3 == (UWorld *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7190265352222146916>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_WorldUtils\\Source\\WN_WorldUtils\\Private\\WN_WorldUtils_Subsystem.cpp"
                       ,0x164,"world != nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UWorld::IsGameWorld(pUVar3);
  return;
}

// UpdateVolumePrimitives @ 14a03b1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWN_WorldUtils_Subsystem::UpdateVolumePrimitives(UWN_WorldUtils_Subsystem *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  AActor *pAVar4;
  UClass *local_res10;
  TActorIteratorBase<FActorIterator> local_68;
  
  pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this);
  if ((pUVar3 != (UWorld *)0x0) &&
     ((this->CurrentOcclusionVolume).field0_0x0.DebugPtr != (AWN_OcclusionVolume *)0x0)) {
    local_res10 = Z_Construct_UClass_AActor_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    local_68.Flags = OnlyActiveLevels|SkipPendingKill;
    local_68.State.bIsSet = false;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    FActorIteratorState::FActorIteratorState
              (&local_68.State.TypedValue,pUVar3,(TSubclassOf<AActor>)&local_res10);
    local_68.State.bIsSet = true;
    while( true ) {
      TActorIteratorBase<FActorIterator>::operator++(&local_68);
      if (local_68.State.bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_68.State.TypedValue.ReachedEnd != false) break;
      if (local_68.State.bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pAVar4 = FActorIteratorState::GetActorChecked(&local_68.State.TypedValue);
      SetComponentsVisibility<ULocalFogVolumeComponent>(pAVar4,false,true);
      SetComponentsVisibility<UVolumetricCloudComponent>(pAVar4,false,true);
      SetComponentsVisibility<USkyAtmosphereComponent>(pAVar4,false,true);
      bVar2 = AWN_OcclusionVolume::IsActorVisibleInVolume
                        ((this->CurrentOcclusionVolume).field0_0x0.DebugPtr,pAVar4);
      if (bVar2) {
        ShowActorVolumePrimitives(this,pAVar4);
      }
      else {
        HideActorVolumePrimitives(this,pAVar4);
      }
    }
    if (local_68.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_68.State.TypedValue.CurrentWorld,
                 local_68.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_68.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
    AWN_OcclusionVolume::BindToActorEvents((this->CurrentOcclusionVolume).field0_0x0.DebugPtr);
  }
  return;
}

// __VTableCtorCaller @ 14a041c20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UWN_WorldUtils_Subsystem::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTickableWorldSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UTickableWorldSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTickableWorldSubsystem *)0x0) {
    UTickableWorldSubsystem::UTickableWorldSubsystem(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UWorldSubsystem__;
    this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 2;
    *(undefined8 *)&this[1].bInitialized = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[2].bInitialized = 0xffffffff;
    *(undefined4 *)&this[2].field_0x44 = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3].bInitialized = 0;
    *(undefined4 *)&this[3].field_0x44 = 0x80;
    *(undefined4 *)&this[4]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[4]._padding_ + 4) = 0;
    this[4]._padding_ = 0;
    *(undefined4 *)&this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    *(undefined8 *)&this[4].bInitialized = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[5]._padding_ + 4) = 0;
    this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    *(undefined4 *)&this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined8 *)&this[5].bInitialized = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 2;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 0;
    this[6]._padding_ = 2;
    this[6]._padding_ = 0;
    *(undefined8 *)&this[6].bInitialized = 0;
    this[7]._padding_ = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7]._padding_ = 0;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[7]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[7]._padding_ + 4) = 0;
    this[7]._padding_ = 0;
    *(undefined4 *)&this[7].bInitialized = 0;
    this[8]._padding_ = 0;
    this[8]._padding_ = 0;
    this[8].bInitialized = false;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execOnVolumeEnter @ 14a042df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UWN_WorldUtils_Subsystem::execOnVolumeEnter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar3;
  undefined1 auStackY_c8 [32];
  EWN_VolumeObserverMode local_98 [8];
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_98[0] = Player;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            *)local_78;
  if ((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar3 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnVolumeEnterLeave((UWN_WorldUtils_Subsystem *)param_1,local_98[0],pTVar3);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// execOnVolumeLeave @ 14a042fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UWN_WorldUtils_Subsystem::execOnVolumeLeave(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  *pTVar3;
  undefined1 auStackY_b8 [32];
  EWN_VolumeObserverMode local_88 [16];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88[0] = Player;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pTVar3 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            *)local_78;
  if ((TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       *)param_2->MostRecentPropertyAddress !=
      (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       *)0x0) {
    pTVar3 = (TSet<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWN_VolumeComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnVolumeEnterLeave((UWN_WorldUtils_Subsystem *)param_1,local_88[0],pTVar3);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

