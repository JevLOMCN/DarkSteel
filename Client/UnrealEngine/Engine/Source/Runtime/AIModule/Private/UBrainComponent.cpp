// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 33

// StaticClass @ 146ea0030

UClass * __cdecl UBrainComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UBrainComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BrainComponent",
               &Z_Registration_Info_UClass_UBrainComponent.InnerSingleton,
               StaticRegisterNativesUBrainComponent,0x118,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrainComponent>,
               InternalVTableHelperCtorCaller<UBrainComponent>,aFStackX_8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrainComponent.InnerSingleton;
}

// _getUObject @ 146ea61d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall UBrainComponent::_getUObject(UBrainComponent *this)

{
  return (UObject *)&this[-1].MessageObservers.ArrayNum;
}

// _getUObject`adjustor{152}' @ 146ea61dc

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UBrainComponent::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall UBrainComponent::_getUObject_adjustor_152__(UBrainComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UBrainComponent *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// UBrainComponent @ 146f2a010

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrainComponent * __thiscall
UBrainComponent::UBrainComponent(UBrainComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UBrainComponent__6B_;
  (this->BlackboardComp).field0_0x0.DebugPtr = (UBlackboardComponent *)0x0;
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)0x0;
  (this->MessagesToProcess).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessagesToProcess).ArrayNum = 0;
  (this->MessagesToProcess).ArrayMax = 0;
  (this->MessageObservers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageObservers).ArrayNum = 0;
  (this->MessageObservers).ArrayMax = 0;
  FAIResourceLock::FAIResourceLock(&this->ResourceLock);
  return this;
}

// UBrainComponent @ 146f2a0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBrainComponent * __thiscall
UBrainComponent::UBrainComponent(UBrainComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UBrainComponent__6B_;
  (this->BlackboardComp).field0_0x0.DebugPtr = (UBlackboardComponent *)0x0;
  (this->AIOwner).field0_0x0.DebugPtr = (AAIController *)0x0;
  (this->MessagesToProcess).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessagesToProcess).ArrayNum = 0;
  (this->MessagesToProcess).ArrayMax = 0;
  (this->MessageObservers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageObservers).ArrayNum = 0;
  (this->MessageObservers).ArrayMax = 0;
  FAIResourceLock::FAIResourceLock(&this->ResourceLock);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->bDoLogicRestartOnUnlock = 0;
  return this;
}

// ~UBrainComponent @ 146f2e6a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::~UBrainComponent(UBrainComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&___7UBrainComponent__6B_;
  pFVar1 = (this->ResourceLock).ResourceLockCount.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MessageObservers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MessagesToProcess).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IAIResourceInterface__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// CacheBlackboardComponent @ 146f35a10

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
UBrainComponent::CacheBlackboardComponent(UBrainComponent *this,UBlackboardComponent *param_1)

