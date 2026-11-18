// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b5c2590

UClass * __cdecl ADS_TotemActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_TotemActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TotemActor",
               &Z_Registration_Info_UClass_ADS_TotemActor.InnerSingleton,
               StaticRegisterNativesADS_TotemActor,0x7c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_TotemActor>,
               InternalVTableHelperCtorCaller<ADS_TotemActor>,local_res8,
               ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_TotemActor.InnerSingleton;
}

// ADS_TotemActor @ 14b5c6770

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_TotemActor * __thiscall
ADS_TotemActor::ADS_TotemActor(ADS_TotemActor *this,FVTableHelper *param_1)

{
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->PartsSystemControl).field0_0x0.DebugPtr = (UDS_PartsSystemControl *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  this->OwnerEntityID = 0;
  (this->TotemCloneTargetResourcePresetTable)._padding_ =
       (longlong)&___7FDS_ResourcePresetTableRow__6B_;
  this->EvolveLevel = 0;
  this->TotemCloneTargetEntityID = 0;
  (this->TotemCloneTargetResourcePresetTable).ID = 0;
  (this->TotemCloneTargetResourcePresetTable).DataStage = 0;
  ::FString::FString(&(this->TotemCloneTargetResourcePresetTable).Version,L"");
  (this->TotemCloneTargetResourcePresetTable).ID_ResourceMesh = 0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.AssetPath.PackageName.ComparisonIndex =
       0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.AssetPath.PackageName.Number = 0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.AssetPath.AssetName.ComparisonIndex = 0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.AssetPath.AssetName.Number = 0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.SubPathString.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.SubPathString.Data.ArrayNum = 0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.SubPathString.Data.ArrayMax = 0;
  (this->TotemCloneTargetResourcePresetTable).CharacterID = 0;
  (this->TotemCloneTargetResourcePresetTable).PresetID = 0;
  (this->TotemCloneTargetResourcePresetTable).CapsuleHalfHeight = 0.0;
  (this->TotemCloneTargetResourcePresetTable).CapsuleRadius = 0.0;
  (this->TotemCloneTargetResourcePresetTable).ID_AbpLink = 0;
  (this->TotemCloneTargetResourcePresetTable).HitEffectZOffset = 0.0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.AssetPath.PackageName.
  ComparisonIndex = 0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.AssetPath.PackageName.Number = 0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.AssetPath.AssetName.ComparisonIndex
       = 0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.AssetPath.AssetName.Number = 0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.SubPathString.Data.AllocatorInstance
  .Data = (FScriptContainerElement *)0x0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.SubPathString.Data.ArrayNum = 0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.SubPathString.Data.ArrayMax = 0;
  return this;
}

// ~ADS_TotemActor @ 14b5c8920

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TotemActor::~ADS_TotemActor(ADS_TotemActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  pFVar1 = (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.SubPathString.Data.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.SubPathString.Data.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TotemCloneTargetResourcePresetTable).Version.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TotemCloneTargetResourcePresetTable)._padding_ = (longlong)&___7FTableRowBase__6B_;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cba20

UClass * __cdecl ADS_TotemActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_TotemActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TotemActor",
               &Z_Registration_Info_UClass_ADS_TotemActor.InnerSingleton,
               StaticRegisterNativesADS_TotemActor,0x7c8,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_TotemActor>,
               InternalVTableHelperCtorCaller<ADS_TotemActor>,local_res8,
               ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_TotemActor.InnerSingleton;
}

// IsMovementCoreTickEnabled @ 14b5ccb40

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ADS_TotemActor::IsMovementCoreTickEnabled(ADS_TotemActor *this)

{
  return false;
}

// StaticRegisterNativesADS_TotemActor @ 14b5cdf20

void __cdecl ADS_TotemActor::StaticRegisterNativesADS_TotemActor(void)

{
  return;
}

