// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// StaticClass @ 146eab6f0

UClass * __cdecl UBTDecorator_ConditionalLoop::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_ConditionalLoop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_ConditionalLoop",
               &Z_Registration_Info_UClass_UBTDecorator_ConditionalLoop.InnerSingleton,
               StaticRegisterNativesUBTDecorator_ConditionalLoop,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_ConditionalLoop>,
               InternalVTableHelperCtorCaller<UBTDecorator_ConditionalLoop>,local_res8,
               UBTDecorator_Blackboard::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_ConditionalLoop.InnerSingleton;
}

// UBTDecorator_ConditionalLoop @ 146ec5fa0

UBTDecorator_ConditionalLoop * __thiscall
UBTDecorator_ConditionalLoop::UBTDecorator_ConditionalLoop
          (UBTDecorator_ConditionalLoop *this,FVTableHelper *param_1)

{
  UBTDecorator_Blackboard::UBTDecorator_Blackboard((UBTDecorator_Blackboard *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UBTDecorator_ConditionalLoop @ 146ec5fe0

UBTDecorator_ConditionalLoop * __thiscall
UBTDecorator_ConditionalLoop::UBTDecorator_ConditionalLoop
          (UBTDecorator_ConditionalLoop *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  FString local_18;
  
  UBTDecorator_Blackboard::UBTDecorator_Blackboard((UBTDecorator_Blackboard *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  ::FString::FString(&local_18,"Conditional Loop");
  puVar1 = &this->field_0x30;
  if ((FString *)puVar1 != &local_18) {
    if (*(void **)puVar1 != (void *)0x0) {
      FMemory::Free(*(void **)puVar1);
    }
    *(FScriptContainerElement **)puVar1 = local_18.Data.AllocatorInstance.Data;
    *(int *)&this->field_0x38 = local_18.Data.ArrayNum;
    *(int *)&this->field_0x3c = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->field_0x58 = this->field_0x58 & 0xfb;
  this->field_0x58 = this->field_0x58 | 3;
  *(uint *)&this->field_0x60 = *(uint *)&this->field_0x60 & 0xffffffd0 | 0x10;
  return this;
}

// ~UBTDecorator_ConditionalLoop @ 146ecccb0

void __thiscall
UBTDecorator_ConditionalLoop::~UBTDecorator_ConditionalLoop(UBTDecorator_ConditionalLoop *this)

{
  *(undefined ***)this = &UBTDecorator_Blackboard::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UBTDecorator_Blackboard::_vftable__for__IGameplayTaskOwnerInterface__;
  if (*(void **)&this->field_0xa8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0xa8);
  }
  if (*(void **)&this->field_0x98 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x98);
  }
  UBTDecorator_BlackboardBase::~UBTDecorator_BlackboardBase((UBTDecorator_BlackboardBase *)this);
  return;
}

// CalculateRawConditionValue @ 146ed48f0

bool __thiscall
UBTDecorator_ConditionalLoop::CalculateRawConditionValue
          (UBTDecorator_ConditionalLoop *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  return true;
}

// CleanupMemory @ 146ed5eb0

void __thiscall
UBTDecorator_ConditionalLoop::CleanupMemory
          (UBTDecorator_ConditionalLoop *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  return;
}

// GetInstanceMemorySize @ 146ee5a10

ushort __thiscall
UBTDecorator_ConditionalLoop::GetInstanceMemorySize(UBTDecorator_ConditionalLoop *this)

{
  return 4;
}

// GetPrivateStaticClass @ 146ee7570

UClass * __cdecl UBTDecorator_ConditionalLoop::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_ConditionalLoop.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_ConditionalLoop",
               &Z_Registration_Info_UClass_UBTDecorator_ConditionalLoop.InnerSingleton,
               StaticRegisterNativesUBTDecorator_ConditionalLoop,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Game",InternalConstructor<UBTDecorator_ConditionalLoop>,
               InternalVTableHelperCtorCaller<UBTDecorator_ConditionalLoop>,local_res8,
               UBTDecorator_Blackboard::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_ConditionalLoop.InnerSingleton;
}

// InitializeMemory @ 146ef2bc0

void __thiscall
UBTDecorator_ConditionalLoop::InitializeMemory
          (UBTDecorator_ConditionalLoop *this,UBehaviorTreeComponent *param_1,uchar *param_2,
          Type param_3)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  FName local_res8;
  FString local_18;
  
  if (param_3 == Initialize) {
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
  }
  uVar3 = (**(code **)(*(longlong *)this + 0x2d0))();
  if (uVar3 < 4) {
    local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(*(longlong *)this + 0x2d0))(this);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) <= GetInstanceMemorySize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\BehaviorTree\\BTNode.h"
                       ,0x17e,
                       L"Requesting type of %zu bytes but GetInstanceMemorySize returns %u. Make sure GetInstanceMemorySize is implemented properly in %s class hierarchy."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnBlackboardKeyValueChange @ 146ef6770

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
UBTDecorator_ConditionalLoop::OnBlackboardKeyValueChange
          (UBTDecorator_ConditionalLoop *this,UBlackboardComponent *param_1,FKey param_2)

{
  return RemoveObserver;
}

// OnNodeDeactivation @ 146ef8a80

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
UBTDecorator_ConditionalLoop::OnNodeDeactivation
          (UBTDecorator_ConditionalLoop *this,FBehaviorTreeSearchData *param_1,Type param_2)

{
  ushort uVar1;
  UBehaviorTreeComponent *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  UBlackboardComponent *pUVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  byte bVar9;
  int *piVar10;
  
  pUVar2 = param_1->OwnerComp;
  uVar1 = pUVar2->ActiveInstanceIdx;
  if (((pUVar2->InstanceStack).ArrayNum <= (int)(uint)uVar1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (pUVar2->InstanceStack).AllocatorInstance.Data;
  lVar8 = (ulonglong)uVar1 * 0x68;
  lVar4 = *(longlong *)(pFVar3 + lVar8 + 0x30);
  if ((*(int *)(pFVar3 + lVar8 + 0x38) < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  piVar10 = (int *)(lVar4 + (ulonglong)*(ushort *)&this->field_0x52);
  if ((piVar10 == (int *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecoratorMemory",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\BehaviorTree\\Decorators\\BTDecorator_ConditionalLoop.cpp"
                         ,0x23,L"Expecting to always have decorator memory available"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*piVar10 != param_1->SearchId) && (*piVar10 = param_1->SearchId, param_2 != Aborted)) {
    pUVar5 = (UBlackboardComponent *)param_1->OwnerComp->_padding_;
    if ((pUVar5 == (UBlackboardComponent *)0x0) ||
       (bVar7 = UBTDecorator_Blackboard::EvaluateOnBlackboard
                          ((UBTDecorator_Blackboard *)this,pUVar5), !bVar7)) {
      bVar9 = 0;
    }
    else {
      bVar9 = 1;
    }
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,
                 Verbose,L"Loop condition: %s -> %s");
    }
    if (bVar9 != ((byte)(*(uint *)&this->field_0x60 >> 7) & 1)) {
      (**(code **)(**(longlong **)&this->field_0x48 + 0x300))
                (*(longlong **)&this->field_0x48,param_1,this->field_0x59);
    }
  }
  return;
}

// StaticRegisterNativesUBTDecorator_ConditionalLoop @ 146f00ba0

void __cdecl UBTDecorator_ConditionalLoop::StaticRegisterNativesUBTDecorator_ConditionalLoop(void)

{
  return;
}

