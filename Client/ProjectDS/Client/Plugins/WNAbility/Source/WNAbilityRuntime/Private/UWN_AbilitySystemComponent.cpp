// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNAbilityRuntime
// Functions: 64

// StaticClass @ 148db37e0

UClass * __cdecl UWN_AbilitySystemComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AbilitySystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_AbilitySystemComponent",
               &Z_Registration_Info_UClass_UWN_AbilitySystemComponent.InnerSingleton,
               StaticRegisterNativesUWN_AbilitySystemComponent,0x250,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_AbilitySystemComponent>,
               InternalVTableHelperCtorCaller<UWN_AbilitySystemComponent>,local_res8,
               UGameplayTasksComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AbilitySystemComponent.InnerSingleton;
}

// UWN_AbilitySystemComponent @ 148db6160

UWN_AbilitySystemComponent * __thiscall
UWN_AbilitySystemComponent::UWN_AbilitySystemComponent
          (UWN_AbilitySystemComponent *this,FVTableHelper *param_1)

{
  UGameplayTasksComponent::UGameplayTasksComponent((UGameplayTasksComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  (this->Tags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).GameplayTags.ArrayNum = 0;
  (this->Tags).GameplayTags.ArrayMax = 0;
  (this->Tags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ParentTags.ArrayNum = 0;
  (this->Tags).ParentTags.ArrayMax = 0;
  *(undefined8 *)&this->TagCountMap = 0;
  *(undefined8 *)&(this->TagCountMap).field_0x8 = 0;
  *(undefined8 *)&(this->TagCountMap).field_0x20 = 0;
  *(undefined4 *)&(this->TagCountMap).field_0x28 = 0;
  *(undefined4 *)&(this->TagCountMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagCountMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagCountMap).field_0x34 = 0;
  *(undefined8 *)&(this->TagCountMap).field_0x40 = 0;
  *(undefined4 *)&(this->TagCountMap).field_0x48 = 0;
  *(undefined8 *)&this->OnChangedTagEvent = 0;
  *(undefined8 *)&(this->OnChangedTagEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTagEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedTagEvent).field_0x18 = 2;
  this->UniqueID = -1;
  *(undefined8 *)&this->Abilities = 0;
  *(undefined8 *)&(this->Abilities).field_0x8 = 0;
  *(undefined8 *)&(this->Abilities).field_0x20 = 0;
  *(undefined4 *)&(this->Abilities).field_0x28 = 0;
  *(undefined4 *)&(this->Abilities).field_0x2c = 0x80;
  *(undefined4 *)&(this->Abilities).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Abilities).field_0x34 = 0;
  *(undefined8 *)&(this->Abilities).field_0x40 = 0;
  *(undefined4 *)&(this->Abilities).field_0x48 = 0;
  (this->Context)._padding_ = (longlong)&___7FWN_AbilitySystemContext__6B_;
  (this->Context).OwnerActor.WeakPtr = (FWeakObjectPtr)0x0;
  (this->Context).AvatarActor.WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UWN_AbilitySystemComponent @ 148db62b0

UWN_AbilitySystemComponent * __thiscall
UWN_AbilitySystemComponent::UWN_AbilitySystemComponent
          (UWN_AbilitySystemComponent *this,FObjectInitializer *param_1)

{
  uint uVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  UWN_AbilitySystemComponent *pUVar5;
  uint uVar6;
  
  UGameplayTasksComponent::UGameplayTasksComponent((UGameplayTasksComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  (this->Tags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).GameplayTags.ArrayNum = 0;
  (this->Tags).GameplayTags.ArrayMax = 0;
  (this->Tags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tags).ParentTags.ArrayNum = 0;
  (this->Tags).ParentTags.ArrayMax = 0;
  *(undefined8 *)&this->TagCountMap = 0;
  *(undefined8 *)&(this->TagCountMap).field_0x8 = 0;
  *(undefined8 *)&(this->TagCountMap).field_0x20 = 0;
  *(undefined4 *)&(this->TagCountMap).field_0x28 = 0;
  *(undefined4 *)&(this->TagCountMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagCountMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagCountMap).field_0x34 = 0;
  *(undefined8 *)&(this->TagCountMap).field_0x40 = 0;
  *(undefined4 *)&(this->TagCountMap).field_0x48 = 0;
  *(undefined8 *)&this->OnChangedTagEvent = 0;
  *(undefined8 *)&(this->OnChangedTagEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedTagEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedTagEvent).field_0x18 = 2;
  if (sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum < 1) {
    if (sAbilitySystemComponentUniqueIDGenerator.NumCreated == 0xffffffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumCreated != 0xffffffffui32",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Public\\WNUniqueIDGenerator.h"
                         ,0x1d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar5 = (UWN_AbilitySystemComponent *)(*pcVar3)();
        return pUVar5;
      }
    }
    sAbilitySystemComponentUniqueIDGenerator.NumCreated =
         sAbilitySystemComponentUniqueIDGenerator.NumCreated + 1;
    uVar6 = sAbilitySystemComponentUniqueIDGenerator.NextID + 1;
    sAbilitySystemComponentUniqueIDGenerator.NextID = uVar6;
  }
  else {
    uVar1 = sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum - 1;
    uVar6 = *(uint *)(sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 4);
    if (~uVar1 + sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum != 0) {
      memmove(sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
              (longlong)(int)uVar1 * 4,
              sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
              (longlong)(int)uVar1 * 4 + 4,
              (longlong)(int)(~uVar1 + sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum)
              << 2);
    }
    sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum =
         sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance,
               sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum,
               &sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayMax);
  }
  this->UniqueID = uVar6;
  *(undefined8 *)&(this->Abilities).field_0x10 = 0;
  *(undefined8 *)&(this->Abilities).field_0x18 = 0;
  *(undefined8 *)&(this->Abilities).field_0x38 = 0;
  *(undefined8 *)&(this->Abilities).field_0x48 = 0;
  *(undefined8 *)&this->Abilities = 0;
  *(undefined8 *)&(this->Abilities).field_0x8 = 0;
  *(undefined8 *)&(this->Abilities).field_0x20 = 0;
  *(undefined4 *)&(this->Abilities).field_0x28 = 0;
  *(undefined4 *)&(this->Abilities).field_0x2c = 0x80;
  *(undefined4 *)&(this->Abilities).field_0x34 = 0;
  *(undefined4 *)&(this->Abilities).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Abilities).field_0x40 = 0;
  pbVar2 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar2 = *pbVar2 | 6;
  (this->Context)._padding_ = (longlong)&___7FWN_AbilitySystemContext__6B_;
  (this->Context).OwnerActor.WeakPtr = (FWeakObjectPtr)0x0;
  (this->Context).AvatarActor.WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UWN_AbilitySystemComponent @ 148db6910

void __thiscall
UWN_AbilitySystemComponent::~UWN_AbilitySystemComponent(UWN_AbilitySystemComponent *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  int local_18 [4];
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = (longlong)&_vftable__for__IVisualLoggerDebugSnapshotInterface__;
  local_18[0] = this->UniqueID;
  if ((sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data <=
       (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data +
      (longlong)sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayMax * 4)) {
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
  }
  if (sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum ==
      sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayMax) {
    sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x404,&sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance,
                    &sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayMax);
  }
  lVar5 = (longlong)sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum;
  sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum =
       sAbilitySystemComponentUniqueIDGenerator.FreedIDs.ArrayNum + 1;
  *(int *)(sAbilitySystemComponentUniqueIDGenerator.FreedIDs.AllocatorInstance.Data + lVar5 * 4) =
       local_18[0];
  TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
           *)&this->Abilities);
  *(undefined4 *)&(this->Abilities).field_0x48 = 0;
  (this->Context)._padding_ = (longlong)&___7FWN_AbilitySystemContext__6B_;
  pvVar1 = *(void **)&(this->Abilities).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Abilities);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedTagEvent).field_0x8,*(int *)&(this->OnChangedTagEvent).field_0x10);
  pvVar1 = *(void **)&(this->OnChangedTagEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedTagEvent);
  *(undefined4 *)&(this->TagCountMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TagCountMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGameplayTag,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TagCountMap);
  pFVar2 = (this->Tags).ParentTags.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Tags).GameplayTags.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UGameplayTasksComponent::~UGameplayTasksComponent((UGameplayTasksComponent *)this);
  return;
}

