// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticClass @ 146ea9130

UClass * __cdecl UBTTask_SetKeyValueString::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueString.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueString",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueString.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueString,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetKeyValueString>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueString>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueString.InnerSingleton;
}

// UBTTask_SetKeyValueString @ 146ecafb0

UBTTask_SetKeyValueString * __thiscall
UBTTask_SetKeyValueString::UBTTask_SetKeyValueString
          (UBTTask_SetKeyValueString *this,FVTableHelper *param_1)

{
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->Value)._padding_ = 0;
  *(undefined2 *)&(this->Value)._padding_ = 0xffff;
  (this->Value).DefaultValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).DefaultValue.Data.ArrayNum = 0;
  (this->Value).DefaultValue.Data.ArrayMax = 0;
  return this;
}

// UBTTask_SetKeyValueString @ 146ecb010

UBTTask_SetKeyValueString * __thiscall
UBTTask_SetKeyValueString::UBTTask_SetKeyValueString
          (UBTTask_SetKeyValueString *this,FObjectInitializer *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  FObjectInitializer *pFVar3;
  FName *pFVar4;
  FName local_res8;
  FString local_18;
  
  pFVar3 = FObjectInitializer::Get();
  UBTTask_BlackboardBase::UBTTask_BlackboardBase((UBTTask_BlackboardBase *)this,pFVar3);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->Value)._padding_ = 0;
  *(undefined2 *)&(this->Value)._padding_ = 0xffff;
  (this->Value).DefaultValue.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Value).DefaultValue.Data.ArrayNum = 0;
  (this->Value).DefaultValue.Data.ArrayMax = 0;
  ::FString::FString(&local_18,"Set String Key");
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
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  *puVar2 = *puVar2 & 0xfffffffe;
  pFVar4 = ::FName::FName(&local_res8,0xd,L"BlackboardKey",FNAME_Add);
  FBlackboardKeySelector::AddStringFilter
            ((FBlackboardKeySelector *)&this->_padding_,(UObject *)this,*pFVar4);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff9;
  return this;
}

// ~UBTTask_SetKeyValueString @ 146ecd9f0

void __thiscall
UBTTask_SetKeyValueString::~UBTTask_SetKeyValueString(UBTTask_SetKeyValueString *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->Value).DefaultValue.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UBTTask_BlackboardBase::_vftable__for__IGameplayTaskOwnerInterface__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBTTaskNode::~UBTTaskNode((UBTTaskNode *)this);
  return;
}

// ExecuteTask @ 146ee2e60

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
UBTTask_SetKeyValueString::ExecuteTask
          (UBTTask_SetKeyValueString *this,UBehaviorTreeComponent *param_1,uchar *param_2)

{
  uint uVar1;
  UBlackboardComponent *this_00;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  FString *pFVar5;
  FString local_18;
  
  this_00 = (UBlackboardComponent *)param_1->_padding_;
  if (this_00 == (UBlackboardComponent *)0x0) {
    return Failed;
  }
  uVar1 = (uint)this->_padding_;
  if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  if ((short)uVar1 == -1) {
    return Failed;
  }
  pFVar5 = FValueOrBBKey_String::GetValue(&this->Value,&local_18,this_00);
  uVar1 = (uint)this->_padding_;
  if ((uVar1 != (uVar1 & 0xffff)) || ((int)uVar1 < 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return TVar4;
    }
  }
  UBlackboardComponent::SetValue<UBlackboardKeyType_String>(this_00,(FKey)(ushort)uVar1,pFVar5);
  return Succeeded;
}

// GetPrivateStaticClass @ 146ee95a0

UClass * __cdecl UBTTask_SetKeyValueString::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBTTask_SetKeyValueString.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BTTask_SetKeyValueString",
               &Z_Registration_Info_UClass_UBTTask_SetKeyValueString.InnerSingleton,
               StaticRegisterNativesUBTTask_SetKeyValueString,0xb8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Game",InternalConstructor<UBTTask_SetKeyValueString>,
               InternalVTableHelperCtorCaller<UBTTask_SetKeyValueString>,local_res8,
               UBTTask_BlackboardBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBTTask_SetKeyValueString.InnerSingleton;
}

// GetStaticDescription @ 146eede30

FString * __thiscall
UBTTask_SetKeyValueString::GetStaticDescription
          (UBTTask_SetKeyValueString *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_b8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  FString local_98;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  FStringFormatArg local_48;
  FString local_28;
  FString local_18;
  
  pFVar1 = ::FName::ToString((FName *)&this->_padding_,&local_28);
  FStringFormatArg::FStringFormatArg(&local_68,pFVar1);
  if ((this->Value)._padding_ == 0) {
    pFVar1 = ::FString::FString(&local_18,&(this->Value).DefaultValue);
    FStringFormatArg::FStringFormatArg(&local_88,pFVar1);
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,1,0,&local_b8.AllocatorInstance,1,&local_b8.ArrayMax);
    ConstructItems<FStringFormatArg,FStringFormatArg,int>
              (local_b8.AllocatorInstance.Data,&local_88,1);
    ::FString::FormatImpl(&local_98,L"{0}",&local_b8);
    DestructItems<FStringFormatArg,int>
              ((FStringFormatArg *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
    if ((FStringFormatArg *)local_b8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
    if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
    }
  }
  else {
    FValueOrBlackboardKeyBase::ToStringKeyName((FValueOrBlackboardKeyBase *)&this->Value,&local_98);
  }
  FStringFormatArg::FStringFormatArg(&local_48,&local_98);
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,2,0,&local_a8.AllocatorInstance,2,&local_a8.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_a8.AllocatorInstance.Data,&local_68,2)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"Setting {0} to {1}",&local_a8);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FStringFormatArg *)local_a8.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  if (local_48.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.StringValue.Data.AllocatorInstance.Data);
  }
  if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUBTTask_SetKeyValueString @ 146f00ee0

void __cdecl UBTTask_SetKeyValueString::StaticRegisterNativesUBTTask_SetKeyValueString(void)

{
  return;
}

