// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// StaticClass @ 146eac140

UClass * __cdecl UBTDecorator_Cooldown::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_Cooldown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_Cooldown",
               &Z_Registration_Info_UClass_UBTDecorator_Cooldown.InnerSingleton,
               StaticRegisterNativesUBTDecorator_Cooldown,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_Cooldown>,
               InternalVTableHelperCtorCaller<UBTDecorator_Cooldown>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_Cooldown.InnerSingleton;
}

// UBTDecorator_Cooldown @ 146ec6450

UBTDecorator_Cooldown * __thiscall
UBTDecorator_Cooldown::UBTDecorator_Cooldown(UBTDecorator_Cooldown *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->CoolDownTime)._padding_ = 0;
  *(undefined2 *)&(this->CoolDownTime)._padding_ = 0xffff;
  (this->CoolDownTime).DefaultValue = 0.0;
  return this;
}

// UBTDecorator_Cooldown @ 146ec64b0

UBTDecorator_Cooldown * __thiscall
UBTDecorator_Cooldown::UBTDecorator_Cooldown
          (UBTDecorator_Cooldown *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
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
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->CoolDownTime)._padding_ = 0;
  *(undefined2 *)&(this->CoolDownTime)._padding_ = 0xffff;
  (this->CoolDownTime).DefaultValue = 0.0;
  ::FString::FString(&local_28,"Cooldown");
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
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffffd3 | 0x10;
  (this->CoolDownTime)._padding_ = 0;
  (this->CoolDownTime)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->CoolDownTime).DefaultValue = 5.0;
  return this;
}

// ~UBTDecorator_Cooldown @ 146eccda0

void __thiscall UBTDecorator_Cooldown::~UBTDecorator_Cooldown(UBTDecorator_Cooldown *this)

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

// CalculateRawConditionValue @ 146ed4ab0

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
UBTDecorator_Cooldown::CalculateRawConditionValue
          (UBTDecorator_Cooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  float *pfVar1;
  FBTCooldownDecoratorMemory *pFVar2;
  UWorld *pUVar3;
  float fVar4;
  
  pFVar2 = UBTNode::CastInstanceNodeMemory<FBTCooldownDecoratorMemory>((UBTNode *)this,param_2);
  pfVar1 = &(this->CoolDownTime).DefaultValue;
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    fVar4 = *pfVar1;
  }
  else {
    fVar4 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->CoolDownTime,
                       (FKey *)&(this->CoolDownTime)._padding_,pfVar1);
  }
  pUVar3 = (UWorld *)param_1->_padding_;
  if (pUVar3 == (UWorld *)0x0) {
    pUVar3 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  return pFVar2->LastUseTimestamp <= pUVar3->TimeSeconds - (double)fVar4;
}

// CleanupMemory @ 146ed5ed0

void __thiscall
UBTDecorator_Cooldown::CleanupMemory
          (UBTDecorator_Cooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// DescribeRuntimeValues @ 146edb890

/* WARNING: Removing unreachable block (ram,0x000146edba77) */
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
UBTDecorator_Cooldown::DescribeRuntimeValues
          (UBTDecorator_Cooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  FBTCooldownDecoratorMemory *pFVar7;
  UWorld *pUVar8;
  longlong lVar9;
  float fVar10;
  FString local_48;
  FString local_38 [2];
  
  UBTAuxiliaryNode::DescribeRuntimeValues((UBTAuxiliaryNode *)this,param_1,param_2,param_3,param_4);
  pFVar7 = UBTNode::CastInstanceNodeMemory<FBTCooldownDecoratorMemory>((UBTNode *)this,param_2);
  pUVar8 = (UWorld *)param_1->_padding_;
  if (pUVar8 == (UWorld *)0x0) {
    pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
  }
  piVar1 = &(this->CoolDownTime)._padding_;
  dVar4 = pUVar8->TimeSeconds - pFVar7->LastUseTimestamp;
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    fVar10 = (this->CoolDownTime).DefaultValue;
  }
  else {
    fVar10 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                       ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->CoolDownTime,
                        (FKey *)piVar1,&(this->CoolDownTime).DefaultValue);
  }
  if (dVar4 < (double)fVar10) {
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      fVar10 = (this->CoolDownTime).DefaultValue;
    }
    else {
      fVar10 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                         ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->CoolDownTime,
                          (FKey *)piVar1,&(this->CoolDownTime).DefaultValue);
    }
    ::FString::SanitizeFloat(local_38,(double)fVar10 - dVar4,1);
    ::FString::PrintfImpl(&local_48,L"%s in %ss");
    pFVar2 = (param_4->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)param_4->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = param_4->ArrayNum;
    if (iVar6 == param_4->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
    }
    lVar9 = (longlong)iVar6;
    param_4->ArrayNum = iVar6 + 1;
    pFVar2 = (param_4->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + lVar9 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar2 + lVar9 * 0x10) = local_48.Data.AllocatorInstance.Data;
    *(int *)(pFVar2 + lVar9 * 0x10 + 8) = local_48.Data.ArrayNum;
    *(int *)(pFVar2 + lVar9 * 0x10 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetInstanceMemorySize @ 146ee5a30

ushort __thiscall UBTDecorator_Cooldown::GetInstanceMemorySize(UBTDecorator_Cooldown *this)

{
  return 0x10;
}

// GetPrivateStaticClass @ 146ee76f0

UClass * __cdecl UBTDecorator_Cooldown::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_Cooldown.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_Cooldown",
               &Z_Registration_Info_UClass_UBTDecorator_Cooldown.InnerSingleton,
               StaticRegisterNativesUBTDecorator_Cooldown,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_Cooldown>,
               InternalVTableHelperCtorCaller<UBTDecorator_Cooldown>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_Cooldown.InnerSingleton;
}

