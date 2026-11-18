// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146eaf7d0

UClass * __cdecl UBTDecorator_Blackboard::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_Blackboard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_Blackboard",
               &Z_Registration_Info_UClass_UBTDecorator_Blackboard.InnerSingleton,
               StaticRegisterNativesUBTDecorator_Blackboard,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_Blackboard>,
               InternalVTableHelperCtorCaller<UBTDecorator_Blackboard>,local_res8,
               UBTDecorator_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_Blackboard.InnerSingleton;
}

// UBTDecorator_Blackboard @ 146ec5500

UBTDecorator_Blackboard * __thiscall
UBTDecorator_Blackboard::UBTDecorator_Blackboard
          (UBTDecorator_Blackboard *this,FVTableHelper *param_1)

{
  uint *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffff;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar1 = *puVar1 & 0xfffffffe;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  (this->CachedDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDescription).Data.ArrayNum = 0;
  (this->CachedDescription).Data.ArrayMax = 0;
  return this;
}

// UBTDecorator_Blackboard @ 146ec5590

UBTDecorator_Blackboard * __thiscall
UBTDecorator_Blackboard::UBTDecorator_Blackboard
          (UBTDecorator_Blackboard *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  FString local_18;
  
  UBTDecorator_BlackboardBase::UBTDecorator_BlackboardBase
            ((UBTDecorator_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  (this->CachedDescription).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedDescription).Data.ArrayNum = 0;
  (this->CachedDescription).Data.ArrayMax = 0;
  ::FString::FString(&local_18,"Blackboard Based Condition");
  plVar1 = &this->_padding_;
  if ((FString *)plVar1 != &local_18) {
    if ((void *)*plVar1 != (void *)0x0) {
      FMemory::Free((void *)*plVar1);
    }
    *plVar1 = (longlong)local_18.Data.AllocatorInstance.Data;
    *(int *)&this->_padding_ = local_18.Data.ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (this->NotifyObserver).Value = '\x01';
  return this;
}

// ~UBTDecorator_Blackboard @ 146ecca40

void __thiscall UBTDecorator_Blackboard::~UBTDecorator_Blackboard(UBTDecorator_Blackboard *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->CachedDescription).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StringValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBTDecorator_BlackboardBase::~UBTDecorator_BlackboardBase((UBTDecorator_BlackboardBase *)this);
  return;
}

// CalculateRawConditionValue @ 146ed4500

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
UBTDecorator_Blackboard::CalculateRawConditionValue
          (UBTDecorator_Blackboard *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  bool bVar1;
  
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    bVar1 = EvaluateOnBlackboard(this,(UBlackboardComponent *)param_1->_padding_);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// DescribeRuntimeValues @ 146edb300

/* WARNING: Removing unreachable block (ram,0x000146edb510) */
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
UBTDecorator_Blackboard::DescribeRuntimeValues
          (UBTDecorator_Blackboard *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3
          ,TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FString local_48;
  FString local_38;
  FString local_28;
  
  UBTAuxiliaryNode::DescribeRuntimeValues((UBTAuxiliaryNode *)this,param_1,param_2,param_3,param_4);
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  pFVar7 = (FScriptContainerElement *)0x0;
  if (this_00 != (UBlackboardComponent *)0x0) {
    uVar1 = (uint)this->_padding_;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3))
    {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar5 = UBlackboardComponent::DescribeKeyValue(this_00,&local_38,(FKey)(ushort)uVar1,OnlyValue)
    ;
    if (&local_28 != pFVar5) {
      pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    EvaluateOnBlackboard(this,this_00);
  }
  ::FString::PrintfImpl(&local_48,L"value: %s (%s)");
  pFVar6 = (param_4->AllocatorInstance).Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 < pFVar6 + (longlong)param_4->ArrayMax * 0x10)) &&
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
  iVar4 = param_4->ArrayNum;
  if (iVar4 == param_4->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_4->AllocatorInstance,&param_4->ArrayMax);
  }
  param_4->ArrayNum = iVar4 + 1;
  pFVar6 = (param_4->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar6 = 0;
  *(FScriptContainerElement **)pFVar6 = local_48.Data.AllocatorInstance.Data;
  *(int *)(pFVar6 + 8) = local_48.Data.ArrayNum;
  *(int *)(pFVar6 + 0xc) = local_48.Data.ArrayMax;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return;
}

