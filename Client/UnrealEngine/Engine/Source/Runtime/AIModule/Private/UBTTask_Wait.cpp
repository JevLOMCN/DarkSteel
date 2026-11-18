// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 10

// StaticClass @ 146eae130

UClass * __cdecl UBTTask_Wait::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_Wait.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_Wait",
               &Z_Registration_Info_UClass_UBTTask_Wait.InnerSingleton,
               StaticRegisterNativesUBTTask_Wait,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UBTTask_Wait>,InternalVTableHelperCtorCaller<UBTTask_Wait>,
               local_res8,UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_Wait.InnerSingleton;
}

// UBTTask_Wait @ 146ecb5b0

UBTTask_Wait * __thiscall UBTTask_Wait::UBTTask_Wait(UBTTask_Wait *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->WaitTime)._padding_ = 0;
  *(undefined2 *)&(this->WaitTime)._padding_ = 0xffff;
  *(undefined8 *)&(this->WaitTime).DefaultValue = 0;
  *(undefined4 *)((longlong)&(this->RandomDeviation)._padding_ + 4) = 0;
  *(undefined2 *)&(this->RandomDeviation)._padding_ = 0xffff;
  (this->RandomDeviation).DefaultValue = 0.0;
  return this;
}

// UBTTask_Wait @ 146ecb620

UBTTask_Wait * __thiscall UBTTask_Wait::UBTTask_Wait(UBTTask_Wait *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  FString local_28;
  undefined2 uStack_e;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  plVar2 = &this->_padding_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  (this->WaitTime)._padding_ = 0;
  *(undefined2 *)&(this->WaitTime)._padding_ = 0xffff;
  *(undefined8 *)&(this->WaitTime).DefaultValue = 0;
  *(undefined4 *)((longlong)&(this->RandomDeviation)._padding_ + 4) = 0;
  *(undefined2 *)&(this->RandomDeviation)._padding_ = 0xffff;
  (this->RandomDeviation).DefaultValue = 0.0;
  ::FString::FString(&local_28,"Wait");
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
  lVar3 = this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 | 1;
  *(uint *)&this->_padding_ = (uint)lVar3 & 0xfffffffb | 2;
  (this->WaitTime)._padding_ = 0;
  (this->WaitTime)._padding_ = CONCAT22(uStack_e,0xffff);
  (this->WaitTime).DefaultValue = 5.0;
  return this;
}

// ~UBTTask_Wait @ 146ecdb20

void __thiscall UBTTask_Wait::~UBTTask_Wait(UBTTask_Wait *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// DescribeRuntimeValues @ 146edd240

/* WARNING: Removing unreachable block (ram,0x000146edd386) */

void __thiscall
UBTTask_Wait::DescribeRuntimeValues
          (UBTTask_Wait *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 in_register_0000008c;
  FString local_28;
  FString local_18;
  
  uVar4 = (**(code **)(this->_padding_ + 0x2e8))
                    (this,param_1,param_2,CONCAT44(in_register_0000008c,param_3));
  lVar6 = 0;
  if (uVar4 != 0) {
    lVar6 = (longlong)param_2 - ((ulonglong)(uVar4 + 3) & 0xfffffffffffffffc);
  }
  if (*(float *)(lVar6 + 4) != 0.0) {
    ::FString::SanitizeFloat(&local_18,(double)*(float *)(lVar6 + 4),1);
    ::FString::PrintfImpl(&local_28,L"remaining: %ss");
    pFVar1 = (param_4->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_4->ArrayMax * 0x10)) &&
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
    *(FScriptContainerElement **)(pFVar1 + lVar6 * 0x10) = local_28.Data.AllocatorInstance.Data;
    *(int *)(pFVar1 + lVar6 * 0x10 + 8) = local_28.Data.ArrayNum;
    *(int *)(pFVar1 + lVar6 * 0x10 + 0xc) = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ExecuteTask @ 146ee32e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBTTask_Wait::ExecuteTask(UBTTask_Wait *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    fVar4 = (this->WaitTime).DefaultValue;
  }
  else {
    fVar4 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->WaitTime,
                       (FKey *)&(this->WaitTime)._padding_,&(this->WaitTime).DefaultValue);
  }
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    fVar5 = (this->RandomDeviation).DefaultValue;
  }
  else {
    fVar5 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)&this->RandomDeviation,
                       (FKey *)&(this->RandomDeviation)._padding_,
                       &(this->RandomDeviation).DefaultValue);
  }
  fVar6 = fVar4 - fVar5;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar2 = rand();
  fVar4 = (float)(uVar2 & 0x7fff) * ((fVar5 + fVar4) - fVar6) * __real_38000100;
  if ((this->_padding_ & 0x100000000) != 0) {
    uVar1 = (**(code **)(this->_padding_ + 0x2e8))(this);
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)param_2 - ((ulonglong)(uVar1 + 3) & 0xfffffffffffffffc);
    }
    *(float *)(lVar3 + 4) = fVar4 + fVar6;
  }
  return InProgress;
}

