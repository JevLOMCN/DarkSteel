// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 16

// StaticClass @ 146eab1c0

UClass * __cdecl UBTDecorator_TimeLimit::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_TimeLimit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_TimeLimit",
               &Z_Registration_Info_UClass_UBTDecorator_TimeLimit.InnerSingleton,
               StaticRegisterNativesUBTDecorator_TimeLimit,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_TimeLimit>,
               InternalVTableHelperCtorCaller<UBTDecorator_TimeLimit>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_TimeLimit.InnerSingleton;
}

// UBTDecorator_TimeLimit @ 146ec7a70

UBTDecorator_TimeLimit * __thiscall
UBTDecorator_TimeLimit::UBTDecorator_TimeLimit(UBTDecorator_TimeLimit *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->TimeLimit)._padding_ = 0;
  *(undefined2 *)&(this->TimeLimit)._padding_ = 0xffff;
  (this->TimeLimit).DefaultValue = 0.0;
  return this;
}

// UBTDecorator_TimeLimit @ 146ec7ad0

UBTDecorator_TimeLimit * __thiscall
UBTDecorator_TimeLimit::UBTDecorator_TimeLimit
          (UBTDecorator_TimeLimit *this,FObjectInitializer *param_1)

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
  (this->TimeLimit)._padding_ = 0;
  *(undefined2 *)&(this->TimeLimit)._padding_ = 0xffff;
  (this->TimeLimit).DefaultValue = 0.0;
  ::FString::FString(&local_28,"TimeLimit");
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
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 0xf;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffffc4;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 2;
  (this->TimeLimit)._padding_ = 0;
  (this->TimeLimit)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->TimeLimit).DefaultValue = 5.0;
  return this;
}

// ~UBTDecorator_TimeLimit @ 146ecd150

void __thiscall UBTDecorator_TimeLimit::~UBTDecorator_TimeLimit(UBTDecorator_TimeLimit *this)

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

// CalculateRawConditionValue @ 146ed5610

bool __thiscall
UBTDecorator_TimeLimit::CalculateRawConditionValue
          (UBTDecorator_TimeLimit *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  return *param_2 == '\0';
}

// CleanupMemory @ 146ed5f20

void __thiscall
UBTDecorator_TimeLimit::CleanupMemory
          (UBTDecorator_TimeLimit *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// DescribeRuntimeValues @ 146edc2e0

/* WARNING: Removing unreachable block (ram,0x000146edc484) */
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
UBTDecorator_TimeLimit::DescribeRuntimeValues
          (UBTDecorator_TimeLimit *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  UWorld *pUVar6;
  longlong lVar7;
  float fVar8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  UBTAuxiliaryNode::DescribeRuntimeValues((UBTAuxiliaryNode *)this,param_1,param_2,param_3,param_4);
  uVar4 = (**(code **)(this->_padding_ + 0x2e8))(this);
  lVar7 = 0;
  if (uVar4 != 0) {
    lVar7 = (longlong)param_2 - ((ulonglong)(uVar4 + 3) & 0xfffffffffffffffc);
  }
  if ((param_1->_padding_ != 0) ||
     (pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
     pUVar6 != (UWorld *)0x0)) {
    fVar8 = *(float *)(lVar7 + 4);
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    ::FString::SanitizeFloat(&local_18,(double)fVar8,1);
    UBehaviorTreeTypes::DescribeNodeResult(&local_28,Failed);
    ::FString::PrintfImpl(&local_38,L"%s in %ss");
    pFVar1 = (param_4->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_4->ArrayMax * 0x10)) &&
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
    lVar7 = (longlong)iVar5;
    param_4->ArrayNum = iVar5 + 1;
    pFVar1 = (param_4->AllocatorInstance).Data;
    *(undefined8 *)(pFVar1 + lVar7 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar1 + lVar7 * 0x10) = local_38.Data.AllocatorInstance.Data;
    *(int *)(pFVar1 + lVar7 * 0x10 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar1 + lVar7 * 0x10 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetInstanceMemorySize @ 146ee5a80

ushort __thiscall UBTDecorator_TimeLimit::GetInstanceMemorySize(UBTDecorator_TimeLimit *this)

{
  return 1;
}

// GetPrivateStaticClass @ 146ee7f30

UClass * __cdecl UBTDecorator_TimeLimit::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_TimeLimit.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_TimeLimit",
               &Z_Registration_Info_UClass_UBTDecorator_TimeLimit.InnerSingleton,
               StaticRegisterNativesUBTDecorator_TimeLimit,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_TimeLimit>,
               InternalVTableHelperCtorCaller<UBTDecorator_TimeLimit>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_TimeLimit.InnerSingleton;
}

// GetStaticDescription @ 146eec320

FString * __thiscall
UBTDecorator_TimeLimit::GetStaticDescription
          (UBTDecorator_TimeLimit *this,FString *__return_storage_ptr__)

{
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((this->TimeLimit)._padding_ == 0) {
    ::FString::PrintfImpl(&local_38,L"%.2f");
  }
  else {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)&this->TimeLimit,&local_38);
  }
  UBehaviorTreeTypes::DescribeNodeResult(&local_18,Failed);
  UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s after %s s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef2ef0

void __thiscall
UBTDecorator_TimeLimit::InitializeMemory
          (UBTDecorator_TimeLimit *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  if (param_3 == Initialize) {
    *param_2 = '\0';
  }
  UBTNode::CastInstanceNodeMemory<FBTimeLimitMemory>((UBTNode *)this,param_2);
  return;
}

// OnBecomeRelevant @ 146ef5eb0

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
UBTDecorator_TimeLimit::OnBecomeRelevant
          (UBTDecorator_TimeLimit *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  ushort uVar1;
  longlong lVar2;
  float fVar3;
  
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    fVar3 = (this->TimeLimit).DefaultValue;
  }
  else {
    fVar3 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->TimeLimit,
                       (FKey *)&(this->TimeLimit)._padding_,&(this->TimeLimit).DefaultValue);
  }
  if ((this->_padding_ & 8) != 0) {
    uVar1 = (**(code **)(this->_padding_ + 0x2e8))(this);
    if (uVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (longlong)param_2 - ((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc);
    }
    *(float *)(lVar2 + 4) = fVar3;
  }
  return;
}