// AddAbility @ 148db70d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FWN_AbilityInstanceHandle * __thiscall
UWN_AbilitySystemComponent::AddAbility
          (UWN_AbilitySystemComponent *this,FWN_AbilityInstanceHandle *__return_storage_ptr__,
          TSubclassOf<UWN_Ability> param_1,FGameplayTag *param_2,
          TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> *param_3)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  FName FVar5;
  FWeakObjectPtr FVar6;
  FWeakObjectPtr *pFVar7;
  FSharedReferencer<1> FVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  UObject *pUVar14;
  FWN_AbilityInstanceHandle *pFVar15;
  TObjectPtr<UWN_Ability>_u_0 TVar16;
  longlong *plVar17;
  undefined1 auStack_1b8 [32];
  FWeakObjectPtr *local_198;
  FWeakObjectPtr *local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_168 [4];
  FWeakObjectPtr local_164;
  TObjectPtr<UWN_Ability>_u_0 local_158;
  FWN_AbilityInstanceHandle local_150;
  undefined8 local_140;
  TPairInitializer<FWN_AbilityInstanceHandle_const_&,TObjectPtr<UWN_Ability>_&&> local_138;
  UObject *local_128;
  TObjectPtr<UWN_Ability>_u_0 *local_120;
  UObject *local_118;
  UWN_AbilitySystemComponent *local_110;
  UObject *local_108;
  undefined8 local_100;
  FSharedReferencer<1> local_f8;
  FWN_AbilityInstanceHandle *local_f0;
  UObject **local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  TVar16.DebugPtr = (UWN_Ability *)0x0;
  if ((lVar3 != 0) && (pUVar12 = UWN_Ability::StaticClass(), pUVar12 != (UClass *)0x0)) {
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      TVar16 = *(TObjectPtr<UWN_Ability>_u_0 *)param_1.Class.field0_0x0;
    }
  }
  local_158 = TVar16;
  if ((((TObjectPtr<UObject>_u_0 *)&TVar16.DebugPtr[1].EndTaskInstanceNames.AllocatorInstance)->
       DebugPtr == (UObject *)0x0) &&
     (UClass::InternalCreateDefaultObjectWrapper((UClass *)TVar16.DebugPtr),
     ((TObjectPtr<UObject>_u_0 *)&TVar16.DebugPtr[1].EndTaskInstanceNames.AllocatorInstance)->
     DebugPtr == (UObject *)0x0)) {
    `UWN_AbilitySystemComponent::AddAbility'::__l5::<lambda_1>::operator()(local_168);
  }
  else if (param_2->TagName == (FName)0x0) {
    local_138.Value = (TObjectPtr<UWN_Ability> *)&local_158;
    `UWN_AbilitySystemComponent::AddAbility'::__l8::<lambda_2>::operator()(&local_138.Value);
  }
  else {
    local_128 = *(UObject **)param_1.Class.field0_0x0;
    pcVar4 = *(code **)(this->_padding_ + 0x538);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_128 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_128);
    }
    cVar9 = (*pcVar4)(this,&local_128,param_2,param_3);
    TVar16 = local_158;
    if (cVar9 == '\0') {
      FWN_AbilityInstanceHandle::FWN_AbilityInstanceHandle(__return_storage_ptr__,0);
      return __return_storage_ptr__;
    }
    pUVar13 = (UObject *)this->_padding_;
    local_140 = 0;
    FObjectInitializer::AssertIfInConstructor
              (pUVar13,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar12 = UWN_Ability::StaticClass();
    CheckIsClassChildOf_Internal(pUVar12,(UClass *)TVar16.DebugPtr);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,(UClass *)TVar16.DebugPtr);
    local_d8._16_4_ = 0;
    local_d8._20_4_ = 0;
    local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_d8._56_8_ = (UPackage *)0x0;
    local_d8._24_4_ = RF_NoFlags;
    local_d8._40_8_ = (UObject *)0x0;
    local_d8[0x20] = false;
    local_d8._8_8_ = pUVar13;
    pUVar13 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar17 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar17 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    if (pUVar13 != (UObject *)0x0) {
      FWN_AbilityInstanceHandle::FWN_AbilityInstanceHandle(&local_150,this->UniqueID);
      local_118 = pUVar13;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar13);
      }
      local_f0 = &local_150;
      local_e8 = &local_118;
      TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FWN_AbilityInstanceHandle_const_&,TObjectPtr<UWN_Ability>_&&>_>
                ((TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
                  *)&this->Abilities,&local_138,(bool *)&local_f0);
      FVar5 = param_2->TagName;
      local_110 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar13[1].field_0xc,(FObjectPtr)&local_110);
      *(uint *)&pUVar13[3].field_0x0 = FVar5.ComparisonIndex.Value;
      *(uint *)&pUVar13[3].field_0x4 = FVar5.Number;
      FVar6 = param_3->WeakPtr;
      *(int *)&pUVar13[4].field_0x0 = FVar6.ObjectIndex;
      *(int *)&pUVar13[4].field_0x4 = FVar6.ObjectSerialNumber;
      bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pUVar13 + 4));
      if (bVar10) {
        pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar13 + 4));
        puVar2 = &pUVar14[4].field_0x8;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        local_164.ObjectIndex = 0;
        local_164.ObjectSerialNumber = 0;
        local_108 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        FWeakObjectPtr::operator=(&local_164,(FObjectPtr)&local_108);
        pFVar7 = *(FWeakObjectPtr **)puVar2;
        if ((pFVar7 <= &local_164) && (&local_164 < pFVar7 + *(int *)&pUVar14[4].field_0x14)) {
          local_180 = (longlong)*(int *)&pUVar14[4].field_0x10;
          local_178 = 8;
          local_198 = &local_164;
          local_190 = pFVar7;
          local_188 = (longlong)*(int *)&pUVar14[4].field_0x14;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar4 = (code *)swi(3);
            pFVar15 = (FWN_AbilityInstanceHandle *)(*pcVar4)();
            return pFVar15;
          }
        }
        iVar11 = *(int *)&pUVar14[4].field_0x10;
        if (iVar11 == *(int *)&pUVar14[4].field_0x14) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)puVar2,(int *)&pUVar14[4].field_0x14);
        }
        *(int *)&pUVar14[4].field_0x10 = iVar11 + 1;
        *(FWeakObjectPtr *)(*(longlong *)puVar2 + (longlong)iVar11 * 8) = local_164;
      }
      (**(code **)(*(longlong *)pUVar13 + 0x2b0))(pUVar13);
      (**(code **)(this->_padding_ + 0x540))(this,pUVar13);
      (__return_storage_ptr__->HandleImpl).Object = local_150.HandleImpl.Object;
      (__return_storage_ptr__->HandleImpl).SharedReferenceCount.ReferenceController =
           local_150.HandleImpl.SharedReferenceCount.ReferenceController;
      if (local_150.HandleImpl.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_150.HandleImpl.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_150.HandleImpl.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_150.HandleImpl.Object = (FWN_AbilityInstanceHandleImpl *)0x0;
      local_100 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_150.HandleImpl.SharedReferenceCount,&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_f8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_150.HandleImpl.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    local_120 = &local_158;
    `UWN_AbilitySystemComponent::AddAbility'::__l14::<lambda_3>::operator()(&local_120);
  }
  (__return_storage_ptr__->HandleImpl).Object = FWN_AbilityInstanceHandle::Invalid.HandleImpl.Object
  ;
  FVar8 = FWN_AbilityInstanceHandle::Invalid.HandleImpl.SharedReferenceCount;
  (__return_storage_ptr__->HandleImpl).SharedReferenceCount.ReferenceController =
       FWN_AbilityInstanceHandle::Invalid.HandleImpl.SharedReferenceCount.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar8.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// AddTag @ 148db7680

void __thiscall
UWN_AbilitySystemComponent::AddTag
          (UWN_AbilitySystemComponent *this,FGameplayTag *param_1,int param_2)

{
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *this_00;
  FName FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int aiStackX_18 [4];
  FGameplayTag *pFStack_38;
  int *piStack_30;
  
  if (param_2 == 0) {
    return;
  }
  FVar1 = param_1->TagName;
  this_00 = &this->TagCountMap;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  aiStackX_18[0] = 0;
  if (*(int *)&(this->TagCountMap).field_0x8 != *(int *)&(this->TagCountMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TagCountMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TagCountMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TagCountMap).field_0x48 - 1U & FVar1.Number + uVar3)
                              * 4);
    aiStackX_18[0] = 0;
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x14) ==
            param_1->TagName) {
          piVar5 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                   ::FindChecked((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                  *)this_00,param_1);
          aiStackX_18[0] = *piVar5;
          break;
        }
        iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc + (longlong)iVar4 * 0x14);
        aiStackX_18[0] = 0;
      } while (iVar4 != -1);
    }
  }
  aiStackX_18[0] = aiStackX_18[0] + param_2;
  if (aiStackX_18[0] < 0) {
    aiStackX_18[0] = 0;
  }
  else if (0 < aiStackX_18[0]) {
    piStack_30 = aiStackX_18;
    pFStack_38 = param_1;
    TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,int_&>_>
              ((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
                *)this_00,(TPairInitializer<FGameplayTag_const_&,int_&> *)(aiStackX_18 + 2),
               (bool *)&pFStack_38);
    bVar2 = HasTag(this,param_1);
    if (bVar2) {
      return;
    }
    FGameplayTagContainer::AddTag(&this->Tags,param_1);
    bVar2 = true;
    goto LAB_148dbc0b9;
  }
  if (*(int *)&(this->TagCountMap).field_0x8 != *(int *)&(this->TagCountMap).field_0x34) {
    FVar1 = param_1->TagName;
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGameplayTag>
              ((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
                *)this_00,uVar3 + FVar1.Number,param_1);
  }
  bVar2 = HasTag(this,param_1);
  if (!bVar2) {
    return;
  }
  FGameplayTagContainer::RemoveTag(&this->Tags,param_1,false);
  bVar2 = false;
LAB_148dbc0b9:
  TMulticastDelegate<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangedTagEvent,param_1,bVar2);
  return;
}

// BeginPlay @ 148db7710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_AbilitySystemComponent::BeginPlay(UWN_AbilitySystemComponent *this)

{
  UActorComponent::BeginPlay((UActorComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x000148db7729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x528))(this);
  return;
}

// CanActivateAbility @ 148db78c0

bool __thiscall
UWN_AbilitySystemComponent::CanActivateAbility
          (UWN_AbilitySystemComponent *this,FWN_AbilityInstanceHandle *param_1)

{
  TObjectPtr<UWN_Ability>_u_0 TVar1;
  char cVar2;
  TObjectPtr<UWN_Ability> *pTVar3;
  TObjectPtr<UWN_Ability>_u_0 local_res8;
  
  pTVar3 = TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
           ::Find((TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
                   *)&this->Abilities,param_1);
  if (pTVar3 != (TObjectPtr<UWN_Ability> *)0x0) {
    TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar3->field0_0x0).DebugPtr;
    cVar2 = (**(code **)(this->_padding_ + 0x548))(this,TVar1.DebugPtr);
    if ((cVar2 != '\0') && ((TVar1.DebugPtr)->bIsActive == false)) {
      if (((TVar1.DebugPtr)->Tag).TagName == (FName)0x0) {
        local_res8.ObjectPtr.field0_0x0 = TVar1.ObjectPtr.field0_0x0;
        `UWN_Ability::CanActivate'::__l8::<lambda_1>::operator()(&local_res8);
      }
      else {
        cVar2 = (**(code **)((TVar1.DebugPtr)->_padding_ + 0x2c0))(TVar1.DebugPtr);
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(this->_padding_ + 0x550))(this,TVar1.DebugPtr);
          return cVar2 != '\0';
        }
      }
    }
  }
  return false;
}