// GetPrivateStaticClass @ 146ee98a0

UClass * __cdecl UBTTask_Wait::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_Wait.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_Wait",
               &Z_Registration_Info_UClass_UBTTask_Wait.InnerSingleton,
               StaticRegisterNativesUBTTask_Wait,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Game",
               InternalConstructor<UBTTask_Wait>,InternalVTableHelperCtorCaller<UBTTask_Wait>,
               local_res8,UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_Wait.InnerSingleton;
}

// GetStaticDescription @ 146eee3f0

FString * __thiscall
UBTTask_Wait::GetStaticDescription(UBTTask_Wait *this,FString *__return_storage_ptr__)

{
  longlong lVar1;
  ForAnyElementType FVar2;
  FString local_38;
  FString local_28;
  FString local_18;
  
  lVar1 = (this->RandomDeviation)._padding_;
  if ((lVar1 != 0) ||
     (__real_322bcc77 <
      (float)((uint)(this->RandomDeviation).DefaultValue & __xmm_7fffffff7fffffff7fffffff7fffffff)))
  {
    if (lVar1 == 0) {
      ::FString::PrintfImpl(&local_28,L"%.2f");
    }
    else {
      FValueOrBlackboardKeyBase::ToStringKeyName
                ((FValueOrBlackboardKeyBase *)&this->RandomDeviation,&local_28);
    }
    if ((this->WaitTime)._padding_ == 0) {
      ::FString::PrintfImpl(&local_38,L"%.2f");
    }
    else {
      FValueOrBlackboardKeyBase::ToStringKeyName
                ((FValueOrBlackboardKeyBase *)&this->WaitTime,&local_38);
    }
    UBehaviorTreeTypes::GetShortTypeName(&local_18,(UObject *)this);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s s +- %s s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((this->WaitTime)._padding_ == 0) {
      ::FString::PrintfImpl(&local_38,L"%.2f");
    }
    else {
      FValueOrBlackboardKeyBase::ToStringKeyName
                ((FValueOrBlackboardKeyBase *)&this->WaitTime,&local_38);
    }
    UBehaviorTreeTypes::GetShortTypeName(&local_28,(UObject *)this);
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s s");
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar2.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBTTask_Wait @ 146f00f20

void __cdecl UBTTask_Wait::StaticRegisterNativesUBTTask_Wait(void)

{
  return;
}

// TickTask @ 146f025d0

void __thiscall
UBTTask_Wait::TickTask
          (UBTTask_Wait *this,UBehaviorTreeComponent *param_1,uchar *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  UBTTaskNode *pUVar4;
  longlong lVar5;
  
  uVar3 = (**(code **)(this->_padding_ + 0x2e8))();
  if (uVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)param_2 - ((ulonglong)(uVar3 + 3) & 0xfffffffffffffffc);
  }
  if (0.0 < *(float *)(lVar5 + 4)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7603939362174140388>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Tasks\\BTTask_Wait.cpp"
                       ,0x1c,
                       "GetSpecialNodeMemory<FBTTaskMemory>(NodeMemory)->NextTickRemainingTime <= 0.f"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar4 = (UBTTaskNode *)UBehaviorTreeComponent::FindTemplateNode(param_1,(UBTNode *)this);
  UBehaviorTreeComponent::OnTaskFinished(param_1,pUVar4,Succeeded);
  return;
}