// ADS_TotemActor @ 14bc82b20

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_TotemActor * __thiscall
ADS_TotemActor::ADS_TotemActor(ADS_TotemActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->PartsSystemControl).field0_0x0.DebugPtr = (UDS_PartsSystemControl *)0x0;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  this->OwnerEntityID = 0;
  (this->TotemCloneTargetResourcePresetTable)._padding_ =
       (longlong)&___7FDS_ResourcePresetTableRow__6B_;
  this->EvolveLevel = 0;
  this->TotemCloneTargetEntityID = 0;
  (this->TotemCloneTargetResourcePresetTable).ID = 0;
  (this->TotemCloneTargetResourcePresetTable).DataStage = 0;
  ::FString::FString(&(this->TotemCloneTargetResourcePresetTable).Version,L"");
  (this->TotemCloneTargetResourcePresetTable).ID_ResourceMesh = 0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.AssetPath.PackageName.ComparisonIndex =
       0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.AssetPath.PackageName.Number = 0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.AssetPath.AssetName.ComparisonIndex = 0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.AssetPath.AssetName.Number = 0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.SubPathString.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.SubPathString.Data.ArrayNum = 0;
  (this->TotemCloneTargetResourcePresetTable).WorkSpacePath.SubPathString.Data.ArrayMax = 0;
  (this->TotemCloneTargetResourcePresetTable).CharacterID = 0;
  (this->TotemCloneTargetResourcePresetTable).PresetID = 0;
  (this->TotemCloneTargetResourcePresetTable).CapsuleHalfHeight = 0.0;
  (this->TotemCloneTargetResourcePresetTable).CapsuleRadius = 0.0;
  (this->TotemCloneTargetResourcePresetTable).ID_AbpLink = 0;
  (this->TotemCloneTargetResourcePresetTable).HitEffectZOffset = 0.0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.AssetPath.PackageName.
  ComparisonIndex = 0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.AssetPath.PackageName.Number = 0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.AssetPath.AssetName.ComparisonIndex
       = 0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.AssetPath.AssetName.Number = 0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.SubPathString.Data.AllocatorInstance
  .Data = (FScriptContainerElement *)0x0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.SubPathString.Data.ArrayNum = 0;
  (this->TotemCloneTargetResourcePresetTable).DestructionGCPath.SubPathString.Data.ArrayMax = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  return this;
}

// BeginPlay @ 14bc89fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

void __thiscall ADS_TotemActor::BeginPlay(ADS_TotemActor *this)

