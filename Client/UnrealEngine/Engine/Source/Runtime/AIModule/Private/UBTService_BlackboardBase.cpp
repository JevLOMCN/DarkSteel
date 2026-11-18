// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticClass @ 146eac600

UClass * __cdecl UBTService_BlackboardBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTService_BlackboardBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTService_BlackboardBase",
               &Z_Registration_Info_UClass_UBTService_BlackboardBase.InnerSingleton,
               StaticRegisterNativesUBTService_BlackboardBase,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTService_BlackboardBase>,
               InternalVTableHelperCtorCaller<UBTService_BlackboardBase>,local_res8,
               UBTService::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTService_BlackboardBase.InnerSingleton;
}

// UBTService_BlackboardBase @ 146ec7dc0

UBTService_BlackboardBase * __thiscall
UBTService_BlackboardBase::UBTService_BlackboardBase
          (UBTService_BlackboardBase *this,FVTableHelper *param_1)

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
  (this->BlackboardKey).AllowedTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlackboardKey).AllowedTypes.ArrayNum = 0;
  (this->BlackboardKey).AllowedTypes.ArrayMax = 0;
  (this->BlackboardKey).SelectedKeyName.ComparisonIndex = 0;
  (this->BlackboardKey).SelectedKeyName.Number = 0;
  (this->BlackboardKey).SelectedKeyType.Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UBTService_BlackboardBase @ 146ec7e30

UBTService_BlackboardBase * __thiscall
UBTService_BlackboardBase::UBTService_BlackboardBase
          (UBTService_BlackboardBase *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  FString local_18;
  
  UBTService::UBTService((UBTService *)this,param_1);
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
  ::FString::FString(&local_18,"BlackboardBase");
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
  return this;
}

// ~UBTService_BlackboardBase @ 146ecd260

void __thiscall
UBTService_BlackboardBase::~UBTService_BlackboardBase(UBTService_BlackboardBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->BlackboardKey).AllowedTypes.AllocatorInstance.Data;
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

// GetPrivateStaticClass @ 146ee8220

UClass * __cdecl UBTService_BlackboardBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTService_BlackboardBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTService_BlackboardBase",
               &Z_Registration_Info_UClass_UBTService_BlackboardBase.InnerSingleton,
               StaticRegisterNativesUBTService_BlackboardBase,0x98,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Game",InternalConstructor<UBTService_BlackboardBase>,
               InternalVTableHelperCtorCaller<UBTService_BlackboardBase>,local_res8,
               UBTService::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTService_BlackboardBase.InnerSingleton;
}

// InitializeFromAsset @ 146ef21a0

void __thiscall
UBTService_BlackboardBase::InitializeFromAsset
          (UBTService_BlackboardBase *this,UBehaviorTree *param_1)

{
  UBlackboardData *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UBehaviorTree *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    this->_padding_ = (longlong)param_1;
  }
  else {
    this->_padding_ = (longlong)param_1;
    if (param_1 == (UBehaviorTree *)0x0) goto LAB_146ef2211;
  }
  pUVar1 = (param_1->BlackboardAsset).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlackboardData *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  if (pUVar1 != (UBlackboardData *)0x0) {
    FBlackboardKeySelector::ResolveSelectedKey(&this->BlackboardKey,pUVar1);
    return;
  }
LAB_146ef2211:
  (this->BlackboardKey).SelectedKeyID = 0xffff;
  return;
}

// StaticRegisterNativesUBTService_BlackboardBase @ 146f00ce0

void __cdecl UBTService_BlackboardBase::StaticRegisterNativesUBTService_BlackboardBase(void)

{
  return;
}