// GetStaticDescription @ 146eeb820

FString * __thiscall
UBTDecorator_Cooldown::GetStaticDescription
          (UBTDecorator_Cooldown *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  UBehaviorTreeTypes::DescribeNodeResult(&local_18,Failed);
  if ((this->CoolDownTime)._padding_ == 0) {
    ::FString::PrintfImpl(&local_38,L"%.2f");
  }
  else {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)&this->CoolDownTime,&local_38);
  }
  UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: lock for %s s after execution and return %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef2cb0

void __thiscall
UBTDecorator_Cooldown::InitializeMemory
          (UBTDecorator_Cooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  FBTCooldownDecoratorMemory *pFVar1;
  
  if (param_3 == Initialize) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    pFVar1 = UBTNode::CastInstanceNodeMemory<FBTCooldownDecoratorMemory>((UBTNode *)this,param_2);
    pFVar1->bRequestedRestart = '\0';
    pFVar1->LastUseTimestamp = -1.7976931348623157e+308;
    return;
  }
  pFVar1 = UBTNode::CastInstanceNodeMemory<FBTCooldownDecoratorMemory>((UBTNode *)this,param_2);
  pFVar1->bRequestedRestart = '\0';
  return;
}

// OnNodeDeactivation @ 146ef8c40

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
UBTDecorator_Cooldown::OnNodeDeactivation
          (UBTDecorator_Cooldown *this,FBehaviorTreeSearchData *param_1,Type param_2)

{
  byte *pbVar1;
  ushort uVar2;
  UBehaviorTreeComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  double dVar6;
  code *pcVar7;
  bool bVar8;
  UWorld *pUVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  pUVar3 = param_1->OwnerComp;
  uVar2 = pUVar3->ActiveInstanceIdx;
  if ((pUVar3->InstanceStack).ArrayNum <= (int)(uint)uVar2) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (pUVar3->InstanceStack).AllocatorInstance.Data;
  lVar10 = (ulonglong)uVar2 * 0x68;
  lVar5 = *(longlong *)(pFVar4 + lVar10 + 0x30);
  if (*(int *)(pFVar4 + lVar10 + 0x38) < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar11 = (ulonglong)*(ushort *)((longlong)&this->_padding_ + 2);
  pUVar9 = (UWorld *)param_1->OwnerComp->_padding_;
  if (pUVar9 == (UWorld *)0x0) {
    pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1->OwnerComp);
  }
  dVar6 = pUVar9->TimeSeconds;
  pbVar1 = (byte *)(uVar11 + 8 + lVar5);
  *pbVar1 = *pbVar1 & 0xfe;
  *(double *)(uVar11 + lVar5) = dVar6;
  return;
}

// PostLoad @ 146efb330

void __thiscall UBTDecorator_Cooldown::PostLoad(UBTDecorator_Cooldown *this)

{
  UObject::PostLoad((UObject *)this);
  *(byte *)&this->_padding_ =
       -(*(char *)((longlong)&this->_padding_ + 4) != '\0') & 4U | (byte)this->_padding_ & 0xfb;
  return;
}

// StaticRegisterNativesUBTDecorator_Cooldown @ 146f00bc0

void __cdecl UBTDecorator_Cooldown::StaticRegisterNativesUBTDecorator_Cooldown(void)

{
  return;
}

// TickNode @ 146f01bb0

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
UBTDecorator_Cooldown::TickNode
          (UBTDecorator_Cooldown *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  FBTCooldownDecoratorMemory *pFVar3;
  UWorld *pUVar4;
  float fVar5;
  
  pFVar3 = UBTNode::CastInstanceNodeMemory<FBTCooldownDecoratorMemory>((UBTNode *)this,param_2);
  if (pFVar3->bRequestedRestart == 0) {
    if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
      fVar5 = (this->CoolDownTime).DefaultValue;
    }
    else {
      fVar5 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                        ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->CoolDownTime,
                         (FKey *)&(this->CoolDownTime)._padding_,&(this->CoolDownTime).DefaultValue)
      ;
    }
    pUVar4 = (UWorld *)param_1->_padding_;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    if (pFVar3->LastUseTimestamp <= pUVar4->TimeSeconds - (double)fVar5) {
      pFVar3->bRequestedRestart = '\x01';
      if (this == (UBTDecorator_Cooldown *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("RequestedBy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BehaviorTreeComponent.h"
                           ,0x9a,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UBehaviorTreeComponent::RequestBranchEvaluation(param_1,(UBTDecorator *)this);
    }
  }
  return;
}

