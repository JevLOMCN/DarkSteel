// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 11

// StaticClass @ 146ea9790

UClass * __cdecl UBTDecorator_LoopUntil::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_LoopUntil.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_LoopUntil",
               &Z_Registration_Info_UClass_UBTDecorator_LoopUntil.InnerSingleton,
               StaticRegisterNativesUBTDecorator_LoopUntil,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_LoopUntil>,
               InternalVTableHelperCtorCaller<UBTDecorator_LoopUntil>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_LoopUntil.InnerSingleton;
}

// UBTDecorator_LoopUntil @ 146ec7440

UBTDecorator_LoopUntil * __thiscall
UBTDecorator_LoopUntil::UBTDecorator_LoopUntil(UBTDecorator_LoopUntil *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  FValueOrBBKey_Enum::FValueOrBBKey_Enum<enum_EBTNodeResult::Type>(&this->RequiredResult,Succeeded);
  return this;
}

// UBTDecorator_LoopUntil @ 146ec7490

UBTDecorator_LoopUntil * __thiscall
UBTDecorator_LoopUntil::UBTDecorator_LoopUntil
          (UBTDecorator_LoopUntil *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  uchar uVar2;
  wchar_t *pwVar3;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 0xff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffff47 | 0x47;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  FValueOrBBKey_Enum::FValueOrBBKey_Enum<enum_EBTNodeResult::Type>(&this->RequiredResult,Succeeded);
  uVar2 = (this->RequiredResult).DefaultValue;
  if (uVar2 == '\0') {
    pwVar3 = L"Loop Until Success";
  }
  else {
    pwVar3 = L"Loop Until Failure";
    if (uVar2 != '\x01') {
      pwVar3 = L"Loop Until";
    }
  }
  ::FString::operator=((FString *)&this->_padding_,pwVar3);
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xf8;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xffffffd0 | 0x10;
  return this;
}

// ~UBTDecorator_LoopUntil @ 146eccff0

void __thiscall UBTDecorator_LoopUntil::~UBTDecorator_LoopUntil(UBTDecorator_LoopUntil *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->RequiredResult).NativeEnumTypeName.Data.AllocatorInstance.Data;
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

// CleanupMemory @ 146ed5f00

void __thiscall
UBTDecorator_LoopUntil::CleanupMemory
          (UBTDecorator_LoopUntil *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

{
  return;
}

// GetInstanceMemorySize @ 146ee5a60

ushort __thiscall UBTDecorator_LoopUntil::GetInstanceMemorySize(UBTDecorator_LoopUntil *this)

{
  return 4;
}

// GetPrivateStaticClass @ 146ee7c30

UClass * __cdecl UBTDecorator_LoopUntil::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTDecorator_LoopUntil.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTDecorator_LoopUntil",
               &Z_Registration_Info_UClass_UBTDecorator_LoopUntil.InnerSingleton,
               StaticRegisterNativesUBTDecorator_LoopUntil,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTDecorator_LoopUntil>,
               InternalVTableHelperCtorCaller<UBTDecorator_LoopUntil>,local_res8,
               UBTDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTDecorator_LoopUntil.InnerSingleton;
}

// InitializeMemory @ 146ef2df0

void __thiscall
UBTDecorator_LoopUntil::InitializeMemory
          (UBTDecorator_LoopUntil *this,UBehaviorTreeComponent *param_1,uchar *param_2,Type param_3)

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
  uVar3 = (**(code **)(this->_padding_ + 0x2d0))();
  if (uVar3 < 4) {
    local_res8 = (FName)this->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    (**(code **)(this->_padding_ + 0x2d0))(this);
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

// OnNodeDeactivation @ 146ef8d20

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
UBTDecorator_LoopUntil::OnNodeDeactivation
          (UBTDecorator_LoopUntil *this,FBehaviorTreeSearchData *param_1,Type param_2)

{
  uchar *puVar1;
  ushort uVar2;
  UBehaviorTreeComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  UBlackboardComponent *pUVar6;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  pUVar3 = param_1->OwnerComp;
  uVar2 = pUVar3->ActiveInstanceIdx;
  if (((pUVar3->InstanceStack).ArrayNum <= (int)(uint)uVar2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = (pUVar3->InstanceStack).AllocatorInstance.Data;
  lVar11 = (ulonglong)uVar2 * 0x68;
  lVar5 = *(longlong *)(pFVar4 + lVar11 + 0x30);
  if ((*(int *)(pFVar4 + lVar11 + 0x38) < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = (ulonglong)*(ushort *)((longlong)&this->_padding_ + 2);
  if ((*(int *)(uVar10 + lVar5) != param_1->SearchId) &&
     (*(int *)(uVar10 + lVar5) = param_1->SearchId, param_2 != Aborted)) {
    puVar1 = &(this->RequiredResult).DefaultValue;
    pUVar6 = (UBlackboardComponent *)param_1->OwnerComp->_padding_;
    if (pUVar6 == (UBlackboardComponent *)0x0) {
      bVar9 = *puVar1;
    }
    else {
      bVar9 = FBlackboard::GetValue<UBlackboardKeyType_Enum>
                        (pUVar6,(FName *)&this->RequiredResult,
                         (FKey *)&(this->RequiredResult)._padding_,puVar1);
    }
    if (FVisualLogger::bIsRecording != 0) {
      FVisualLogger::CategorizedLogfImpl
                ((UObject *)param_1->OwnerComp->_padding_,(FName *)&LogBehaviorTree.field_0x4,
                 Verbose,L"Loop until %s: Node Result is %s -> %s");
    }
    if (param_2 != bVar9) {
      (**(code **)(*(longlong *)this->_padding_ + 0x300))
                ((longlong *)this->_padding_,param_1,*(undefined1 *)((longlong)&this->_padding_ + 1)
                );
    }
  }
  return;
}

// SetNodeName @ 146effaa0

void __thiscall UBTDecorator_LoopUntil::SetNodeName(UBTDecorator_LoopUntil *this)

{
  uchar uVar1;
  wchar_t *pwVar2;
  
  uVar1 = (this->RequiredResult).DefaultValue;
  if (uVar1 == '\0') {
    ::FString::operator=((FString *)&this->_padding_,L"Loop Until Success");
    return;
  }
  pwVar2 = L"Loop Until Failure";
  if (uVar1 != '\x01') {
    pwVar2 = L"Loop Until";
  }
  ::FString::operator=((FString *)&this->_padding_,pwVar2);
  return;
}

// StaticRegisterNativesUBTDecorator_LoopUntil @ 146f00c30

void __cdecl UBTDecorator_LoopUntil::StaticRegisterNativesUBTDecorator_LoopUntil(void)

{
  return;
}