{
  longlong lVar1;
  ulonglong uVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  UDS_SyncRecvComponent *pUVar7;
  FDS_SkillTotemTableRow *this_00;
  UDS_LogManager *pUVar8;
  UDS_PartsSystemControl *pUVar9;
  UWN_ISKM_CharacterCore *pUVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  TReferenceControllerBase<1> *pTVar13;
  UObject *pUVar14;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  TSharedPtr<void,1> *pTVar15;
  TReferenceControllerBase<1> *pTVar16;
  FDS_ResourcePresetTableRow *pFVar17;
  UAssetManager *pUVar18;
  FString *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  undefined1 auStackY_298 [32];
  uint uVar21;
  wchar_t *pwVar22;
  undefined1 local_248 [8];
  FDelegateAllocation local_240;
  undefined1 local_230 [8];
  FDelegateAllocation local_228;
  undefined1 local_218 [24];
  FDelegateAllocation *local_200;
  FWeakObjectPtr local_1f8;
  ForAnyElementType local_1f0;
  int local_1e8;
  undefined1 local_1e0 [16];
  int local_1d0;
  TSharedPtr<void,1> local_1c8;
  FWeakObjectPtr local_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  FSourceLocation local_1a8;
  TSharedPtr<void,1> local_188;
  FDestructionSentinel local_178;
  FDelegateAllocation *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  ADS_EntityActorBase::BeginPlay((ADS_EntityActorBase *)this);
  pUVar7 = NewObject<UDS_SyncRecvComponent>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UDS_SyncRecvComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  this->_padding_ = (longlong)pUVar7;
  this_00 = FDS_SkillTotemTableRow::Get(this->_padding_,true);
  if (this_00 == (FDS_SkillTotemTableRow *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) goto LAB_14bc8a1b5;
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"ADS_TotemActor::BeginPlay",0x19,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Warning,local_158.Ptr,0x24,L"skillTotemTable is nullptr. (%d)");
  }
  else {
    pUVar9 = (this->PartsSystemControl).field0_0x0.DebugPtr;
    if (pUVar9 == (UDS_PartsSystemControl *)0x0) {
      pUVar9 = NewObject<UDS_PartsSystemControl>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UDS_PartsSystemControl *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->PartsSystemControl).field0_0x0.DebugPtr = pUVar9;
      if (pUVar9 != (UDS_PartsSystemControl *)0x0) goto LAB_14bc8a121;
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 == (UDS_LogManager *)0x0) goto LAB_14bc8a1b5;
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"ADS_TotemActor::BeginPlay",0x19,Yes);
      pwVar22 = L"PartsSystemControl is nullptr.";
      uVar21 = 0x30;
    }
    else {
LAB_14bc8a121:
      pUVar10 = NewObject<UWN_ISKM_CharacterCore>((UObject *)this);
      bVar5 = UDS_PartsSystemControl::Init(pUVar9,(UWN_CS_CharacterCore *)pUVar10,false);
      if (bVar5) {
        pTVar20 = (TReferenceControllerBase<1> *)0x0;
        local_1a8.Impl._0_8_ = OnAllLoadComplete;
        uVar2 = (ulonglong)(uint)local_240.DelegateAllocator._4_4_;
        local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_1a8.Impl._File = (char *)(uVar2 << 0x20);
        local_248 = (undefined1  [8])0x0;
        local_240.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
                   (FWriteAccessScope *)local_218);
        local_200 = &local_240;
        puVar11 = UE::Core::Private::DelegateAllocate(0x30,&local_240);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[2] = uVar12;
          *puVar11 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_TotemActor____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar11[3] = 0;
          local_1f8 = (FWeakObjectPtr)this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)&local_1f8);
          puVar11[4] = local_1a8.Impl._0_8_;
          puVar11[5] = local_1a8.Impl._File;
        }
        if (local_218[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                     (FDestructionSentinel *)local_218);
        }
        local_1a8.Impl._0_8_ = (code *)0x0;
        local_1a8.Impl._File = (char *)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
                   (FReadAccessScope *)local_218);
        if (((local_240.DelegateSize == 0) ||
            (local_240.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
           (cVar6 = (**(code **)(*(longlong *)local_240.DelegateAllocator + 0x38))(), cVar6 == '\0')
           ) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)local_218);
        if (bVar5) {
          local_230 = (undefined1  [8])0x0;
          local_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_228.DelegateSize = 0;
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_230,
                     (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_248);
          pTVar13 = ::operator_new(0x30);
          local_1f0.Data = (FScriptContainerElement *)pTVar20;
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            *(undefined8 *)(pTVar13 + 1) = 0;
            pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
            pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
            *(undefined4 *)&pTVar13[2]._padding_ = 0;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar13 + 1),
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_230);
            pTVar13->SharedReferenceCount = (atomic<int>)0x1;
            pTVar13->WeakReferenceCount = (atomic<int>)0x1;
            pTVar13->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
            ;
            pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
            pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
            local_1f0.Data = (FScriptContainerElement *)pTVar13;
          }
          local_1f8.ObjectIndex = 0;
          local_1f8.ObjectSerialNumber = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&local_1a8.Impl._File,
                     (FSharedReferencer<1> *)&local_1f0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_1f0.Data);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
                     (FWriteAccessScope *)local_218);
          if ((local_228.DelegateSize != 0) &&
             (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_228.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_228,0,0,0x10);
            local_228.DelegateSize = 0;
          }
          if (local_218[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                       (FDestructionSentinel *)local_218);
          }
          if (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_228.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_230);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
                   (FWriteAccessScope *)local_218);
        if ((local_240.DelegateSize != 0) &&
           (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_240.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_240,0,0,0x10);
          local_240.DelegateSize = 0;
        }
        if (local_218[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                     (FDestructionSentinel *)local_218);
        }
        if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_240.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_248);
        if (this->TotemCloneTargetEntityID != 0) {
          ADS_EntityActorBase::GetEntityActorBase((ulong64 *)&local_1b8);
          bVar5 = TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> *)&local_1b8,
                             (void *)0x0);
          if (bVar5) {
            pUVar8 = UDS_LogManager::GetInst();
            if (pUVar8 != (UDS_LogManager *)0x0) {
              pUVar8 = UDS_LogManager::GetInst();
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"ADS_TotemActor::BeginPlay",0x19,Yes);
              pwVar22 = L"targetEntity is nullptr. (%llu)";
              uVar21 = 0x4c;
LAB_14bc8a5b8:
              UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,uVar21,pwVar22);
              if ((void *)local_158._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_158._padding_);
              }
            }
          }
          else {
            pUVar14 = FWeakObjectPtr::Get(&local_1b8);
            (**(code **)(*(longlong *)pUVar14 + 0x760))(pUVar14);
            bVar5 = TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> *)&local_1f8,
                               (void *)0x0);
            if (bVar5) {
              pUVar8 = UDS_LogManager::GetInst();
              if (pUVar8 != (UDS_LogManager *)0x0) {
                pUVar8 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"ADS_TotemActor::BeginPlay",0x19,Yes);
                pwVar22 = L"targetPSC is nullptr. (%llu)";
                uVar21 = 0x54;
                goto LAB_14bc8a5b8;
              }
            }
            else {
              pUVar14 = FWeakObjectPtr::Get(&local_1f8);
              lVar1 = *(longlong *)&pUVar14[1].field_0x20;
              if (lVar1 != 0) {
                (this->TotemCloneTargetResourcePresetTable).ID = *(int *)(lVar1 + 8);
                (this->TotemCloneTargetResourcePresetTable).DataStage = *(int *)(lVar1 + 0xc);
                ::FString::operator=
                          (&(this->TotemCloneTargetResourcePresetTable).Version,
                           (FString *)(lVar1 + 0x10));
                (this->TotemCloneTargetResourcePresetTable).ID_ResourceMesh = *(int *)(lVar1 + 0x20)
                ;
                FSoftObjectPath::operator=
                          (&(this->TotemCloneTargetResourcePresetTable).WorkSpacePath,
                           (FSoftObjectPath *)(lVar1 + 0x28));
                (this->TotemCloneTargetResourcePresetTable).CharacterID = *(int *)(lVar1 + 0x48);
                (this->TotemCloneTargetResourcePresetTable).PresetID = *(int *)(lVar1 + 0x4c);
                (this->TotemCloneTargetResourcePresetTable).CapsuleHalfHeight =
                     *(float *)(lVar1 + 0x50);
                (this->TotemCloneTargetResourcePresetTable).CapsuleRadius = *(float *)(lVar1 + 0x54)
                ;
                (this->TotemCloneTargetResourcePresetTable).ID_AbpLink = *(int *)(lVar1 + 0x58);
                (this->TotemCloneTargetResourcePresetTable).HitEffectZOffset =
                     *(double *)(lVar1 + 0x60);
                FSoftObjectPath::operator=
                          (&(this->TotemCloneTargetResourcePresetTable).DestructionGCPath,
                           (FSoftObjectPath *)(lVar1 + 0x68));
                pUVar9 = (this->PartsSystemControl).field0_0x0.DebugPtr;
                local_1c8.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)
                     ((ulonglong)local_1c8.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
                local_1c8.Object = OnPartsSystemComplete_EndOfRef;
                (this->TotemCloneTargetResourcePresetTable).ID_AbpLink = 0;
                this_01 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                          CreateUObject<ADS_TotemActor,FWN_EndOfRefs_&>
                                    ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                                     local_248,this,(pmf_53d05d74 *)&local_1c8,
                                     (FWN_EndOfRefs *)&local_1a8);
                local_188.Object = (void *)0x0;
                local_188.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)0x0;
                bVar5 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_01);
                if (bVar5) {
                  local_230 = (undefined1  [8])0x0;
                  local_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
                  local_228.DelegateSize = 0;
                  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                  CopyFrom<FDefaultDelegateUserPolicy>
                            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_230,
                             this_01);
                  pTVar15 = TSharedPtr<void,1>::
                            TSharedPtr<void,1><void,_FWN_EndOfRefs::FWN_EndOfRefs_::__l5::<lambda_1>_>
                                      (&local_1c8,(void *)0x0,(<lambda_1> *)local_230);
                  if (&local_188 != pTVar15) {
                    local_188.Object = pTVar15->Object;
                    pTVar15->Object = (void *)0x0;
                    SharedPointerInternals::FSharedReferencer<1>::operator=
                              (&local_188.SharedReferenceCount,&pTVar15->SharedReferenceCount);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_1c8.SharedReferenceCount.ReferenceController)
                  ;
                  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
                             (FWriteAccessScope *)local_218);
                  if ((local_228.DelegateSize != 0) &&
                     (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
                    (*(code *)**(undefined8 **)local_228.DelegateAllocator)();
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              ((ForAnyElementType *)&local_228,0,0,0x10);
                    local_228.DelegateSize = 0;
                  }
                  if (local_218[0x10] == false) {
                    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                              ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                               (FDestructionSentinel *)local_218);
                  }
                  if (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                    FMemory::Free((void *)local_228.DelegateAllocator);
                  }
                  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                            ((FMRSWRecursiveAccessDetector *)local_230);
                }
                UDS_PartsSystemControl::RefreshAsync
                          (pUVar9,(AActor *)this,&this->TotemCloneTargetResourcePresetTable,
                           (FWN_EndOfRefs *)&local_188,true);
                TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_248);
                if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
                  FMemory::Free((void *)local_240.DelegateAllocator);
                }
                FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                          ((FMRSWRecursiveAccessDetector *)local_248);
                pTVar13 = (TReferenceControllerBase<1> *)local_1a8.Impl._File;
                goto LAB_14bc8ad9e;
              }
              pUVar8 = UDS_LogManager::GetInst();
              if (pUVar8 != (UDS_LogManager *)0x0) {
                pUVar8 = UDS_LogManager::GetInst();
                local_158._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_158,"ADS_TotemActor::BeginPlay",0x19,Yes);
                pwVar22 = L"targetResourcePresetTable is nullptr. (%llu)";
                uVar21 = 0x5c;
                goto LAB_14bc8a5b8;
              }
            }
          }
          AActor::Destroy((AActor *)this,false,true);
          pTVar13 = (TReferenceControllerBase<1> *)local_1a8.Impl._File;
          goto LAB_14bc8ad9e;
        }
        pUVar9 = (this->PartsSystemControl).field0_0x0.DebugPtr;
        local_1b8 = (FWeakObjectPtr)OnPartsSystemComplete_EndOfRef;
        iStack_1ac = local_240.DelegateAllocator._4_4_;
        uStack_1b0 = 0;
        local_1e0._0_8_ = (atomic<unsigned___int64>)0x0;
        local_1e0._8_8_ = (TReferenceControllerBase<1> *)0x0;
        local_1d0 = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
                   (FWriteAccessScope *)local_218);
        local_200 = (FDelegateAllocation *)(local_1e0 + 8);
        puVar11 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_1e0 + 8));
        pTVar13 = (TReferenceControllerBase<1> *)local_1a8.Impl._File;
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
          ;
          puVar11[1] = local_1a8.Impl._0_8_;
          puVar11[2] = local_1a8.Impl._File;
          if ((TReferenceControllerBase<1> *)local_1a8.Impl._File !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *(atomic<int> *)((longlong)local_1a8.Impl._File + 8) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)local_1a8.Impl._File + 8) + 1);
            UNLOCK();
          }
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[3] = uVar12;
          *puVar11 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_TotemActor____A6AXXZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar11[4] = 0;
          local_1f8 = (FWeakObjectPtr)this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 4),(FObjectPtr)&local_1f8);
          *(FWeakObjectPtr *)(puVar11 + 5) = local_1b8;
          puVar11[6] = CONCAT44(iStack_1ac,uStack_1b0);
        }
        if (local_218[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                     (FDestructionSentinel *)local_218);
        }
        local_1c8.Object = (void *)0x0;
        local_1c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
                   (FReadAccessScope *)local_218);
        if (((local_1d0 == 0) ||
            ((TReferenceControllerBase<1> *)local_1e0._8_8_ == (TReferenceControllerBase<1> *)0x0))
           || (cVar6 = (**(code **)(*(longlong *)local_1e0._8_8_ + 0x38))(), cVar6 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  ((FReadAccessScope *)local_218);
        if (bVar5) {
          local_248 = (undefined1  [8])0x0;
          local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
          local_240.DelegateSize = 0;
          local_1f8.ObjectIndex = 0;
          local_1f8.ObjectSerialNumber = 0;
          local_1f0.Data = (FScriptContainerElement *)0x0;
          local_1e8 = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
                     (FReadAccessScope *)local_218);
          if ((local_1d0 != 0) &&
             ((TReferenceControllerBase<1> *)local_1e0._8_8_ != (TReferenceControllerBase<1> *)0x0))
          {
            (**(code **)(*(longlong *)local_1e0._8_8_ + 0x50))(local_1e0._8_8_,&local_1f8);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope((FReadAccessScope *)local_218);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_1f8,
                     (FWriteAccessScope *)local_218);
          iVar4 = local_1e8;
          FVar3.Data = local_1f0.Data;
          local_1f0.Data = (FScriptContainerElement *)0x0;
          local_1e8 = 0;
          if (local_218[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                       (FDestructionSentinel *)local_218);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
                     (FWriteAccessScope *)local_218);
          if (local_240.DelegateSize == 0) {
LAB_14bc8a999:
            if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)local_240.DelegateAllocator);
            }
          }
          else if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            (*(code *)**(undefined8 **)local_240.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_240,0,0,0x10);
            local_240.DelegateSize = 0;
            goto LAB_14bc8a999;
          }
          local_240.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)FVar3.Data;
          local_240.DelegateSize = iVar4;
          if (local_218[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                       (FDestructionSentinel *)local_218);
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_1f8,
                     (FWriteAccessScope *)local_218);
          if ((local_1e8 != 0) && (local_1f0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_1f0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_1f0,0,0,0x10);
            local_1e8 = 0;
          }
          if (local_218[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                       (FDestructionSentinel *)local_218);
          }
          if (local_1f0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1f0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)&local_1f8);
          pTVar16 = ::operator_new(0x30);
          if (pTVar16 != (TReferenceControllerBase<1> *)0x0) {
            *(undefined8 *)(pTVar16 + 1) = 0;
            pTVar16[1].SharedReferenceCount = (atomic<int>)0x0;
            pTVar16[1].WeakReferenceCount = (atomic<int>)0x0;
            *(undefined4 *)&pTVar16[2]._padding_ = 0;
            TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
            CopyFrom<FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar16 + 1),
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_248);
            pTVar16->SharedReferenceCount = (atomic<int>)0x1;
            pTVar16->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
            ;
            pTVar16->WeakReferenceCount = (atomic<int>)0x1;
            pTVar16[2].SharedReferenceCount = (atomic<int>)0x0;
            pTVar16[2].WeakReferenceCount = (atomic<int>)0x0;
            pTVar20 = pTVar16;
          }
          local_1f8.ObjectIndex = 0;
          local_1f8.ObjectSerialNumber = 0;
          local_1f0.Data = (FScriptContainerElement *)pTVar20;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_1c8.SharedReferenceCount,(FSharedReferencer<1> *)&local_1f0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_1f0.Data);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_248,
                     (FWriteAccessScope *)local_218);
          if ((local_240.DelegateSize != 0) &&
             (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
            (*(code *)**(undefined8 **)local_240.DelegateAllocator)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&local_240,0,0,0x10);
            local_240.DelegateSize = 0;
          }
          if (local_218[0x10] == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                      ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                       (FDestructionSentinel *)local_218);
          }
          if (local_240.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
            FMemory::Free((void *)local_240.DelegateAllocator);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_248);
        }
        pFVar17 = FDS_SkillTotemTableRow::ID_ResourcePresetTable(this_00);
        UDS_PartsSystemControl::RefreshAsync
                  (pUVar9,(AActor *)this,pFVar17,(FWN_EndOfRefs *)&local_1c8,true);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1e0,
                   (FWriteAccessScope *)local_218);
        if ((local_1d0 != 0) &&
           ((TReferenceControllerBase<1> *)local_1e0._8_8_ != (TReferenceControllerBase<1> *)0x0)) {
          (**(code **)*(longlong *)local_1e0._8_8_)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)(local_1e0 + 8),0,0,0x10);
          local_1d0 = 0;
        }
        if (local_218[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                     (FDestructionSentinel *)local_218);
        }
        if ((TReferenceControllerBase<1> *)local_1e0._8_8_ != (TReferenceControllerBase<1> *)0x0) {
          FMemory::Free((void *)local_1e0._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1e0);
        pUVar18 = UAssetManager::Get();
        local_218._0_4_ = 0x6b;
        local_218._4_4_ = 0x29;
        local_218._8_8_ =
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Totem\\DS_TotemActor.cpp"
        ;
        local_1c8.Object = (code *)0x0;
        local_218._16_8_ = "void __cdecl ADS_TotemActor::BeginPlay(void)";
        local_1c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar19 = FSoftObjectPath::ToString(&this_00->AniSequence,(FString *)local_248);
        iStack_1ac = local_240.DelegateAllocator._4_4_;
        uStack_1b0 = 0;
        local_1b8 = (FWeakObjectPtr)OnAnimSequenceLoadComplete;
        local_230 = (undefined1  [8])0x0;
        local_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_228.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
                   (FWriteAccessScope *)&local_178);
        local_160 = &local_228;
        puVar11 = UE::Core::Private::DelegateAllocate(0x48,&local_228);
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = &
                     ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__VFString__VFWN_EndOfRefs____6B_
          ;
          puVar11[1] = 0;
          puVar11[1] = (pFVar19->Data).AllocatorInstance.Data;
          (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(puVar11 + 2) = (pFVar19->Data).ArrayNum;
          *(int *)((longlong)puVar11 + 0x14) = (pFVar19->Data).ArrayMax;
          (pFVar19->Data).ArrayNum = 0;
          (pFVar19->Data).ArrayMax = 0;
          puVar11[3] = local_1a8.Impl._0_8_;
          puVar11[4] = pTVar13;
          if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *(atomic<int> *)((longlong)pTVar13 + 8) =
                 (atomic<int>)((int)*(atomic<int> *)((longlong)pTVar13 + 8) + 1);
            UNLOCK();
          }
          uVar12 = FDelegateHandle::GenerateNewID();
          puVar11[5] = uVar12;
          *puVar11 = &
                     ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_TotemActor____A6AXXZUFDefaultDelegateUserPolicy__VFString__VFWN_EndOfRefs____6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar11[6] = 0;
          local_1f8 = (FWeakObjectPtr)this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 6),(FObjectPtr)&local_1f8);
          *(FWeakObjectPtr *)(puVar11 + 7) = local_1b8;
          puVar11[8] = CONCAT44(iStack_1ac,uStack_1b0);
        }
        if (local_178.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_178.Accessor,&local_178);
        }
        local_1a8.Impl._0_8_ = CONCAT44(local_218._4_4_,local_218._0_4_);
        local_1a8.Impl._File = (char *)local_218._8_8_;
        local_1a8.Impl._Function = (char *)local_218._16_8_;
        FStreamableManager::
        RequestAsyncLoad<FSoftObjectPath_const_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                  (&pUVar18->StreamableManager,(TSharedPtr<FStreamableHandle,1> *)local_1e0,
                   &this_00->AniSequence,
                   (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_230,0,false,
                   false,(FString *)&local_1c8,&local_1a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_1e0._8_8_);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_230,
                   (FWriteAccessScope *)local_218);
        if ((local_228.DelegateSize != 0) &&
           (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_228.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_228,0,0,0x10);
          local_228.DelegateSize = 0;
        }
        if (local_218[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_218._8_8_,
                     (FDestructionSentinel *)local_218);
        }
        if (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_228.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_230);
        if ((atomic<unsigned___int64>)local_248 != (atomic<unsigned___int64>)0x0) {
          FMemory::Free((void *)local_248);
        }
