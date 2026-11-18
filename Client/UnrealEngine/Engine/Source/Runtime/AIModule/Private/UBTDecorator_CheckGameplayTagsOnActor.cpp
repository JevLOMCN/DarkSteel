// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146eaa6f0

UClass * __cdecl UBTDecorator_CheckGameplayTagsOnActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_CheckGameplayTagsOnActor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_CheckGameplayTagsOnActor",
               &Z_Registration_Info_UClass_UBTDecorator_CheckGameplayTagsOnActor.InnerSingleton,
               StaticRegisterNativesUBTDecorator_CheckGameplayTagsOnActor,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_CheckGameplayTagsOnActor>,
               InternalVTableHelperCtorCaller<UBTDecorator_CheckGameplayTagsOnActor>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_CheckGameplayTagsOnActor.InnerSingleton;
}

// UBTDecorator_CheckGameplayTagsOnActor @ 146ec5b90

UBTDecorator_CheckGameplayTagsOnActor * __thiscall
UBTDecorator_CheckGameplayTagsOnActor::UBTDecorator_CheckGameplayTagsOnActor
          (UBTDecorator_CheckGameplayTagsOnActor *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  (this->ActorToCheck).SelectedKeyID = 0xffff;
  (this->ActorToCheck).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ActorToCheck).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorToCheck).AllowedTypes.ArrayNum = 0;
  (this->ActorToCheck).AllowedTypes.ArrayMax = 0;
  (this->ActorToCheck).SelectedKeyName.ComparisonIndex = 0;
  (this->ActorToCheck).SelectedKeyName.Number = 0;
  (this->ActorToCheck).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->GameplayTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).GameplayTags.ArrayNum = 0;
  (this->GameplayTags).GameplayTags.ArrayMax = 0;
  (this->GameplayTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).ParentTags.ArrayNum = 0;
  (this->GameplayTags).ParentTags.ArrayMax = 0;
  (this->CachedDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDescription).Data.ArrayNum = 0;
  (this->CachedDescription).Data.ArrayMax = 0;
  return this;
}

// UBTDecorator_CheckGameplayTagsOnActor @ 146ec5c30

UBTDecorator_CheckGameplayTagsOnActor * __thiscall
UBTDecorator_CheckGameplayTagsOnActor::UBTDecorator_CheckGameplayTagsOnActor
          (UBTDecorator_CheckGameplayTagsOnActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  longlong lVar4;
  FName FVar5;
  FName *pFVar6;
  UClass *local_res8;
  FName local_res18 [2];
  FString local_28;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  plVar2 = &this->_padding_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf0;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0xff;
  *plVar2 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  lVar4 = this->_padding_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = (uint)lVar4 & 0xffffff47 | 0x47;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->ActorToCheck).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->ActorToCheck).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorToCheck).AllowedTypes.ArrayNum = 0;
  (this->ActorToCheck).AllowedTypes.ArrayMax = 0;
  (this->ActorToCheck).SelectedKeyName.ComparisonIndex = 0;
  (this->ActorToCheck).SelectedKeyName.Number = 0;
  (this->ActorToCheck).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->ActorToCheck).SelectedKeyID = 0xffff;
  (this->GameplayTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).GameplayTags.ArrayNum = 0;
  (this->GameplayTags).GameplayTags.ArrayMax = 0;
  (this->GameplayTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GameplayTags).ParentTags.ArrayNum = 0;
  (this->GameplayTags).ParentTags.ArrayMax = 0;
  (this->CachedDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDescription).Data.ArrayNum = 0;
  (this->CachedDescription).Data.ArrayMax = 0;
  ::FString::FString(&local_28,"Gameplay Tag Condition");
  if ((FString *)plVar2 != &local_28) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_28.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_28.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  local_res8 = Z_Construct_UClass_AActor_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pFVar6 = ::FName::FName(local_res18,0xc,L"ActorToCheck",FNAME_Add);
  FBlackboardKeySelector::AddObjectFilter
            (&this->ActorToCheck,(UObject *)this,*pFVar6,(TSubclassOf<UObject>)&local_res8);
  FVar5 = FBlackboard::KeySelf;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  (this->ActorToCheck).SelectedKeyName = FVar5;
  return this;
}

// ~UBTDecorator_CheckGameplayTagsOnActor @ 146eccb90

void __thiscall
UBTDecorator_CheckGameplayTagsOnActor::~UBTDecorator_CheckGameplayTagsOnActor
          (UBTDecorator_CheckGameplayTagsOnActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->CachedDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameplayTags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GameplayTags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActorToCheck).AllowedTypes.AllocatorInstance.Data;
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

