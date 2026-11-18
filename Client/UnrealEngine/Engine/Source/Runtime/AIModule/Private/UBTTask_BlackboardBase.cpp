// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146eac400

UClass * __cdecl UBTTask_BlackboardBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_BlackboardBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_BlackboardBase",
               &Z_Registration_Info_UClass_UBTTask_BlackboardBase.InnerSingleton,
               StaticRegisterNativesUBTTask_BlackboardBase,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_BlackboardBase>,
               InternalVTableHelperCtorCaller<UBTTask_BlackboardBase>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_BlackboardBase.InnerSingleton;
}

// UBTTask_BlackboardBase @ 146ec87b0

UBTTask_BlackboardBase * __thiscall
UBTTask_BlackboardBase::UBTTask_BlackboardBase(UBTTask_BlackboardBase *this,FVTableHelper *param_1)

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

// UBTTask_BlackboardBase @ 146ec8830

UBTTask_BlackboardBase * __thiscall
UBTTask_BlackboardBase::UBTTask_BlackboardBase
          (UBTTask_BlackboardBase *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  FString local_18;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xf8;
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  plVar2 = &this->_padding_;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfe;
  (this->BlackboardKey).bNoneIsAllowedValue = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *plVar2 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
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
  return this;
}

// ~UBTTask_BlackboardBase @ 146ecd450

void __thiscall UBTTask_BlackboardBase::~UBTTask_BlackboardBase(UBTTask_BlackboardBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->BlackboardKey).AllowedTypes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// GetPrivateStaticClass @ 146ee85e0

UClass * __cdecl UBTTask_BlackboardBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_BlackboardBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_BlackboardBase",
               &Z_Registration_Info_UClass_UBTTask_BlackboardBase.InnerSingleton,
               StaticRegisterNativesUBTTask_BlackboardBase,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTTask_BlackboardBase>,
               InternalVTableHelperCtorCaller<UBTTask_BlackboardBase>,local_res8,
               UBTTaskNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_BlackboardBase.InnerSingleton;
}

// InitializeFromAsset @ 146ef2350

void __thiscall
UBTTask_BlackboardBase::InitializeFromAsset(UBTTask_BlackboardBase *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 == (UBehaviorTree *)0x0) goto LAB_146ef23c1;
  }
  pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (pUVar1 != (UBlackboardData *)0x0) {
    FBlackboardKeySelector::ResolveSelectedKey(&this->BlackboardKey,pUVar1);
    return;
  }
LAB_146ef23c1:
  (this->BlackboardKey).SelectedKeyID = 0xffff;
  return;
}

// StaticRegisterNativesUBTTask_BlackboardBase @ 146f00d60

void __cdecl UBTTask_BlackboardBase::StaticRegisterNativesUBTTask_BlackboardBase(void)

{
  return;
}

