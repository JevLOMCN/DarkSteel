// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// StaticClass @ 146eaad60

UClass * __cdecl UBTDecorator_CompareBBEntries::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_CompareBBEntries.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_CompareBBEntries",
               &Z_Registration_Info_UClass_UBTDecorator_CompareBBEntries.InnerSingleton,
               StaticRegisterNativesUBTDecorator_CompareBBEntries,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_CompareBBEntries>,
               InternalVTableHelperCtorCaller<UBTDecorator_CompareBBEntries>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_CompareBBEntries.InnerSingleton;
}

// UBTDecorator_CompareBBEntries @ 146ec5dc0

UBTDecorator_CompareBBEntries * __thiscall
UBTDecorator_CompareBBEntries::UBTDecorator_CompareBBEntries
          (UBTDecorator_CompareBBEntries *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  (this->BlackboardKeyA).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BlackboardKeyB).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BlackboardKeyA).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKeyA).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKeyA).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKeyA).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKeyA).SelectedKeyName.Number = 0;
  (this->BlackboardKeyA).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKeyA).SelectedKeyID = 0xffff;
  (this->BlackboardKeyB).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKeyB).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKeyB).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKeyB).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKeyB).SelectedKeyName.Number = 0;
  (this->BlackboardKeyB).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKeyB).SelectedKeyID = 0xffff;
  return this;
}

// UBTDecorator_CompareBBEntries @ 146ec5e60

UBTDecorator_CompareBBEntries * __thiscall
UBTDecorator_CompareBBEntries::UBTDecorator_CompareBBEntries
          (UBTDecorator_CompareBBEntries *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  plVar2 = &this->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0xff;
  *plVar2 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf0;
  *(undefined4 *)&this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffff47 | 0x47;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->BlackboardKeyA).bNoneIsAllowedValue = 0;
  (this->BlackboardKeyB).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->BlackboardKeyA).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKeyA).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKeyA).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKeyA).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKeyA).SelectedKeyName.Number = 0;
  (this->BlackboardKeyA).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKeyA).SelectedKeyID = 0xffff;
  (this->BlackboardKeyB).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKeyB).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKeyB).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKeyB).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKeyB).SelectedKeyName.Number = 0;
  (this->BlackboardKeyB).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKeyB).SelectedKeyID = 0xffff;
  ::FString::FString(&local_18,"Compare Blackboard entries");
  if ((FString *)plVar2 != &local_18) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfb;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 3;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffffc7;
  (this->Operator).Value = '\0';
  return this;
}

// ~UBTDecorator_CompareBBEntries @ 146eccc30

void __thiscall
UBTDecorator_CompareBBEntries::~UBTDecorator_CompareBBEntries(UBTDecorator_CompareBBEntries *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->BlackboardKeyB).AllowedTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BlackboardKeyA).AllowedTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UBTNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateRawConditionValue @ 146ed4750

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
UBTDecorator_CompareBBEntries::CalculateRawConditionValue
          (UBTDecorator_CompareBBEntries *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  UClass *pUVar4;
  UBlackboardComponent *this_00;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  Type TVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *local_res8;
  
  pUVar4 = (this->BlackboardKeyA).SelectedKeyType.Class.field0_0x0.DebugPtr;
  pUVar11 = (UClass *)0x0;
  pUVar10 = pUVar11;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar9 = UBlackboardKeyType::StaticClass(), pUVar9 != (UClass *)0x0)) {
    iVar1 = (int)pUVar9->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar10 = (this->BlackboardKeyA).SelectedKeyType.Class.field0_0x0.DebugPtr;
    }
  }
  pUVar4 = (this->BlackboardKeyB).SelectedKeyType.Class.field0_0x0.DebugPtr;
  if ((pUVar4 != (UClass *)0x0) &&
     (pUVar9 = UBlackboardKeyType::StaticClass(), pUVar9 != (UClass *)0x0)) {
    iVar1 = (int)pUVar9->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar9->_padding_)
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar11 = (this->BlackboardKeyB).SelectedKeyType.Class.field0_0x0.DebugPtr;
    }
  }
  if ((pUVar10 == pUVar11) &&
     (this_00 = (UBlackboardComponent *)param_1->_padding_, this_00 != (UBlackboardComponent *)0x0))
  {
    uVar2 = (this->BlackboardKeyB).SelectedKeyID;
    if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar3 = (this->BlackboardKeyA).SelectedKeyID;
    if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6))
    {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    local_res8 = (this->BlackboardKeyA).SelectedKeyType.Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    TVar8 = UBlackboardComponent::CompareKeyValues
                      (this_00,(TSubclassOf<UBlackboardKeyType>)&local_res8,(FKey)(ushort)uVar3,
                       (FKey)(ushort)uVar2);
    bVar6 = (TVar8 != Equal) != ((this->Operator).Value == '\0');
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

// GetPrivateStaticClass @ 146ee74b0

UClass * __cdecl UBTDecorator_CompareBBEntries::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_CompareBBEntries.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_CompareBBEntries",
               &Z_Registration_Info_UClass_UBTDecorator_CompareBBEntries.InnerSingleton,
               StaticRegisterNativesUBTDecorator_CompareBBEntries,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_CompareBBEntries>,
               InternalVTableHelperCtorCaller<UBTDecorator_CompareBBEntries>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_CompareBBEntries.InnerSingleton;
}