// OnCeaseRelevant @ 146ef6fd0

void __thiscall
UBTDecorator_TimeLimit::OnCeaseRelevant
          (UBTDecorator_TimeLimit *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  *param_2 = '\0';
  return;
}

// StaticRegisterNativesUBTDecorator_TimeLimit @ 146f00c70

void __cdecl UBTDecorator_TimeLimit::StaticRegisterNativesUBTDecorator_TimeLimit(void)

{
  return;
}

// TickNode @ 146f01e40

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
UBTDecorator_TimeLimit::TickNode
          (UBTDecorator_TimeLimit *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3
          )

{
  ushort uVar1;
  longlong lVar2;
  float local_res8 [2];
  FBTimeLimitMemory *local_res10 [2];
  float local_res20 [2];
  longlong local_48;
  float *local_40;
  float *local_38;
  UBTDecorator_TimeLimit *local_30;
  longlong *local_28;
  FBTimeLimitMemory **local_20;
  
  local_res20[0] = param_3;
  local_res10[0] = UBTNode::CastInstanceNodeMemory<FBTimeLimitMemory>((UBTNode *)this,param_2);
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    local_res8[0] = (this->TimeLimit).DefaultValue;
  }
  else {
    local_res8[0] =
         FBlackboard::GetValue<UBlackboardKeyType_Float>
                   ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->TimeLimit,
                    (FKey *)&(this->TimeLimit)._padding_,&(this->TimeLimit).DefaultValue);
  }
  if ((local_res20[0] < local_res8[0]) &&
     (__real_38d1b717 <
      (float)((uint)(local_res20[0] - local_res8[0]) & __xmm_7fffffff7fffffff7fffffff7fffffff))) {
    uVar1 = (**(code **)(this->_padding_ + 0x2e8))(this);
    if (uVar1 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = (longlong)param_2 - ((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc);
    }
    local_40 = local_res20;
    local_38 = local_res8;
    local_28 = &local_48;
    local_20 = local_res10;
    local_30 = this;
    `UBTDecorator_TimeLimit::TickNode'::__l5::<lambda_1>::operator()(&local_40);
  }
  local_res10[0]->bElapsed = true;
  if ((this->_padding_ & 8) != 0) {
    uVar1 = (**(code **)(this->_padding_ + 0x2e8))(this);
    if (uVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (longlong)param_2 - ((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc);
    }
    *(undefined4 *)(lVar2 + 4) = 0x7f7fffff;
  }
  UBehaviorTreeComponent::RequestBranchEvaluation(param_1,(UBTDecorator *)this);
  return;
}

// operator() @ 1504feb20

bool __thiscall `UBTDecorator_TimeLimit::TickNode'::__l5::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FName local_res10;
  FString local_38 [3];
  
  bVar5 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar3 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6601085144465932212>);
  if (bVar3) {
    lVar1 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x40);
    if (lVar1 == 0) {
      ::FString::FString(local_38,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res10,local_38);
    }
    bVar5 = true;
    bVar3 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6601085144465932212>,&::ENSURE_Static);
    if (bVar3) {
      bVar3 = true;
      goto LAB_1504fec5e;
    }
  }
  bVar3 = false;
LAB_1504fec5e:
  if ((bVar5) && (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  return false;
}

