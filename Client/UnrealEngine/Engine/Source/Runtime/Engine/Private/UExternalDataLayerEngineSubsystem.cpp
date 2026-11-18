// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 148a279a0

UClass * __cdecl UExternalDataLayerEngineSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerEngineSubsystem",
               &Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUExternalDataLayerEngineSubsystem,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UExternalDataLayerEngineSubsystem>,
               InternalVTableHelperCtorCaller<UExternalDataLayerEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.InnerSingleton;
}

// UExternalDataLayerEngineSubsystem @ 148a42cc0

UExternalDataLayerEngineSubsystem * __thiscall
UExternalDataLayerEngineSubsystem::UExternalDataLayerEngineSubsystem
          (UExternalDataLayerEngineSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->OnExternalDataLayerAssetRegistrationStateChanged = 0;
  *(undefined8 *)&(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnExternalDataLayerOverrideInjection = 0;
  *(undefined8 *)&(this->OnExternalDataLayerOverrideInjection).field_0x8 = 0;
  *(undefined8 *)&(this->OnExternalDataLayerOverrideInjection).field_0x10 = 0;
  *(undefined8 *)&this->ExternalDataLayerAssets = 0;
  *(undefined8 *)&(this->ExternalDataLayerAssets).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalDataLayerAssets).field_0x20 = 0;
  *(undefined8 *)&(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnExternalDataLayerOverrideInjection).field_0x18 = 2;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x34 = 0;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExternalDataLayerAssets).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x48 = 0;
  return this;
}

// UExternalDataLayerEngineSubsystem @ 148a42d70

UExternalDataLayerEngineSubsystem * __thiscall
UExternalDataLayerEngineSubsystem::UExternalDataLayerEngineSubsystem
          (UExternalDataLayerEngineSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)&this->_padding_,NewObject);
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->OnExternalDataLayerAssetRegistrationStateChanged = 0;
  *(undefined8 *)&(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnExternalDataLayerOverrideInjection = 0;
  *(undefined8 *)&(this->OnExternalDataLayerOverrideInjection).field_0x8 = 0;
  *(undefined8 *)&(this->OnExternalDataLayerOverrideInjection).field_0x10 = 0;
  *(undefined8 *)&this->ExternalDataLayerAssets = 0;
  *(undefined8 *)&(this->ExternalDataLayerAssets).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalDataLayerAssets).field_0x20 = 0;
  *(undefined8 *)&(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x18 = 2;
  *(undefined8 *)&(this->OnExternalDataLayerOverrideInjection).field_0x18 = 2;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x34 = 0;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ExternalDataLayerAssets).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x48 = 0;
  return this;
}

// ~UExternalDataLayerEngineSubsystem @ 148a448c0

void __thiscall
UExternalDataLayerEngineSubsystem::~UExternalDataLayerEngineSubsystem
          (UExternalDataLayerEngineSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined4 *)&(this->ExternalDataLayerAssets).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExternalDataLayerAssets).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalDataLayerAssets);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnExternalDataLayerOverrideInjection).field_0x8,
             *(int *)&(this->OnExternalDataLayerOverrideInjection).field_0x10);
  pvVar1 = *(void **)&(this->OnExternalDataLayerOverrideInjection).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExternalDataLayerOverrideInjection);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x8,
             *(int *)&(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnExternalDataLayerAssetRegistrationStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExternalDataLayerAssetRegistrationStateChanged
            );
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// ActivateExternalDataLayerAsset @ 148a48e90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UExternalDataLayerEngineSubsystem::ActivateExternalDataLayerAsset
          (UExternalDataLayerEngineSubsystem *this,UExternalDataLayerAsset *param_1,UObject *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FRegisteredExternalDataLayers *pFVar3;
  FObjectKey local_res20;
  FWeakObjectPtr local_58;
  FWeakObjectPtr local_50;
  UExternalDataLayerAsset *local_48;
  UObject *local_40;
  FString local_38;
  
  if (((param_1 == (UExternalDataLayerAsset *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0))
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid(InExternalDataLayerAsset)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                            ,0xd0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsExternalDataLayerAssetRegistered(this,param_1,param_2);
  if (bVar2) {
    local_48 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UExternalDataLayerAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar3 = TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>_>
             ::FindChecked((TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>_>
                            *)&this->ExternalDataLayerAssets,
                           (TObjectPtr<UExternalDataLayerAsset_const_>)&local_48);
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    if (param_2 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      local_58.ObjectIndex = 0;
      local_58.ObjectSerialNumber = 0;
      local_40 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_40);
      local_50 = local_58;
    }
    TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::Emplace<FObjectKey>
              (&pFVar3->ActiveClients,&local_res20,(bool *)&local_50);
    if (*(int *)&(pFVar3->ActiveClients).Elements.field_0x8 -
        *(int *)&(pFVar3->ActiveClients).Elements.field_0x34 == 1) {
      if ((pFVar3->State != Registered) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("RegisteredEDL.State == EExternalDataLayerRegistrationState::Registered"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                             ,0xdc,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3->State = Active;
      TMulticastDelegate<void___cdecl(UExternalDataLayerAsset_const_*,enum_EExternalDataLayerRegistrationState,enum_EExternalDataLayerRegistrationState),FDefaultDelegateUserPolicy>
      ::Broadcast(&this->OnExternalDataLayerAssetRegistrationStateChanged,param_1,Registered,Active)
      ;
    }
  }
  else if (1 < (byte)LogWorldPartition._0_1_) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_38,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// CanInjectOverride @ 148a4c910

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
UExternalDataLayerEngineSubsystem::CanInjectOverride
          (UExternalDataLayerEngineSubsystem *this,UWorld *param_1,UExternalDataLayerAsset *param_2,
          bool *param_3)

{
  TMulticastDelegate<void___cdecl(UWorld_const_*,UExternalDataLayerAsset_const_*,bool_&),FDefaultDelegateUserPolicy>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 local_res8 [8];
  FDestructionSentinel local_58;
  FReadAccessScope local_40;
  
  this_00 = &this->OnExternalDataLayerOverrideInjection;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_40);
  iVar2 = *(int *)&(this->OnExternalDataLayerOverrideInjection).field_0x10;
  plVar11 = *(longlong **)&(this->OnExternalDataLayerOverrideInjection).field_0x8;
  plVar12 = plVar11 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)&(this->OnExternalDataLayerOverrideInjection).field_0x10 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar11 == plVar12) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_40);
      return false;
    }
    if (((int)plVar11[1] != 0) && (*plVar11 != 0)) break;
    plVar11 = plVar11 + 2;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_58);
  puVar1 = &(this->OnExternalDataLayerOverrideInjection).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar10 = *(int *)&(this->OnExternalDataLayerOverrideInjection).field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar13 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar9 = 0;
      if ((int)uVar10 < *(int *)&(this->OnExternalDataLayerOverrideInjection).field_0x10) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      lVar3 = *(longlong *)&(this->OnExternalDataLayerOverrideInjection).field_0x8;
      if (((*(int *)(lVar13 + 8 + lVar3) == 0) ||
          (plVar11 = *(longlong **)(lVar13 + lVar3), plVar11 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*plVar11 + 0x68))(plVar11,param_1,param_2,param_3), cVar8 == '\0')) {
        bVar5 = true;
      }
      lVar13 = lVar13 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  puVar1 = &(this->OnExternalDataLayerOverrideInjection).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  return true;
}

