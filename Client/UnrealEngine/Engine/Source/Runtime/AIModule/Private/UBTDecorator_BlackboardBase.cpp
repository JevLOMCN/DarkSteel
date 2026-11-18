// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146eaf610

UClass * __cdecl UBTDecorator_BlackboardBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_BlackboardBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_BlackboardBase",
               &Z_Registration_Info_UClass_UBTDecorator_BlackboardBase.InnerSingleton,
               StaticRegisterNativesUBTDecorator_BlackboardBase,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UBTDecorator_BlackboardBase>,
               InternalVTableHelperCtorCaller<UBTDecorator_BlackboardBase>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_BlackboardBase.InnerSingleton;
}

// UBTDecorator_BlackboardBase @ 146ec5660

UBTDecorator_BlackboardBase * __thiscall
UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase
          (UBTDecorator_BlackboardBase *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  (this->BlackboardKey).SelectedKeyID = 0xffff;
  (this->BlackboardKey).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BlackboardKey).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKey).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKey).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKey).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKey).SelectedKeyName.Number = 0;
  (this->BlackboardKey).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UBTDecorator_BlackboardBase @ 146ec56d0

UBTDecorator_BlackboardBase * __thiscall
UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase
          (UBTDecorator_BlackboardBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  UClass *this_00;
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
  (this->BlackboardKey).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->BlackboardKey).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKey).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKey).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKey).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKey).SelectedKeyName.Number = 0;
  (this->BlackboardKey).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKey).SelectedKeyID = 0xffff;
  ::FString::FString(&local_18,"BlackboardBase");
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
  this_00 = Z_Construct_UClass_UAISystem_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  uVar4 = *(undefined4 *)&(this->BlackboardKey).field_0x24;
  *(uint *)&(this->BlackboardKey).field_0x24 =
       ((uint)(byte)(this_00->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0xc ^
       ZPULL(uVar4,0,1)) & 1 ^ uVar4;
  return this;
}

// ~UBTDecorator_BlackboardBase @ 146eccaa0

void __thiscall
UBTDecorator_BlackboardBase::~UBTDecorator_BlackboardBase(UBTDecorator_BlackboardBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->BlackboardKey).AllowedTypes.AllocatorInstance.Data;
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

// GetPrivateStaticClass @ 146ee7270

UClass * __cdecl UBTDecorator_BlackboardBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_BlackboardBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_BlackboardBase",
               &Z_Registration_Info_UClass_UBTDecorator_BlackboardBase.InnerSingleton,
               StaticRegisterNativesUBTDecorator_BlackboardBase,0x90,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Game",
               InternalConstructor<UBTDecorator_BlackboardBase>,
               InternalVTableHelperCtorCaller<UBTDecorator_BlackboardBase>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_BlackboardBase.InnerSingleton;
}

// InitializeFromAsset @ 146ef1c80

void __thiscall
UBTDecorator_BlackboardBase::InitializeFromAsset
          (UBTDecorator_BlackboardBase *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 == (UBehaviorTree *)0x0) goto LAB_146ef1cf1;
  }
  pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (pUVar1 != (UBlackboardData *)0x0) {
    FBlackboardKeySelector::ResolveSelectedKey(&this->BlackboardKey,pUVar1);
    return;
  }
LAB_146ef1cf1:
  (this->BlackboardKey).SelectedKeyID = 0xffff;
  return;
}

// OnBecomeRelevant @ 146ef5610

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
UBTDecorator_BlackboardBase::OnBecomeRelevant
          (UBTDecorator_BlackboardBase *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UBTDecorator_BlackboardBase *local_res10 [2];
  undefined1 local_res20 [8];
  FDelegateAllocation local_38;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 != (UBlackboardComponent *)0x0) {
    uVar1 = (this->BlackboardKey).SelectedKeyID;
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
    local_38.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_38.DelegateSize = 0;
    puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_38);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &
                ___7__TCommonDelegateInstanceState___A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      uVar5 = FDelegateHandle::GenerateNewID();
      puVar4[2] = uVar5;
      *puVar4 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUBTDecorator_BlackboardBase____A6A_AW4EBlackboardNotificationResult__AEBVUBlackboardComponent__UFKey_FBlackboard___ZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar4[3] = 0;
      local_res10[0] = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_res10);
      puVar4[4] = _vcall__824__flat______;
      puVar4[5] = (ulonglong)(uint)local_38._12_4_ << 0x20;
    }
    UBlackboardComponent::RegisterObserver
              (this_00,(FKey)(ushort)local_res20,(UObject *)(ulonglong)(ushort)uVar1,
               (TDelegate<EBlackboardNotificationResult___cdecl(UBlackboardComponent_const_&,FBlackboard::FKey),FNotThreadSafeNotCheckedDelegateUserPolicy>
                *)this);
  }
  return;
}

// OnBlackboardKeyValueChange @ 146ef6540

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
UBTDecorator_BlackboardBase::OnBlackboardKeyValueChange
          (UBTDecorator_BlackboardBase *this,UBlackboardComponent *param_1,FKey param_2)

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
  uVar1 = (this->BlackboardKey).SelectedKeyID;
  if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  if ((ushort)uVar1 == param_2.Key) {
    UBehaviorTreeComponent::RequestBranchEvaluation(this_00,(UBTDecorator *)this);
  }
  return ContinueObserving;
}

// OnCeaseRelevant @ 146ef6ea0

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
UBTDecorator_BlackboardBase::OnCeaseRelevant
          (UBTDecorator_BlackboardBase *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    UBlackboardComponent::UnregisterObserversFrom
              ((UBlackboardComponent *)param_1->_padding_,(UObject *)this);
    return;
  }
  return;
}

// StaticRegisterNativesUBTDecorator_BlackboardBase @ 146f00b30

void __cdecl UBTDecorator_BlackboardBase::StaticRegisterNativesUBTDecorator_BlackboardBase(void)

{
  return;
}