LAB_14bc8ad9e:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13)
        ;
        return;
      }
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 == (UDS_LogManager *)0x0) goto LAB_14bc8a1b5;
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"ADS_TotemActor::BeginPlay",0x19,Yes);
      pwVar22 = L"Failed to UDS_PartsSystemControl::Init().";
      uVar21 = 0x3a;
    }
    UDS_LogManager::PrintLog(pUVar8,1,Warning,local_158.Ptr,uVar21,pwVar22);
  }
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
LAB_14bc8a1b5:
  AActor::Destroy((AActor *)this,false,true);
  return;
}

// EndPlay @ 14bc971b0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TotemActor::EndPlay(ADS_TotemActor *this,Type param_1)

{
  UDS_PartsSystemControl *this_00;
  
  this_00 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if (this_00 != (UDS_PartsSystemControl *)0x0) {
    UDS_PartsSystemControl::Deinit(this_00);
  }
  ADS_EntityActorBase::EndPlay((ADS_EntityActorBase *)this,param_1);
  return;
}

// GetPartsSystemControl @ 14bca1590

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> __thiscall
ADS_TotemActor::GetPartsSystemControl(ADS_TotemActor *this)

{
  UDS_PartsSystemControl *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_PartsSystemControl *local_res8;
  
  pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_PartsSystemControl *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_PartsSystemControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_PartsSystemControl *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>)in_RDX;
}

