// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 16

// StaticClass @ 146eaaca0

UClass * __cdecl UBTDecorator_TagCooldown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_TagCooldown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_TagCooldown",
               &Z_Registration_Info_UClass_UBTDecorator_TagCooldown.InnerSingleton,
               StaticRegisterNativesUBTDecorator_TagCooldown,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_TagCooldown>,
               InternalVTableHelperCtorCaller<UBTDecorator_TagCooldown>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_TagCooldown.InnerSingleton;
}

// UBTDecorator_TagCooldown @ 146ec7860

UBTDecorator_TagCooldown * __thiscall
UBTDecorator_TagCooldown::UBTDecorator_TagCooldown
          (UBTDecorator_TagCooldown *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CooldownTag).TagName = (FName)0x0;
  (this->CooldownDuration)._padding_ = 0;
  *(undefined2 *)&(this->CooldownDuration)._padding_ = 0xffff;
  *(undefined8 *)&(this->CooldownDuration).DefaultValue = 0;
  *(undefined4 *)((longlong)&(this->bAddToExistingDuration)._padding_ + 4) = 0;
  *(undefined2 *)&(this->bAddToExistingDuration)._padding_ = 0xffff;
  (this->bAddToExistingDuration).DefaultValue = false;
  (this->bActivatesCooldown)._padding_ = 0;
  *(undefined2 *)&(this->bActivatesCooldown)._padding_ = 0xffff;
  (this->bActivatesCooldown).DefaultValue = false;
  return this;
}

// UBTDecorator_TagCooldown @ 146ec78e0

UBTDecorator_TagCooldown * __thiscall
UBTDecorator_TagCooldown::UBTDecorator_TagCooldown
          (UBTDecorator_TagCooldown *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  FString local_28;
  undefined2 uStack_e;
  
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
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->CooldownTag).TagName = (FName)0x0;
  (this->CooldownDuration)._padding_ = 0;
  *(undefined2 *)&(this->CooldownDuration)._padding_ = 0xffff;
  *(undefined8 *)&(this->CooldownDuration).DefaultValue = 0;
  *(undefined4 *)((longlong)&(this->bAddToExistingDuration)._padding_ + 4) = 0;
  *(undefined2 *)&(this->bAddToExistingDuration)._padding_ = 0xffff;
  (this->bAddToExistingDuration).DefaultValue = false;
  (this->bActivatesCooldown)._padding_ = 0;
  *(undefined2 *)&(this->bActivatesCooldown)._padding_ = 0xffff;
  (this->bActivatesCooldown).DefaultValue = false;
  ::FString::FString(&local_28,"Tag Cooldown");
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
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfc | 4;
  lVar3 = this->_padding_;
  (this->bAddToExistingDuration)._padding_ = 0;
  (this->bAddToExistingDuration)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->bAddToExistingDuration).DefaultValue = (bool)(char)0x40a00000;
  *(int3 *)&(this->bAddToExistingDuration).field_0xd = (int3)(0x40a00000 >> 8);
  *(uint *)&this->_padding_ = (uint)lVar3 & 0xffffffd3 | 0x10;
  (this->CooldownDuration)._padding_ = 0;
  (this->CooldownDuration)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->CooldownDuration).DefaultValue = 5.0;
  (this->bActivatesCooldown)._padding_ = 0;
  (this->bActivatesCooldown)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->bActivatesCooldown).DefaultValue = (bool)(char)0x40a00001;
  *(int3 *)&(this->bActivatesCooldown).field_0xd = (int3)(0x40a00001 >> 8);
  return this;
}

// ~UBTDecorator_TagCooldown @ 146ecd100

void __thiscall UBTDecorator_TagCooldown::~UBTDecorator_TagCooldown(UBTDecorator_TagCooldown *this)