// CancelAbility @ 148db79c0

bool __thiscall
UWN_AbilitySystemComponent::CancelAbility
          (UWN_AbilitySystemComponent *this,FWN_AbilityInstanceHandle *param_1)

{
  TObjectPtr<UWN_Ability>_u_0 TVar1;
  TObjectPtr<UWN_Ability> *pTVar2;
  bool bVar3;
  TObjectPtr<UWN_Ability>_u_0 local_res10;
  
  if ((param_1->HandleImpl).Object == (FWN_AbilityInstanceHandleImpl *)0x0) {
    local_res10 = (TObjectPtr<UWN_Ability>_u_0)this;
    `UWN_AbilitySystemComponent::CancelAbility'::__l5::<lambda_1>::operator()(&local_res10);
    return false;
  }
  pTVar2 = TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
           ::Find((TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
                   *)&this->Abilities,param_1);
  if (pTVar2 == (TObjectPtr<UWN_Ability> *)0x0) {
    local_res10 = (TObjectPtr<UWN_Ability>_u_0)this;
    `UWN_AbilitySystemComponent::CancelAbility'::__l8::<lambda_2>::operator()(&local_res10);
    return false;
  }
  TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar2->field0_0x0).DebugPtr;
  (**(code **)(this->_padding_ + 0x578))(this,TVar1.DebugPtr);
  bVar3 = (TVar1.DebugPtr)->bIsActive != false;
  if (bVar3) {
    (TVar1.DebugPtr)->bIsActive = false;
    (**(code **)((TVar1.DebugPtr)->_padding_ + 0x300))(TVar1.DebugPtr);
    (**(code **)((TVar1.DebugPtr)->_padding_ + 0x2f8))(TVar1.DebugPtr);
    (**(code **)((TVar1.DebugPtr)->_padding_ + 0x308))(TVar1.DebugPtr);
  }
  else {
    local_res10.ObjectPtr.field0_0x0 = TVar1.ObjectPtr.field0_0x0;
    `UWN_Ability::Cancel'::__l5::<lambda_1>::operator()(&local_res10);
  }
  (**(code **)(this->_padding_ + 0x580))(this,TVar1.DebugPtr);
  return bVar3;
}

// DeactivateAbility @ 148db7d00

bool __thiscall
UWN_AbilitySystemComponent::DeactivateAbility
          (UWN_AbilitySystemComponent *this,FWN_AbilityInstanceHandle *param_1)

{
  TObjectPtr<UWN_Ability> this_00;
  bool bVar1;
  TObjectPtr<UWN_Ability>_u_0 *pTVar2;
  UWN_AbilitySystemComponent *local_res10;
  
  local_res10 = this;
  if ((param_1->HandleImpl).Object == (FWN_AbilityInstanceHandleImpl *)0x0) {
    `UWN_AbilitySystemComponent::DeactivateAbility'::__l5::<lambda_1>::operator()(&local_res10);
    return false;
  }
  pTVar2 = &TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
            ::Find((TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
                    *)&this->Abilities,param_1)->field0_0x0;
  if (pTVar2 == (TObjectPtr<UWN_Ability>_u_0 *)0x0) {
    `UWN_AbilitySystemComponent::DeactivateAbility'::__l8::<lambda_2>::operator()(&local_res10);
    return false;
  }
  this_00.field0_0x0 = (TObjectPtr<UWN_Ability>_u_0)pTVar2->DebugPtr;
  (**(code **)(this->_padding_ + 0x568))(this,this_00.field0_0x0);
  bVar1 = UWN_Ability::Deactivate((UWN_Ability *)this_00.field0_0x0);
  (**(code **)(this->_padding_ + 0x570))(this,this_00.field0_0x0);
  return bVar1;
}

// EndPlay @ 148db9460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_AbilitySystemComponent::EndPlay(UWN_AbilitySystemComponent *this,Type param_1)

{
  (**(code **)(this->_padding_ + 0x530))();
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// GetAbility @ 148db9860

TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> __thiscall
UWN_AbilitySystemComponent::GetAbility
          (UWN_AbilitySystemComponent *this,FWN_AbilityInstanceHandle *param_1)

{
  TObjectPtr<UWN_Ability> *pTVar1;
  UWN_Ability *pUVar2;
  FWN_AbilityInstanceHandle *in_R8;
  UWN_Ability *local_res8;
  
  pTVar1 = TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
           ::Find((TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
                   *)&this->Abilities,in_R8);
  if (pTVar1 == (TObjectPtr<UWN_Ability> *)0x0) {
    pUVar2 = (UWN_Ability *)0x0;
  }
  else {
    pUVar2 = (pTVar1->field0_0x0).DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_148db98ca;
    if (pUVar2 != (UWN_Ability *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar2 != (UWN_Ability *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UWN_Ability *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
LAB_148db98ca:
  (param_1->HandleImpl).Object = (FWN_AbilityInstanceHandleImpl *)0x0;
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UWN_Ability *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UWN_Ability,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetChangedTagEvent @ 148db9920

TMulticastDelegate<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy> * __thiscall
UWN_AbilitySystemComponent::GetChangedTagEvent(UWN_AbilitySystemComponent *this)

{
  return &this->OnChangedTagEvent;
}

// GetPrivateStaticClass @ 148db9b10

UClass * __cdecl UWN_AbilitySystemComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AbilitySystemComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WNAbilityRuntime",L"WN_AbilitySystemComponent",
               &Z_Registration_Info_UClass_UWN_AbilitySystemComponent.InnerSingleton,
               StaticRegisterNativesUWN_AbilitySystemComponent,0x250,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_AbilitySystemComponent>,
               InternalVTableHelperCtorCaller<UWN_AbilitySystemComponent>,local_res8,
               UGameplayTasksComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AbilitySystemComponent.InnerSingleton;
}

// HasTag @ 148db9cd0

bool __thiscall
UWN_AbilitySystemComponent::HasTag(UWN_AbilitySystemComponent *this,FGameplayTag *param_1)

{
  FName *pFVar1;
  FName FVar2;
  FName *pFVar3;
  
  FVar2 = param_1->TagName;
  if (FVar2 != (FName)0x0) {
    pFVar3 = (FName *)(this->Tags).GameplayTags.AllocatorInstance.Data;
    pFVar1 = pFVar3 + (this->Tags).GameplayTags.ArrayNum;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      if (*pFVar3 == FVar2) {
        return true;
      }
    }
    pFVar3 = (FName *)(this->Tags).ParentTags.AllocatorInstance.Data;
    pFVar1 = pFVar3 + (this->Tags).ParentTags.ArrayNum;
    for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 1) {
      if (*pFVar3 == FVar2) {
        return true;
      }
    }
  }
  return false;
}

// HasTagExact @ 148db9d40

bool __thiscall
UWN_AbilitySystemComponent::HasTagExact(UWN_AbilitySystemComponent *this,FGameplayTag *param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  if (param_1->TagName != (FName)0x0) {
    pFVar2 = (FName *)(this->Tags).GameplayTags.AllocatorInstance.Data;
    pFVar1 = pFVar2 + (this->Tags).GameplayTags.ArrayNum;
    for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 1) {
      if (*pFVar2 == param_1->TagName) {
        return true;
      }
    }
  }
  return false;
}

// InitializeComponent @ 148db9e10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_AbilitySystemComponent::InitializeComponent(UWN_AbilitySystemComponent *this)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  UObject *local_res8;
  UObject *local_res10;
  
  UActorComponent::InitializeComponent((UActorComponent *)this);
  pUVar1 = (UObject *)this->_padding_;
  if (pUVar1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Owner != nullptr",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Private\\WNAbilitySystemComponent.cpp"
                       ,0x3b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&(this->Context).OwnerActor.WeakPtr,(FObjectPtr)&local_res8);
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&(this->Context).AvatarActor.WeakPtr,(FObjectPtr)&local_res10);
                    /* WARNING: Could not recover jumptable at 0x000148db9ec6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x500))(this);
  return;
}

// OnComponentDestroyed @ 148dba110

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
UWN_AbilitySystemComponent::OnComponentDestroyed(UWN_AbilitySystemComponent *this,bool param_1)

{
  (**(code **)(this->_padding_ + 0x510))();
  RemoveAllAbilities(this);
  UActorComponent::OnComponentDestroyed((UActorComponent *)this,param_1);
  return;
}

// OnPostAddAbility @ 148dba660

void __thiscall
UWN_AbilitySystemComponent::OnPostAddAbility(UWN_AbilitySystemComponent *this,UWN_Ability *param_1)

{
  return;
}

// OnPostBeginPlay @ 148dba670

void __thiscall UWN_AbilitySystemComponent::OnPostBeginPlay(UWN_AbilitySystemComponent *this)

{
  return;
}

// OnPostCanActivateAbility @ 148dba680

bool __thiscall
UWN_AbilitySystemComponent::OnPostCanActivateAbility
          (UWN_AbilitySystemComponent *this,UWN_Ability *param_1)

{
  return true;
}

// OnPostCancelAbility @ 148dba6a0

void __thiscall
UWN_AbilitySystemComponent::OnPostCancelAbility
          (UWN_AbilitySystemComponent *this,UWN_Ability *param_1)

{
  return;
}

// OnPostDeactivateAbility @ 148dba6c0

void __thiscall
UWN_AbilitySystemComponent::OnPostDeactivateAbility
          (UWN_AbilitySystemComponent *this,UWN_Ability *param_1)

{
  return;
}

// OnPostInitializeComponent @ 148dba6d0

void __thiscall
UWN_AbilitySystemComponent::OnPostInitializeComponent(UWN_AbilitySystemComponent *this)

{
  return;
}

// OnPostRegister @ 148dba6e0

void __thiscall UWN_AbilitySystemComponent::OnPostRegister(UWN_AbilitySystemComponent *this)

{
  return;
}

// OnPostRemoveAbility @ 148dba6f0

void __thiscall
UWN_AbilitySystemComponent::OnPostRemoveAbility
          (UWN_AbilitySystemComponent *this,FGameplayTag *param_1)

{
  return;
}

// OnPostRemoveAllAbilities @ 148dba700

void __thiscall
UWN_AbilitySystemComponent::OnPostRemoveAllAbilities
          (UWN_AbilitySystemComponent *this,
          TArray<FGameplayTag,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// OnPostTryActivateAbility @ 148dba720

void __thiscall
UWN_AbilitySystemComponent::OnPostTryActivateAbility
          (UWN_AbilitySystemComponent *this,UWN_Ability *param_1)

{
  return;
}

// OnPreAddAbility @ 148dba740

bool __thiscall
UWN_AbilitySystemComponent::OnPreAddAbility
          (UWN_AbilitySystemComponent *this,TSubclassOf<UWN_Ability> param_1,FGameplayTag *param_2,
          TWeakObjectPtr<UWN_Ability,FWeakObjectPtr> *param_3)

{
  return true;
}

// OnPreCanActivateAbility @ 148dba750

bool __thiscall
UWN_AbilitySystemComponent::OnPreCanActivateAbility
          (UWN_AbilitySystemComponent *this,UWN_Ability *param_1)

{
  return true;
}

// OnPreCancelAbility @ 148dba770

void __thiscall
UWN_AbilitySystemComponent::OnPreCancelAbility
          (UWN_AbilitySystemComponent *this,UWN_Ability *param_1)

{
  return;
}

// OnPreComponentDestroyed @ 148dba780

void __thiscall
UWN_AbilitySystemComponent::OnPreComponentDestroyed(UWN_AbilitySystemComponent *this,bool param_1)

{
  return;
}

// OnPreDeactivateAbility @ 148dba7a0

void __thiscall
UWN_AbilitySystemComponent::OnPreDeactivateAbility
          (UWN_AbilitySystemComponent *this,UWN_Ability *param_1)

{
  return;
}

// OnPreEndPlay @ 148dba7b0

void __thiscall
UWN_AbilitySystemComponent::OnPreEndPlay(UWN_AbilitySystemComponent *this,Type param_1)

{
  return;
}

// OnPreRemoveAbility @ 148dba7c0

void __thiscall
UWN_AbilitySystemComponent::OnPreRemoveAbility
          (UWN_AbilitySystemComponent *this,UWN_Ability *param_1)

{
  return;
}

// OnPreRemoveAllAbilities @ 148dba7d0

void __thiscall
UWN_AbilitySystemComponent::OnPreRemoveAllAbilities(UWN_AbilitySystemComponent *this)

{
  return;
}

// OnPreTryActivateAbility @ 148dba7f0

bool __thiscall
UWN_AbilitySystemComponent::OnPreTryActivateAbility
          (UWN_AbilitySystemComponent *this,UWN_Ability *param_1)

{
  return true;
}

// OnPreUninitializeComponent @ 148dba800

void __thiscall
UWN_AbilitySystemComponent::OnPreUninitializeComponent(UWN_AbilitySystemComponent *this)

{
  return;
}

// OnPreUnregister @ 148dba810

void __thiscall UWN_AbilitySystemComponent::OnPreUnregister(UWN_AbilitySystemComponent *this)

{
  return;
}

// OnRegister @ 148dba820

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_AbilitySystemComponent::OnRegister(UWN_AbilitySystemComponent *this)

{
  UActorComponent::OnRegister((UActorComponent *)this);
                    /* WARNING: Could not recover jumptable at 0x000148dba839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x520))(this);
  return;
}

// OnTickComponent @ 148dbad20

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
UWN_AbilitySystemComponent::OnTickComponent
          (UWN_AbilitySystemComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  return;
}

// OnUnregister @ 148dbad30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_AbilitySystemComponent::OnUnregister(UWN_AbilitySystemComponent *this)

{
  (**(code **)(this->_padding_ + 0x358))();
  UActorComponent::OnUnregister((UActorComponent *)this);
  return;
}

// RemoveAbility @ 148dbaf40

void __thiscall
UWN_AbilitySystemComponent::RemoveAbility
          (UWN_AbilitySystemComponent *this,FWN_AbilityInstanceHandle *param_1)

{
  FWN_AbilityInstanceHandleImpl *pFVar1;
  TObjectPtr<UWN_Ability> *pTVar2;
  uint uVar3;
  TObjectPtr<UWN_Ability>_u_0 local_res10;
  UWN_AbilitySystemComponent *local_res18;
  FName local_res20;
  UWN_AbilitySystemComponent *local_28;
  TObjectPtr<UWN_Ability>_u_0 *local_20;
  
  local_res18 = this;
  if ((param_1->HandleImpl).Object == (FWN_AbilityInstanceHandleImpl *)0x0) {
    `UWN_AbilitySystemComponent::RemoveAbility'::__l5::<lambda_1>::operator()(&local_res18);
    return;
  }
  pTVar2 = TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
           ::Find((TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
                   *)&this->Abilities,param_1);
  if (pTVar2 == (TObjectPtr<UWN_Ability> *)0x0) {
    `UWN_AbilitySystemComponent::RemoveAbility'::__l8::<lambda_2>::operator()(&local_res18);
    return;
  }
  local_res10.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar2->field0_0x0).DebugPtr;
  if ((local_res10.DebugPtr)->bIsActive != false) {
    local_20 = &local_res10;
    local_28 = this;
    `UWN_AbilitySystemComponent::RemoveAbility'::__l2::<lambda_3>::operator()(&local_28);
  }
  local_res20 = ((local_res10.DebugPtr)->Tag).TagName;
  (**(code **)(this->_padding_ + 0x588))(this);
  UWN_Ability::OnRemovedFromAbilitySystemComponent(local_res10.DebugPtr,this);
  if (*(int *)&(this->Abilities).field_0x8 != *(int *)&(this->Abilities).field_0x34) {
    pFVar1 = (param_1->HandleImpl).Object;
    uVar3 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FWN_AbilityInstanceHandle>
              ((TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
                *)&this->Abilities,uVar3 >> 0x10 ^ uVar3,param_1);
  }
  (**(code **)(this->_padding_ + 0x590))(this,&local_res20);
  return;
}