// InitData @ 14bca4270

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_TotemActor::InitData(ADS_TotemActor *this,FDS_SpawnInfo *param_1)

{
  FDS_EntityBase::InitData((FDS_EntityBase *)this,param_1);
  this->_padding_ = param_1->OwnerEntityID;
  *(int *)&this->_padding_ = param_1->EvolveLevel;
  this->_padding_ = param_1->TotemCloneTargetEntityID;
  return;
}

// OnAllLoadComplete @ 14bcaf260

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TotemActor::OnAllLoadComplete(ADS_TotemActor *this)

{
  bool bVar1;
  USkeletalMeshComponent *this_00;
  FTimerManager *this_01;
  FWeakObjectPtr local_res8 [4];
  
  if (this->AnimSequence != (UAnimSequence *)0x0) {
    (**(code **)(this->_padding_ + 0x80))();
    bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_res8,
                       (void *)0x0);
    if (!bVar1) {
      this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(local_res8);
      USkeletalMeshComponent::PlayAnimation(this_00,(UAnimationAsset *)this->AnimSequence,false);
    }
  }
  this_01 = FDS_TimerManager::Get((UObject *)0x0);
  FTimerManager::SetTimerForNextTick<ADS_TotemActor>
            (this_01,(ADS_TotemActor *)local_res8,(pmf_bdc3a5f9 *)this);
  return;
}