{
  this->_padding_ = (longlong)&UBTNode::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTNode::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IGameplayTaskOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateRawConditionValue @ 146ed55a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UBTDecorator_TagCooldown::CalculateRawConditionValue
          (UBTDecorator_TagCooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  UWorld *pUVar1;
  double dVar2;
  
  dVar2 = UBehaviorTreeComponent::GetTagCooldownEndTime
                    (param_1,(FGameplayTag)(this->CooldownTag).TagName);
  if (dVar2 == 0.0) {
    return true;
  }
  pUVar1 = (UWorld *)param_1->_padding_;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  return dVar2 < pUVar1->TimeSeconds || dVar2 == pUVar1->TimeSeconds;
}

// CleanupMemory @ 146ed5f10

void __thiscall
UBTDecorator_TagCooldown::CleanupMemory
          (UBTDecorator_TagCooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  return;
}

// DescribeRuntimeValues @ 146edc090

/* WARNING: Removing unreachable block (ram,0x000146edc291) */
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
UBTDecorator_TagCooldown::DescribeRuntimeValues
          (UBTDecorator_TagCooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWorld *pUVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  FString local_58;
  FString local_48 [3];
  
  UBTAuxiliaryNode::DescribeRuntimeValues((UBTAuxiliaryNode *)this,param_1,param_2,param_3,param_4);
  dVar9 = UBehaviorTreeComponent::GetTagCooldownEndTime
                    (param_1,(FGameplayTag)(this->CooldownTag).TagName);
  if (0.0 < dVar9) {
    pUVar6 = (UWorld *)param_1->_padding_;
    if (pUVar6 == (UWorld *)0x0) {
      pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    dVar9 = pUVar6->TimeSeconds - dVar9;
    piVar1 = &(this->CooldownDuration)._padding_;
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      fVar8 = (this->CooldownDuration).DefaultValue;
    }
    else {
      fVar8 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                        ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->CooldownDuration
                         ,(FKey *)piVar1,&(this->CooldownDuration).DefaultValue);
    }
    if (dVar9 < (double)fVar8) {
      if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
        fVar8 = (this->CooldownDuration).DefaultValue;
      }
      else {
        fVar8 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                          ((UBlackboardComponent *)param_1->_padding_,
                           (FName *)&this->CooldownDuration,(FKey *)piVar1,
                           &(this->CooldownDuration).DefaultValue);
      }
      ::FString::SanitizeFloat(local_48,(double)fVar8 - dVar9,1);
      ::FString::PrintfImpl(&local_58,L"%s in %ss");
      pFVar2 = (param_4->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar2 + (longlong)param_4->ArrayMax * 0x10)) &&
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
      iVar5 = param_4->ArrayNum;
      if (iVar5 == param_4->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      lVar7 = (longlong)iVar5;
      param_4->ArrayNum = iVar5 + 1;
      pFVar2 = (param_4->AllocatorInstance).Data;
      *(undefined8 *)(pFVar2 + lVar7 * 0x10) = 0;
      *(FScriptContainerElement **)(pFVar2 + lVar7 * 0x10) = local_58.Data.AllocatorInstance.Data;
      *(int *)(pFVar2 + lVar7 * 0x10 + 8) = local_58.Data.ArrayNum;
      *(int *)(pFVar2 + lVar7 * 0x10 + 0xc) = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetInstanceMemorySize @ 146ee5a70

ushort __thiscall UBTDecorator_TagCooldown::GetInstanceMemorySize(UBTDecorator_TagCooldown *this)

{
  return 1;
}

// GetPrivateStaticClass @ 146ee7e70

UClass * __cdecl UBTDecorator_TagCooldown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_TagCooldown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_TagCooldown",
               &Z_Registration_Info_UClass_UBTDecorator_TagCooldown.InnerSingleton,
               StaticRegisterNativesUBTDecorator_TagCooldown,0xa0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_TagCooldown>,
               InternalVTableHelperCtorCaller<UBTDecorator_TagCooldown>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_TagCooldown.InnerSingleton;
}

// GetStaticDescription @ 146eec1e0

FString * __thiscall
UBTDecorator_TagCooldown::GetStaticDescription
          (UBTDecorator_TagCooldown *this,FString *__return_storage_ptr__)

{
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  UBehaviorTreeTypes::DescribeNodeResult(&local_28,Failed);
  if ((this->CooldownDuration)._padding_ == 0) {
    ::FString::PrintfImpl(&local_58,L"%.2f");
  }
  else {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)&this->CooldownDuration,&local_58);
  }
  ::FName::ToString(&(this->CooldownTag).TagName,&local_48);
  UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_38);
  ::FString::PrintfImpl
            (__return_storage_ptr__,L"%s %s: lock for %s s after execution and return %s");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasCooldownFinished @ 146ef05d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UBTDecorator_TagCooldown::HasCooldownFinished
          (UBTDecorator_TagCooldown *this,UBehaviorTreeComponent *param_1)

{
  UWorld *pUVar1;
  double dVar2;
  
  dVar2 = UBehaviorTreeComponent::GetTagCooldownEndTime
                    (param_1,(FGameplayTag)(this->CooldownTag).TagName);
  if (dVar2 == 0.0) {
    return true;
  }
  pUVar1 = (UWorld *)param_1->_padding_;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  return dVar2 < pUVar1->TimeSeconds || dVar2 == pUVar1->TimeSeconds;
}

// InitializeMemory @ 146ef2ec0

void __thiscall
UBTDecorator_TagCooldown::InitializeMemory
          (UBTDecorator_TagCooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  FBTTagCooldownDecoratorMemory *pFVar1;
  
  if (param_3 == Initialize) {
    *param_2 = '\0';
  }
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTTagCooldownDecoratorMemory>((UBTNode *)this,param_2);
  pFVar1->bRequestedRestart = '\0';
  return;
}