// RemoveAllAbilities @ 148dbb060

void __thiscall UWN_AbilitySystemComponent::RemoveAllAbilities(UWN_AbilitySystemComponent *this)

{
  TMap<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
  *this_00;
  UWN_Ability *this_01;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ForAnyElementType local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  (**(code **)(this->_padding_ + 0x598))();
  this_00 = &this->Abilities;
  uVar4 = *(int *)&(this->Abilities).field_0x8 - *(int *)&(this->Abilities).field_0x34;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  if (0 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar4,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_01 = *(UWN_Ability **)((longlong)(int)uVar3 * 0x20 + 0x10 + *local_48);
      if (this_01 != (UWN_Ability *)0x0) {
        iVar2 = (int)local_80;
        if ((int)local_80 == local_80._4_4_) {
          iVar2 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_88,(int *)((longlong)&local_80 + 4));
        }
        local_80 = CONCAT44(local_80._4_4_,iVar2 + 1);
        *(FName *)(local_88.Data + (longlong)iVar2 * 8) = (this_01->Tag).TagName;
        UWN_Ability::OnRemovedFromAbilitySystemComponent(this_01,this);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>_>,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>,FDefaultSetAllocator>
           *)this_00);
  (**(code **)(this->_padding_ + 0x5a0))(this,&local_88);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// RemoveTag @ 148dbb440