// OnAnimSequenceLoadComplete @ 14bcaf7f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
ADS_TotemActor::OnAnimSequenceLoadComplete
          (ADS_TotemActor *this,FString *param_1,FWN_EndOfRefs *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  UAnimSequence *pUVar4;
  UClass *pUVar5;
  TStringView<wchar_t> local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath(&local_38,param_1,false);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  local_48.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar1 = (pFVar3->Data).ArrayNum;
  local_48.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_28,&local_48);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pUVar4 = (UAnimSequence *)FSoftObjectPath::ResolveObject(&local_28);
  if (pUVar4 != (UAnimSequence *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimSequence_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_14bcaf8b0;
  }
  pUVar4 = (UAnimSequence *)0x0;
LAB_14bcaf8b0:
  this->AnimSequence = pUVar4;
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnPartsSystemComplete_EndOfRef @ 14bcb9f60

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_TotemActor::OnPartsSystemComplete_EndOfRef(ADS_TotemActor *this,FWN_EndOfRefs *param_1)

{
  longlong *this_00;
  bool bVar1;
  USceneComponent *this_01;
  FWeakObjectPtr local_res8;
  
  this_00 = &this->_padding_;
  (**(code **)(*this_00 + 0x80))(this_00);
  bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (!bVar1) {
    this_01 = (USceneComponent *)FWeakObjectPtr::Get(&local_res8);
    USceneComponent::SetVisibility(this_01,false,Propagate);
    FDS_EntityBase::OnPartsSystemComplete((FDS_EntityBase *)this_00);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnStartSkill @ 14bcbb5d0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TotemActor::OnStartSkill(ADS_TotemActor *this,int *param_1)

{
  bool bVar1;
  USkeletalMeshComponent *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->_padding_ != 0) {
    (**(code **)(this->_padding_ + 0x80))();
    bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_res8,
                       (void *)0x0);
    if (!bVar1) {
      this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(local_res8);
      USkeletalMeshComponent::PlayAnimation(this_00,(UAnimationAsset *)this->_padding_,false);
    }
  }
  return;
}

// PlayAnimSequence @ 14bcbcf60

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TotemActor::PlayAnimSequence(ADS_TotemActor *this)

{
  bool bVar1;
  USkeletalMeshComponent *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->AnimSequence != (UAnimSequence *)0x0) {
    (**(code **)(this->_padding_ + 0x80))();
    bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_res8,
                       (void *)0x0);
    if (!bVar1) {
      this_00 = (USkeletalMeshComponent *)FWeakObjectPtr::Get(local_res8);
      USkeletalMeshComponent::PlayAnimation(this_00,(UAnimationAsset *)this->AnimSequence,false);
    }
  }
  return;
}