// EvaluateOnBlackboard @ 146edf8d0

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
UBTDecorator_Blackboard::EvaluateOnBlackboard
          (UBTDecorator_Blackboard *this,UBlackboardComponent *param_1)

{
  float fVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UClass *pUVar8;
  UBlackboardKeyType *pUVar9;
  uchar *puVar10;
  longlong lVar11;
  
  lVar11 = this->_padding_;
  uVar7 = 0;
  if (lVar11 == 0) {
    return false;
  }
  pUVar8 = UBlackboardKeyType::StaticClass();
  if (pUVar8 == (UClass *)0x0) {
    return false;
  }
  iVar4 = (int)pUVar8->_padding_;
  if ((*(int *)(lVar11 + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar8->_padding_)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return false;
  }
  lVar11 = this->_padding_;
  if (lVar11 == 0) {
    return false;
  }
  pUVar8 = UBlackboardKeyType::StaticClass();
  if (pUVar8 != (UClass *)0x0) {
    iVar4 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar11 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar8->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pUVar8 = (UClass *)this->_padding_;
      goto LAB_146edf982;
    }
  }
  pUVar8 = (UClass *)0x0;
LAB_146edf982:
  pUVar9 = UClass::GetDefaultObject<UBlackboardKeyType>(pUVar8);
  uVar3 = (uint)this->_padding_;
  if (((uVar3 != (uVar3 & 0xffff)) || ((int)uVar3 < 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  puVar10 = UBlackboardComponent::GetKeyRawData(param_1,(FKey)(ushort)uVar3);
  if (pUVar9 == (UBlackboardKeyType *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6628968798001037346>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Decorators\\BTDecorator_Blackboard.cpp"
                       ,0x22,"KeyCDO != 0");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  else if (puVar10 != (uchar *)0x0) {
    uVar2 = (pUVar9->SupportedOp).Value;
    if (uVar2 == '\0') {
      uVar2 = this->OperationType;
      if (pUVar9->bCreateKeyInstance == '\0') {
        lVar11 = pUVar9->_padding_;
      }
      else {
        pUVar9 = UBlackboardKeyType::GetKeyInstance(pUVar9,param_1,puVar10);
        puVar10 = puVar10 + 4;
        lVar11 = pUVar9->_padding_;
      }
      uVar7 = (**(code **)(lVar11 + 0x318))(pUVar9,param_1,puVar10,uVar2);
    }
    else if (uVar2 == '\x01') {
      iVar4 = this->IntValue;
      fVar1 = this->FloatValue;
      uVar2 = this->OperationType;
      if (pUVar9->bCreateKeyInstance == '\0') {
        lVar11 = pUVar9->_padding_;
      }
      else {
        pUVar9 = UBlackboardKeyType::GetKeyInstance(pUVar9,param_1,puVar10);
        puVar10 = puVar10 + 4;
        lVar11 = pUVar9->_padding_;
      }
      uVar7 = (**(code **)(lVar11 + 800))(pUVar9,param_1,puVar10,uVar2,iVar4,fVar1);
    }
    else if (uVar2 == '\x02') {
      uVar2 = this->OperationType;
      if (pUVar9->bCreateKeyInstance == '\0') {
        uVar7 = (**(code **)(pUVar9->_padding_ + 0x328))();
      }
      else {
        pUVar9 = UBlackboardKeyType::GetKeyInstance(pUVar9,param_1,puVar10);
        uVar7 = (**(code **)(pUVar9->_padding_ + 0x328))
                          (pUVar9,param_1,puVar10 + 4,uVar2,&this->StringValue);
      }
    }
  }
  return (bool)uVar7;
}

// GetPrivateStaticClass @ 146ee71b0

UClass * __cdecl UBTDecorator_Blackboard::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_Blackboard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_Blackboard",
               &Z_Registration_Info_UClass_UBTDecorator_Blackboard.InnerSingleton,
               StaticRegisterNativesUBTDecorator_Blackboard,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_Blackboard>,
               InternalVTableHelperCtorCaller<UBTDecorator_Blackboard>,local_res8,
               UBTDecorator_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_Blackboard.InnerSingleton;
}

// GetStaticDescription @ 146eeb3a0

FString * __thiscall
UBTDecorator_Blackboard::GetStaticDescription
          (UBTDecorator_Blackboard *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  UBTDecorator::GetStaticDescription((UBTDecorator *)this,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// InitializeFromAsset @ 146ef1b70

void __thiscall
UBTDecorator_Blackboard::InitializeFromAsset(UBTDecorator_Blackboard *this,UBehaviorTree *param_1)

{
  uint uVar1;
  UBlackboardData *pUVar2;
  code *pcVar3;
  bool bVar4;
  FBlackboardEntry *pFVar5;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
LAB_146ef1ba5:
    pUVar2 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UBlackboardData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    if (pUVar2 != (UBlackboardData *)0x0) {
      FBlackboardKeySelector::ResolveSelectedKey((FBlackboardKeySelector *)&this->_padding_,pUVar2);
      goto LAB_146ef1be0;
    }
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 != (UBehaviorTree *)0x0) goto LAB_146ef1ba5;
  }
  *(undefined4 *)&this->_padding_ = 0xffff;
LAB_146ef1be0:
  if ((this->_padding_ != 0) &&
     (pUVar2 = *(UBlackboardData **)(this->_padding_ + 0x38), pUVar2 != (UBlackboardData *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    uVar1 = (uint)this->_padding_;
    if (((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar5 = UBlackboardData::GetKey(pUVar2,(FKey)(ushort)uVar1);
    if (pFVar5 != (FBlackboardEntry *)0x0) {
      RefreshEnumBasedDecorator(this,pFVar5);
    }
  }
  return;
}

// OnBlackboardKeyValueChange @ 146ef6360

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
UBTDecorator_Blackboard::OnBlackboardKeyValueChange
          (UBTDecorator_Blackboard *this,UBlackboardComponent *param_1,FKey param_2)

{
  uchar uVar1;
  uint uVar2;
  UBehaviorTreeComponent *this_00;
  code *pcVar3;
  bool bVar4;
  EBlackboardNotificationResult EVar5;
  int iVar6;
  uchar *puVar7;
  wchar_t *pwVar8;
  FString local_38;
  FString local_28;
  
  this_00 = (UBehaviorTreeComponent *)(param_1->BrainComp).field0_0x0.DebugPtr;
  if (this_00 == (UBehaviorTreeComponent *)0x0) {
    return RemoveObserver;
  }
  uVar2 = (uint)this->_padding_;
  if (((uVar2 != (uVar2 & 0xffff)) || ((int)uVar2 < 0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  if ((((ushort)uVar2 == param_2.Key) &&
      (uVar1 = (this->NotifyObserver).Value, *(char *)((longlong)&this->_padding_ + 4) != '\0')) &&
     (iVar6 = UBehaviorTreeComponent::FindInstanceContainingNode(this_00,(UBTNode *)this->_padding_)
     , iVar6 != -1)) {
    puVar7 = UBehaviorTreeComponent::GetNodeMemory(this_00,(UBTNode *)this,iVar6);
    bVar4 = UBTDecorator::WrappedCanExecute((UBTDecorator *)this,this_00,puVar7);
    if (FVisualLogger::bIsRecording != 0) {
      pwVar8 = L"true";
      if (!bVar4) {
        pwVar8 = L"false";
      }
      ::FString::FString(&local_38,pwVar8);
      UBehaviorTreeTypes::DescribeNodeHelper(&local_28,(UBTNode *)this);
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)this_00->_padding_,(FName *)&LogBehaviorTree.field_0x4,Verbose,
                 L"%s, ConditionalFlowAbort(%s) pass:%s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (bVar4) {
      UBehaviorTreeComponent::RequestBranchActivation(this_00,(UBTDecorator *)this,uVar1 == '\0');
    }
    else {
      UBehaviorTreeComponent::RequestBranchDeactivation(this_00,(UBTDecorator *)this);
    }
  }
  return ContinueObserving;
}

// RefreshEnumBasedDecorator @ 146efc740

void __thiscall
UBTDecorator_Blackboard::RefreshEnumBasedDecorator
          (UBTDecorator_Blackboard *this,FBlackboardEntry *param_1)

{
  UEnum *this_00;
  bool bVar1;
  int iVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  long64 lVar5;
  FName this_01;
  FString *pFVar6;
  longlong lVar7;
  UClass *pUVar8;
  FName local_res8;
  FString local_18;
  
  lVar7 = this->_padding_;
  pUVar8 = (UClass *)0x0;
  pUVar4 = pUVar8;
  if ((lVar7 != 0) && (pUVar3 = UBlackboardKeyType::StaticClass(), pUVar3 != (UClass *)0x0)) {
    iVar2 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar3->_padding_)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pUVar4 = (UClass *)this->_padding_;
    }
  }
  pUVar3 = UBlackboardKeyType_Enum::StaticClass();
  if (pUVar4 != pUVar3) {
    lVar7 = this->_padding_;
    pUVar4 = pUVar8;
    if ((lVar7 != 0) && (pUVar3 = UBlackboardKeyType::StaticClass(), pUVar3 != (UClass *)0x0)) {
      iVar2 = (int)pUVar3->_padding_;
      if ((*(int *)(lVar7 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar3->_padding_)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        pUVar4 = (UClass *)this->_padding_;
      }
    }
    pUVar3 = UBlackboardKeyType_NativeEnum::StaticClass();
    if (pUVar4 != pUVar3) {
      return;
    }
  }
  lVar7 = this->_padding_;
  if ((lVar7 != 0) && (pUVar4 = UBlackboardKeyType::StaticClass(), pUVar4 != (UClass *)0x0)) {
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      pUVar8 = (UClass *)this->_padding_;
    }
  }
  pUVar4 = UBlackboardKeyType_Enum::StaticClass();
  lVar7 = 0x30;
  if (pUVar8 != pUVar4) {
    lVar7 = 0x40;
  }
  this_00 = *(UEnum **)((longlong)&((param_1->KeyType).field0_0x0.DebugPtr)->_padding_ + lVar7);
  if (this_00 != (UEnum *)0x0) {
    if ((this->StringValue).Data.ArrayNum < 2) {
      if (this->IntValue < 0) {
        return;
      }
      if ((this_00->Names).NumValues <= this->IntValue) {
        return;
      }
      this_01 = UEnum::GetNameByIndex(this_00,(int)&local_res8);
      pFVar6 = ::FName::ToString((FName *)this_01,&local_18);
      ::FString::operator=(&this->StringValue,pFVar6);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      lVar5 = UEnum::GetValueByIndex(this_00,this->IntValue);
    }
    else {
      ::FName::FName(&local_res8,(wchar_t *)(this->StringValue).Data.AllocatorInstance.Data);
      lVar5 = UEnum::GetValueByName(this_00,local_res8,None);
    }
    iVar2 = IntCastChecked<int,__int64>(lVar5);
    this->IntValue = iVar2;
  }
  return;
}

// StaticRegisterNativesUBTDecorator_Blackboard @ 146f00b20

void __cdecl UBTDecorator_Blackboard::StaticRegisterNativesUBTDecorator_Blackboard(void)

{
  return;
}