void __thiscall
UWN_AbilitySystemComponent::RemoveTag
          (UWN_AbilitySystemComponent *this,FGameplayTag *param_1,int param_2)

{
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *this_00;
  FName FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int aiStackX_18 [4];
  FGameplayTag *pFStack_38;
  int *piStack_30;
  
  if (param_2 == 0) {
    return;
  }
  FVar1 = param_1->TagName;
  this_00 = &this->TagCountMap;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  aiStackX_18[0] = 0;
  if (*(int *)&(this->TagCountMap).field_0x8 != *(int *)&(this->TagCountMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TagCountMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TagCountMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TagCountMap).field_0x48 - 1U & FVar1.Number + uVar3)
                              * 4);
    aiStackX_18[0] = 0;
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x14) ==
            param_1->TagName) {
          piVar5 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                   ::FindChecked((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                  *)this_00,param_1);
          aiStackX_18[0] = *piVar5;
          break;
        }
        iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc + (longlong)iVar4 * 0x14);
        aiStackX_18[0] = 0;
      } while (iVar4 != -1);
    }
  }
  aiStackX_18[0] = aiStackX_18[0] + param_2;
  if (aiStackX_18[0] < 0) {
    aiStackX_18[0] = 0;
  }
  else if (0 < aiStackX_18[0]) {
    piStack_30 = aiStackX_18;
    pFStack_38 = param_1;
    TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,int_&>_>
              ((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
                *)this_00,(TPairInitializer<FGameplayTag_const_&,int_&> *)(aiStackX_18 + 2),
               (bool *)&pFStack_38);
    bVar2 = HasTag(this,param_1);
    if (bVar2) {
      return;
    }
    FGameplayTagContainer::AddTag(&this->Tags,param_1);
    bVar2 = true;
    goto LAB_148dbc0b9;
  }
  if (*(int *)&(this->TagCountMap).field_0x8 != *(int *)&(this->TagCountMap).field_0x34) {
    FVar1 = param_1->TagName;
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGameplayTag>
              ((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
                *)this_00,uVar3 + FVar1.Number,param_1);
  }
  bVar2 = HasTag(this,param_1);
  if (!bVar2) {
    return;
  }
  FGameplayTagContainer::RemoveTag(&this->Tags,param_1,false);
  bVar2 = false;
