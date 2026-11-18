// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146eaeb50

UClass * __cdecl UBTTask_WaitBlackboardTime::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_WaitBlackboardTime",
               &Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.InnerSingleton,
               StaticRegisterNativesUBTTask_WaitBlackboardTime,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Game",InternalConstructor<UBTTask_WaitBlackboardTime>,
               InternalVTableHelperCtorCaller<UBTTask_WaitBlackboardTime>,local_res8,
               UBTTask_Wait::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.InnerSingleton;
}

// UBTTask_WaitBlackboardTime @ 146ecb750

UBTTask_WaitBlackboardTime * __thiscall
UBTTask_WaitBlackboardTime::UBTTask_WaitBlackboardTime
          (UBTTask_WaitBlackboardTime *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UBTTask_Wait::UBTTask_Wait((UBTTask_Wait *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->BlackboardKey).bNoneIsAllowedValue = 0;
  (this->BlackboardKey).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKey).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKey).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKey).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKey).SelectedKeyName.Number = 0;
  (this->BlackboardKey).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKey).SelectedKeyID = 0xffff;
  return this;
}

// UBTTask_WaitBlackboardTime @ 146ecb7c0

UBTTask_WaitBlackboardTime * __thiscall
UBTTask_WaitBlackboardTime::UBTTask_WaitBlackboardTime
          (UBTTask_WaitBlackboardTime *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  FName *pFVar3;
  FName local_res8;
  FString local_18;
  
  UBTTask_Wait::UBTTask_Wait((UBTTask_Wait *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BlackboardKey).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->BlackboardKey).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKey).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKey).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKey).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKey).SelectedKeyName.Number = 0;
  (this->BlackboardKey).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->BlackboardKey).SelectedKeyID = 0xffff;
  ::FString::FString(&local_18,"Wait Blackboard Time");
  plVar2 = &this->_padding_;
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
  pFVar3 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddFloatFilter(&this->BlackboardKey,(UObject *)this,*pFVar3);
  return this;
}

// ~UBTTask_WaitBlackboardTime @ 146ecdb40

void __thiscall
UBTTask_WaitBlackboardTime::~UBTTask_WaitBlackboardTime(UBTTask_WaitBlackboardTime *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->BlackboardKey).AllowedTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UBTTask_Wait::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTTask_Wait::_vftable__for__IGameplayTaskOwnerInterface__;
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// GetPrivateStaticClass @ 146ee9960

UClass * __cdecl UBTTask_WaitBlackboardTime::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_WaitBlackboardTime",
               &Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.InnerSingleton,
               StaticRegisterNativesUBTTask_WaitBlackboardTime,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Game",InternalConstructor<UBTTask_WaitBlackboardTime>,
               InternalVTableHelperCtorCaller<UBTTask_WaitBlackboardTime>,local_res8,
               UBTTask_Wait::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_WaitBlackboardTime.InnerSingleton;
}

// InitializeFromAsset @ 146ef2500

void __thiscall
UBTTask_WaitBlackboardTime::InitializeFromAsset
          (UBTTask_WaitBlackboardTime *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  undefined2 uStack_e;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 == (UBehaviorTree *)0x0) goto LAB_146ef2583;
  }
  pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (pUVar1 != (UBlackboardData *)0x0) {
    FBlackboardKeySelector::ResolveSelectedKey(&this->BlackboardKey,pUVar1);
    this->_padding_ = (longlong)(this->BlackboardKey).SelectedKeyName;
    return;
  }
LAB_146ef2583:
  (this->BlackboardKey).SelectedKeyID = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = (ulonglong)CONCAT22(uStack_e,0xffff);
  return;
}

// StaticRegisterNativesUBTTask_WaitBlackboardTime @ 146f00f30

void __cdecl UBTTask_WaitBlackboardTime::StaticRegisterNativesUBTTask_WaitBlackboardTime(void)

{
  return;
}