// ShowSoulSkeletalMesh @ 14bcc9e70

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TotemActor::ShowSoulSkeletalMesh(ADS_TotemActor *this)

{
  bool bVar1;
  USceneComponent *this_00;
  FWeakObjectPtr local_res8 [4];
  
  (**(code **)(this->_padding_ + 0x80))();
  bVar1 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)local_res8,(void *)0x0
                    );
  if (!bVar1) {
    this_00 = (USceneComponent *)FWeakObjectPtr::Get(local_res8);
    USceneComponent::SetVisibility(this_00,true,Propagate);
  }
  return;
}

// Tick @ 14bcccfe0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_TotemActor::Tick(ADS_TotemActor *this,float param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  UDS_EntityManager *pUVar6;
  FDS_EntityBase *pFVar7;
  FDS_EntityBase *pFVar8;
  float afStackX_8 [2];
  float afStackX_10 [2];
  float afStackX_18 [2];
  undefined8 uStackX_20;
  
  afStackX_10[0] = param_1;
  AActor::Tick((AActor *)this,param_1);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c8))(plVar1,afStackX_10[0]);
  }
  plVar1 = &this->_padding_;
  cVar4 = (**(code **)(*plVar1 + 0x88))(plVar1);
  if ((cVar4 == '\x01') && (plVar2 = (longlong *)this->_padding_, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x2c0))(plVar2,afStackX_10);
  }
  bVar5 = UDS_IngameState::IsNpcTalking();
  if (((((!bVar5) && (cVar4 = (**(code **)(this->_padding_ + 0x770))(this), cVar4 == '\0')) &&
       (pUVar6 = UDS_EntityManager::GetInst(), pUVar6 != (UDS_EntityManager *)0x0)) &&
      ((pFVar7 = UDS_EntityManager::FindEntityBase(pUVar6,this->_padding_),
       pFVar7 != (FDS_EntityBase *)0x0 &&
       (pUVar6 = UDS_EntityManager::GetInst(), pUVar6 != (UDS_EntityManager *)0x0)))) &&
     (pFVar8 = UDS_EntityManager::GetCurrentMainCharEntityBase(pUVar6,true),
     pFVar8 != (FDS_EntityBase *)0x0)) {
    dVar3 = (double)(**(code **)(*plVar1 + 0x68))(plVar1);
    afStackX_8[0] = (float)dVar3;
    dVar3 = (double)(**(code **)(*plVar1 + 0x70))(plVar1);
    afStackX_18[0] = (float)dVar3;
    if ((0.0 < afStackX_8[0]) && (0.0 < afStackX_18[0])) {
      bVar5 = DS_Util::IsCloseDist(pFVar7,pFVar8,afStackX_8);
      if (bVar5) {
        uStackX_20 = 0x10;
        (**(code **)(*plVar1 + 0x60))(plVar1,&uStackX_20,0);
        return;
      }
      bVar5 = DS_Util::IsCloseDist(pFVar7,pFVar8,afStackX_18);
      if (!bVar5) {
        uStackX_20 = 0x10;
        (**(code **)(*plVar1 + 0x58))(plVar1,&uStackX_20,0);
      }
    }
  }
  return;
}