LAB_148dbc0b9:
  TMulticastDelegate<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangedTagEvent,param_1,bVar2);
  return;
}

// SetAbilityContext @ 148dbb4f0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UWN_AbilitySystemComponent::SetAbilityContext
          (UWN_AbilitySystemComponent *this,FWN_AbilityInstanceHandle *param_1,
          TObjectPtr<UWN_AbilityContext> *param_2)

{
  TObjectPtr<UWN_Ability> TVar1;
  TObjectPtr<UWN_Ability>_u_0 *pTVar2;
  
  pTVar2 = &TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
            ::Find((TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
                    *)&this->Abilities,param_1)->field0_0x0;
  if (pTVar2 != (TObjectPtr<UWN_Ability>_u_0 *)0x0) {
    TVar1.field0_0x0 = (TObjectPtr<UWN_Ability>_u_0)pTVar2->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)(param_2->field0_0x0).DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)(param_2->field0_0x0).DebugPtr);
    }
    (((TObjectPtr<UWN_AbilityContext>_u_0 *)((longlong)TVar1.field0_0x0 + 0x40))->ObjectPtr).
    field0_0x0 = (FObjectPtr_u_0)param_2->field0_0x0;
  }
  return;
}

// SetAvatarActor @ 148dbb590

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
UWN_AbilitySystemComponent::SetAvatarActor(UWN_AbilitySystemComponent *this,AActor *param_1)

{
  bool bVar1;
  AActor *local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Context).OwnerActor.WeakPtr);
  if (bVar1) {
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->Context).AvatarActor.WeakPtr,(FObjectPtr)&local_res8);
  }
  else if (2 < (byte)LogWNAbility._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogWNAbility);
    return;
  }
  return;
}

// StaticRegisterNativesUWN_AbilitySystemComponent @ 148dbb6e0

void __cdecl UWN_AbilitySystemComponent::StaticRegisterNativesUWN_AbilitySystemComponent(void)

{
  return;
}

// TickComponent @ 148dbb700

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
UWN_AbilitySystemComponent::TickComponent
          (UWN_AbilitySystemComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName FVar8;
  TMap<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
  *pTVar9;
  int iVar10;
  char cVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_WNASC_Tick> FVar13;
  longlong lVar14;
  FName FVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  FName FVar19;
  uint *puVar20;
  FName local_c8;
  TMap<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  FName local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  int local_a0;
  uint uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  ulonglong local_60;
  FName local_58;
  FName local_50;
  
  iVar16 = 0;
  iVar17 = 0;
  FVar13 = StatPtr_STAT_WNASC_Tick;
  if (StatPtr_STAT_WNASC_Tick == (FThreadSafeStaticStat<FStat_STAT_WNASC_Tick>)0x0) {
    pFVar12 = ::FName::FName(&local_58,"STAT_WNASC_Tick");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_WNASC_Tick>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WNASC_Tick,*pFVar12,L"WNASC Tick"
                        ,"STATGROUP_WNASC","STATCAT_Advanced",L"WNASC",true,true,ST_int64,true,false
                        ,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar13;
  bVar5 = false;
  bVar7 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8 = (FName)((ulonglong)local_c8.Number << 0x20);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8 = FVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WNAbility\\Source\\WNAbilityRuntime\\Private\\WNAbilitySystemComponent.cpp"
                   ,100);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_148dbb84e;
    }
  }
  bVar6 = false;
  FVar15 = local_50;