{
  if (param_1 != (UBlackboardComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->BlackboardComp).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// Cleanup @ 146f36420

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::Cleanup(UBrainComponent *this)

{
  return;
}

// ClearResourceLock @ 146f36440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::ClearResourceLock(UBrainComponent *this,Type param_1)

{
  code *pcVar1;
  FString local_18;
  
  FAIResourceLock::ClearLock((FAIResourceLock *)&this->_padding_,param_1);
  if ((short)this->_padding_ == 0) {
    pcVar1 = *(code **)(this[-1]._padding_ + 0x528);
    ::FString::FString(&local_18,L"unlocked");
    (*pcVar1)(&this[-1]._padding_,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DescribeSelfToVisLog @ 146f40da0

/* WARNING: Removing unreachable block (ram,0x000146f4108b) */
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
UBrainComponent::DescribeSelfToVisLog(UBrainComponent *this,FVisualLogEntry *param_1)

{
  int *piVar1;
  FVisualLogStatusCategory *pFVar2;
  UBlackboardComponent *pUVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  FString local_d8;
  FVisualLogStatusCategory local_c8;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    PriorityEnum = StaticEnum<enum_EAIRequestPriority::Type>();
    _Init_thread_footer(&::_TSS0);
  }
  if ((this == (UBrainComponent *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Test",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Object.h"
                         ,0x760,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((uint)this->_padding_ >> 0x1e & 1) == 0) {
    lVar12 = 0;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    ::FName::ToString(&UE::VisualLogger::NAME_UnnamedCategory,&local_c8.Category);
    local_c8.UniqueId = -1;
    local_c8.Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Children.ArrayNum = 0;
    local_c8.Children.ArrayMax = 0;
    FAIResourceLock::GetLockPriorityName(&this->ResourceLock,&local_50);
    ::FString::PrintfImpl(&local_80,L"Resource lock: %s");
    if (local_c8.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Category.Data.AllocatorInstance.Data);
    }
    local_c8.Category.Data.AllocatorInstance.Data = local_80.Data.AllocatorInstance.Data;
    local_c8.Category.Data.ArrayNum = local_80.Data.ArrayNum;
    local_c8.Category.Data.ArrayMax = local_80.Data.ArrayMax;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    uVar10 = 1;
    lVar11 = 5;
    do {
      pwVar9 = L"Unlocked";
      if ((uVar10 & (this->ResourceLock).Locks) != 0) {
        pwVar9 = L"Locked";
      }
      ::FString::FString(&local_60,pwVar9);
      pFVar7 = UEnum::GetNameStringByValue(PriorityEnum,&local_40,lVar12);
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_70,pwVar9);
      _Src.Data = local_70.Data.AllocatorInstance.Data;
      local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar6 = local_70.Data.ArrayNum;
      local_90.Data.ArrayNum = iVar6;
      if (iVar6 == 0) {
        local_90.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar6,0,(ForAnyElementType *)&local_90,iVar6,&local_90.Data.ArrayMax);
        memcpy(local_90.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar6 * 2);
      }
      pFVar7 = ::FString::AppendChar(&local_90,L'|');
      ::FString::ConcatFF(&local_d8,pFVar7,&local_60);
      if (((local_c8.Data.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 <
           local_c8.Data.AllocatorInstance.Data + (longlong)local_c8.Data.ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = local_c8.Data.ArrayNum;
      if (local_c8.Data.ArrayNum == local_c8.Data.ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)&local_c8,&local_c8.Data.ArrayMax);
      }
      local_c8.Data.ArrayNum = iVar6 + 1;
      lVar8 = (longlong)iVar6;
      *(undefined8 *)(local_c8.Data.AllocatorInstance.Data + lVar8 * 0x10) = 0;
      *(FScriptContainerElement **)(local_c8.Data.AllocatorInstance.Data + lVar8 * 0x10) =
           local_d8.Data.AllocatorInstance.Data;
      *(int *)(local_c8.Data.AllocatorInstance.Data + lVar8 * 0x10 + 8) = local_d8.Data.ArrayNum;
      *(int *)(local_c8.Data.AllocatorInstance.Data + lVar8 * 0x10 + 0xc) = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.Data.AllocatorInstance.Data);
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      lVar12 = lVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    pFVar2 = (FVisualLogStatusCategory *)(param_1->Status).AllocatorInstance.Data;
    if (((pFVar2 <= &local_c8) && (&local_c8 < pFVar2 + (param_1->Status).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (param_1->Status).ArrayNum;
    piVar1 = &(param_1->Status).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(param_1->Status).AllocatorInstance,piVar1);
    }
    (param_1->Status).ArrayNum = iVar6 + 1;
    FVisualLogStatusCategory::FVisualLogStatusCategory
              ((FVisualLogStatusCategory *)
               ((param_1->Status).AllocatorInstance.Data + (longlong)iVar6 * 0x38),&local_c8);
    pUVar3 = (this->BlackboardComp).field0_0x0.DebugPtr;
    if (pUVar3 != (UBlackboardComponent *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x500))(pUVar3,param_1);
    }
    DestructItems<FVisualLogStatusCategory,int>
              ((FVisualLogStatusCategory *)local_c8.Children.AllocatorInstance.Data,
               local_c8.Children.ArrayNum);
    if ((FVisualLogStatusCategory *)local_c8.Children.AllocatorInstance.Data !=
        (FVisualLogStatusCategory *)0x0) {
      FMemory::Free(local_c8.Children.AllocatorInstance.Data);
    }
    if (local_c8.Category.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Category.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>
              ((FString *)local_c8.Data.AllocatorInstance.Data,local_c8.Data.ArrayNum);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ForceUnlockResource @ 146f4a8d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::ForceUnlockResource(UBrainComponent *this)

{
  code *pcVar1;
  FString local_18;
  
  FAIResourceLock::ForceClearAllLocks((FAIResourceLock *)&this->_padding_);
  pcVar1 = *(code **)(this[-1]._padding_ + 0x528);
  ::FString::FString(&local_18,L"unlocked: forced");
  (*pcVar1)(&this[-1]._padding_,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetDebugInfoString @ 146f50c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
UBrainComponent::GetDebugInfoString(UBrainComponent *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146f57870

UClass * __cdecl UBrainComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrainComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BrainComponent",
               &Z_Registration_Info_UClass_UBrainComponent.InnerSingleton,
               StaticRegisterNativesUBrainComponent,0x118,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UBrainComponent>,
               InternalVTableHelperCtorCaller<UBrainComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrainComponent.InnerSingleton;
}

// HandleMessage @ 146f5af20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::HandleMessage(UBrainComponent *this,FAIMessage *param_1)

{
  int *piVar1;
  TArray<FAIMessage,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  FAIMessage *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  
  pTVar2 = &this->MessagesToProcess;
  pFVar4 = (FAIMessage *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->MessagesToProcess).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar10 = (this->MessagesToProcess).ArrayNum;
  piVar1 = &(this->MessagesToProcess).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x418,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->MessagesToProcess).ArrayNum = iVar10 + 1;
  iVar7 = (param_1->Sender).ObjectIndex;
  iVar8 = (param_1->Sender).ObjectSerialNumber;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = (FName *)(pFVar5 + (longlong)iVar10 * 0x18);
  *pFVar3 = param_1->MessageName;
  pFVar3[1].ComparisonIndex = (FNameEntryId)iVar7;
  pFVar3[1].Number = iVar8;
  *(undefined8 *)(pFVar5 + (longlong)iVar10 * 0x18 + 0x10) = *(undefined8 *)&param_1->RequestID;
  return;
}

// InitializeComponent @ 146f5b760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::InitializeComponent(UBrainComponent *this)

{
  longlong *plVar1;
  code *pcVar2;
  UBlackboardComponent *this_00;
  UClass *local_res8;
  
  UActorComponent::InitializeComponent((UActorComponent *)this);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x738);
    local_res8 = Z_Construct_UClass_UBlackboardComponent_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    this_00 = (UBlackboardComponent *)(*pcVar2)(plVar1,&local_res8);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (this_00 == (UBlackboardComponent *)0x0)) {
      (this->BlackboardComp).field0_0x0.DebugPtr = this_00;
      if (this_00 == (UBlackboardComponent *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)this_00);
      (this->BlackboardComp).field0_0x0.DebugPtr = this_00;
    }
    UBlackboardComponent::CacheBrainComponent(this_00,this);
  }
  return;
}

// IsPaused @ 146f5b9b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBrainComponent::IsPaused(UBrainComponent *this)

{
  return false;
}

// IsResourceLocked @ 146f5b9d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBrainComponent::IsResourceLocked(UBrainComponent *this)

{
  return (short)this->_padding_ != 0;
}

// IsRunning @ 146f5b9e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall UBrainComponent::IsRunning(UBrainComponent *this)

{
  return false;
}

// LockResource @ 146f5c3f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::LockResource(UBrainComponent *this,Type param_1)

{
  code *pcVar1;
  longlong lVar2;
  FString local_28;
  FString local_18;
  
  lVar2 = this->_padding_;
  FAIResourceLock::SetLock((FAIResourceLock *)&this->_padding_,param_1);
  if ((short)lVar2 == 0) {
    pcVar1 = *(code **)(this[-1]._padding_ + 0x520);
    FAIResourceLock::GetLockPriorityName((FAIResourceLock *)&this->_padding_,&local_18);
    ::FString::PrintfImpl(&local_28,L"Locking Resource with source %s");
    (*pcVar1)(&this[-1]._padding_,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnRegister @ 146f5ea30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::OnRegister(UBrainComponent *this)

{
  int iVar1;
  UClass *pUVar2;
  AAIController *pAVar3;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  pAVar3 = (AAIController *)this->_padding_;
  if (pAVar3 != (AAIController *)0x0) {
    pUVar2 = Z_Construct_UClass_AAIController_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_146f5ea73;
  }
  pAVar3 = (AAIController *)0x0;
LAB_146f5ea73:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar3 != (AAIController *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar3);
  }
  (this->AIOwner).field0_0x0.DebugPtr = pAVar3;
  return;
}

// PauseLogic @ 146f5efa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::PauseLogic(UBrainComponent *this,FString *param_1)

{
  return;
}

// RequestLogicRestartOnUnlock @ 146f66b10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::RequestLogicRestartOnUnlock(UBrainComponent *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x28))();
  if (cVar1 != '\0') {
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this->_padding_,(FName *)&LogBrain.field_0x4,Log,
                 L"Scheduling Logic Restart on next braing unlocking");
    }
    this->bDoLogicRestartOnUnlock = 1;
  }
  return;
}

// RestartLogic @ 146f673c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::RestartLogic(UBrainComponent *this)

{
  return;
}

// ResumeLogic @ 146f673d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall UBrainComponent::ResumeLogic(UBrainComponent *this,FString *param_1)

{
  if (FVisualLogger::bIsRecording != 0) {
    FVisualLogger::CategorizedLogfImpl
              ((UObject *)this->_padding_,(FName *)&LogBrain.field_0x4,Log,
               L"Execution updates: RESUMED (%s)");
  }
  if (ZPULL(*(undefined4 *)&this->field_0x110,0,1) != 0) {
    *(uint *)&this->field_0x110 = *(undefined4 *)&this->field_0x110 & 0xfffffffe;
    (**(code **)(this->_padding_ + 0x508))(this);
    return RestartedInstead;
  }
  return Continue;
}

// StartLogic @ 146f76b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::StartLogic(UBrainComponent *this)

{
  return;
}

// StaticRegisterNativesUBrainComponent @ 146f76be0

void __cdecl UBrainComponent::StaticRegisterNativesUBrainComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UBrainComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopLogic @ 146f76f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UBrainComponent::StopLogic(UBrainComponent *this,FString *param_1)

{
  return;
}

// TickComponent @ 146f7a250

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
UBrainComponent::TickComponent
          (UBrainComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  FReadAccessScope local_40;
  
  uVar3 = (this->MessagesToProcess).ArrayNum;
  if (0 < (int)uVar3) {
    uVar16 = 0;
    if (0 < (int)uVar3) {
      lVar14 = 0;
      lVar13 = (longlong)(int)uVar3;
      do {
        uVar12 = 0;
        if ((int)uVar16 < (this->MessagesToProcess).ArrayNum) {
          uVar12 = ~uVar16 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = (this->MessagesToProcess).AllocatorInstance.Data;
        uVar12 = 0;
        pFVar1 = pFVar4 + lVar14;
        local_58 = *(longlong *)pFVar1;
        uStack_50 = *(undefined8 *)(pFVar1 + 8);
        local_48 = *(undefined8 *)(pFVar4 + lVar14 + 0x10);
        if (0 < (this->MessageObservers).ArrayNum) {
          lVar15 = 0;
          do {
            uVar9 = 0;
            if ((int)uVar12 < (this->MessageObservers).ArrayNum) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar5 = *(longlong *)((this->MessageObservers).AllocatorInstance.Data + lVar15);
            if ((local_58 == *(longlong *)(lVar5 + 0x10)) &&
               ((*(char *)(lVar5 + 0x1c) == '\0' ||
                (((iVar10 = *(int *)(lVar5 + 0x18), iVar10 != -1 && ((int)local_48 != -1)) &&
                 (((int)local_48 == iVar10 || (((int)local_48 == 0 || (iVar10 == 0)))))))))) {
              pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar5 + 0x38));
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                        ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar5 + 0x20),
                         &local_40);
              if ((*(int *)(lVar5 + 0x30) != 0) &&
                 (plVar6 = *(longlong **)(lVar5 + 0x28), plVar6 != (longlong *)0x0)) {
                (**(code **)(*plVar6 + 0x68))(plVar6,pUVar11,&local_58);
              }
              TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
              ~FReadAccessScope(&local_40);
            }
            uVar12 = uVar12 + 1;
            lVar15 = lVar15 + 8;
          } while ((int)uVar12 < (this->MessageObservers).ArrayNum);
        }
        uVar16 = uVar16 + 1;
        lVar14 = lVar14 + 0x18;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    uVar16 = 0;
    if ((int)uVar3 <= (this->MessagesToProcess).ArrayNum) {
      uVar16 = ~uVar3 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar1 = (this->MessagesToProcess).AllocatorInstance.Data;
    iVar10 = (this->MessagesToProcess).ArrayNum - uVar3;
    if (iVar10 != 0) {
      memmove(pFVar1,pFVar1 + (longlong)(int)uVar3 * 0x18,(longlong)iVar10 * 0x18);
    }
    piVar2 = &(this->MessagesToProcess).ArrayNum;
    *piVar2 = *piVar2 - uVar3;
  }
  return;
}

// execIsPaused @ 146f81200

void __cdecl UBrainComponent::execIsPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x538))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsRunning @ 146f81240

void __cdecl UBrainComponent::execIsRunning(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x530))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execRestartLogic @ 146f81670

void __cdecl UBrainComponent::execRestartLogic(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146f81688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x508))();
  return;
}

// execStartLogic @ 146f822a0

void __cdecl UBrainComponent::execStartLogic(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000146f822b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x500))();
  return;
}

// execStopLogic @ 146f822d0

void __cdecl UBrainComponent::execStopLogic(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *local_18;
  undefined8 local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x510))(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