// CanWorldInjectExternalDataLayerAsset @ 148a4caa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
UExternalDataLayerEngineSubsystem::CanWorldInjectExternalDataLayerAsset
          (UExternalDataLayerEngineSubsystem *this,UWorld *param_1,UExternalDataLayerAsset *param_2,
          FText *param_3)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
  *pTVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  undefined1 *puVar9;
  UExternalDataLayerAsset *local_res18 [2];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_b8;
  FName local_a8;
  FTextFormat local_a0;
  FText local_90;
  FString local_80;
  FFormatArgumentValue local_70;
  FText local_50;
  FText local_40;
  FTextFormat local_30;
  
  if (param_2 != (UExternalDataLayerAsset *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (UE::GC::MarkAsReachable((UObject *)param_2),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    local_res18[0] = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    pTVar5 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                     *)&this->ExternalDataLayerAssets,
                    (TObjectPtr<UExternalDataLayerAsset_const_>)local_res18);
    puVar9 = &pTVar5->field_0x8;
    if (pTVar5 == (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
                   *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    if ((puVar9 != (undefined1 *)0x0) && (puVar9[0xa0] == '\x02')) {
      return true;
    }
  }
  if (param_3 != (FText *)0x0) {
    local_a8 = (FName)param_2->_padding_;
    ::FName::ToString(&local_a8,&local_80);
    pFVar6 = FText::FromString(&local_40,&local_80);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"ExternalDataLayerEngineSubsystem",
                        L"CantInjectNotActiveExternalDataLayerAsset",
                        L"External Data Layer Asset {0} is not active");
    pFVar8 = FTextFormat::FTextFormat(&local_30,pFVar7,Default);
    local_70.Type = Text;
    FText::FText((FText *)&local_70.TextValue,pFVar6);
    if ((local_70.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
    ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
              (local_b8.AllocatorInstance.Data,&local_70,1);
    local_a0.TextFormatData.Object = (pFVar8->TextFormatData).Object;
    local_a0.TextFormatData.SharedReferenceCount.ReferenceController =
         (pFVar8->TextFormatData).SharedReferenceCount.ReferenceController;
    if (local_a0.TextFormatData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a0.TextFormatData.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FText::Format(&local_90,&local_a0,&local_b8);
    DestructItems<FFormatArgumentValue,int>
              ((FFormatArgumentValue *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FFormatArgumentValue *)local_b8.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    if (local_70.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_70.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar8->TextFormatData).SharedReferenceCount.ReferenceController);
    pIVar1 = (pFVar6->TextData).Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    FText::operator=(param_3,&local_90);
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  return false;
}

// DeactivateExternalDataLayerAsset @ 148a4f5e0

void __thiscall
UExternalDataLayerEngineSubsystem::DeactivateExternalDataLayerAsset
          (UExternalDataLayerEngineSubsystem *this,UExternalDataLayerAsset *param_1,UObject *param_2
          )

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRegisteredExternalDataLayers *pFVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  FObjectKey local_40;
  UExternalDataLayerAsset *local_38;
  UObject *local_30;
  UObject *local_28 [2];
  
  bVar3 = IsExternalDataLayerAssetActive(this,param_1,param_2);
  if (bVar3) {
    local_38 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UExternalDataLayerAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pFVar5 = TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>_>
             ::FindChecked((TMapBase<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>_>
                            *)&this->ExternalDataLayerAssets,
                           (TObjectPtr<UExternalDataLayerAsset_const_>)&local_38);
    uVar13 = 0;
    iVar4 = 0;
    if (param_2 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_30 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_30);
      uVar13 = (ulonglong)local_res20 >> 0x20;
      iVar4 = local_res20.ObjectIndex;
    }
    iVar12 = (int)uVar13;
    uVar8 = iVar4 - iVar12 ^ (uint)(uVar13 >> 0xd);
    uVar7 = (-0x61c88647 - uVar8) - iVar12 ^ uVar8 << 8;
    uVar10 = (iVar12 - uVar7) - uVar8 ^ uVar7 >> 0xd;
    uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 >> 0xc;
    uVar7 = (uVar7 - uVar10) - uVar8 ^ uVar8 << 0x10;
    uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 5;
    uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 >> 3;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar8 << 10;
    if (*(int *)&(pFVar5->ActiveClients).Elements.field_0x8 !=
        *(int *)&(pFVar5->ActiveClients).Elements.field_0x34) {
      FVar9 = (pFVar5->ActiveClients).Hash.SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&(pFVar5->ActiveClients).Hash;
      }
      iVar11 = *(int *)((longlong)FVar9 +
                       (ulonglong)
                       ((pFVar5->ActiveClients).HashSize - 1U &
                       ((uVar10 - uVar7) - uVar8 ^ uVar7 >> 0xf)) * 4);
      if (iVar11 != -1) {
        lVar1 = *(longlong *)&(pFVar5->ActiveClients).Elements;
        do {
          lVar6 = (longlong)iVar11;
          if ((*(int *)(lVar1 + lVar6 * 0x10) == iVar4) &&
             (*(int *)(lVar1 + 4 + lVar6 * 0x10) == iVar12)) {
            if (iVar11 == -1) {
              return;
            }
            local_40.ObjectIndex = 0;
            local_40.ObjectSerialNumber = 0;
            if (param_2 != (UObject *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(param_2);
              }
              local_48.ObjectIndex = 0;
              local_48.ObjectSerialNumber = 0;
              local_28[0] = param_2;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(param_2);
              }
              FWeakObjectPtr::operator=(&local_48,(FObjectPtr)local_28);
              local_40.ObjectIndex = local_48.ObjectIndex;
              local_40.ObjectSerialNumber = local_48.ObjectSerialNumber;
            }
            iVar4 = TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::Remove
                              (&pFVar5->ActiveClients,&local_40);
            if ((iVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RegisteredEDL.ActiveClients.Remove(InClient)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                                   ,0xec,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (*(int *)&(pFVar5->ActiveClients).Elements.field_0x8 !=
                *(int *)&(pFVar5->ActiveClients).Elements.field_0x34) {
              return;
            }
            if ((*(int *)&(pFVar5->RegisteredClients).Elements.field_0x8 -
                 *(int *)&(pFVar5->RegisteredClients).Elements.field_0x34 < 1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RegisteredEDL.RegisteredClients.Num() > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                                   ,0xef,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((pFVar5->State != Active) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RegisteredEDL.State == EExternalDataLayerRegistrationState::Active"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                                   ,0xf0,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar5->State = Registered;
            TMulticastDelegate<void___cdecl(UExternalDataLayerAsset_const_*,enum_EExternalDataLayerRegistrationState,enum_EExternalDataLayerRegistrationState),FDefaultDelegateUserPolicy>
            ::Broadcast(&this->OnExternalDataLayerAssetRegistrationStateChanged,param_1,Active,
                        Registered);
            return;
          }
          iVar11 = *(int *)(lVar1 + 8 + lVar6 * 0x10);
        } while (iVar11 != -1);
      }
    }
  }
  return;
}

// Get @ 148a53b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UExternalDataLayerEngineSubsystem * __cdecl UExternalDataLayerEngineSubsystem::Get(void)

{
  int iVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  UExternalDataLayerEngineSubsystem *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  if (GEngine == (UEngine *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GEngine",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                       ,0x15,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UExternalDataLayerEngineSubsystem *)(*pcVar2)();
      return pUVar5;
    }
  }
  pUVar3 = GEngine;
  pUVar6 = StaticClass();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_148a53bd6;
  }
  else if (pUVar6 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_148a53bd6:
    pUVar7 = StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar1 = (int)pUVar7->_padding_;
      if (((int)pUVar6->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_148a53c06;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_148a53c06:
  pUVar5 = (UExternalDataLayerEngineSubsystem *)
           FSubsystemCollectionBase::GetSubsystemInternal
                     ((FSubsystemCollectionBase *)&pUVar3->EngineSubsystemCollection,pUVar6);
  return pUVar5;
}

// GetClientsForExternalDataLayerAsset @ 148a54600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UExternalDataLayerEngineSubsystem::GetClientsForExternalDataLayerAsset
          (UExternalDataLayerEngineSubsystem *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UExternalDataLayerAsset *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int *piVar6;
  uint *puVar7;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  int *piVar10;
  ForElementType<unsigned_int> FVar11;
  TBitArray<FDefaultBitArrayAllocator> *pTVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  ForElementType<unsigned_int> FVar21;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  FWeakObjectPtr local_1d0;
  ulonglong local_1c8;
  FWeakObjectPtr local_1c0;
  longlong *local_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  ForElementType<unsigned_int> local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  uint local_198;
  undefined4 uStack_194;
  int iStack_190;
  undefined4 uStack_18c;
  int local_188;
  int local_184;
  undefined8 local_180;
  UObject *local_178;
  UExternalDataLayerAsset *local_170;
  UObject *local_168;
  TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
  *local_160;
  UObject *local_158;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_150;
  longlong *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  uint uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  longlong *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  undefined4 local_9c;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_150 = __return_storage_ptr__;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UExternalDataLayerAsset *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UExternalDataLayerAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  local_170 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UExternalDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_160 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                      *)&this->ExternalDataLayerAssets,
                     (TObjectPtr<UExternalDataLayerAsset_const_>)&local_170);
  plVar19 = (longlong *)0x0;
  local_198 = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  uStack_1b0 = 0;
  local_98.Elements._40_4_ = 0;
  plVar18 = (longlong *)&local_160->field_0x8;
  if (local_160 ==
      (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
       *)0x0) {
    plVar18 = plVar19;
  }
  local_1c8 = 1;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  FVar21 = (ForElementType<unsigned_int>)&local_160->field_0x18;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  if (local_160 ==
      (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
       *)0x0) {
    FVar21 = (ForElementType<unsigned_int>)0x10;
  }
  local_98.HashSize = 0;
  uVar20 = *(int *)((longlong)FVar21 + 0x18);
  uStack_1ac = 1;
  uStack_19c = 0;
  if (uVar20 != 0) {
    FVar11 = FVar21;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar21 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar11 = *(ForElementType<unsigned_int> *)((longlong)FVar21 + 0x10);
    }
    uStack_1ac = *(uint *)FVar11;
    plVar17 = plVar19;
    uStack_1b0 = 0;
    local_198 = 0;
    while (uStack_1ac == 0) {
      iVar13 = (int)plVar19;
      local_198 = (int)plVar17 + 0x20;
      plVar17 = (longlong *)(ulonglong)local_198;
      uStack_1b0 = iVar13 + 1;
      plVar19 = (longlong *)(ulonglong)uStack_1b0;
      uStack_1ac = 1;
      uStack_19c = uVar20;
      if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < (int)uStack_1b0)
      goto LAB_148a5477e;
      uStack_1ac = ((uint *)((longlong)FVar11 + 4))[iVar13];
    }
    uStack_1ac = -uStack_1ac & uStack_1ac;
    uVar2 = (ulonglong)uStack_1ac * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_188 = (int)lVar9;
    uStack_19c = (local_198 - 1) + local_188;
    if ((int)uVar20 < (int)uStack_19c) {
      uStack_19c = uVar20;
    }
  }
LAB_148a5477e:
  piVar10 = (int *)&local_160->field_0x3c;
  uStack_194 = local_9c;
  if (local_160 ==
      (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
       *)0x0) {
    piVar10 = (int *)&DAT_00000034;
  }
  piVar6 = (int *)&local_160->field_0x10;
  TStack_110._padding_ = CONCAT44(uStack_1ac,uStack_1b0);
  if (local_160 ==
      (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
       *)0x0) {
    piVar6 = (int *)&DAT_00000008;
  }
  uStack_1a0 = 0xffffffff;
  TStack_110.CurrentBitIndex = uStack_19c;
  TStack_110.UnvisitedBitMask = 0xffffffff;
  iStack_190 = *piVar6 - *piVar10;
  TStack_110._28_4_ = local_9c;
  TStack_110.BaseBitIndex = local_198;
  uStack_f0 = CONCAT44(uStack_18c,iStack_190);
  puVar7 = (uint *)&local_160->field_0x30;
  if (local_160 ==
      (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
       *)0x0) {
    puVar7 = (uint *)&DAT_00000028;
  }
  uVar16 = *puVar7;
  iVar13 = (int)uVar16 >> 5;
  uVar15 = uVar16 & 0xffffffe0;
  local_1b8 = plVar18;
  local_1a8 = FVar21;
  local_118 = plVar18;
  TStack_110.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar21;
  if ((((int)uVar16 < 0) || ((int)uVar20 < (int)uVar16)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  uVar20 = *(uint *)((longlong)FVar21 + 0x18);
  if (uVar16 != uVar20) {
    FVar11 = FVar21;
    if (*(ForElementType<unsigned_int> *)((longlong)FVar21 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar11 = *(ForElementType<unsigned_int> *)((longlong)FVar21 + 0x10);
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar11 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar9 = (longlong)iVar13;
      uVar15 = uVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar20;
      if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar13)
      goto LAB_148a548b0;
      uVar16 = ((uint *)((longlong)FVar11 + 4))[lVar9];
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_184 = (int)lVar9;
    uVar16 = local_184 + -1 + uVar15;
    if ((int)uVar20 < (int)uVar16) {
      uVar16 = uVar20;
    }
  }
LAB_148a548b0:
  while( true ) {
    plVar19 = local_118;
    if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
      local_1d8 = 0;
      `TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_1d8);
    }
    if (((TStack_110.CurrentBitIndex == uVar16) &&
        ((ForElementType<unsigned_int>)TStack_110.Array == FVar21)) && (plVar19 == plVar18)) break;
    uVar3 = *(undefined8 *)(*plVar19 + (longlong)TStack_110.CurrentBitIndex * 0x10);
    local_1d0.ObjectIndex = (int)uVar3;
    local_1d0.ObjectSerialNumber = (int)((ulonglong)uVar3 >> 0x20);
    local_168 = FWeakObjectPtr::Get(&local_1d0);
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
              (&local_98,(UObject **)&local_180,(bool *)&local_168);
    TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
  }
  plVar19 = (longlong *)&local_160->field_0x58;
  if (local_160 ==
      (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
       *)0x0) {
    plVar19 = (longlong *)&DAT_00000050;
  }
  iStack_140 = 0;
  iVar13 = (int)plVar19[5];
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar19 + 2);
  local_128 = 0;
  iStack_12c = 0;
  if (iVar13 != 0) {
    pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)plVar19[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar19[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar20 = *(uint *)(pTVar12->AllocatorInstance).InlineData;
    while (uVar20 == 0) {
      lVar9 = (longlong)iStack_140;
      local_128 = local_128 + 0x20;
      iStack_140 = iStack_140 + 1;
      iStack_12c = iVar13;
      if ((int)((iVar13 + -1 >> 0x1f & 0x1fU) + iVar13 + -1) >> 5 < iStack_140) goto LAB_148a549c1;
      uVar20 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    local_1c8 = (ulonglong)(-uVar20 & uVar20);
    uVar2 = local_1c8 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_180._4_4_ = (int)lVar9;
    iStack_12c = local_128 + -1 + local_180._4_4_;
    if (iVar13 < iStack_12c) {
      iStack_12c = iVar13;
    }
  }
LAB_148a549c1:
  uVar20 = *(uint *)(plVar19 + 5);
  uStack_13c = (undefined4)local_1c8;
  uVar16 = uVar20 & 0xffffffe0;
  uStack_124 = uStack_19c;
  iStack_120 = (int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34);
  uStack_130 = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_13c,iStack_140);
  TStack_e0.CurrentBitIndex = iStack_12c;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar20 >> 5;
  TStack_e0._28_4_ = uStack_19c;
  TStack_e0.BaseBitIndex = local_128;
  uStack_c0 = CONCAT44(uStack_11c,iStack_120);
  local_148 = plVar19;
  local_138 = pTVar1;
  local_e8 = plVar19;
  TStack_e0.Array = pTVar1;
  if ((((int)uVar20 < 0) || (iVar13 < (int)uVar20)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  uVar15 = *(uint *)(plVar19 + 5);
  if (uVar20 != uVar15) {
    pTVar12 = (TBitArray<FDefaultBitArrayAllocator> *)plVar19[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar19[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar12 = pTVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) &
             *(uint *)((pTVar12->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar20 == 0) {
      lVar9 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar20 = uVar15;
      if ((int)(((int)(uVar15 - 1) >> 0x1f & 0x1fU) + (uVar15 - 1)) >> 5 < iVar14)
      goto LAB_148a54ac0;
      uVar20 = *(uint *)((pTVar12->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar20 = (int)lVar9 + -1 + uVar16;
    if ((int)uVar15 < (int)uVar20) {
      uVar20 = uVar15;
    }
  }
LAB_148a54ac0:
  while( true ) {
    plVar18 = local_e8;
    if ((int)local_e8[1] - *(int *)((longlong)local_e8 + 0x34) != (int)uStack_c0) {
      `TSparseArray<TSparseSetElement<FObjectKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
    }
    if (((TStack_e0.CurrentBitIndex == uVar20) && (TStack_e0.Array == pTVar1)) &&
       (plVar18 == plVar19)) break;
    uVar3 = *(undefined8 *)(*plVar18 + (longlong)TStack_e0.CurrentBitIndex * 0x10);
    local_1c0.ObjectIndex = (int)uVar3;
    local_1c0.ObjectSerialNumber = (int)((ulonglong)uVar3 >> 0x20);
    local_158 = FWeakObjectPtr::Get(&local_1c0);
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*>
              (&local_98,&local_178,(bool *)&local_158);
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
            (&local_98,(UObject *)0x0);
  pTVar8 = local_150;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Array(&local_98,local_150);
  local_98.HashSize = 0;
  if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObject_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Elements);
  return pTVar8;
}

// GetExternalDataLayerAssetRegistrationState @ 148a57e90

EExternalDataLayerRegistrationState __thiscall
UExternalDataLayerEngineSubsystem::GetExternalDataLayerAssetRegistrationState
          (UExternalDataLayerEngineSubsystem *this,UExternalDataLayerAsset *param_1)

{
  TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
  *pTVar1;
  undefined1 *puVar2;
  UExternalDataLayerAsset *local_res8;
  
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_1 != (UExternalDataLayerAsset *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (UExternalDataLayerAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UExternalDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar1 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                   *)&this->ExternalDataLayerAssets,
                  (TObjectPtr<UExternalDataLayerAsset_const_>)&local_res8);
  puVar2 = &pTVar1->field_0x8;
  if (pTVar1 == (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
                 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  if (puVar2 != (undefined1 *)0x0) {
    return puVar2[0xa0];
  }
  return Unregistered;
}

// GetPrivateStaticClass @ 148a5a860

UClass * __cdecl UExternalDataLayerEngineSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ExternalDataLayerEngineSubsystem",
               &Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUExternalDataLayerEngineSubsystem,200,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UExternalDataLayerEngineSubsystem>,
               InternalVTableHelperCtorCaller<UExternalDataLayerEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UExternalDataLayerEngineSubsystem.InnerSingleton;
}

// GetStatId @ 148a5b270

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall
UExternalDataLayerEngineSubsystem::GetStatId(UExternalDataLayerEngineSubsystem *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UExternalDataLayerEngineSubsystem::GetStatId(void)const_::_2_::FStat_UExternalDataLayerEngineSubsystem>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UExternalDataLayerEngineSubsystem ==
          (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UExternalDataLayerEngineSubsystem::GetStatId(void)const_::_2_::FStat_UExternalDataLayerEngineSubsystem>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"UExternalDataLayerEngineSubsystem");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UExternalDataLayerEngineSubsystem,*pFVar1,
                   L"UExternalDataLayerEngineSubsystem","STATGROUP_Tickables","STATCAT_Advanced",
                   L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_UExternalDataLayerEngineSubsystem;
  if (StatPtr_UExternalDataLayerEngineSubsystem ==
      (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UExternalDataLayerEngineSubsystem::GetStatId(void)const_::_2_::FStat_UExternalDataLayerEngineSubsystem>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"UExternalDataLayerEngineSubsystem");
    FVar2 = (FThreadSafeStaticStat<_public:_virtual_struct_TStatId___cdecl_UExternalDataLayerEngineSubsystem::GetStatId(void)const_::_2_::FStat_UExternalDataLayerEngineSubsystem>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UExternalDataLayerEngineSubsystem,
                         *pFVar1,L"UExternalDataLayerEngineSubsystem","STATGROUP_Tickables",
                         "STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableTickType @ 148a5b3d0

ETickableTickType __thiscall
UExternalDataLayerEngineSubsystem::GetTickableTickType(UExternalDataLayerEngineSubsystem *this)

{
  bool bVar1;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)&this[-1].ExternalDataLayerAssets.field_0x20,
                     RF_ArchetypeObject|RF_ClassDefaultObject);
  return bVar1 * '\x02';
}

// IsExternalDataLayerAssetActive @ 148a5e540

bool __thiscall
UExternalDataLayerEngineSubsystem::IsExternalDataLayerAssetActive
          (UExternalDataLayerEngineSubsystem *this,UExternalDataLayerAsset *param_1,UObject *param_2
          )

{
  longlong lVar1;
  TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
  *pTVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  FWeakObjectPtr local_res10;
  UObject *local_res20;
  
  if (param_1 != (UExternalDataLayerAsset *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (UE::GC::MarkAsReachable((UObject *)param_1),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10 = (FWeakObjectPtr)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar2 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                     *)&this->ExternalDataLayerAssets,
                    (TObjectPtr<UExternalDataLayerAsset_const_>)&local_res10);
    puVar7 = &pTVar2->field_0x8;
    if (pTVar2 == (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
                   *)0x0) {
      puVar7 = (undefined1 *)0x0;
    }
    if (puVar7 != (undefined1 *)0x0) {
      if (param_2 == (UObject *)0x0) {
LAB_148a5e706:
        return puVar7[0xa0] == '\x02';
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      uVar5 = local_res10.ObjectIndex - local_res10.ObjectSerialNumber ^
              (uint)local_res10.ObjectSerialNumber >> 0xd;
      uVar4 = (-0x61c88647 - uVar5) - local_res10.ObjectSerialNumber ^ uVar5 << 8;
      uVar8 = (local_res10.ObjectSerialNumber - uVar4) - uVar5 ^ uVar4 >> 0xd;
      uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 >> 0xc;
      uVar4 = (uVar4 - uVar8) - uVar5 ^ uVar5 << 0x10;
      uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 5;
      uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 >> 3;
      uVar4 = (uVar4 - uVar5) - uVar8 ^ uVar5 << 10;
      if (*(int *)(puVar7 + 0x58) != *(int *)(puVar7 + 0x84)) {
        puVar6 = *(undefined1 **)(puVar7 + 0x90);
        if (*(undefined1 **)(puVar7 + 0x90) == (undefined1 *)0x0) {
          puVar6 = puVar7 + 0x88;
        }
        iVar9 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)(puVar7 + 0x98) - 1U &
                                  ((uVar8 - uVar4) - uVar5 ^ uVar4 >> 0xf)) * 4);
        if (iVar9 != -1) {
          lVar1 = *(longlong *)(puVar7 + 0x50);
          do {
            lVar3 = (longlong)iVar9;
            if ((*(int *)(lVar1 + lVar3 * 0x10) == local_res10.ObjectIndex) &&
               (*(uint *)(lVar1 + 4 + lVar3 * 0x10) == local_res10.ObjectSerialNumber)) {
              if (iVar9 == -1) {
                return false;
              }
              goto LAB_148a5e706;
            }
            iVar9 = *(int *)(lVar1 + 8 + lVar3 * 0x10);
          } while (iVar9 != -1);
        }
      }
    }
  }
  return false;
}

// IsExternalDataLayerAssetRegistered @ 148a5e730

bool __thiscall
UExternalDataLayerEngineSubsystem::IsExternalDataLayerAssetRegistered
          (UExternalDataLayerEngineSubsystem *this,UExternalDataLayerAsset *param_1,UObject *param_2
          )

{
  longlong lVar1;
  TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
  *pTVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  FWeakObjectPtr local_res10;
  UObject *local_res20;
  
  if (param_1 != (UExternalDataLayerAsset *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (UE::GC::MarkAsReachable((UObject *)param_1),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10 = (FWeakObjectPtr)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar2 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                     *)&this->ExternalDataLayerAssets,
                    (TObjectPtr<UExternalDataLayerAsset_const_>)&local_res10);
    plVar7 = (longlong *)&pTVar2->field_0x8;
    if (pTVar2 == (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
                   *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    if (plVar7 != (longlong *)0x0) {
      if (param_2 == (UObject *)0x0) {
LAB_148a5e8e6:
        return (char)plVar7[0x14] != '\0';
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_2);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      uVar5 = local_res10.ObjectIndex - local_res10.ObjectSerialNumber ^
              (uint)local_res10.ObjectSerialNumber >> 0xd;
      uVar4 = (-0x61c88647 - uVar5) - local_res10.ObjectSerialNumber ^ uVar5 << 8;
      uVar8 = (local_res10.ObjectSerialNumber - uVar4) - uVar5 ^ uVar4 >> 0xd;
      uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 >> 0xc;
      uVar4 = (uVar4 - uVar8) - uVar5 ^ uVar5 << 0x10;
      uVar8 = (uVar8 - uVar4) - uVar5 ^ uVar4 >> 5;
      uVar5 = (uVar5 - uVar8) - uVar4 ^ uVar8 >> 3;
      uVar4 = (uVar4 - uVar5) - uVar8 ^ uVar5 << 10;
      if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
        plVar6 = (longlong *)plVar7[8];
        if ((longlong *)plVar7[8] == (longlong *)0x0) {
          plVar6 = plVar7 + 7;
        }
        iVar9 = *(int *)((longlong)plVar6 +
                        (ulonglong)((int)plVar7[9] - 1U & ((uVar8 - uVar4) - uVar5 ^ uVar4 >> 0xf))
                        * 4);
        if (iVar9 != -1) {
          lVar1 = *plVar7;
          do {
            lVar3 = (longlong)iVar9;
            if ((*(int *)(lVar1 + lVar3 * 0x10) == local_res10.ObjectIndex) &&
               (*(uint *)(lVar1 + 4 + lVar3 * 0x10) == local_res10.ObjectSerialNumber)) {
              if (iVar9 == -1) {
                return false;
              }
              goto LAB_148a5e8e6;
            }
            iVar9 = *(int *)(lVar1 + 8 + lVar3 * 0x10);
          } while (iVar9 != -1);
        }
      }
    }
  }
  return false;
}

// IsTickable @ 148a5ecf0

bool __thiscall
UExternalDataLayerEngineSubsystem::IsTickable(UExternalDataLayerEngineSubsystem *this)

{
  return false;
}

// RegisterExternalDataLayerAsset @ 148a623a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UExternalDataLayerEngineSubsystem::RegisterExternalDataLayerAsset
          (UExternalDataLayerEngineSubsystem *this,UExternalDataLayerAsset *param_1,UObject *param_2
          )

{
  TMap<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  UExternalDataLayerAsset *pUVar4;
  code *pcVar5;
  TMap<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  TObjectPtr<UExternalDataLayerAsset_const_>_u_0 TVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res20 [8];
  int local_138 [2];
  TObjectPtr<UExternalDataLayerAsset_const_>_u_0 local_130;
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  int local_118;
  int local_114;
  FObjectKey local_110;
  TObjectPtr<UExternalDataLayerAsset_const_>_u_0 *local_108;
  UObject *local_100;
  FString local_f8;
  TMap<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TMap<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  if (((param_1 == (UExternalDataLayerAsset *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid(InExternalDataLayerAsset)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                            ,0xb7,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((param_1->UID).Value == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InExternalDataLayerAsset->GetUID().IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                         ,0xb8,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = &(this->ExternalDataLayerAssets).field_0x10;
  iStack_e0 = 0;
  iVar10 = *(int *)&(this->ExternalDataLayerAssets).field_0x28;
  local_e8 = &this->ExternalDataLayerAssets;
  local_c8 = 0;
  uStack_dc = 1;
  iVar9 = 0;
  iStack_cc = 0;
  if (iVar10 != 0) {
    puVar15 = *(uint **)&(this->ExternalDataLayerAssets).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar8 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) {
        iVar9 = *(int *)&(this->ExternalDataLayerAssets).field_0x28;
        iStack_cc = iVar10;
        goto LAB_148a624b5;
      }
      uVar13 = puVar15[lVar8 + 1];
    }
    iVar9 = *(int *)&(this->ExternalDataLayerAssets).field_0x28;
    uStack_dc = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_dc * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_118 = (int)lVar8;
    iStack_cc = local_c8 + -1 + local_118;
    if (iVar9 < iStack_cc) {
      iStack_cc = iVar10;
    }
  }
LAB_148a624b5:
  uVar13 = *(uint *)&(this->ExternalDataLayerAssets).field_0x28;
  uStack_c4 = local_4c;
  iStack_c0 = *(int *)&(this->ExternalDataLayerAssets).field_0x8 -
              *(int *)&(this->ExternalDataLayerAssets).field_0x34;
  uVar16 = uVar13 & 0xffffffe0;
  uStack_d0 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
  TStack_b0.CurrentBitIndex = iStack_cc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar13 >> 5;
  TStack_b0._28_4_ = local_4c;
  TStack_b0.BaseBitIndex = local_c8;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  local_d8 = puVar1;
  local_b8 = local_e8;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->ExternalDataLayerAssets).field_0x28;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&(this->ExternalDataLayerAssets).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar10 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148a625d0;
      uVar13 = *(uint *)(puVar14 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_114 = (int)lVar8;
    uVar13 = local_114 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_148a625d0:
  while( true ) {
    pTVar6 = local_b8;
    if (*(int *)(&local_b8->field_0x0 + 8) - *(int *)(&local_b8->field_0x0 + 0x34) != (int)uStack_90
       ) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_b0.CurrentBitIndex == uVar13) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (this_00 = &this->ExternalDataLayerAssets, pTVar6 == this_00)) break;
    plVar11 = (longlong *)
              (*(longlong *)&pTVar6->field_0x0 + (longlong)TStack_b0.CurrentBitIndex * 0xb8);
    pUVar4 = (UExternalDataLayerAsset *)*plVar11;
    if (pUVar4 == (UExternalDataLayerAsset *)0x0) {
      bVar7 = param_1 == (UExternalDataLayerAsset *)0x0;
    }
    else {
      bVar7 = pUVar4 == param_1;
    }
    if ((!bVar7) && ((param_1->UID).Value == (pUVar4->UID).Value)) {
      if (1 < (byte)LogWorldPartition._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,local_78,(UObject *)0x0);
        ::FString::PrintfImpl(&local_f8,L"%X");
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*plVar11,&local_88,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogWorldPartition);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
        }
      }
      return;
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  TVar12.DebugPtr = param_1;
  local_130.DebugPtr = param_1;
  if (((UE::GC::GIsIncrementalReachabilityPending != false) &&
      (UE::GC::MarkAsReachable((UObject *)param_1), TVar12 = local_130,
      UE::GC::GIsIncrementalReachabilityPending != false)) &&
     (local_130.DebugPtr != (UExternalDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_130.DebugPtr);
  }
  uVar13 = ((uint)((ulonglong)TVar12.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)TVar12.DebugPtr >> 4)) * -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar13 = uVar13 >> 0x10 ^ uVar13;
  iVar10 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
           ::FindIndexByHash<TObjectPtr<UExternalDataLayerAsset_const_>_>
                     ((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                       *)this_00,uVar13,
                      (TObjectPtr<UExternalDataLayerAsset_const_> *)&local_130.ObjectPtr);
  if ((iVar10 == -1) ||
     (lVar8 = (longlong)iVar10 * 0xb8 + *(longlong *)&this_00->field_0x0, lVar8 == 0)) {
    local_108 = &local_130;
    TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<TObjectPtr<UExternalDataLayerAsset_const_>_&&>_>
              ((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_138,
               (TKeyInitializer<TObjectPtr<UExternalDataLayerAsset_const_>_&&> *)(ulonglong)uVar13,
               (bool *)&local_108);
    lVar8 = (longlong)local_138[0] * 0xb8 + *(longlong *)&this_00->field_0x0;
  }
  local_120.ObjectIndex = 0;
  local_120.ObjectSerialNumber = 0;
  if (param_2 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    local_128.ObjectIndex = 0;
    local_128.ObjectSerialNumber = 0;
    local_100 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_2);
    }
    FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_100);
    local_120 = local_128;
  }
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::Emplace<FObjectKey>
            ((TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *)(lVar8 + 8),
             &local_110,(bool *)&local_120);
  if (*(int *)(lVar8 + 0x10) - *(int *)(lVar8 + 0x3c) != 1) {
    return;
  }
  if ((*(int *)(lVar8 + 0x60) != *(int *)(lVar8 + 0x8c)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredEDL.ActiveClients.Num() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                         ,200,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(char *)(lVar8 + 0xa8) != '\x01') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RegisteredEDL.State == EExternalDataLayerRegistrationState::Registered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                         ,0xc9,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TMulticastDelegate<void___cdecl(UExternalDataLayerAsset_const_*,enum_EExternalDataLayerRegistrationState,enum_EExternalDataLayerRegistrationState),FDefaultDelegateUserPolicy>
  ::Broadcast(&this->OnExternalDataLayerAssetRegistrationStateChanged,param_1,Unregistered,
              *(EExternalDataLayerRegistrationState *)(lVar8 + 0xa8));
  return;
}

// StaticRegisterNativesUExternalDataLayerEngineSubsystem @ 148a6a4d0

void __cdecl
UExternalDataLayerEngineSubsystem::StaticRegisterNativesUExternalDataLayerEngineSubsystem(void)

{
  return;
}

// Tick @ 148a6a5a0

void __thiscall
UExternalDataLayerEngineSubsystem::Tick(UExternalDataLayerEngineSubsystem *this,float param_1)

{
  return;
}

// UnregisterExternalDataLayerAsset @ 148a6b3e0

void __thiscall
UExternalDataLayerEngineSubsystem::UnregisterExternalDataLayerAsset
          (UExternalDataLayerEngineSubsystem *this,UExternalDataLayerAsset *param_1,UObject *param_2
          )

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
  *pTVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *this_00;
  uint uVar10;
  int iVar11;
  int iVar12;
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *pTVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res20;
  FObjectKey local_48;
  UExternalDataLayerAsset *local_40;
  UObject *local_38;
  UObject *local_30;
  TObjectPtr<UExternalDataLayerAsset_const_>_u_0 local_28 [2];
  
  if (param_1 != (UExternalDataLayerAsset *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    pTVar5 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                     *)&this->ExternalDataLayerAssets,
                    (TObjectPtr<UExternalDataLayerAsset_const_>)&local_40);
    pTVar13 = (TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *)0x0;
    this_00 = (TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *)
              &pTVar5->field_0x8;
    if (pTVar5 == (TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
                   *)0x0) {
      this_00 = pTVar13;
    }
    if (this_00 != (TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *)0x0) {
      DeactivateExternalDataLayerAsset(this,param_1,param_2);
      iVar4 = 0;
      if (param_2 != (UObject *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_2);
        }
        local_res10.ObjectIndex = 0;
        local_res10.ObjectSerialNumber = 0;
        local_38 = param_2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_2);
        }
        FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_38);
        pTVar13 = (TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *)
                  ((ulonglong)local_res10 >> 0x20);
        iVar4 = local_res10.ObjectIndex;
      }
      iVar12 = (int)pTVar13;
      uVar8 = iVar4 - iVar12 ^ (uint)((ulonglong)pTVar13 >> 0xd);
      uVar7 = (-0x61c88647 - uVar8) - iVar12 ^ uVar8 << 8;
      uVar10 = (iVar12 - uVar7) - uVar8 ^ uVar7 >> 0xd;
      uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 >> 0xc;
      uVar7 = (uVar7 - uVar10) - uVar8 ^ uVar8 << 0x10;
      uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 5;
      uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 >> 3;
      uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar8 << 10;
      if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
        FVar9 = (this_00->Hash).SecondaryData;
        if (FVar9 == (ForElementType<FSetElementId>)0x0) {
          FVar9 = (ForElementType<FSetElementId>)&this_00->Hash;
        }
        iVar11 = *(int *)((longlong)FVar9 +
                         (ulonglong)
                         (this_00->HashSize - 1U & ((uVar10 - uVar7) - uVar8 ^ uVar7 >> 0xf)) * 4);
        if (iVar11 != -1) {
          lVar1 = *(longlong *)&this_00->Elements;
          do {
            lVar6 = (longlong)iVar11;
            if ((*(int *)(lVar1 + lVar6 * 0x10) == iVar4) &&
               (*(int *)(lVar1 + 4 + lVar6 * 0x10) == iVar12)) {
              if (iVar11 == -1) {
                return;
              }
              local_48.ObjectIndex = 0;
              local_48.ObjectSerialNumber = 0;
              if (param_2 != (UObject *)0x0) {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(param_2);
                }
                local_res20.ObjectIndex = 0;
                local_res20.ObjectSerialNumber = 0;
                local_30 = param_2;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(param_2);
                }
                FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_30);
                local_48.ObjectIndex = local_res20.ObjectIndex;
                local_48.ObjectSerialNumber = local_res20.ObjectSerialNumber;
              }
              iVar4 = TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::Remove
                                (this_00,&local_48);
              if ((iVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("RegisteredEDL->RegisteredClients.Remove(InClient)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                                     ,0x100,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34)
              {
                return;
              }
              if ((*(int *)&this_00[1].Elements.field_0x8 != *(int *)&this_00[1].Elements.field_0x34
                  ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                          ("RegisteredEDL->ActiveClients.Num() == 0",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                                           ,0x103,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((*(char *)&this_00[2].Elements != '\x01') &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("RegisteredEDL->State == EExternalDataLayerRegistrationState::Registered"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                                     ,0x104,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              *(undefined1 *)&this_00[2].Elements = 0;
              TMulticastDelegate<void___cdecl(UExternalDataLayerAsset_const_*,enum_EExternalDataLayerRegistrationState,enum_EExternalDataLayerRegistrationState),FDefaultDelegateUserPolicy>
              ::Broadcast(&this->OnExternalDataLayerAssetRegistrationStateChanged,param_1,Registered
                          ,Unregistered);
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)param_1);
              }
              local_28[0].DebugPtr = param_1;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)param_1);
              }
              if (*(int *)&(this->ExternalDataLayerAssets).field_0x8 !=
                  *(int *)&(this->ExternalDataLayerAssets).field_0x34) {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)param_1);
                }
                uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^
                        (uint)((ulonglong)param_1 >> 4)) * -0x7a143595;
                uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
                iVar4 = TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                        ::RemoveImpl<TObjectPtr<UExternalDataLayerAsset_const_>_>
                                  ((TSet<TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>,TDefaultMapHashableKeyFuncs<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers,0>,FDefaultSetAllocator>
                                    *)&this->ExternalDataLayerAssets,uVar7 >> 0x10 ^ uVar7,
                                   (TObjectPtr<UExternalDataLayerAsset_const_> *)
                                   &local_28[0].ObjectPtr);
                if (iVar4 != 0) {
                  return;
                }
              }
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ExternalDataLayerAssets.Remove(InExternalDataLayerAsset)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerEngineSubsystem.cpp"
                                 ,0x108,L"");
              if (!bVar3) {
                return;
              }
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar11 = *(int *)(lVar1 + 8 + lVar6 * 0x10);
          } while (iVar11 != -1);
        }
      }
    }
  }
  return;
}