LAB_148dbb84e:
  local_c0 = &this->Abilities;
  iVar18 = 0;
  local_60 = 1;
  local_c8 = (FName)&(this->Abilities).field_0x10;
  uVar2 = *(uint *)&(this->Abilities).field_0x28;
  uStack_b4 = 1;
  iStack_b8 = iVar18;
  local_a0 = iVar18;
  uStack_a4 = 0;
  if (uVar2 != 0) {
    puVar20 = *(uint **)&(this->Abilities).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)local_c8;
    }
    uStack_b4 = *puVar20;
    local_a0 = iVar16;
    iStack_b8 = iVar16;
    while (uStack_b4 == 0) {
      lVar14 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      uStack_b4 = 1;
      uStack_a4 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b8)
      goto LAB_148dbb8ea;
      uStack_b4 = (puVar20 + 1)[lVar14];
    }
    uStack_b4 = -uStack_b4 & uStack_b4;
    uVar1 = (ulonglong)uStack_b4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uStack_a4 = (int)lVar14 + -1 + local_a0;
    if ((int)uVar2 < (int)uStack_a4) {
      uStack_a4 = uVar2;
    }
  }
LAB_148dbb8ea:
  iStack_98 = *(int *)&(this->Abilities).field_0x8 - *(int *)&(this->Abilities).field_0x34;
  TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
  uStack_a8 = 0xffffffff;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  TStack_88._28_4_ = uStack_a4;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_b0 = local_c8;
  uStack_9c = uStack_a4;
  local_90 = local_c0;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
  local_58 = (FName)local_c0;
  TStack_88.CurrentBitIndex = uStack_a4;
  if ((int)uStack_a4 < *(int *)&(this->Abilities).field_0x28) {
    do {
      iVar10 = TStack_88.CurrentBitIndex;
      pTVar9 = local_90;
      cVar11 = (**(code **)(**(longlong **)
                              ((longlong)TStack_88.CurrentBitIndex * 0x20 + 0x10 +
                              *(longlong *)local_90) + 0x318))();
      if (cVar11 != '\0') {
        plVar4 = *(longlong **)((longlong)iVar10 * 0x20 + 0x10 + *(longlong *)pTVar9);
        (**(code **)(*plVar4 + 0x310))(plVar4,param_1,param_2,param_3);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    } while (TStack_88.CurrentBitIndex < (TStack_88.Array)->NumBits);
  }
  FVar8 = local_c8;
  UGameplayTasksComponent::TickComponent((UGameplayTasksComponent *)this,param_1,param_2,param_3);
  (**(code **)(this->_padding_ + 0x518))(this,param_1,param_2,param_3);
  uVar2 = *(uint *)((longlong)FVar8 + 0x18);
  uStack_a4 = 0;
  if (uVar2 != 0) {
    FVar19 = *(FName *)((longlong)FVar8 + 0x10);
    if (*(FName *)((longlong)FVar8 + 0x10) == (FName)0x0) {
      FVar19 = FVar8;
    }
    uVar3 = *(uint *)FVar19;
    iVar18 = iVar16;
    iVar17 = iVar16;
    while (uVar3 == 0) {
      lVar14 = (longlong)iVar17;
      iVar18 = iVar18 + 0x20;
      iVar17 = iVar17 + 1;
      uStack_a4 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_148dbba4d;
      uVar3 = ((uint *)((longlong)FVar19 + 4))[lVar14];
    }
    local_60 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = local_60 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uStack_a4 = (int)lVar14 + -1 + iVar18;
    if ((int)uVar2 < (int)uStack_a4) {
      uStack_a4 = uVar2;
    }
  }
LAB_148dbba4d:
  local_c0 = &this->Abilities;
  uStack_b4 = (uint)local_60;
  iStack_98 = *(int *)&(this->Abilities).field_0x8 - *(int *)&(this->Abilities).field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,iVar17);
  TStack_88.UnvisitedBitMask = 0xffffffff;
  TStack_88._28_4_ = uStack_a4;
  TStack_88.BaseBitIndex = iVar18;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  iStack_b8 = iVar17;
  local_b0 = FVar8;
  local_a0 = iVar18;
  uStack_9c = uStack_a4;
  local_90 = local_c0;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar8;
  TStack_88.CurrentBitIndex = uStack_a4;
  if ((int)uStack_a4 < (int)uVar2) {
    do {
      iVar17 = TStack_88.CurrentBitIndex;
      pTVar9 = local_90;
      cVar11 = (**(code **)(**(longlong **)
                              ((longlong)TStack_88.CurrentBitIndex * 0x20 + 0x10 +
                              *(longlong *)local_90) + 0x328))();
      if (cVar11 != '\0') {
        plVar4 = *(longlong **)((longlong)iVar17 * 0x20 + 0x10 + *(longlong *)pTVar9);
        (**(code **)(*plVar4 + 800))(plVar4,param_1,param_2,param_3);
      }
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    } while (TStack_88.CurrentBitIndex < (int)*(uint *)((longlong)TStack_88.Array + 0x18));
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// TryActivateAbility @ 148dbbb80

bool __thiscall
UWN_AbilitySystemComponent::TryActivateAbility
          (UWN_AbilitySystemComponent *this,FWN_AbilityInstanceHandle *param_1)

{
  TObjectPtr<UWN_Ability>_u_0 TVar1;
  char cVar2;
  TObjectPtr<UWN_Ability> *pTVar3;
  TObjectPtr<UWN_Ability>_u_0 local_res10 [3];
  
  local_res10[0] = (TObjectPtr<UWN_Ability>_u_0)this;
  if ((param_1->HandleImpl).Object == (FWN_AbilityInstanceHandleImpl *)0x0) {
    `UWN_AbilitySystemComponent::TryActivateAbility'::__l5::<lambda_1>::operator()(local_res10);
    return false;
  }
  pTVar3 = TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
           ::Find((TMapBase<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_AbilityInstanceHandle,TObjectPtr<UWN_Ability>,0>_>
                   *)&this->Abilities,param_1);
  if (pTVar3 == (TObjectPtr<UWN_Ability> *)0x0) {
    `UWN_AbilitySystemComponent::TryActivateAbility'::__l8::<lambda_2>::operator()(local_res10);
    return false;
  }
  TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar3->field0_0x0).DebugPtr;
  cVar2 = (**(code **)(this->_padding_ + 0x558))(this,TVar1.DebugPtr);
  if ((cVar2 != '\0') && ((TVar1.DebugPtr)->bIsActive == false)) {
    local_res10[0].ObjectPtr.field0_0x0 = TVar1.ObjectPtr.field0_0x0;
    if (((TVar1.DebugPtr)->Tag).TagName == (FName)0x0) {
      `UWN_Ability::CanActivate'::__l8::<lambda_1>::operator()(local_res10);
    }
    else {
      cVar2 = (**(code **)((TVar1.DebugPtr)->_padding_ + 0x2c0))(TVar1.DebugPtr);
      if (cVar2 != '\0') {
        if (((TVar1.DebugPtr)->Tag).TagName == (FName)0x0) {
          `UWN_Ability::Activate'::__l5::<lambda_1>::operator()(local_res10);
          return false;
        }
        if ((TVar1.DebugPtr)->bIsActive != false) {
          `UWN_Ability::Activate'::__l8::<lambda_2>::operator()(local_res10);
          return false;
        }
        cVar2 = (**(code **)((TVar1.DebugPtr)->_padding_ + 0x2d0))(TVar1.DebugPtr);
        if (cVar2 != '\0') {
          (TVar1.DebugPtr)->bIsActive = true;
          cVar2 = (**(code **)((TVar1.DebugPtr)->_padding_ + 0x2c8))(TVar1.DebugPtr);
          if (cVar2 != '\0') {
            (**(code **)((TVar1.DebugPtr)->_padding_ + 0x2d8))(TVar1.DebugPtr);
            (**(code **)(this->_padding_ + 0x560))(this,TVar1.DebugPtr);
            return true;
          }
        }
        (TVar1.DebugPtr)->bIsActive = false;
        return false;
      }
    }
  }
  return false;
}

// UninitializeComponent @ 148dbbf70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWN_AbilitySystemComponent::UninitializeComponent(UWN_AbilitySystemComponent *this)

{
  (**(code **)(this->_padding_ + 0x508))();
  (**(code **)((this->Context)._padding_ + 8))();
  RemoveAllAbilities(this);
  UActorComponent::UninitializeComponent((UActorComponent *)this);
  return;
}

// UpdateTagCount @ 148dbbfb0

void __thiscall
UWN_AbilitySystemComponent::UpdateTagCount
          (UWN_AbilitySystemComponent *this,FGameplayTag *param_1,int param_2)

{
  TMap<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
  *this_00;
  FName FVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  int local_res18 [4];
  FGameplayTag *local_38;
  int *local_30;
  
  if (param_2 == 0) {
    return;
  }
  FVar1 = param_1->TagName;
  this_00 = &this->TagCountMap;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  local_res18[0] = 0;
  if (*(int *)&(this->TagCountMap).field_0x8 != *(int *)&(this->TagCountMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TagCountMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TagCountMap).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TagCountMap).field_0x48 - 1U & FVar1.Number + uVar3)
                              * 4);
    local_res18[0] = 0;
    if (iVar4 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x14) ==
            param_1->TagName) {
          piVar5 = TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                   ::FindChecked((TMapBase<FGameplayTag,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>_>
                                  *)this_00,param_1);
          local_res18[0] = *piVar5;
          break;
        }
        iVar4 = *(int *)(*(longlong *)&this_00->field_0x0 + 0xc + (longlong)iVar4 * 0x14);
        local_res18[0] = 0;
      } while (iVar4 != -1);
    }
  }
  local_res18[0] = local_res18[0] + param_2;
  if (local_res18[0] < 0) {
    local_res18[0] = 0;
  }
  else if (0 < local_res18[0]) {
    local_30 = local_res18;
    local_38 = param_1;
    TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FGameplayTag_const_&,int_&>_>
              ((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
                *)this_00,(TPairInitializer<FGameplayTag_const_&,int_&> *)(local_res18 + 2),
               (bool *)&local_38);
    bVar2 = HasTag(this,param_1);
    if (bVar2) {
      return;
    }
    FGameplayTagContainer::AddTag(&this->Tags,param_1);
    bVar2 = true;
    goto LAB_148dbc0b9;
  }
  if (*(int *)&(this->TagCountMap).field_0x8 != *(int *)&(this->TagCountMap).field_0x34) {
    FVar1 = param_1->TagName;
    uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
    ::RemoveImpl<FGameplayTag>
              ((TSet<TTuple<FGameplayTag,int>,TDefaultMapHashableKeyFuncs<FGameplayTag,int,0>,FDefaultSetAllocator>
                *)this_00,uVar3 + FVar1.Number,param_1);
  }
  bVar2 = HasTag(this,param_1);
  if (!bVar2) {
    return;
  }
  FGameplayTagContainer::RemoveTag(&this->Tags,param_1,false);
  bVar2 = false;
LAB_148dbc0b9:
  TMulticastDelegate<void___cdecl(FGameplayTag_const_&,bool),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnChangedTagEvent,param_1,bVar2);
  return;
}

// operator() @ 15053a4e0

bool __thiscall `UWN_AbilitySystemComponent::AddAbility'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751496938>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751496938>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053a5d0

bool __thiscall
`UWN_AbilitySystemComponent::CancelAbility'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751497116>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751497116>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053a645;
    }
  }
  bVar2 = false;
LAB_15053a645:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053a730

bool __thiscall
`UWN_AbilitySystemComponent::DeactivateAbility'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751497082>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751497082>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053a7a5;
    }
  }
  bVar2 = false;
LAB_15053a7a5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053a8e0

bool __thiscall
`UWN_AbilitySystemComponent::RemoveAbility'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751497150>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751497150>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053a955;
    }
  }
  bVar2 = false;
LAB_15053a955:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053a990

bool __thiscall
`UWN_AbilitySystemComponent::TryActivateAbility'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751497028>);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x248));
    local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
    local_res10[0].Number = *(uint *)&pUVar4->field_0x1c;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751497028>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053aa11;
    }
  }
  bVar2 = false;