// GetStaticDescription @ 146eeb5a0

FString * __thiscall
UBTDecorator_CompareBBEntries::GetStaticDescription
          (UBTDecorator_CompareBBEntries *this,FString *__return_storage_ptr__)

{
  FString local_48;
  FString local_38;
  FString local_28;
  
  ::FName::ToString(&(this->BlackboardKeyB).SelectedKeyName,&local_28);
  ::FName::ToString(&(this->BlackboardKeyA).SelectedKeyName,&local_38);
  UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_48);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:\n%s and %s\ncontain %s values");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeFromAsset @ 146ef1e00

void __thiscall
UBTDecorator_CompareBBEntries::InitializeFromAsset
          (UBTDecorator_CompareBBEntries *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 == (UBehaviorTree *)0x0) goto LAB_146ef1e8a;
  }
  pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (pUVar1 != (UBlackboardData *)0x0) {
    FBlackboardKeySelector::ResolveSelectedKey(&this->BlackboardKeyA,pUVar1);
    FBlackboardKeySelector::ResolveSelectedKey(&this->BlackboardKeyB,pUVar1);
    return;
  }
LAB_146ef1e8a:
  (this->BlackboardKeyA).SelectedKeyID = 0xffff;
  (this->BlackboardKeyB).SelectedKeyID = 0xffff;
  return;
}

// OnBecomeRelevant @ 146ef5a20

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
UBTDecorator_CompareBBEntries::OnBecomeRelevant
          (UBTDecorator_CompareBBEntries *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UBTDecorator_CompareBBEntries *local_res10 [2];
  UBTDecorator_CompareBBEntries *local_res20;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  FDelegateAllocation local_88;
  FDelegateAllocation local_78;
  code *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  FDelegateAllocation *local_50;
  undefined1 local_48;
  FDelegateAllocation *local_40;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 != (UBlackboardComponent *)0x0) {
    local_78._12_4_ = local_40._4_4_;
    local_58 = 0;
    local_50 = &local_88;
    local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)_vcall__824__flat______;
    local_78.DelegateSize = 0;
    local_88.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_88.DelegateSize = 0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_88);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_CompareBBEntries____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UBTDecorator_CompareBBEntries *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res10[0] = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UBTDecorator_CompareBBEntries *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_res10);
      *(ForElementType<TAlignedBytes<16,16>_> *)(puVar4 + 4) = local_78.DelegateAllocator;
      puVar4[5] = CONCAT44(local_78._12_4_,local_78.DelegateSize);
    }
    uVar1 = (this->BlackboardKeyA).SelectedKeyID;
    if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UBlackboardComponent::RegisterObserver
              (this_00,(FKey)(ushort)local_98,(UObject *)(ulonglong)(ushort)uVar1,
               (TDelegate<EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *)this);
    uStack_5c = local_40._4_4_;
    local_68 = _vcall__824__flat______;
    local_48 = 0;
    local_40 = &local_78;
    uStack_60 = 0;
    local_78.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_78.DelegateSize = 0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_78);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_CompareBBEntries____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res20 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res20);
      puVar4[4] = local_68;
      puVar4[5] = CONCAT44(uStack_5c,uStack_60);
    }
    uVar1 = (this->BlackboardKeyB).SelectedKeyID;
    if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UBlackboardComponent::RegisterObserver
              (this_00,(FKey)(ushort)local_90,(UObject *)(ulonglong)(ushort)uVar1,
               (TDelegate<EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *)this);
  }
  return;
}

// OnBlackboardKeyValueChange @ 146ef6680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EBlackboardNotificationResult __thiscall
UBTDecorator_CompareBBEntries::OnBlackboardKeyValueChange
          (UBTDecorator_CompareBBEntries *this,UBlackboardComponent *param_1,FKey param_2)

{
  uint uVar1;
  UBehaviorTreeComponent *this_00;
  code *pcVar2;
  bool bVar3;
  EBlackboardNotificationResult EVar4;
  
  this_00 = (UBehaviorTreeComponent *)(param_1->BrainComp).field0_0x0.DebugPtr;
  if (this_00 == (UBehaviorTreeComponent *)0x0) {
    return RemoveObserver;
  }
  uVar1 = (this->BlackboardKeyA).SelectedKeyID;
  if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3)) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  if ((ushort)uVar1 != param_2.Key) {
    uVar1 = (this->BlackboardKeyB).SelectedKeyID;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    if ((ushort)uVar1 != param_2.Key) {
      return ContinueObserving;
    }
  }
  UBehaviorTreeComponent::RequestBranchEvaluation(this_00,(UBTDecorator *)this);
  return ContinueObserving;
}

// OnCeaseRelevant @ 146ef6fb0

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
UBTDecorator_CompareBBEntries::OnCeaseRelevant
          (UBTDecorator_CompareBBEntries *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    UBlackboardComponent::UnregisterObserversFrom
              ((UBlackboardComponent *)param_1->_padding_,(UObject *)this);
    return;
  }
  return;
}

// StaticRegisterNativesUBTDecorator_CompareBBEntries @ 146f00b90

void __cdecl UBTDecorator_CompareBBEntries::StaticRegisterNativesUBTDecorator_CompareBBEntries(void)

{
  return;
}