// OnNodeDeactivation @ 146ef8f60

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
UBTDecorator_TagCooldown::OnNodeDeactivation
          (UBTDecorator_TagCooldown *this,FBehaviorTreeSearchData *param_1,Type param_2)

{
  bool *pbVar1;
  float *pfVar2;
  byte *pbVar3;
  ushort uVar4;
  UBehaviorTreeComponent *pUVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  UBlackboardComponent *pUVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  float fVar13;
  
  pUVar5 = param_1->OwnerComp;
  uVar4 = pUVar5->ActiveInstanceIdx;
  if ((pUVar5->InstanceStack).ArrayNum <= (int)(uint)uVar4) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar6 = (pUVar5->InstanceStack).AllocatorInstance.Data;
  lVar12 = (ulonglong)uVar4 * 0x68;
  lVar7 = *(longlong *)(pFVar6 + lVar12 + 0x30);
  if (*(int *)(pFVar6 + lVar12 + 0x38) < 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pbVar1 = &(this->bActivatesCooldown).DefaultValue;
  pbVar3 = (byte *)((ulonglong)*(ushort *)((longlong)&this->_padding_ + 2) + lVar7);
  *pbVar3 = *pbVar3 & 0xfe;
  pUVar8 = (UBlackboardComponent *)param_1->OwnerComp->_padding_;
  if (pUVar8 == (UBlackboardComponent *)0x0) {
    cVar11 = *pbVar1;
  }
  else {
    cVar11 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                       (pUVar8,(FName *)&this->bActivatesCooldown,
                        (FKey *)&(this->bActivatesCooldown)._padding_,pbVar1);
  }
  if (cVar11 != '\0') {
    pUVar5 = param_1->OwnerComp;
    pUVar8 = (UBlackboardComponent *)pUVar5->_padding_;
    if (pUVar8 == (UBlackboardComponent *)0x0) {
      bVar10 = (this->bAddToExistingDuration).DefaultValue;
    }
    else {
      bVar10 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                         (pUVar8,(FName *)&this->bAddToExistingDuration,
                          (FKey *)&(this->bAddToExistingDuration)._padding_,
                          &(this->bAddToExistingDuration).DefaultValue);
    }
    pfVar2 = &(this->CooldownDuration).DefaultValue;
    pUVar8 = (UBlackboardComponent *)param_1->OwnerComp->_padding_;
    if (pUVar8 == (UBlackboardComponent *)0x0) {
      fVar13 = *pfVar2;
    }
    else {
      fVar13 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                         (pUVar8,(FName *)&this->CooldownDuration,
                          (FKey *)&(this->CooldownDuration)._padding_,pfVar2);
    }
    UBehaviorTreeComponent::AddCooldownTagDuration
              (pUVar5,(FGameplayTag)(this->CooldownTag).TagName,fVar13,bVar10);
  }
  return;
}

// PostLoad @ 146efb360

void __thiscall UBTDecorator_TagCooldown::PostLoad(UBTDecorator_TagCooldown *this)

{
  UObject::PostLoad((UObject *)this);
  *(byte *)&this->_padding_ =
       -(*(char *)((longlong)&this->_padding_ + 4) != '\0') & 4U | (byte)this->_padding_ & 0xfb;
  return;
}

// StaticRegisterNativesUBTDecorator_TagCooldown @ 146f00c60

void __cdecl UBTDecorator_TagCooldown::StaticRegisterNativesUBTDecorator_TagCooldown(void)

{
  return;
}

// TickNode @ 146f01db0

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
UBTDecorator_TagCooldown::TickNode
          (UBTDecorator_TagCooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          float param_3)

{
  FBTTagCooldownDecoratorMemory *pFVar1;
  UWorld *pUVar2;
  double dVar3;
  
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTTagCooldownDecoratorMemory>((UBTNode *)this,param_2);
  if (pFVar1->bRequestedRestart == 0) {
    dVar3 = UBehaviorTreeComponent::GetTagCooldownEndTime
                      (param_1,(FGameplayTag)(this->CooldownTag).TagName);
    if (dVar3 != 0.0) {
      pUVar2 = (UWorld *)param_1->_padding_;
      if (pUVar2 == (UWorld *)0x0) {
        pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      if (pUVar2->TimeSeconds <= dVar3 && dVar3 != pUVar2->TimeSeconds) {
        return;
      }
    }
    pFVar1->bRequestedRestart = '\x01';
    UBehaviorTreeComponent::RequestBranchEvaluation(param_1,(UBTDecorator *)this);
  }
  return;
}