LAB_15053aa11:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053aba0

bool __thiscall `UWN_AbilitySystemComponent::AddAbility'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FTopLevelAssetPath local_28;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751496944>);
  if (bVar2) {
    UStruct::GetStructPathName((UStruct *)**(undefined8 **)this,&local_28);
    FTopLevelAssetPath::ToString(&local_28,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751496944>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053ac19;
    }
  }
  bVar2 = false;
LAB_15053ac19:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053ac50

bool __thiscall
`UWN_AbilitySystemComponent::CancelAbility'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751497123>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751497123>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053acc5;
    }
  }
  bVar2 = false;
LAB_15053acc5:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053ad00

bool __thiscall
`UWN_AbilitySystemComponent::DeactivateAbility'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751497089>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751497089>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053ad75;
    }
  }
  bVar2 = false;
LAB_15053ad75:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053adb0

bool __thiscall
`UWN_AbilitySystemComponent::RemoveAbility'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751497157>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751497157>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053ae25;
    }
  }
  bVar2 = false;
LAB_15053ae25:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053ae60

bool __thiscall
`UWN_AbilitySystemComponent::TryActivateAbility'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  bool bVar5;
  FName local_res10 [3];
  FString local_18;
  
  bVar5 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751497035>);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)this + 0x248));
    local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
    local_res10[0].Number = *(uint *)&pUVar4->field_0x1c;
    ::FName::ToString(local_res10,&local_18);
    bVar5 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751497035>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053aee1;
    }
  }
  bVar2 = false;
LAB_15053aee1:
  if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15053b010

bool __thiscall
`UWN_AbilitySystemComponent::RemoveAbility'::__l2::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  FName local_res10;
  FName local_res18;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751497163>);
  if (bVar5) {
    ::FName::ToString((FName *)(**(longlong **)((longlong)this + 8) + 0x78),&local_28);
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_38);
    local_res18 = *(FName *)(*(longlong *)this + 0x18);
    ::FName::ToString(&local_res18,&local_48);
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751497163>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15053b10c;
    }
  }
  bVar5 = false;
LAB_15053b10c:
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

// operator() @ 15053b180

bool __thiscall `UWN_AbilitySystemComponent::AddAbility'::__l14::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FTopLevelAssetPath local_28;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3661645909751496956>);
  if (bVar2) {
    UStruct::GetStructPathName((UStruct *)**(undefined8 **)this,&local_28);
    FTopLevelAssetPath::ToString(&local_28,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3661645909751496956>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053b1f9;
    }
  }
  bVar2 = false;
LAB_15053b1f9:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