// CalculateRawConditionValue @ 146ed4630

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
UBTDecorator_CheckGameplayTagsOnActor::CalculateRawConditionValue
          (UBTDecorator_CheckGameplayTagsOnActor *this,UBehaviorTreeComponent *param_1,
          uchar *param_2)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *this_01;
  UClass *pUVar5;
  longlong *plVar6;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 != (UBlackboardComponent *)0x0) {
    uVar1 = (this->ActorToCheck).SelectedKeyID;
    if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    this_01 = UBlackboardComponent::GetValue<UBlackboardKeyType_Object>(this_00,(FKey)(ushort)uVar1)
    ;
    if (this_01 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
      plVar6 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar5);
      if (plVar6 != (longlong *)0x0) {
        if (this->TagsToMatch == Any) {
                    /* WARNING: Could not recover jumptable at 0x000146ed4737. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar6 + 0x28))(plVar6,&this->GameplayTags);
          return (bool)uVar4;
        }
        if (this->TagsToMatch == All) {
                    /* WARNING: Could not recover jumptable at 0x000146ed4717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,&this->GameplayTags);
          return (bool)uVar4;
        }
        if (2 < (byte)LogBehaviorTree._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBehaviorTree);
        }
      }
    }
  }
  return false;
}

// DescribeRuntimeValues @ 146edb5a0

/* WARNING: Removing unreachable block (ram,0x000146edae79) */

void __thiscall
UBTDecorator_CheckGameplayTagsOnActor::DescribeRuntimeValues
          (UBTDecorator_CheckGameplayTagsOnActor *this,UBehaviorTreeComponent *param_1,
          uchar *param_2,Type param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  FString FStack_28;
  FString FStack_18;
  
  if ((param_3 == Detailed) && ((this->_padding_ & 8) != 0)) {
    uVar4 = (**(code **)(this->_padding_ + 0x2e8))();
    lVar6 = 0;
    if (uVar4 != 0) {
      lVar6 = (longlong)param_2 - ((ulonglong)(uVar4 + 3) & 0xfffffffffffffffc);
    }
    ::FString::SanitizeFloat(&FStack_18,(double)*(float *)(lVar6 + 4),1);
    ::FString::PrintfImpl(&FStack_28,L"next tick: %ss");
    pFVar1 = (param_4->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&FStack_28) &&
        ((FScriptContainerElement *)&FStack_28 < pFVar1 + (longlong)param_4->ArrayMax * 0x10)) &&
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
    iVar5 = param_4->ArrayNum;
    if (iVar5 == param_4->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    lVar6 = (longlong)iVar5;
    param_4->ArrayNum = iVar5 + 1;
    pFVar1 = (param_4->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar6 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar1 + lVar6 * 0x10) = FStack_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar1 + lVar6 * 0x10 + 8) = FStack_28.Data.ArrayNum;
    *(int *)(pFVar1 + lVar6 * 0x10 + 0xc) = FStack_28.Data.ArrayMax;
    FStack_28.Data.ArrayNum = 0;
    FStack_28.Data.ArrayMax = 0;
    FStack_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPrivateStaticClass @ 146ee73f0

UClass * __cdecl UBTDecorator_CheckGameplayTagsOnActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_CheckGameplayTagsOnActor.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_CheckGameplayTagsOnActor",
               &Z_Registration_Info_UClass_UBTDecorator_CheckGameplayTagsOnActor.InnerSingleton,
               StaticRegisterNativesUBTDecorator_CheckGameplayTagsOnActor,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_CheckGameplayTagsOnActor>,
               InternalVTableHelperCtorCaller<UBTDecorator_CheckGameplayTagsOnActor>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_CheckGameplayTagsOnActor.InnerSingleton;
}

// GetStaticDescription @ 146eeb520

FString * __thiscall
UBTDecorator_CheckGameplayTagsOnActor::GetStaticDescription
          (UBTDecorator_CheckGameplayTagsOnActor *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeFromAsset @ 146ef1d70

void __thiscall
UBTDecorator_CheckGameplayTagsOnActor::InitializeFromAsset
          (UBTDecorator_CheckGameplayTagsOnActor *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 == (UBehaviorTree *)0x0) goto LAB_146ef1de1;
  }
  pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (pUVar1 != (UBlackboardData *)0x0) {
    FBlackboardKeySelector::ResolveSelectedKey(&this->ActorToCheck,pUVar1);
    return;
  }
LAB_146ef1de1:
  (this->ActorToCheck).SelectedKeyID = 0xffff;
  return;
}

// StaticRegisterNativesUBTDecorator_CheckGameplayTagsOnActor @ 146f00b80

void __cdecl
UBTDecorator_CheckGameplayTagsOnActor::StaticRegisterNativesUBTDecorator_CheckGameplayTagsOnActor
          (void)

{
  return;
}

